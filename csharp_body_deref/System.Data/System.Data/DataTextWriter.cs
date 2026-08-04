// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataTextWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x45F7850", Offset = "0x45F7850", VA = "0x45F7850")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014F")]
	public override WriteState WriteState
	{
		[Token(Token = "0x60008CA")]
		[Address(RVA = "0x46018A0", Offset = "0x46018A0", VA = "0x46018A0", Slot = "27")]
		get
		{
			return default(WriteState);
		}
	}

	[Token(Token = "0x60008B1")]
	[Address(RVA = "0x45FB060", Offset = "0x45FB060", VA = "0x45FB060")]
	internal static XmlWriter CreateWriter(XmlWriter xw)
	{
		return null;
	}

	[Token(Token = "0x60008B2")]
	[Address(RVA = "0x4601450", Offset = "0x4601450", VA = "0x4601450")]
	private DataTextWriter(XmlWriter w)
	{
	}

	[Token(Token = "0x60008B4")]
	[Address(RVA = "0x4601480", Offset = "0x4601480", VA = "0x4601480", Slot = "5")]
	public override void WriteStartDocument()
	{
	}

	[Token(Token = "0x60008B5")]
	[Address(RVA = "0x46014B0", Offset = "0x46014B0", VA = "0x46014B0", Slot = "6")]
	public override void WriteStartDocument(bool standalone)
	{
	}

	[Token(Token = "0x60008B6")]
	[Address(RVA = "0x46014E0", Offset = "0x46014E0", VA = "0x46014E0", Slot = "7")]
	public override void WriteEndDocument()
	{
	}

	[Token(Token = "0x60008B7")]
	[Address(RVA = "0x4601510", Offset = "0x4601510", VA = "0x4601510", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x60008B8")]
	[Address(RVA = "0x4601540", Offset = "0x4601540", VA = "0x4601540", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60008B9")]
	[Address(RVA = "0x4601570", Offset = "0x4601570", VA = "0x4601570", Slot = "10")]
	public override void WriteEndElement()
	{
	}

	[Token(Token = "0x60008BA")]
	[Address(RVA = "0x46015A0", Offset = "0x46015A0", VA = "0x46015A0", Slot = "11")]
	public override void WriteFullEndElement()
	{
	}

	[Token(Token = "0x60008BB")]
	[Address(RVA = "0x46015D0", Offset = "0x46015D0", VA = "0x46015D0", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60008BC")]
	[Address(RVA = "0x4601600", Offset = "0x4601600", VA = "0x4601600", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x60008BD")]
	[Address(RVA = "0x4601630", Offset = "0x4601630", VA = "0x4601630", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x60008BE")]
	[Address(RVA = "0x4601660", Offset = "0x4601660", VA = "0x4601660", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x4601690", Offset = "0x4601690", VA = "0x4601690", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x46016C0", Offset = "0x46016C0", VA = "0x46016C0", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x60008C1")]
	[Address(RVA = "0x46016F0", Offset = "0x46016F0", VA = "0x46016F0", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x60008C2")]
	[Address(RVA = "0x4601720", Offset = "0x4601720", VA = "0x4601720", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x4601750", Offset = "0x4601750", VA = "0x4601750", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x60008C4")]
	[Address(RVA = "0x4601780", Offset = "0x4601780", VA = "0x4601780", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60008C5")]
	[Address(RVA = "0x46017B0", Offset = "0x46017B0", VA = "0x46017B0", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60008C6")]
	[Address(RVA = "0x46017E0", Offset = "0x46017E0", VA = "0x46017E0", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60008C7")]
	[Address(RVA = "0x4601810", Offset = "0x4601810", VA = "0x4601810", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x60008C8")]
	[Address(RVA = "0x4601840", Offset = "0x4601840", VA = "0x4601840", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60008C9")]
	[Address(RVA = "0x4601870", Offset = "0x4601870", VA = "0x4601870", Slot = "26")]
	public override void WriteBinHex(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60008CB")]
	[Address(RVA = "0x46018D0", Offset = "0x46018D0", VA = "0x46018D0", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x60008CC")]
	[Address(RVA = "0x4601900", Offset = "0x4601900", VA = "0x4601900", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x4601930", Offset = "0x4601930", VA = "0x4601930", Slot = "30")]
	public override string LookupPrefix(string ns)
	{
		return null;
	}
}
