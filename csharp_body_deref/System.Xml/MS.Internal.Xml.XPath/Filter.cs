// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.XPath.Filter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "4")]
		get
		{
			return default(AstType);
		}
	}

	[Token(Token = "0x170006F8")]
	public override XPathResultType ReturnType
	{
		[Token(Token = "0x6001AE8")]
		[Address(RVA = "0x565FB0", Offset = "0x5645B0", VA = "0x180565FB0", Slot = "5")]
		get
		{
			return default(XPathResultType);
		}
	}

	[Token(Token = "0x170006F9")]
	public AstNode Input
	{
		[Token(Token = "0x6001AE9")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006FA")]
	public AstNode Condition
	{
		[Token(Token = "0x6001AEA")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001AE6")]
	[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
	public Filter(AstNode input, AstNode condition)
	{
	}
}
