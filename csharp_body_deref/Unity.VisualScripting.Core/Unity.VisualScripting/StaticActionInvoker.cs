// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.StaticActionInvoker
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Linq.Expressions;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000158")]
public sealed class StaticActionInvoker : StaticActionInvokerBase
{
	[Token(Token = "0x4000834")]
	[FieldOffset(Offset = "0x20")]
	private Action invoke;

	[Token(Token = "0x6000E0E")]
	[Address(RVA = "0x2E3CD30", Offset = "0x2E3B330", VA = "0x182E3CD30")]
	public StaticActionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000E0F")]
	[Address(RVA = "0x2E3CEA0", Offset = "0x2E3B4A0", VA = "0x182E3CEA0", Slot = "13")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000E10")]
	[Address(RVA = "0x2E3CF10", Offset = "0x2E3B510", VA = "0x182E3CF10", Slot = "14")]
	public override object Invoke(object target)
	{
		return null;
	}

	[Token(Token = "0x6000E11")]
	[Address(RVA = "0x2E3CE70", Offset = "0x2E3B470", VA = "0x182E3CE70")]
	private object InvokeUnsafe(object target)
	{
		return null;
	}

	[Token(Token = "0x6000E12")]
	[Address(RVA = "0xD07320", Offset = "0xD05920", VA = "0x180D07320", Slot = "12")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000E13")]
	[Address(RVA = "0x2E3CD40", Offset = "0x2E3B340", VA = "0x182E3CD40", Slot = "23")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000E14")]
	[Address(RVA = "0x2E3CDF0", Offset = "0x2E3B3F0", VA = "0x182E3CDF0", Slot = "21")]
	protected override void CreateDelegate()
	{
	}
}
[Token(Token = "0x2000159")]
public sealed class StaticActionInvoker<TParam0> : StaticActionInvokerBase
{
	[Token(Token = "0x4000835")]
	[FieldOffset(Offset = "0x0")]
	private Action<TParam0> invoke;

	[Token(Token = "0x6000E16")]
	public StaticActionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000E17")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000E18")]
	public override object Invoke(object target, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6000E19")]
	private object InvokeUnsafe(object target, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6000E1A")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000E1B")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000E1C")]
	protected override void CreateDelegate()
	{
	}
}
[Token(Token = "0x200015A")]
public sealed class StaticActionInvoker<TParam0, TParam1> : StaticActionInvokerBase
{
	[Token(Token = "0x4000836")]
	[FieldOffset(Offset = "0x0")]
	private Action<TParam0, TParam1> invoke;

	[Token(Token = "0x6000E1E")]
	public StaticActionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000E1F")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000E20")]
	public override object Invoke(object target, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000E21")]
	public object InvokeUnsafe(object target, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000E22")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000E23")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000E24")]
	protected override void CreateDelegate()
	{
	}
}
[Token(Token = "0x200015B")]
public sealed class StaticActionInvoker<TParam0, TParam1, TParam2> : StaticActionInvokerBase
{
	[Token(Token = "0x4000837")]
	[FieldOffset(Offset = "0x0")]
	private Action<TParam0, TParam1, TParam2> invoke;

	[Token(Token = "0x6000E26")]
	public StaticActionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000E27")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000E28")]
	public override object Invoke(object target, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000E29")]
	public object InvokeUnsafe(object target, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000E2A")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000E2B")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000E2C")]
	protected override void CreateDelegate()
	{
	}
}
[Token(Token = "0x200015C")]
public sealed class StaticActionInvoker<TParam0, TParam1, TParam2, TParam3> : StaticActionInvokerBase
{
	[Token(Token = "0x4000838")]
	[FieldOffset(Offset = "0x0")]
	private Action<TParam0, TParam1, TParam2, TParam3> invoke;

	[Token(Token = "0x6000E2E")]
	public StaticActionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000E2F")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000E30")]
	public override object Invoke(object target, object arg0, object arg1, object arg2, object arg3)
	{
		return null;
	}

	[Token(Token = "0x6000E31")]
	public object InvokeUnsafe(object target, object arg0, object arg1, object arg2, object arg3)
	{
		return null;
	}

	[Token(Token = "0x6000E32")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000E33")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000E34")]
	protected override void CreateDelegate()
	{
	}
}
[Token(Token = "0x200015D")]
public sealed class StaticActionInvoker<TParam0, TParam1, TParam2, TParam3, TParam4> : StaticActionInvokerBase
{
	[Token(Token = "0x4000839")]
	[FieldOffset(Offset = "0x0")]
	private Action<TParam0, TParam1, TParam2, TParam3, TParam4> invoke;

	[Token(Token = "0x6000E36")]
	public StaticActionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000E37")]
	public override object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000E38")]
	public override object Invoke(object target, object arg0, object arg1, object arg2, object arg3, object arg4)
	{
		return null;
	}

	[Token(Token = "0x6000E39")]
	public object InvokeUnsafe(object target, object arg0, object arg1, object arg2, object arg3, object arg4)
	{
		return null;
	}

	[Token(Token = "0x6000E3A")]
	protected override Type[] GetParameterTypes()
	{
		return null;
	}

	[Token(Token = "0x6000E3B")]
	protected override void CompileExpression(MethodCallExpression callExpression, ParameterExpression[] parameterExpressions)
	{
	}

	[Token(Token = "0x6000E3C")]
	protected override void CreateDelegate()
	{
	}
}
