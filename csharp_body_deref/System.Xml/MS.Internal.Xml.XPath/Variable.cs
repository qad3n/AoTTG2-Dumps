using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002C3")]
internal class Variable : AstNode
{
	[Token(Token = "0x4000EA2")]
	[FieldOffset(Offset = "0x10")]
	private string _localname;

	[Token(Token = "0x4000EA3")]
	[FieldOffset(Offset = "0x18")]
	private string _prefix;

	[Token(Token = "0x1700072A")]
	public override AstType Type
	{
		[Token(Token = "0x6001BEE")]
		[Address(RVA = "0x444BFE0", Offset = "0x444BFE0", VA = "0x444BFE0", Slot = "4")]
		get
		{
			return default(AstType);
		}
	}

	[Token(Token = "0x1700072B")]
	public override XPathResultType ReturnType
	{
		[Token(Token = "0x6001BEF")]
		[Address(RVA = "0x444BFF0", Offset = "0x444BFF0", VA = "0x444BFF0", Slot = "5")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x1700072C")]
	public string Localname
	{
		[Token(Token = "0x6001BF0")]
		[Address(RVA = "0x444C000", Offset = "0x444C000", VA = "0x444C000")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700072D")]
	public string Prefix
	{
		[Token(Token = "0x6001BF1")]
		[Address(RVA = "0x444C010", Offset = "0x444C010", VA = "0x444C010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001BED")]
	[Address(RVA = "0x444BFA0", Offset = "0x444BFA0", VA = "0x444BFA0")]
	public Variable(string name, string prefix)
	{
	}
}
