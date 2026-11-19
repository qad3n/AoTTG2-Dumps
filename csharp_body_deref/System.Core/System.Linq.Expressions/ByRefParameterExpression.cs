// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.ByRefParameterExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000BA")]
internal sealed class ByRefParameterExpression : TypedParameterExpression
{
	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x5DD5D60", Offset = "0x5DD4D60", VA = "0x5DD5D60")]
	internal ByRefParameterExpression(Type type, string name)
	{
	}

	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x5DD5EF0", Offset = "0x5DD4EF0", VA = "0x5DD5EF0", Slot = "10")]
	internal override bool GetIsByRef()
	{
		return default(bool);
	}
}
