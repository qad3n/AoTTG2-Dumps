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
		[Address(RVA = "0x477AA00", Offset = "0x477AA00", VA = "0x477AA00", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006F3")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001AE1")]
		[Address(RVA = "0x477AB10", Offset = "0x477AB10", VA = "0x477AB10", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006F4")]
	protected string QName
	{
		[Token(Token = "0x6001AE3")]
		[Address(RVA = "0x477AF70", Offset = "0x477AF70", VA = "0x477AF70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006F5")]
	public override int Count
	{
		[Token(Token = "0x6001AE4")]
		[Address(RVA = "0x477AFC0", Offset = "0x477AFC0", VA = "0x477AFC0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006F6")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001AE5")]
		[Address(RVA = "0x477AFF0", Offset = "0x477AFF0", VA = "0x477AFF0", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001ADC")]
	[Address(RVA = "0x477A8B0", Offset = "0x477A8B0", VA = "0x477A8B0")]
	public ExtensionQuery(string prefix, string name)
	{
	}

	[Token(Token = "0x6001ADD")]
	[Address(RVA = "0x477A8F0", Offset = "0x477A8F0", VA = "0x477A8F0")]
	protected ExtensionQuery(ExtensionQuery other)
	{
	}

	[Token(Token = "0x6001ADE")]
	[Address(RVA = "0x477A9E0", Offset = "0x477A9E0", VA = "0x477A9E0", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001AE0")]
	[Address(RVA = "0x477AA90", Offset = "0x477AA90", VA = "0x477AA90", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001AE2")]
	[Address(RVA = "0x477AB30", Offset = "0x477AB30", VA = "0x477AB30")]
	protected object ProcessResult(object value)
	{
		return null;
	}
}
