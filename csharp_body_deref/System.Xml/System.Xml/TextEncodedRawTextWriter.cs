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
		[Address(RVA = "0x609A9C0", Offset = "0x60999C0", VA = "0x609A9C0", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x609A4E0", Offset = "0x60994E0", VA = "0x609A4E0")]
	public TextEncodedRawTextWriter(TextWriter writer, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x609A5E0", Offset = "0x60995E0", VA = "0x609A5E0")]
	public TextEncodedRawTextWriter(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x609A920", Offset = "0x6099920", VA = "0x609A920", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x609A930", Offset = "0x6099930", VA = "0x609A930", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x609A940", Offset = "0x6099940", VA = "0x609A940", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x609A950", Offset = "0x6099950", VA = "0x609A950", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x609A960", Offset = "0x6099960", VA = "0x609A960", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x609A970", Offset = "0x6099970", VA = "0x609A970", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x609A980", Offset = "0x6099980", VA = "0x609A980", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x609A990", Offset = "0x6099990", VA = "0x609A990", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x609A9A0", Offset = "0x60999A0", VA = "0x609A9A0", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x609A9B0", Offset = "0x60999B0", VA = "0x609A9B0", Slot = "42")]
	internal override void WriteNamespaceDeclaration(string prefix, string ns)
	{
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x609A9D0", Offset = "0x60999D0", VA = "0x609A9D0", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x609AAA0", Offset = "0x6099AA0", VA = "0x609AAA0", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x609AAB0", Offset = "0x6099AB0", VA = "0x609AAB0", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x609AAC0", Offset = "0x6099AC0", VA = "0x609AAC0", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x609AAD0", Offset = "0x6099AD0", VA = "0x609AAD0", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x609AAE0", Offset = "0x6099AE0", VA = "0x609AAE0", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x609AAF0", Offset = "0x6099AF0", VA = "0x609AAF0", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x609AB00", Offset = "0x6099B00", VA = "0x609AB00", Slot = "20")]
	public override void WriteString(string textBlock)
	{
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x609AB10", Offset = "0x6099B10", VA = "0x609AB10", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x609AC00", Offset = "0x6099C00", VA = "0x609AC00", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x609AC10", Offset = "0x6099C10", VA = "0x609AC10", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}
}
