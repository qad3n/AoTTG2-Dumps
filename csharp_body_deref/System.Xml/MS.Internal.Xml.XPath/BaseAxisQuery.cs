// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.BaseAxisQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using System.Xml.Xsl;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x200028C")]
internal abstract class BaseAxisQuery : Query
{
	[Token(Token = "0x4000E03")]
	[FieldOffset(Offset = "0x18")]
	internal Query qyInput;

	[Token(Token = "0x4000E04")]
	[FieldOffset(Offset = "0x20")]
	private bool _nameTest;

	[Token(Token = "0x4000E05")]
	[FieldOffset(Offset = "0x28")]
	private string _name;

	[Token(Token = "0x4000E06")]
	[FieldOffset(Offset = "0x30")]
	private string _prefix;

	[Token(Token = "0x4000E07")]
	[FieldOffset(Offset = "0x38")]
	private string _nsUri;

	[Token(Token = "0x4000E08")]
	[FieldOffset(Offset = "0x40")]
	private XPathNodeType _typeTest;

	[Token(Token = "0x4000E09")]
	[FieldOffset(Offset = "0x48")]
	protected XPathNavigator currentNode;

	[Token(Token = "0x4000E0A")]
	[FieldOffset(Offset = "0x50")]
	protected int position;

	[Token(Token = "0x170006D3")]
	protected string Name
	{
		[Token(Token = "0x6001A6B")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006D4")]
	protected string Namespace
	{
		[Token(Token = "0x6001A6C")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006D5")]
	protected bool NameTest
	{
		[Token(Token = "0x6001A6D")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006D6")]
	protected XPathNodeType TypeTest
	{
		[Token(Token = "0x6001A6E")]
		[Address(RVA = "0x58A8B0", Offset = "0x588EB0", VA = "0x18058A8B0")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x170006D7")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001A6F")]
		[Address(RVA = "0x58A540", Offset = "0x588B40", VA = "0x18058A540", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006D8")]
	public override XPathNavigator Current
	{
		[Token(Token = "0x6001A70")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006D9")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001A73")]
		[Address(RVA = "0x565FB0", Offset = "0x5645B0", VA = "0x180565FB0", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001A66")]
	[Address(RVA = "0x26B4970", Offset = "0x26B2F70", VA = "0x1826B4970")]
	protected BaseAxisQuery(Query qyInput)
	{
	}

	[Token(Token = "0x6001A67")]
	[Address(RVA = "0x26B45E0", Offset = "0x26B2BE0", VA = "0x1826B45E0")]
	protected BaseAxisQuery(Query qyInput, string name, string prefix, XPathNodeType typeTest)
	{
	}

	[Token(Token = "0x6001A68")]
	[Address(RVA = "0x26B48D0", Offset = "0x26B2ED0", VA = "0x1826B48D0")]
	protected BaseAxisQuery(BaseAxisQuery other)
	{
	}

	[Token(Token = "0x6001A69")]
	[Address(RVA = "0x26B4810", Offset = "0x26B2E10", VA = "0x1826B4810", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001A6A")]
	[Address(RVA = "0x26B4860", Offset = "0x26B2E60", VA = "0x1826B4860", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001A71")]
	[Address(RVA = "0x26B4A00", Offset = "0x26B3000", VA = "0x1826B4A00", Slot = "18")]
	public virtual bool matches(XPathNavigator e)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A72")]
	[Address(RVA = "0x26B47B0", Offset = "0x26B2DB0", VA = "0x1826B47B0", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}
}
