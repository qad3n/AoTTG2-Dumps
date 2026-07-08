using System;
using System.Linq.Expressions;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000148")]
public sealed class InstanceFunctionInvoker<TTarget, TResult> : InstanceFunctionInvokerBase<TTarget, TResult>
{
	[Token(Token = "0x400081D")]
	[FieldOffset(Offset = "0x0")]
	private Func<TTarget, TResult> invoke;

	[Token(Token = "0x6000D87")]
	public InstanceFunctionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000D88")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000D89")]
	public override object Invoke(object target)
	{
		return null;
	}

	[Token(Token = "0x6000D8A")]
	public object InvokeUnsafe(object target)
	{
		return null;
	}

	[Token(Token = "0x6000D8B")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000D8C")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000D8D")]
	protected override void CreateDelegate()
	{
	}
}
[Token(Token = "0x2000149")]
public sealed class InstanceFunctionInvoker<TTarget, TParam0, TResult> : InstanceFunctionInvokerBase<TTarget, TResult>
{
	[Token(Token = "0x400081E")]
	[FieldOffset(Offset = "0x0")]
	private Func<TTarget, TParam0, TResult> invoke;

	[Token(Token = "0x6000D8E")]
	public InstanceFunctionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000D8F")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000D90")]
	public override object Invoke(object target, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6000D91")]
	public object InvokeUnsafe(object target, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6000D92")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000D93")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000D94")]
	protected override void CreateDelegate()
	{
	}
}
[Token(Token = "0x200014A")]
public sealed class InstanceFunctionInvoker<TTarget, TParam0, TParam1, TResult> : InstanceFunctionInvokerBase<TTarget, TResult>
{
	[Token(Token = "0x400081F")]
	[FieldOffset(Offset = "0x0")]
	private Func<TTarget, TParam0, TParam1, TResult> invoke;

	[Token(Token = "0x6000D95")]
	public InstanceFunctionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000D96")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000D97")]
	public override object Invoke(object target, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000D98")]
	public object InvokeUnsafe(object target, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000D99")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000D9A")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000D9B")]
	protected override void CreateDelegate()
	{
	}
}
[Token(Token = "0x200014B")]
public sealed class InstanceFunctionInvoker<TTarget, TParam0, TParam1, TParam2, TResult> : InstanceFunctionInvokerBase<TTarget, TResult>
{
	[Token(Token = "0x4000820")]
	[FieldOffset(Offset = "0x0")]
	private Func<TTarget, TParam0, TParam1, TParam2, TResult> invoke;

	[Token(Token = "0x6000D9C")]
	public InstanceFunctionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000D9D")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000D9E")]
	public override object Invoke(object target, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000D9F")]
	public object InvokeUnsafe(object target, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000DA0")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000DA1")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000DA2")]
	protected override void CreateDelegate()
	{
	}
}
[Token(Token = "0x200014C")]
public sealed class InstanceFunctionInvoker<TTarget, TParam0, TParam1, TParam2, TParam3, TResult> : InstanceFunctionInvokerBase<TTarget, TResult>
{
	[Token(Token = "0x4000821")]
	[FieldOffset(Offset = "0x0")]
	private Func<TTarget, TParam0, TParam1, TParam2, TParam3, TResult> invoke;

	[Token(Token = "0x6000DA3")]
	public InstanceFunctionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000DA4")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000DA5")]
	public override object Invoke(object target, object arg0, object arg1, object arg2, object arg3)
	{
		return null;
	}

	[Token(Token = "0x6000DA6")]
	public object InvokeUnsafe(object target, object arg0, object arg1, object arg2, object arg3)
	{
		return null;
	}

	[Token(Token = "0x6000DA7")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000DA8")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000DA9")]
	protected override void CreateDelegate()
	{
	}
}
[Token(Token = "0x200014D")]
public sealed class InstanceFunctionInvoker<TTarget, TParam0, TParam1, TParam2, TParam3, TParam4, TResult> : InstanceFunctionInvokerBase<TTarget, TResult>
{
	[Token(Token = "0x4000822")]
	[FieldOffset(Offset = "0x0")]
	private Func<TTarget, TParam0, TParam1, TParam2, TParam3, TParam4, TResult> invoke;

	[Token(Token = "0x6000DAA")]
	public InstanceFunctionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000DAB")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000DAC")]
	public override object Invoke(object target, object arg0, object arg1, object arg2, object arg3, object arg4)
	{
		return null;
	}

	[Token(Token = "0x6000DAD")]
	public object InvokeUnsafe(object target, object arg0, object arg1, object arg2, object arg3, object arg4)
	{
		return null;
	}

	[Token(Token = "0x6000DAE")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000DAF")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000DB0")]
	protected override void CreateDelegate()
	{
	}
}
