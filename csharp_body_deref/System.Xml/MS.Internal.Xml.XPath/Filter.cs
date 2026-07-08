using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x200029D")]
internal class Filter : AstNode
{
	[Token(Token = "0x4000E25")]
	[FieldOffset(Offset = "0x10")]
	private AstNode _input;

	[Token(Token = "0x4000E26")]
	[FieldOffset(Offset = "0x18")]
	private AstNode _condition;

	[Token(Token = "0x170006F7")]
	public override AstType Type
	{
		[Token(Token = "0x6001AE7")]
		[Address(RVA = "0x443D8E0", Offset = "0x443D8E0", VA = "0x443D8E0", Slot = "4")]
		get
		{
			return default(AstType);
		}
	}

	[Token(Token = "0x170006F8")]
	public override XPathResultType ReturnType
	{
		[Token(Token = "0x6001AE8")]
		[Address(RVA = "0x443D8F0", Offset = "0x443D8F0", VA = "0x443D8F0", Slot = "5")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x170006F9")]
	public AstNode Input
	{
		[Token(Token = "0x6001AE9")]
		[Address(RVA = "0x443D900", Offset = "0x443D900", VA = "0x443D900")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006FA")]
	public AstNode Condition
	{
		[Token(Token = "0x6001AEA")]
		[Address(RVA = "0x443D910", Offset = "0x443D910", VA = "0x443D910")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001AE6")]
	[Address(RVA = "0x443D8A0", Offset = "0x443D8A0", VA = "0x443D8A0")]
	public Filter(AstNode input, AstNode condition)
	{
	}
}
