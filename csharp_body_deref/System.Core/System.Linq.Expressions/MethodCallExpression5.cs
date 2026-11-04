// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.MethodCallExpression5
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000AF")]
internal sealed class MethodCallExpression5 : MethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001C6")]
	[FieldOffset(Offset = "0x18")]
	private object _arg0;

	[Token(Token = "0x40001C7")]
	[FieldOffset(Offset = "0x20")]
	private readonly Expression _arg1;

	[Token(Token = "0x40001C8")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg2;

	[Token(Token = "0x40001C9")]
	[FieldOffset(Offset = "0x30")]
	private readonly Expression _arg3;

	[Token(Token = "0x40001CA")]
	[FieldOffset(Offset = "0x38")]
	private readonly Expression _arg4;

	[Token(Token = "0x170000D6")]
	public override int ArgumentCount
	{
		[Token(Token = "0x60004AD")]
		[Address(RVA = "0x8680A0", Offset = "0x8666A0", VA = "0x1808680A0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x243D170", Offset = "0x243B770", VA = "0x18243D170")]
	public MethodCallExpression5(MethodInfo method, Expression arg0, Expression arg1, Expression arg2, Expression arg3, Expression arg4)
	{
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x243CF00", Offset = "0x243B500", VA = "0x18243CF00", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x243CFF0", Offset = "0x243B5F0", VA = "0x18243CFF0", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
