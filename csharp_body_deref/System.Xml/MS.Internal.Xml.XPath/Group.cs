using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002A5")]
internal class Group : AstNode
{
	[Token(Token = "0x4000E52")]
	[FieldOffset(Offset = "0x10")]
	private AstNode _groupNode;

	[Token(Token = "0x17000704")]
	public override AstType Type
	{
		[Token(Token = "0x6001B15")]
		[Address(RVA = "0x4440000", Offset = "0x4440000", VA = "0x4440000", Slot = "4")]
		get
		{
			return default(AstType);
		}
	}

	[Token(Token = "0x17000705")]
	public override XPathResultType ReturnType
	{
		[Token(Token = "0x6001B16")]
		[Address(RVA = "0x4440010", Offset = "0x4440010", VA = "0x4440010", Slot = "5")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x17000706")]
	public AstNode GroupNode
	{
		[Token(Token = "0x6001B17")]
		[Address(RVA = "0x4440020", Offset = "0x4440020", VA = "0x4440020")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001B14")]
	[Address(RVA = "0x443FFD0", Offset = "0x443FFD0", VA = "0x443FFD0")]
	public Group(AstNode groupNode)
	{
	}
}
