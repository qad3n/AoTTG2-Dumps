// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.MethodCallExpression3
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
internal sealed class MethodCallExpression3 : MethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001BF")]
	[FieldOffset(Offset = "0x18")]
	private object _arg0;

	[Token(Token = "0x40001C0")]
	[FieldOffset(Offset = "0x20")]
	private readonly Expression _arg1;

	[Token(Token = "0x40001C1")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg2;

	[Token(Token = "0x170000D4")]
	public override int ArgumentCount
	{
		[Token(Token = "0x60004A5")]
		[Address(RVA = "0x565FB0", Offset = "0x5645B0", VA = "0x180565FB0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x243CB80", Offset = "0x243B180", VA = "0x18243CB80")]
	public MethodCallExpression3(MethodInfo method, Expression arg0, Expression arg1, Expression arg2)
	{
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x243C9A0", Offset = "0x243AFA0", VA = "0x18243C9A0", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x243CA60", Offset = "0x243B060", VA = "0x18243CA60", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
