using System.IO;
using System.Xml;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200009B")]
internal sealed class DataTextWriter : XmlWriter
{
	[Token(Token = "0x4000344")]
	[FieldOffset(Offset = "0x18")]
	private XmlWriter _xmltextWriter;

	[Token(Token = "0x1700014E")]
	internal Stream BaseStream
	{
		[Token(Token = "0x60008B3")]
		[Address(RVA = "0x42BA0F0", Offset = "0x42BA0F0", VA = "0x42BA0F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014F")]
	public override WriteState WriteState
	{
		[Token(Token = "0x60008CA")]
		[Address(RVA = "0x42C4140", Offset = "0x42C4140", VA = "0x42C4140", Slot = "27")]
		get
		{
			return default(WriteState);
		}
	}

	[Token(Token = "0x60008B1")]
	[Address(RVA = "0x42BD900", Offset = "0x42BD900", VA = "0x42BD900")]
	internal static XmlWriter CreateWriter(XmlWriter xw)
	{
		return null;
	}

	[Token(Token = "0x60008B2")]
	[Address(RVA = "0x42C3CF0", Offset = "0x42C3CF0", VA = "0x42C3CF0")]
	private DataTextWriter(XmlWriter w)
	{
	}

	[Token(Token = "0x60008B4")]
	[Address(RVA = "0x42C3D20", Offset = "0x42C3D20", VA = "0x42C3D20", Slot = "5")]
	public override void WriteStartDocument()
	{
	}

	[Token(Token = "0x60008B5")]
	[Address(RVA = "0x42C3D50", Offset = "0x42C3D50", VA = "0x42C3D50", Slot = "6")]
	public override void WriteStartDocument(bool standalone)
	{
	}

	[Token(Token = "0x60008B6")]
	[Address(RVA = "0x42C3D80", Offset = "0x42C3D80", VA = "0x42C3D80", Slot = "7")]
	public override void WriteEndDocument()
	{
	}

	[Token(Token = "0x60008B7")]
	[Address(RVA = "0x42C3DB0", Offset = "0x42C3DB0", VA = "0x42C3DB0", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x60008B8")]
	[Address(RVA = "0x42C3DE0", Offset = "0x42C3DE0", VA = "0x42C3DE0", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60008B9")]
	[Address(RVA = "0x42C3E10", Offset = "0x42C3E10", VA = "0x42C3E10", Slot = "10")]
	public override void WriteEndElement()
	{
	}

	[Token(Token = "0x60008BA")]
	[Address(RVA = "0x42C3E40", Offset = "0x42C3E40", VA = "0x42C3E40", Slot = "11")]
	public override void WriteFullEndElement()
	{
	}

	[Token(Token = "0x60008BB")]
	[Address(RVA = "0x42C3E70", Offset = "0x42C3E70", VA = "0x42C3E70", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60008BC")]
	[Address(RVA = "0x42C3EA0", Offset = "0x42C3EA0", VA = "0x42C3EA0", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x60008BD")]
	[Address(RVA = "0x42C3ED0", Offset = "0x42C3ED0", VA = "0x42C3ED0", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x60008BE")]
	[Address(RVA = "0x42C3F00", Offset = "0x42C3F00", VA = "0x42C3F00", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x42C3F30", Offset = "0x42C3F30", VA = "0x42C3F30", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x42C3F60", Offset = "0x42C3F60", VA = "0x42C3F60", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x60008C1")]
	[Address(RVA = "0x42C3F90", Offset = "0x42C3F90", VA = "0x42C3F90", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x60008C2")]
	[Address(RVA = "0x42C3FC0", Offset = "0x42C3FC0", VA = "0x42C3FC0", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x42C3FF0", Offset = "0x42C3FF0", VA = "0x42C3FF0", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x60008C4")]
	[Address(RVA = "0x42C4020", Offset = "0x42C4020", VA = "0x42C4020", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60008C5")]
	[Address(RVA = "0x42C4050", Offset = "0x42C4050", VA = "0x42C4050", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60008C6")]
	[Address(RVA = "0x42C4080", Offset = "0x42C4080", VA = "0x42C4080", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60008C7")]
	[Address(RVA = "0x42C40B0", Offset = "0x42C40B0", VA = "0x42C40B0", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x60008C8")]
	[Address(RVA = "0x42C40E0", Offset = "0x42C40E0", VA = "0x42C40E0", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60008C9")]
	[Address(RVA = "0x42C4110", Offset = "0x42C4110", VA = "0x42C4110", Slot = "26")]
	public override void WriteBinHex(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60008CB")]
	[Address(RVA = "0x42C4170", Offset = "0x42C4170", VA = "0x42C4170", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x60008CC")]
	[Address(RVA = "0x42C41A0", Offset = "0x42C41A0", VA = "0x42C41A0", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x42C41D0", Offset = "0x42C41D0", VA = "0x42C41D0", Slot = "30")]
	public override string LookupPrefix(string ns)
	{
		return null;
	}
}
