// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlTextEncoder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x60A7C50", Offset = "0x60A6C50", VA = "0x60A7C50")]
		set
		{
		}
	}

	[Token(Token = "0x170000BB")]
	internal string AttributeValue
	{
		[Token(Token = "0x60003A5")]
		[Address(RVA = "0x60A7D30", Offset = "0x60A6D30", VA = "0x60A7D30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x60A7C00", Offset = "0x60A6C00", VA = "0x60A7C00")]
	internal XmlTextEncoder(TextWriter textWriter)
	{
	}

	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x60A7C60", Offset = "0x60A6C60", VA = "0x60A7C60")]
	internal void StartAttribute(bool cacheAttrValue)
	{
	}

	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x60A7D00", Offset = "0x60A6D00", VA = "0x60A7D00")]
	internal void EndAttribute()
	{
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x60A7D80", Offset = "0x60A6D80", VA = "0x60A7D80")]
	internal void WriteSurrogateChar(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x60A7E30", Offset = "0x60A6E30", VA = "0x60A7E30")]
	internal void Write(char[] array, int offset, int count)
	{
	}

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x60A8430", Offset = "0x60A7430", VA = "0x60A8430")]
	internal void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x60A85B0", Offset = "0x60A75B0", VA = "0x60A85B0")]
	internal void Write(string text)
	{
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x60A8C40", Offset = "0x60A7C40", VA = "0x60A8C40")]
	internal void WriteRawWithSurrogateChecking(string text)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x60A8E30", Offset = "0x60A7E30", VA = "0x60A8E30")]
	internal void WriteRaw(char[] array, int offset, int count)
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x60A8F50", Offset = "0x60A7F50", VA = "0x60A8F50")]
	internal void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x60A9120", Offset = "0x60A8120", VA = "0x60A9120")]
	internal void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x60A8BB0", Offset = "0x60A7BB0", VA = "0x60A8BB0")]
	private void WriteStringFragment(string str, int offset, int count, char[] helperBuffer)
	{
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x60A8350", Offset = "0x60A7350", VA = "0x60A8350")]
	private void WriteCharEntityImpl(char ch)
	{
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x60A9080", Offset = "0x60A8080", VA = "0x60A9080")]
	private void WriteCharEntityImpl(string strVal)
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x60A83B0", Offset = "0x60A73B0", VA = "0x60A83B0")]
	private void WriteEntityRefImpl(string name)
	{
	}
}
