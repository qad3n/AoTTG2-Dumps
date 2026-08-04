// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.InstanceMethodCallExpression3
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000B3")]
internal sealed class InstanceMethodCallExpression3 : InstanceMethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001CE")]
	[FieldOffset(Offset = "0x20")]
	private object _arg0;

	[Token(Token = "0x40001CF")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg1;

	[Token(Token = "0x40001D0")]
	[FieldOffset(Offset = "0x30")]
	private readonly Expression _arg2;

	[Token(Token = "0x170000DA")]
	public override int ArgumentCount
	{
		[Token(Token = "0x60004BE")]
		[Address(RVA = "0x44BF270", Offset = "0x44BF270", VA = "0x44BF270", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x44BF100", Offset = "0x44BF100", VA = "0x44BF100")]
	public InstanceMethodCallExpression3(MethodInfo method, Expression instance, Expression arg0, Expression arg1, Expression arg2)
	{
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x44BF1C0", Offset = "0x44BF1C0", VA = "0x44BF1C0", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x44BF280", Offset = "0x44BF280", VA = "0x44BF280", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
