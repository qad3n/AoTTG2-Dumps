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
		[Address(RVA = "0x443D2A0", Offset = "0x443D2A0", VA = "0x443D2A0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006F3")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001AE1")]
		[Address(RVA = "0x443D3B0", Offset = "0x443D3B0", VA = "0x443D3B0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006F4")]
	protected string QName
	{
		[Token(Token = "0x6001AE3")]
		[Address(RVA = "0x443D810", Offset = "0x443D810", VA = "0x443D810")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006F5")]
	public override int Count
	{
		[Token(Token = "0x6001AE4")]
		[Address(RVA = "0x443D860", Offset = "0x443D860", VA = "0x443D860", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006F6")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001AE5")]
		[Address(RVA = "0x443D890", Offset = "0x443D890", VA = "0x443D890", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001ADC")]
	[Address(RVA = "0x443D150", Offset = "0x443D150", VA = "0x443D150")]
	public ExtensionQuery(string prefix, string name)
	{
	}

	[Token(Token = "0x6001ADD")]
	[Address(RVA = "0x443D190", Offset = "0x443D190", VA = "0x443D190")]
	protected ExtensionQuery(ExtensionQuery other)
	{
	}

	[Token(Token = "0x6001ADE")]
	[Address(RVA = "0x443D280", Offset = "0x443D280", VA = "0x443D280", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001AE0")]
	[Address(RVA = "0x443D330", Offset = "0x443D330", VA = "0x443D330", Slot = "15")]
	public override XPathNavigator Advance()
	{
		return null;
	}

	[Token(Token = "0x6001AE2")]
	[Address(RVA = "0x443D3D0", Offset = "0x443D3D0", VA = "0x443D3D0")]
	protected object ProcessResult(object value)
	{
		return null;
	}
}
