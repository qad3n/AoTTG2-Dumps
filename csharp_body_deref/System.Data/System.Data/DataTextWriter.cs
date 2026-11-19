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

[Token(Token = "0x20000A5")]
internal sealed class DataTextWriter : XmlWriter
{
	[Token(Token = "0x4000357")]
	[FieldOffset(Offset = "0x18")]
	private XmlWriter _xmltextWriter;

	[Token(Token = "0x17000151")]
	internal Stream BaseStream
	{
		[Token(Token = "0x60008D2")]
		[Address(RVA = "0x5EFBCA0", Offset = "0x5EFACA0", VA = "0x5EFBCA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000152")]
	public override WriteState WriteState
	{
		[Token(Token = "0x60008E9")]
		[Address(RVA = "0x5F04D20", Offset = "0x5F03D20", VA = "0x5F04D20", Slot = "27")]
		get
		{
			return default(WriteState);
		}
	}

	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x5EFF340", Offset = "0x5EFE340", VA = "0x5EFF340")]
	internal static XmlWriter CreateWriter(XmlWriter xw)
	{
		return null;
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x5F048D0", Offset = "0x5F038D0", VA = "0x5F048D0")]
	private DataTextWriter(XmlWriter w)
	{
	}

	[Token(Token = "0x60008D3")]
	[Address(RVA = "0x5F04900", Offset = "0x5F03900", VA = "0x5F04900", Slot = "5")]
	public override void WriteStartDocument()
	{
	}

	[Token(Token = "0x60008D4")]
	[Address(RVA = "0x5F04930", Offset = "0x5F03930", VA = "0x5F04930", Slot = "6")]
	public override void WriteStartDocument(bool standalone)
	{
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x5F04960", Offset = "0x5F03960", VA = "0x5F04960", Slot = "7")]
	public override void WriteEndDocument()
	{
	}

	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x5F04990", Offset = "0x5F03990", VA = "0x5F04990", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x60008D7")]
	[Address(RVA = "0x5F049C0", Offset = "0x5F039C0", VA = "0x5F049C0", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60008D8")]
	[Address(RVA = "0x5F049F0", Offset = "0x5F039F0", VA = "0x5F049F0", Slot = "10")]
	public override void WriteEndElement()
	{
	}

	[Token(Token = "0x60008D9")]
	[Address(RVA = "0x5F04A20", Offset = "0x5F03A20", VA = "0x5F04A20", Slot = "11")]
	public override void WriteFullEndElement()
	{
	}

	[Token(Token = "0x60008DA")]
	[Address(RVA = "0x5F04A50", Offset = "0x5F03A50", VA = "0x5F04A50", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60008DB")]
	[Address(RVA = "0x5F04A80", Offset = "0x5F03A80", VA = "0x5F04A80", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x60008DC")]
	[Address(RVA = "0x5F04AB0", Offset = "0x5F03AB0", VA = "0x5F04AB0", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x60008DD")]
	[Address(RVA = "0x5F04AE0", Offset = "0x5F03AE0", VA = "0x5F04AE0", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x60008DE")]
	[Address(RVA = "0x5F04B10", Offset = "0x5F03B10", VA = "0x5F04B10", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x60008DF")]
	[Address(RVA = "0x5F04B40", Offset = "0x5F03B40", VA = "0x5F04B40", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x5F04B70", Offset = "0x5F03B70", VA = "0x5F04B70", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x60008E1")]
	[Address(RVA = "0x5F04BA0", Offset = "0x5F03BA0", VA = "0x5F04BA0", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60008E2")]
	[Address(RVA = "0x5F04BD0", Offset = "0x5F03BD0", VA = "0x5F04BD0", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x60008E3")]
	[Address(RVA = "0x5F04C00", Offset = "0x5F03C00", VA = "0x5F04C00", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60008E4")]
	[Address(RVA = "0x5F04C30", Offset = "0x5F03C30", VA = "0x5F04C30", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60008E5")]
	[Address(RVA = "0x5F04C60", Offset = "0x5F03C60", VA = "0x5F04C60", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60008E6")]
	[Address(RVA = "0x5F04C90", Offset = "0x5F03C90", VA = "0x5F04C90", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x60008E7")]
	[Address(RVA = "0x5F04CC0", Offset = "0x5F03CC0", VA = "0x5F04CC0", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60008E8")]
	[Address(RVA = "0x5F04CF0", Offset = "0x5F03CF0", VA = "0x5F04CF0", Slot = "26")]
	public override void WriteBinHex(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60008EA")]
	[Address(RVA = "0x5F04D50", Offset = "0x5F03D50", VA = "0x5F04D50", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x60008EB")]
	[Address(RVA = "0x5F04D80", Offset = "0x5F03D80", VA = "0x5F04D80", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x60008EC")]
	[Address(RVA = "0x5F04DB0", Offset = "0x5F03DB0", VA = "0x5F04DB0", Slot = "30")]
	public override string LookupPrefix(string ns)
	{
		return null;
	}
}
