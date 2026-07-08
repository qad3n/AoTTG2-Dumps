using System.IO;
using System.Text;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000054")]
internal class XmlTextEncoder
{
	[Token(Token = "0x40001CF")]
	[FieldOffset(Offset = "0x10")]
	private TextWriter textWriter;

	[Token(Token = "0x40001D0")]
	[FieldOffset(Offset = "0x18")]
	private bool inAttribute;

	[Token(Token = "0x40001D1")]
	[FieldOffset(Offset = "0x1A")]
	private char quoteChar;

	[Token(Token = "0x40001D2")]
	[FieldOffset(Offset = "0x20")]
	private StringBuilder attrValue;

	[Token(Token = "0x40001D3")]
	[FieldOffset(Offset = "0x28")]
	private bool cacheAttrValue;

	[Token(Token = "0x40001D4")]
	[FieldOffset(Offset = "0x30")]
	private XmlCharType xmlCharType;

	[Token(Token = "0x170000BA")]
	internal char QuoteChar
	{
		[Token(Token = "0x60003A2")]
		[Address(RVA = "0x4465250", Offset = "0x4465250", VA = "0x4465250")]
		set
		{
		}
	}

	[Token(Token = "0x170000BB")]
	internal string AttributeValue
	{
		[Token(Token = "0x60003A5")]
		[Address(RVA = "0x4465330", Offset = "0x4465330", VA = "0x4465330")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x4465200", Offset = "0x4465200", VA = "0x4465200")]
	internal XmlTextEncoder(TextWriter textWriter)
	{
	}

	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x4465260", Offset = "0x4465260", VA = "0x4465260")]
	internal void StartAttribute(bool cacheAttrValue)
	{
	}

	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x4465300", Offset = "0x4465300", VA = "0x4465300")]
	internal void EndAttribute()
	{
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x4465380", Offset = "0x4465380", VA = "0x4465380")]
	internal void WriteSurrogateChar(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x4465430", Offset = "0x4465430", VA = "0x4465430")]
	internal void Write(char[] array, int offset, int count)
	{
	}

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x4465A80", Offset = "0x4465A80", VA = "0x4465A80")]
	internal void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x4465C00", Offset = "0x4465C00", VA = "0x4465C00")]
	internal void Write(string text)
	{
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x4466300", Offset = "0x4466300", VA = "0x4466300")]
	internal void WriteRawWithSurrogateChecking(string text)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x44664F0", Offset = "0x44664F0", VA = "0x44664F0")]
	internal void WriteRaw(char[] array, int offset, int count)
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x4466610", Offset = "0x4466610", VA = "0x4466610")]
	internal void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x44667E0", Offset = "0x44667E0", VA = "0x44667E0")]
	internal void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x4466270", Offset = "0x4466270", VA = "0x4466270")]
	private void WriteStringFragment(string str, int offset, int count, char[] helperBuffer)
	{
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x44659A0", Offset = "0x44659A0", VA = "0x44659A0")]
	private void WriteCharEntityImpl(char ch)
	{
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x4466740", Offset = "0x4466740", VA = "0x4466740")]
	private void WriteCharEntityImpl(string strVal)
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x4465A00", Offset = "0x4465A00", VA = "0x4465A00")]
	private void WriteEntityRefImpl(string name)
	{
	}
}
