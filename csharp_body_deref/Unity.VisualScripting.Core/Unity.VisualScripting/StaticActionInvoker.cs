using System;
using System.Linq.Expressions;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000158")]
public sealed class StaticActionInvoker : StaticActionInvokerBase
{
	[Token(Token = "0x4000836")]
	[FieldOffset(Offset = "0x20")]
	private Action invoke;

	[Token(Token = "0x6000E04")]
	[Address(RVA = "0x4A224E0", Offset = "0x4A224E0", VA = "0x4A224E0")]
	public StaticActionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000E05")]
	[Address(RVA = "0x4A224F0", Offset = "0x4A224F0", VA = "0x4A224F0", Slot = "13")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000E06")]
	[Address(RVA = "0x4A22550", Offset = "0x4A22550", VA = "0x4A22550", Slot = "14")]
	public override object Invoke(object target)
	{
		return null;
	}

	[Token(Token = "0x6000E07")]
	[Address(RVA = "0x4A22760", Offset = "0x4A22760", VA = "0x4A22760")]
	private object InvokeUnsafe(object target)
	{
		return null;
	}

	[Token(Token = "0x6000E08")]
	[Address(RVA = "0x4A22780", Offset = "0x4A22780", VA = "0x4A22780", Slot = "12")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000E09")]
	[Address(RVA = "0x4A227C0", Offset = "0x4A227C0", VA = "0x4A227C0", Slot = "23")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000E0A")]
	[Address(RVA = "0x4A22870", Offset = "0x4A22870", VA = "0x4A22870", Slot = "21")]
	protected override void CreateDelegate()
	{
	}
}
[Token(Token = "0x2000159")]
public sealed class StaticActionInvoker<TParam0> : StaticActionInvokerBase
{
	[Token(Token = "0x4000837")]
	[FieldOffset(Offset = "0x0")]
	private Action<TParam0> invoke;

	[Token(Token = "0x6000E0C")]
	public StaticActionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000E0D")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000E0E")]
	public override object Invoke(object target, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6000E0F")]
	private object InvokeUnsafe(object target, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6000E10")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000E11")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000E12")]
	protected override void CreateDelegate()
	{
	}
}
[Token(Token = "0x200015A")]
public sealed class StaticActionInvoker<TParam0, TParam1> : StaticActionInvokerBase
{
	[Token(Token = "0x4000838")]
	[FieldOffset(Offset = "0x0")]
	private Action<TParam0, TParam1> invoke;

	[Token(Token = "0x6000E14")]
	public StaticActionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000E15")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000E16")]
	public override object Invoke(object target, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000E17")]
	public object InvokeUnsafe(object target, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000E18")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000E19")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000E1A")]
	protected override void CreateDelegate()
	{
	}
}
[Token(Token = "0x200015B")]
public sealed class StaticActionInvoker<TParam0, TParam1, TParam2> : StaticActionInvokerBase
{
	[Token(Token = "0x4000839")]
	[FieldOffset(Offset = "0x0")]
	private Action<TParam0, TParam1, TParam2> invoke;

	[Token(Token = "0x6000E1C")]
	public StaticActionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000E1D")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000E1E")]
	public override object Invoke(object target, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000E1F")]
	public object InvokeUnsafe(object target, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000E20")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000E21")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000E22")]
	protected override void CreateDelegate()
	{
	}
}
[Token(Token = "0x200015C")]
public sealed class StaticActionInvoker<TParam0, TParam1, TParam2, TParam3> : StaticActionInvokerBase
{
	[Token(Token = "0x400083A")]
	[FieldOffset(Offset = "0x0")]
	private Action<TParam0, TParam1, TParam2, TParam3> invoke;

	[Token(Token = "0x6000E24")]
	public StaticActionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000E25")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000E26")]
	public override object Invoke(object target, object arg0, object arg1, object arg2, object arg3)
	{
		return null;
	}

	[Token(Token = "0x6000E27")]
	public object InvokeUnsafe(object target, object arg0, object arg1, object arg2, object arg3)
	{
		return null;
	}

	[Token(Token = "0x6000E28")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000E29")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000E2A")]
	protected override void CreateDelegate()
	{
	}
}
[Token(Token = "0x200015D")]
public sealed class StaticActionInvoker<TParam0, TParam1, TParam2, TParam3, TParam4> : StaticActionInvokerBase
{
	[Token(Token = "0x400083B")]
	[FieldOffset(Offset = "0x0")]
	private Action<TParam0, TParam1, TParam2, TParam3, TParam4> invoke;

	[Token(Token = "0x6000E2C")]
	public StaticActionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000E2D")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000E2E")]
	public override object Invoke(object target, object arg0, object arg1, object arg2, object arg3, object arg4)
	{
		return null;
	}

	[Token(Token = "0x6000E2F")]
	public object InvokeUnsafe(object target, object arg0, object arg1, object arg2, object arg3, object arg4)
	{
		return null;
	}

	[Token(Token = "0x6000E30")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000E31")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000E32")]
	protected override void CreateDelegate()
	{
	}
}
