// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.MethodCallExpression1
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000AC")]
internal sealed class MethodCallExpression1 : MethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001C5")]
	[FieldOffset(Offset = "0x18")]
	private object _arg0;

	[Token(Token = "0x170000D4")]
	public override int ArgumentCount
	{
		[Token(Token = "0x60004A8")]
		[Address(RVA = "0x5DD3850", Offset = "0x5DD2850", VA = "0x5DD3850", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x5DD3740", Offset = "0x5DD2740", VA = "0x5DD3740")]
	public MethodCallExpression1(MethodInfo method, Expression arg0)
	{
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x5DD37C0", Offset = "0x5DD27C0", VA = "0x5DD37C0", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x5DD3860", Offset = "0x5DD2860", VA = "0x5DD3860", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
