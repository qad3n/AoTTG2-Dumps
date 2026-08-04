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
		[Address(RVA = "0x4795750", Offset = "0x4795750", VA = "0x4795750", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x47956A0", Offset = "0x47956A0", VA = "0x47956A0")]
	public TextUtf8RawTextWriter(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x47956B0", Offset = "0x47956B0", VA = "0x47956B0", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x47956C0", Offset = "0x47956C0", VA = "0x47956C0", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x47956D0", Offset = "0x47956D0", VA = "0x47956D0", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x47956E0", Offset = "0x47956E0", VA = "0x47956E0", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x47956F0", Offset = "0x47956F0", VA = "0x47956F0", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x4795700", Offset = "0x4795700", VA = "0x4795700", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x4795710", Offset = "0x4795710", VA = "0x4795710", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x4795720", Offset = "0x4795720", VA = "0x4795720", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x4795730", Offset = "0x4795730", VA = "0x4795730", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x4795740", Offset = "0x4795740", VA = "0x4795740", Slot = "42")]
	internal override void WriteNamespaceDeclaration(string prefix, string ns)
	{
	}

	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x4795760", Offset = "0x4795760", VA = "0x4795760", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x4795770", Offset = "0x4795770", VA = "0x4795770", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x4795780", Offset = "0x4795780", VA = "0x4795780", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x4795790", Offset = "0x4795790", VA = "0x4795790", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x47957A0", Offset = "0x47957A0", VA = "0x47957A0", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x47957B0", Offset = "0x47957B0", VA = "0x47957B0", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x47957C0", Offset = "0x47957C0", VA = "0x47957C0", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x47957D0", Offset = "0x47957D0", VA = "0x47957D0", Slot = "20")]
	public override void WriteString(string textBlock)
	{
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x47957E0", Offset = "0x47957E0", VA = "0x47957E0", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x47957F0", Offset = "0x47957F0", VA = "0x47957F0", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x4795800", Offset = "0x4795800", VA = "0x4795800", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}
}
