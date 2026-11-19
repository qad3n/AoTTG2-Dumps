// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.FullConditionalExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000079")]
internal class FullConditionalExpression : ConditionalExpression
{
	[Token(Token = "0x4000122")]
	[FieldOffset(Offset = "0x20")]
	private readonly Expression _false;

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x5DC6890", Offset = "0x5DC5890", VA = "0x5DC6890")]
	internal FullConditionalExpression(Expression test, Expression ifTrue, Expression ifFalse)
	{
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x5DC6AF0", Offset = "0x5DC5AF0", VA = "0x5DC6AF0", Slot = "10")]
	internal override Expression GetFalse()
	{
		return null;
	}
}
