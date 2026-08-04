// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.MethodBinaryExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200004A")]
internal class MethodBinaryExpression : SimpleBinaryExpression
{
	[Token(Token = "0x40000EF")]
	[FieldOffset(Offset = "0x30")]
	private readonly MethodInfo _method;

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x4496D80", Offset = "0x4496D80", VA = "0x4496D80")]
	internal MethodBinaryExpression(ExpressionType nodeType, Expression left, Expression right, Type type, MethodInfo method)
	{
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x4496F00", Offset = "0x4496F00", VA = "0x4496F00", Slot = "10")]
	internal override MethodInfo GetMethod()
	{
		return null;
	}
}
