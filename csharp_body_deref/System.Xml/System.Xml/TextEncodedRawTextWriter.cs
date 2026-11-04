// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.TextEncodedRawTextWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200003E")]
internal class TextEncodedRawTextWriter : XmlEncodedRawTextWriter
{
	[Token(Token = "0x17000047")]
	internal override bool SupportsNamespaceDeclarationInChunks
	{
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x26E24C0", Offset = "0x26E0AC0", VA = "0x1826E24C0")]
	public TextEncodedRawTextWriter(TextWriter writer, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x26E24D0", Offset = "0x26E0AD0", VA = "0x1826E24D0")]
	public TextEncodedRawTextWriter(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x26E24B0", Offset = "0x26E0AB0", VA = "0x1826E24B0", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x26E2430", Offset = "0x26E0A30", VA = "0x1826E2430", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "42")]
	internal override void WriteNamespaceDeclaration(string prefix, string ns)
	{
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x26E2340", Offset = "0x26E0940", VA = "0x1826E2340", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x26E2440", Offset = "0x26E0A40", VA = "0x1826E2440", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x26E2440", Offset = "0x26E0A40", VA = "0x1826E2440", Slot = "20")]
	public override void WriteString(string textBlock)
	{
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x26E23B0", Offset = "0x26E09B0", VA = "0x1826E23B0", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x26E23B0", Offset = "0x26E09B0", VA = "0x1826E23B0", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x26E2440", Offset = "0x26E0A40", VA = "0x1826E2440", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}
}
