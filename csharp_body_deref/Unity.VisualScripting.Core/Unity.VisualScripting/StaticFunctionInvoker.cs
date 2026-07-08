using System;
using System.Linq.Expressions;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000161")]
public sealed class StaticFunctionInvoker<TResult> : StaticFunctionInvokerBase<TResult>
{
	[Token(Token = "0x4000841")]
	[FieldOffset(Offset = "0x0")]
	private Func<TResult> invoke;

	[Token(Token = "0x6000E3F")]
	public StaticFunctionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000E40")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000E41")]
	public override object Invoke(object target)
	{
		return null;
	}

	[Token(Token = "0x6000E42")]
	public object InvokeUnsafe(object target)
	{
		return null;
	}

	[Token(Token = "0x6000E43")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000E44")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000E45")]
	protected override void CreateDelegate()
	{
	}
}
[Token(Token = "0x2000162")]
public sealed class StaticFunctionInvoker<TParam0, TResult> : StaticFunctionInvokerBase<TResult>
{
	[Token(Token = "0x4000842")]
	[FieldOffset(Offset = "0x0")]
	private Func<TParam0, TResult> invoke;

	[Token(Token = "0x6000E47")]
	public StaticFunctionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000E48")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000E49")]
	public override object Invoke(object target, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6000E4A")]
	public object InvokeUnsafe(object target, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6000E4B")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000E4C")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000E4D")]
	protected override void CreateDelegate()
	{
	}
}
[Token(Token = "0x2000163")]
public sealed class StaticFunctionInvoker<TParam0, TParam1, TResult> : StaticFunctionInvokerBase<TResult>
{
	[Token(Token = "0x4000843")]
	[FieldOffset(Offset = "0x0")]
	private Func<TParam0, TParam1, TResult> invoke;

	[Token(Token = "0x6000E4F")]
	public StaticFunctionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000E50")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000E51")]
	public override object Invoke(object target, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000E52")]
	public object InvokeUnsafe(object target, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000E53")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000E54")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000E55")]
	protected override void CreateDelegate()
	{
	}
}
[Token(Token = "0x2000164")]
public sealed class StaticFunctionInvoker<TParam0, TParam1, TParam2, TResult> : StaticFunctionInvokerBase<TResult>
{
	[Token(Token = "0x4000844")]
	[FieldOffset(Offset = "0x0")]
	private Func<TParam0, TParam1, TParam2, TResult> invoke;

	[Token(Token = "0x6000E57")]
	public StaticFunctionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000E58")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000E59")]
	public override object Invoke(object target, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000E5A")]
	public object InvokeUnsafe(object target, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000E5B")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000E5C")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000E5D")]
	protected override void CreateDelegate()
	{
	}
}
[Token(Token = "0x2000165")]
public sealed class StaticFunctionInvoker<TParam0, TParam1, TParam2, TParam3, TResult> : StaticFunctionInvokerBase<TResult>
{
	[Token(Token = "0x4000845")]
	[FieldOffset(Offset = "0x0")]
	private Func<TParam0, TParam1, TParam2, TParam3, TResult> invoke;

	[Token(Token = "0x6000E5F")]
	public StaticFunctionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000E60")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000E61")]
	public override object Invoke(object target, object arg0, object arg1, object arg2, object arg3)
	{
		return null;
	}

	[Token(Token = "0x6000E62")]
	public object InvokeUnsafe(object target, object arg0, object arg1, object arg2, object arg3)
	{
		return null;
	}

	[Token(Token = "0x6000E63")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000E64")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000E65")]
	protected override void CreateDelegate()
	{
	}
}
[Token(Token = "0x2000166")]
public sealed class StaticFunctionInvoker<TParam0, TParam1, TParam2, TParam3, TParam4, TResult> : StaticFunctionInvokerBase<TResult>
{
	[Token(Token = "0x4000846")]
	[FieldOffset(Offset = "0x0")]
	private Func<TParam0, TParam1, TParam2, TParam3, TParam4, TResult> invoke;

	[Token(Token = "0x6000E67")]
	public StaticFunctionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000E68")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000E69")]
	public override object Invoke(object target, object arg0, object arg1, object arg2, object arg3, object arg4)
	{
		return null;
	}

	[Token(Token = "0x6000E6A")]
	public object InvokeUnsafe(object target, object arg0, object arg1, object arg2, object arg3, object arg4)
	{
		return null;
	}

	[Token(Token = "0x6000E6B")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000E6C")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000E6D")]
	protected override void CreateDelegate()
	{
	}
}
