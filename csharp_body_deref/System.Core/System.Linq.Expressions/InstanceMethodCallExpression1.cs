using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000B1")]
internal sealed class InstanceMethodCallExpression1 : InstanceMethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001CB")]
	[FieldOffset(Offset = "0x20")]
	private object _arg0;

	[Token(Token = "0x170000D8")]
	public override int ArgumentCount
	{
		[Token(Token = "0x60004B6")]
		[Address(RVA = "0x4199BE0", Offset = "0x4199BE0", VA = "0x4199BE0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x4199AC0", Offset = "0x4199AC0", VA = "0x4199AC0")]
	public InstanceMethodCallExpression1(MethodInfo method, Expression instance, Expression arg0)
	{
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x4199B50", Offset = "0x4199B50", VA = "0x4199B50", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x4199BF0", Offset = "0x4199BF0", VA = "0x4199BF0", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
