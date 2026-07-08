using System;
using System.Linq.Expressions;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000150")]
public abstract class InvokerBase : IOptimizedInvoker
{
	[Token(Token = "0x4000826")]
	[FieldOffset(Offset = "0x10")]
	protected readonly Type targetType;

	[Token(Token = "0x4000827")]
	[FieldOffset(Offset = "0x18")]
	protected readonly MethodInfo methodInfo;

	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x4A1A0F0", Offset = "0x4A1A0F0", VA = "0x4A1A0F0")]
	protected InvokerBase(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000DBC")]
	protected void VerifyArgument<TParam>(MethodInfo methodInfo, int argIndex, object arg)
	{
	}

	[Token(Token = "0x6000DBD")]
	[Address(RVA = "0x4A1A240", Offset = "0x4A1A240", VA = "0x4A1A240", Slot = "4")]
	public void Compile()
	{
	}

	[Token(Token = "0x6000DBE")]
	[Address(RVA = "0x4A1A3B0", Offset = "0x4A1A3B0", VA = "0x4A1A3B0")]
	protected ParameterExpression[] GetParameterExpressions()
	{
		return null;
	}

	[Token(Token = "0x6000DBF")]
	protected abstract Type[] GetParameterTypes();

	[Token(Token = "0x6000DC0")]
	public abstract object Invoke(object target, params object[] args);

	[Token(Token = "0x6000DC1")]
	[Address(RVA = "0x4A1A6E0", Offset = "0x4A1A6E0", VA = "0x4A1A6E0", Slot = "14")]
	public virtual object Invoke(object target)
	{
		return null;
	}

	[Token(Token = "0x6000DC2")]
	[Address(RVA = "0x4A1A720", Offset = "0x4A1A720", VA = "0x4A1A720", Slot = "15")]
	public virtual object Invoke(object target, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6000DC3")]
	[Address(RVA = "0x4A1A760", Offset = "0x4A1A760", VA = "0x4A1A760", Slot = "16")]
	public virtual object Invoke(object target, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000DC4")]
	[Address(RVA = "0x4A1A7A0", Offset = "0x4A1A7A0", VA = "0x4A1A7A0", Slot = "17")]
	public virtual object Invoke(object target, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x4A1A7E0", Offset = "0x4A1A7E0", VA = "0x4A1A7E0", Slot = "18")]
	public virtual object Invoke(object target, object arg0, object arg1, object arg2, object arg3)
	{
		return null;
	}

	[Token(Token = "0x6000DC6")]
	[Address(RVA = "0x4A1A820", Offset = "0x4A1A820", VA = "0x4A1A820", Slot = "19")]
	public virtual object Invoke(object target, object arg0, object arg1, object arg2, object arg3, object arg4)
	{
		return null;
	}

	[Token(Token = "0x6000DC7")]
	protected abstract void CompileExpression();

	[Token(Token = "0x6000DC8")]
	protected abstract void CreateDelegate();

	[Token(Token = "0x6000DC9")]
	protected abstract void VerifyTarget(object target);
}
