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
		[Address(RVA = "0x4457CF0", Offset = "0x4457CF0", VA = "0x4457CF0", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x4457810", Offset = "0x4457810", VA = "0x4457810")]
	public TextEncodedRawTextWriter(TextWriter writer, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x4457910", Offset = "0x4457910", VA = "0x4457910")]
	public TextEncodedRawTextWriter(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x4457C50", Offset = "0x4457C50", VA = "0x4457C50", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x4457C60", Offset = "0x4457C60", VA = "0x4457C60", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x4457C70", Offset = "0x4457C70", VA = "0x4457C70", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x4457C80", Offset = "0x4457C80", VA = "0x4457C80", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x4457C90", Offset = "0x4457C90", VA = "0x4457C90", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x4457CA0", Offset = "0x4457CA0", VA = "0x4457CA0", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x4457CB0", Offset = "0x4457CB0", VA = "0x4457CB0", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x4457CC0", Offset = "0x4457CC0", VA = "0x4457CC0", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x4457CD0", Offset = "0x4457CD0", VA = "0x4457CD0", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x4457CE0", Offset = "0x4457CE0", VA = "0x4457CE0", Slot = "42")]
	internal override void WriteNamespaceDeclaration(string prefix, string ns)
	{
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x4457D00", Offset = "0x4457D00", VA = "0x4457D00", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x4457DD0", Offset = "0x4457DD0", VA = "0x4457DD0", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x4457DE0", Offset = "0x4457DE0", VA = "0x4457DE0", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x4457DF0", Offset = "0x4457DF0", VA = "0x4457DF0", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x4457E00", Offset = "0x4457E00", VA = "0x4457E00", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x4457E10", Offset = "0x4457E10", VA = "0x4457E10", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x4457E20", Offset = "0x4457E20", VA = "0x4457E20", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x4457E30", Offset = "0x4457E30", VA = "0x4457E30", Slot = "20")]
	public override void WriteString(string textBlock)
	{
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x4457E40", Offset = "0x4457E40", VA = "0x4457E40", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x4457F20", Offset = "0x4457F20", VA = "0x4457F20", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x4457F30", Offset = "0x4457F30", VA = "0x4457F30", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}
}
