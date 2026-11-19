// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.MethodCallExpression2
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000AD")]
internal sealed class MethodCallExpression2 : MethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001C6")]
	[FieldOffset(Offset = "0x18")]
	private object _arg0;

	[Token(Token = "0x40001C7")]
	[FieldOffset(Offset = "0x20")]
	private readonly Expression _arg1;

	[Token(Token = "0x170000D5")]
	public override int ArgumentCount
	{
		[Token(Token = "0x60004AC")]
		[Address(RVA = "0x5DD3A80", Offset = "0x5DD2A80", VA = "0x5DD3A80", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x5DD3950", Offset = "0x5DD2950", VA = "0x5DD3950")]
	public MethodCallExpression2(MethodInfo method, Expression arg0, Expression arg1)
	{
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x5DD39E0", Offset = "0x5DD29E0", VA = "0x5DD39E0", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x5DD3A90", Offset = "0x5DD2A90", VA = "0x5DD3A90", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
