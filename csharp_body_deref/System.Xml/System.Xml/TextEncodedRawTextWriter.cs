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
		[Address(RVA = "0x4795450", Offset = "0x4795450", VA = "0x4795450", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x4794F70", Offset = "0x4794F70", VA = "0x4794F70")]
	public TextEncodedRawTextWriter(TextWriter writer, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x4795070", Offset = "0x4795070", VA = "0x4795070")]
	public TextEncodedRawTextWriter(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x47953B0", Offset = "0x47953B0", VA = "0x47953B0", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x47953C0", Offset = "0x47953C0", VA = "0x47953C0", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x47953D0", Offset = "0x47953D0", VA = "0x47953D0", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x47953E0", Offset = "0x47953E0", VA = "0x47953E0", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x47953F0", Offset = "0x47953F0", VA = "0x47953F0", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x4795400", Offset = "0x4795400", VA = "0x4795400", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x4795410", Offset = "0x4795410", VA = "0x4795410", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x4795420", Offset = "0x4795420", VA = "0x4795420", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x4795430", Offset = "0x4795430", VA = "0x4795430", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x4795440", Offset = "0x4795440", VA = "0x4795440", Slot = "42")]
	internal override void WriteNamespaceDeclaration(string prefix, string ns)
	{
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x4795460", Offset = "0x4795460", VA = "0x4795460", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x4795530", Offset = "0x4795530", VA = "0x4795530", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x4795540", Offset = "0x4795540", VA = "0x4795540", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x4795550", Offset = "0x4795550", VA = "0x4795550", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x4795560", Offset = "0x4795560", VA = "0x4795560", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x4795570", Offset = "0x4795570", VA = "0x4795570", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x4795580", Offset = "0x4795580", VA = "0x4795580", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x4795590", Offset = "0x4795590", VA = "0x4795590", Slot = "20")]
	public override void WriteString(string textBlock)
	{
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x47955A0", Offset = "0x47955A0", VA = "0x47955A0", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x4795680", Offset = "0x4795680", VA = "0x4795680", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x4795690", Offset = "0x4795690", VA = "0x4795690", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}
}
