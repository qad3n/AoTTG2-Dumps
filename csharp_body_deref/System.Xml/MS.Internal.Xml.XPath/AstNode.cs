using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x2000287")]
internal abstract class AstNode
{
	[Token(Token = "0x2000288")]
	public enum AstType
	{
		[Token(Token = "0x4000DE3")]
		Axis,
		[Token(Token = "0x4000DE4")]
		Operator,
		[Token(Token = "0x4000DE5")]
		Filter,
		[Token(Token = "0x4000DE6")]
		ConstantOperand,
		[Token(Token = "0x4000DE7")]
		Function,
		[Token(Token = "0x4000DE8")]
		Group,
		[Token(Token = "0x4000DE9")]
		Root,
		[Token(Token = "0x4000DEA")]
		Variable,
		[Token(Token = "0x4000DEB")]
		Error
	}

	[Token(Token = "0x170006C8")]
	public abstract AstType Type
	{
		[Token(Token = "0x6001A51")]
		get;
	}

	[Token(Token = "0x170006C9")]
	public abstract XPathResultType ReturnType
	{
		[Token(Token = "0x6001A52")]
		get;
	}

	[Token(Token = "0x6001A53")]
	[Address(RVA = "0x443A230", Offset = "0x443A230", VA = "0x443A230")]
	protected AstNode()
	{
	}
}
