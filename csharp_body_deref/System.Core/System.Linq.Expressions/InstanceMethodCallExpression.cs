// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.InstanceMethodCallExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000A7")]
internal class InstanceMethodCallExpression : MethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001B9")]
	[FieldOffset(Offset = "0x18")]
	private readonly Expression _instance;

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x44BD2B0", Offset = "0x44BD2B0", VA = "0x44BD2B0")]
	public InstanceMethodCallExpression(MethodInfo method, Expression instance)
	{
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x44BD330", Offset = "0x44BD330", VA = "0x44BD330", Slot = "12")]
	internal override Expression GetInstance()
	{
		return null;
	}
}
