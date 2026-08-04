// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.FullConditionalExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000078")]
internal class FullConditionalExpression : ConditionalExpression
{
	[Token(Token = "0x4000119")]
	[FieldOffset(Offset = "0x20")]
	private readonly Expression _false;

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x44B0770", Offset = "0x44B0770", VA = "0x44B0770")]
	internal FullConditionalExpression(Expression test, Expression ifTrue, Expression ifFalse)
	{
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x44B09D0", Offset = "0x44B09D0", VA = "0x44B09D0", Slot = "10")]
	internal override Expression GetFalse()
	{
		return null;
	}
}
