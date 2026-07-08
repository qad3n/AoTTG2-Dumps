using System;
using System.Linq.Expressions;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000140")]
public sealed class InstanceActionInvoker<TTarget> : InstanceActionInvokerBase<TTarget>
{
	[Token(Token = "0x4000814")]
	[FieldOffset(Offset = "0x0")]
	private Action<TTarget> invoke;

	[Token(Token = "0x6000D54")]
	public InstanceActionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000D55")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000D56")]
	public override object Invoke(object target)
	{
		return null;
	}

	[Token(Token = "0x6000D57")]
	private object InvokeUnsafe(object target)
	{
		return null;
	}

	[Token(Token = "0x6000D58")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000D59")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000D5A")]
	protected override void CreateDelegate()
	{
	}
}
[Token(Token = "0x2000141")]
public sealed class InstanceActionInvoker<TTarget, TParam0> : InstanceActionInvokerBase<TTarget>
{
	[Token(Token = "0x4000815")]
	[FieldOffset(Offset = "0x0")]
	private Action<TTarget, TParam0> invoke;

	[Token(Token = "0x6000D5B")]
	public InstanceActionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000D5C")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000D5D")]
	public override object Invoke(object target, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6000D5E")]
	private object InvokeUnsafe(object target, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6000D5F")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000D60")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000D61")]
	protected override void CreateDelegate()
	{
	}
}
[Token(Token = "0x2000142")]
public sealed class InstanceActionInvoker<TTarget, TParam0, TParam1> : InstanceActionInvokerBase<TTarget>
{
	[Token(Token = "0x4000816")]
	[FieldOffset(Offset = "0x0")]
	private Action<TTarget, TParam0, TParam1> invoke;

	[Token(Token = "0x6000D62")]
	public InstanceActionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000D63")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000D64")]
	public override object Invoke(object target, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000D65")]
	public object InvokeUnsafe(object target, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000D66")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000D67")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000D68")]
	protected override void CreateDelegate()
	{
	}
}
[Token(Token = "0x2000143")]
public sealed class InstanceActionInvoker<TTarget, TParam0, TParam1, TParam2> : InstanceActionInvokerBase<TTarget>
{
	[Token(Token = "0x4000817")]
	[FieldOffset(Offset = "0x0")]
	private Action<TTarget, TParam0, TParam1, TParam2> invoke;

	[Token(Token = "0x6000D69")]
	public InstanceActionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000D6A")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000D6B")]
	public override object Invoke(object target, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000D6C")]
	public object InvokeUnsafe(object target, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000D6D")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000D6E")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000D6F")]
	protected override void CreateDelegate()
	{
	}
}
[Token(Token = "0x2000144")]
public sealed class InstanceActionInvoker<TTarget, TParam0, TParam1, TParam2, TParam3> : InstanceActionInvokerBase<TTarget>
{
	[Token(Token = "0x4000818")]
	[FieldOffset(Offset = "0x0")]
	private Action<TTarget, TParam0, TParam1, TParam2, TParam3> invoke;

	[Token(Token = "0x6000D70")]
	public InstanceActionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000D71")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000D72")]
	public override object Invoke(object target, object arg0, object arg1, object arg2, object arg3)
	{
		return null;
	}

	[Token(Token = "0x6000D73")]
	public object InvokeUnsafe(object target, object arg0, object arg1, object arg2, object arg3)
	{
		return null;
	}

	[Token(Token = "0x6000D74")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000D75")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000D76")]
	protected override void CreateDelegate()
	{
	}
}
[Token(Token = "0x2000145")]
public sealed class InstanceActionInvoker<TTarget, TParam0, TParam1, TParam2, TParam3, TParam4> : InstanceActionInvokerBase<TTarget>
{
	[Token(Token = "0x4000819")]
	[FieldOffset(Offset = "0x0")]
	private Action<TTarget, TParam0, TParam1, TParam2, TParam3, TParam4> invoke;

	[Token(Token = "0x6000D77")]
	public InstanceActionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000D78")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000D79")]
	public override object Invoke(object target, object arg0, object arg1, object arg2, object arg3, object arg4)
	{
		return null;
	}

	[Token(Token = "0x6000D7A")]
	public object InvokeUnsafe(object target, object arg0, object arg1, object arg2, object arg3, object arg4)
	{
		return null;
	}

	[Token(Token = "0x6000D7B")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000D7C")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000D7D")]
	protected override void CreateDelegate()
	{
	}
}
