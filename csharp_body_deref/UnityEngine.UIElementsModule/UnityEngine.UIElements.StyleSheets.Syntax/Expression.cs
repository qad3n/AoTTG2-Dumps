// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.Syntax.Expression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.StyleSheets.Syntax;

[Token(Token = "0x200054A")]
internal class Expression
{
	[Token(Token = "0x4001236")]
	[FieldOffset(Offset = "0x10")]
	public ExpressionType type;

	[Token(Token = "0x4001237")]
	[FieldOffset(Offset = "0x14")]
	public ExpressionMultiplier multiplier;

	[Token(Token = "0x4001238")]
	[FieldOffset(Offset = "0x20")]
	public DataType dataType;

	[Token(Token = "0x4001239")]
	[FieldOffset(Offset = "0x24")]
	public ExpressionCombinator combinator;

	[Token(Token = "0x400123A")]
	[FieldOffset(Offset = "0x28")]
	public Expression[] subExpressions;

	[Token(Token = "0x400123B")]
	[FieldOffset(Offset = "0x30")]
	public string keyword;

	[Token(Token = "0x600206E")]
	[Address(RVA = "0x4FD0770", Offset = "0x4FD0770", VA = "0x4FD0770")]
	public Expression(ExpressionType type)
	{
	}
}
