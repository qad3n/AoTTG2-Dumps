// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.AstNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4777990", Offset = "0x4777990", VA = "0x4777990")]
	protected AstNode()
	{
	}
}
