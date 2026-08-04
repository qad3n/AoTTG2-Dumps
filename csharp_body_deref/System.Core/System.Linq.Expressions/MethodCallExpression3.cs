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
		[Token(Token = "0x60004A6")]
		[Address(RVA = "0x44BDF60", Offset = "0x44BDF60", VA = "0x44BDF60", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x44BDE00", Offset = "0x44BDE00", VA = "0x44BDE00")]
	public MethodCallExpression3(MethodInfo method, Expression arg0, Expression arg1, Expression arg2)
	{
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x44BDEB0", Offset = "0x44BDEB0", VA = "0x44BDEB0", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x44BDF70", Offset = "0x44BDF70", VA = "0x44BDF70", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
