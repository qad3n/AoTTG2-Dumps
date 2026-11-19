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

[Token(Token = "0x20000B0")]
internal sealed class MethodCallExpression5 : MethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001CF")]
	[FieldOffset(Offset = "0x18")]
	private object _arg0;

	[Token(Token = "0x40001D0")]
	[FieldOffset(Offset = "0x20")]
	private readonly Expression _arg1;

	[Token(Token = "0x40001D1")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg2;

	[Token(Token = "0x40001D2")]
	[FieldOffset(Offset = "0x30")]
	private readonly Expression _arg3;

	[Token(Token = "0x40001D3")]
	[FieldOffset(Offset = "0x38")]
	private readonly Expression _arg4;

	[Token(Token = "0x170000D8")]
	public override int ArgumentCount
	{
		[Token(Token = "0x60004B8")]
		[Address(RVA = "0x5DD4580", Offset = "0x5DD3580", VA = "0x5DD4580", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x5DD43D0", Offset = "0x5DD33D0", VA = "0x5DD43D0")]
	public MethodCallExpression5(MethodInfo method, Expression arg0, Expression arg1, Expression arg2, Expression arg3, Expression arg4)
	{
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x5DD44B0", Offset = "0x5DD34B0", VA = "0x5DD44B0", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x5DD4590", Offset = "0x5DD3590", VA = "0x5DD4590", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
