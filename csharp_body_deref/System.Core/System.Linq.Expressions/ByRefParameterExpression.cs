// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.ByRefParameterExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000B9")]
internal sealed class ByRefParameterExpression : TypedParameterExpression
{
	[Token(Token = "0x60004D4")]
	[Address(RVA = "0x44BFF80", Offset = "0x44BFF80", VA = "0x44BFF80")]
	internal ByRefParameterExpression(Type type, string name)
	{
	}

	[Token(Token = "0x60004D5")]
	[Address(RVA = "0x44C0120", Offset = "0x44C0120", VA = "0x44C0120", Slot = "10")]
	internal override bool GetIsByRef()
	{
		return default(bool);
	}
}
