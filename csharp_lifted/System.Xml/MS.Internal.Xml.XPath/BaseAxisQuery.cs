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
		[Address(RVA = "0x607D730", Offset = "0x607C730", VA = "0x607D730")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006D4")]
	protected string Namespace
	{
		[Token(Token = "0x6001A6C")]
		[Address(RVA = "0x607D740", Offset = "0x607C740", VA = "0x607D740")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006D5")]
	protected bool NameTest
	{
		[Token(Token = "0x6001A6D")]
		[Address(RVA = "0x607D750", Offset = "0x607C750", VA = "0x607D750")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006D6")]
	protected XPathNodeType TypeTest
	{
		[Token(Token = "0x6001A6E")]
		[Address(RVA = "0x607D760", Offset = "0x607C760", VA = "0x607D760")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x170006D7")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001A6F")]
		[Address(RVA = "0x607D770", Offset = "0x607C770", VA = "0x607D770", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006D8")]
	public override XPathNavigator Current
	{
		[Token(Token = "0x6001A70")]
		[Address(RVA = "0x607D780", Offset = "0x607C780", VA = "0x607D780", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006D9")]
	public override XPathResultType StaticType
	{
		[Token(Token = "0x6001A73")]
		[Address(RVA = "0x607D8E0", Offset = "0x607C8E0", VA = "0x607D8E0", Slot = "16")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001A66")]
	[Address(RVA = "0x607D630", Offset = "0x607C630", VA = "0x607D630")]
	protected BaseAxisQuery(Query qyInput)
	{
	}

	[Token(Token = "0x6001A67")]
	[Address(RVA = "0x607D0E0", Offset = "0x607C0E0", VA = "0x607D0E0")]
	protected BaseAxisQuery(Query qyInput, string name, string prefix, XPathNodeType typeTest)
	{
	}

	[Token(Token = "0x6001A68")]
	[Address(RVA = "0x607D1C0", Offset = "0x607C1C0", VA = "0x607D1C0")]
	protected BaseAxisQuery(BaseAxisQuery other)
	{
	}

	[Token(Token = "0x6001A69")]
	[Address(RVA = "0x607D2B0", Offset = "0x607C2B0", VA = "0x607D2B0", Slot = "12")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6001A6A")]
	[Address(RVA = "0x607D6C0", Offset = "0x607C6C0", VA = "0x607D6C0", Slot = "13")]
	public override void SetXsltContext(XsltContext context)
	{
	}

	[Token(Token = "0x6001A71")]
	[Address(RVA = "0x607D790", Offset = "0x607C790", VA = "0x607D790", Slot = "18")]
	public virtual bool matches(XPathNavigator e)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A72")]
	[Address(RVA = "0x607D890", Offset = "0x607C890", VA = "0x607D890", Slot = "14")]
	public override object Evaluate(XPathNodeIterator nodeIterator)
	{
		return null;
	}
}
