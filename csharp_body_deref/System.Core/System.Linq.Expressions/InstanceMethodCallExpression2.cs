using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000B2")]
internal sealed class InstanceMethodCallExpression2 : InstanceMethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001CC")]
	[FieldOffset(Offset = "0x20")]
	private object _arg0;

	[Token(Token = "0x40001CD")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg1;

	[Token(Token = "0x170000D9")]
	public override int ArgumentCount
	{
		[Token(Token = "0x60004BA")]
		[Address(RVA = "0x4199E50", Offset = "0x4199E50", VA = "0x4199E50", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x4199D00", Offset = "0x4199D00", VA = "0x4199D00")]
	public InstanceMethodCallExpression2(MethodInfo method, Expression instance, Expression arg0, Expression arg1)
	{
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x4199DB0", Offset = "0x4199DB0", VA = "0x4199DB0", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x4199E60", Offset = "0x4199E60", VA = "0x4199E60", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
