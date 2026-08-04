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
		[Address(RVA = "0x47A29B0", Offset = "0x47A29B0", VA = "0x47A29B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000BB")]
	internal string AttributeValue
	{
		[Token(Token = "0x60003A5")]
		[Address(RVA = "0x47A2A90", Offset = "0x47A2A90", VA = "0x47A2A90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x47A2960", Offset = "0x47A2960", VA = "0x47A2960")]
	internal XmlTextEncoder(TextWriter textWriter)
	{
	}

	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x47A29C0", Offset = "0x47A29C0", VA = "0x47A29C0")]
	internal void StartAttribute(bool cacheAttrValue)
	{
	}

	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x47A2A60", Offset = "0x47A2A60", VA = "0x47A2A60")]
	internal void EndAttribute()
	{
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x47A2AE0", Offset = "0x47A2AE0", VA = "0x47A2AE0")]
	internal void WriteSurrogateChar(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x47A2B90", Offset = "0x47A2B90", VA = "0x47A2B90")]
	internal void Write(char[] array, int offset, int count)
	{
	}

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x47A31E0", Offset = "0x47A31E0", VA = "0x47A31E0")]
	internal void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x47A3360", Offset = "0x47A3360", VA = "0x47A3360")]
	internal void Write(string text)
	{
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x47A3A60", Offset = "0x47A3A60", VA = "0x47A3A60")]
	internal void WriteRawWithSurrogateChecking(string text)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x47A3C50", Offset = "0x47A3C50", VA = "0x47A3C50")]
	internal void WriteRaw(char[] array, int offset, int count)
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x47A3D70", Offset = "0x47A3D70", VA = "0x47A3D70")]
	internal void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x47A3F40", Offset = "0x47A3F40", VA = "0x47A3F40")]
	internal void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x47A39D0", Offset = "0x47A39D0", VA = "0x47A39D0")]
	private void WriteStringFragment(string str, int offset, int count, char[] helperBuffer)
	{
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x47A3100", Offset = "0x47A3100", VA = "0x47A3100")]
	private void WriteCharEntityImpl(char ch)
	{
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x47A3EA0", Offset = "0x47A3EA0", VA = "0x47A3EA0")]
	private void WriteCharEntityImpl(string strVal)
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x47A3160", Offset = "0x47A3160", VA = "0x47A3160")]
	private void WriteEntityRefImpl(string name)
	{
	}
}
