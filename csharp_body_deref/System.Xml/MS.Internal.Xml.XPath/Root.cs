using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x20002BF")]
internal class Root : AstNode
{
	[Token(Token = "0x17000721")]
	public override AstType Type
	{
		[Token(Token = "0x6001BC4")]
		[Address(RVA = "0x44495D0", Offset = "0x44495D0", VA = "0x44495D0", Slot = "4")]
		get
		{
			return default(AstType);
		}
	}

	[Token(Token = "0x17000722")]
	public override XPathResultType ReturnType
	{
		[Token(Token = "0x6001BC5")]
		[Address(RVA = "0x44495E0", Offset = "0x44495E0", VA = "0x44495E0", Slot = "5")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x6001BC3")]
	[Address(RVA = "0x44495C0", Offset = "0x44495C0", VA = "0x44495C0")]
	public Root()
	{
	}
}
