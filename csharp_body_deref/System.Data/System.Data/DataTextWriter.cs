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
		[Address(RVA = "0x2547AF0", Offset = "0x25460F0", VA = "0x182547AF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000152")]
	public override WriteState WriteState
	{
		[Token(Token = "0x60008E9")]
		[Address(RVA = "0x1A58610", Offset = "0x1A56C10", VA = "0x181A58610", Slot = "27")]
		get
		{
			return default(WriteState);
		}
	}

	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x2547690", Offset = "0x2545C90", VA = "0x182547690")]
	internal static XmlWriter CreateWriter(XmlWriter xw)
	{
		return null;
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x2547AB0", Offset = "0x25460B0", VA = "0x182547AB0")]
	private DataTextWriter(XmlWriter w)
	{
	}

	[Token(Token = "0x60008D3")]
	[Address(RVA = "0x24067F0", Offset = "0x2404DF0", VA = "0x1824067F0", Slot = "5")]
	public override void WriteStartDocument()
	{
	}

	[Token(Token = "0x60008D4")]
	[Address(RVA = "0x25479C0", Offset = "0x2545FC0", VA = "0x1825479C0", Slot = "6")]
	public override void WriteStartDocument(bool standalone)
	{
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x1AFAA60", Offset = "0x1AF9060", VA = "0x181AFAA60", Slot = "7")]
	public override void WriteEndDocument()
	{
	}

	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x2547870", Offset = "0x2545E70", VA = "0x182547870", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x60008D7")]
	[Address(RVA = "0x25479F0", Offset = "0x2545FF0", VA = "0x1825479F0", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60008D8")]
	[Address(RVA = "0x1AFAD30", Offset = "0x1AF9330", VA = "0x181AFAD30", Slot = "10")]
	public override void WriteEndElement()
	{
	}

	[Token(Token = "0x60008D9")]
	[Address(RVA = "0x25478D0", Offset = "0x2545ED0", VA = "0x1825478D0", Slot = "11")]
	public override void WriteFullEndElement()
	{
	}

	[Token(Token = "0x60008DA")]
	[Address(RVA = "0x2547990", Offset = "0x2545F90", VA = "0x182547990", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60008DB")]
	[Address(RVA = "0x1AFACD0", Offset = "0x1AF92D0", VA = "0x181AFACD0", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x60008DC")]
	[Address(RVA = "0x25477B0", Offset = "0x2545DB0", VA = "0x1825477B0", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x60008DD")]
	[Address(RVA = "0x2547840", Offset = "0x2545E40", VA = "0x182547840", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x60008DE")]
	[Address(RVA = "0x2547900", Offset = "0x2545F00", VA = "0x182547900", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x60008DF")]
	[Address(RVA = "0x25478A0", Offset = "0x2545EA0", VA = "0x1825478A0", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x25477E0", Offset = "0x2545DE0", VA = "0x1825477E0", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x60008E1")]
	[Address(RVA = "0x2547A80", Offset = "0x2546080", VA = "0x182547A80", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60008E2")]
	[Address(RVA = "0x2547A20", Offset = "0x2546020", VA = "0x182547A20", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x60008E3")]
	[Address(RVA = "0x2547A50", Offset = "0x2546050", VA = "0x182547A50", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60008E4")]
	[Address(RVA = "0x2547810", Offset = "0x2545E10", VA = "0x182547810", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60008E5")]
	[Address(RVA = "0x2547930", Offset = "0x2545F30", VA = "0x182547930", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60008E6")]
	[Address(RVA = "0x2547960", Offset = "0x2545F60", VA = "0x182547960", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x60008E7")]
	[Address(RVA = "0x2547750", Offset = "0x2545D50", VA = "0x182547750", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60008E8")]
	[Address(RVA = "0x2547780", Offset = "0x2545D80", VA = "0x182547780", Slot = "26")]
	public override void WriteBinHex(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60008EA")]
	[Address(RVA = "0x1A58760", Offset = "0x1A56D60", VA = "0x181A58760", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x60008EB")]
	[Address(RVA = "0x25476F0", Offset = "0x2545CF0", VA = "0x1825476F0", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x60008EC")]
	[Address(RVA = "0x2547720", Offset = "0x2545D20", VA = "0x182547720", Slot = "30")]
	public override string LookupPrefix(string ns)
	{
		return null;
	}
}
