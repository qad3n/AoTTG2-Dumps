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
		[Address(RVA = "0x4457FF0", Offset = "0x4457FF0", VA = "0x4457FF0", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x4457F40", Offset = "0x4457F40", VA = "0x4457F40")]
	public TextUtf8RawTextWriter(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x4457F50", Offset = "0x4457F50", VA = "0x4457F50", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x4457F60", Offset = "0x4457F60", VA = "0x4457F60", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x4457F70", Offset = "0x4457F70", VA = "0x4457F70", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x4457F80", Offset = "0x4457F80", VA = "0x4457F80", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x4457F90", Offset = "0x4457F90", VA = "0x4457F90", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x4457FA0", Offset = "0x4457FA0", VA = "0x4457FA0", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x4457FB0", Offset = "0x4457FB0", VA = "0x4457FB0", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x4457FC0", Offset = "0x4457FC0", VA = "0x4457FC0", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x4457FD0", Offset = "0x4457FD0", VA = "0x4457FD0", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x4457FE0", Offset = "0x4457FE0", VA = "0x4457FE0", Slot = "42")]
	internal override void WriteNamespaceDeclaration(string prefix, string ns)
	{
	}

	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x4458000", Offset = "0x4458000", VA = "0x4458000", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x4458010", Offset = "0x4458010", VA = "0x4458010", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x4458020", Offset = "0x4458020", VA = "0x4458020", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x4458030", Offset = "0x4458030", VA = "0x4458030", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x4458040", Offset = "0x4458040", VA = "0x4458040", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x4458050", Offset = "0x4458050", VA = "0x4458050", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x4458060", Offset = "0x4458060", VA = "0x4458060", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x4458070", Offset = "0x4458070", VA = "0x4458070", Slot = "20")]
	public override void WriteString(string textBlock)
	{
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x4458080", Offset = "0x4458080", VA = "0x4458080", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x4458090", Offset = "0x4458090", VA = "0x4458090", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x44580A0", Offset = "0x44580A0", VA = "0x44580A0", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}
}
