// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.ExtensionQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using System.Xml.Xsl;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x200029C")]
internal abstract class ExtensionQuery : Query
{
	[Token(Token = "0x4000E21")]
	[FieldOffset(Offset = "0x18")]
	protected string prefix;

	[Token(Token = "0x4000E22")]
	[FieldOffset(Offset = "0x20")]
	protected string name;

	[Token(Token = "0x4000E23")]
	[FieldOffset(Offset = "0x28")]
	protected XsltContext xsltContext;

	[Token(Token = "0x4000E24")]
	[FieldOffset(Offset = "0x30")]
	private ResetableIterator _queryIterator;

	[Token(Token = "0x170006F2")]
	public override XPathNavigator Current
	{
		[Token(Token = "0x6001ADF")]
		[Address(RVA = "0x26B81D0", Offset = "0x26B67D0", VA = "0x1826B81D0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006F3")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001AE1")]
		[Address(RVA = "0x26B81B0", Offset = "0x26B67B0", VA = "0x1826B81B0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006F4")]
	protected string QName
	{
		[Token(Token = "0x6001AE3")]
		[Address(RVA = "0x26B8270", Offset = "0x26B6870", VA = "0x1826B8270")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006F5")]
	public override int Count
	{
		[Token(Token = "0x6001AE4")]
		[Address(RVA = "0x26B8180", Offset = "0x26B6780", VA = "0x1826B8180", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006F6")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001AE5")]
		[Address(RVA = "0x8680A0", Offset = "0x8666A0", VA = "0x1808680A0", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001ADC")]
	[Address(RVA = "0x26B8010", Offset = "0x26B6610", VA = "0x1826B8010")]
	public ExtensionQuery(string prefix, string name)
	{
	}

	[Token(Token = "0x6001ADD")]
	[Address(RVA = "0x26B8060", Offset = "0x26B6660", VA = "0x1826B8060")]
	protected ExtensionQuery(ExtensionQuery other)
	{
	}

	[Token(Token = "0x6001ADE")]
	[Address(RVA = "0x26B7FF0", Offset = "0x26B65F0", VA = "0x1826B7FF0", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001AE0")]
	[Address(RVA = "0x26B7970", Offset = "0x26B5F70", VA = "0x1826B7970", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001AE2")]
	[Address(RVA = "0x26B7A00", Offset = "0x26B6000", VA = "0x1826B7A00")]
	protected object ProcessResult(object value)
	{
		return null;
	}
}
