// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.TextUtf8RawTextWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200003F")]
internal class TextUtf8RawTextWriter : XmlUtf8RawTextWriter
{
	[Token(Token = "0x17000048")]
	internal override bool SupportsNamespaceDeclarationInChunks
	{
		[Token(Token = "0x60001CD")]
		[Address(RVA = "0x609ACD0", Offset = "0x6099CD0", VA = "0x609ACD0", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x609AC20", Offset = "0x6099C20", VA = "0x609AC20")]
	public TextUtf8RawTextWriter(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x609AC30", Offset = "0x6099C30", VA = "0x609AC30", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x609AC40", Offset = "0x6099C40", VA = "0x609AC40", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x609AC50", Offset = "0x6099C50", VA = "0x609AC50", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x609AC60", Offset = "0x6099C60", VA = "0x609AC60", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x609AC70", Offset = "0x6099C70", VA = "0x609AC70", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x609AC80", Offset = "0x6099C80", VA = "0x609AC80", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x609AC90", Offset = "0x6099C90", VA = "0x609AC90", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x609ACA0", Offset = "0x6099CA0", VA = "0x609ACA0", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x609ACB0", Offset = "0x6099CB0", VA = "0x609ACB0", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x609ACC0", Offset = "0x6099CC0", VA = "0x609ACC0", Slot = "42")]
	internal override void WriteNamespaceDeclaration(string prefix, string ns)
	{
	}

	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x609ACE0", Offset = "0x6099CE0", VA = "0x609ACE0", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x609ACF0", Offset = "0x6099CF0", VA = "0x609ACF0", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x609AD00", Offset = "0x6099D00", VA = "0x609AD00", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x609AD10", Offset = "0x6099D10", VA = "0x609AD10", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x609AD20", Offset = "0x6099D20", VA = "0x609AD20", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x609AD30", Offset = "0x6099D30", VA = "0x609AD30", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x609AD40", Offset = "0x6099D40", VA = "0x609AD40", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x609AD50", Offset = "0x6099D50", VA = "0x609AD50", Slot = "20")]
	public override void WriteString(string textBlock)
	{
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x609AD60", Offset = "0x6099D60", VA = "0x609AD60", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x609AD70", Offset = "0x6099D70", VA = "0x609AD70", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x609AD80", Offset = "0x6099D80", VA = "0x609AD80", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}
}
