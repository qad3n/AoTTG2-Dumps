// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.InvokerBase
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

[Token(Token = "0x2000150")]
public abstract class InvokerBase : IOptimizedInvoker
{
	[Token(Token = "0x4000824")]
	[FieldOffset(Offset = "0x10")]
	protected readonly Type targetType;

	[Token(Token = "0x4000825")]
	[FieldOffset(Offset = "0x18")]
	protected readonly MethodInfo methodInfo;

	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x682C180", Offset = "0x682B180", VA = "0x682C180")]
	protected InvokerBase(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000DC6")]
	protected void VerifyArgument<TParam>(MethodInfo methodInfo, int argIndex, object arg)
	{
	}

	[Token(Token = "0x6000DC7")]
	[Address(RVA = "0x682C2D0", Offset = "0x682B2D0", VA = "0x682C2D0", Slot = "4")]
	public void Compile()
	{
	}

	[Token(Token = "0x6000DC8")]
	[Address(RVA = "0x682C410", Offset = "0x682B410", VA = "0x682C410")]
	protected ParameterExpression[] GetParameterExpressions()
	{
		return null;
	}

	[Token(Token = "0x6000DC9")]
	protected abstract Type[] GetParameterTypes();

	[Token(Token = "0x6000DCA")]
	public abstract object Invoke(object target, params object[] args);

	[Token(Token = "0x6000DCB")]
	[Address(RVA = "0x682C720", Offset = "0x682B720", VA = "0x682C720", Slot = "14")]
	public virtual object Invoke(object target)
	{
		return null;
	}

	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x682C760", Offset = "0x682B760", VA = "0x682C760", Slot = "15")]
	public virtual object Invoke(object target, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x682C7A0", Offset = "0x682B7A0", VA = "0x682C7A0", Slot = "16")]
	public virtual object Invoke(object target, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x682C7E0", Offset = "0x682B7E0", VA = "0x682C7E0", Slot = "17")]
	public virtual object Invoke(object target, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x682C820", Offset = "0x682B820", VA = "0x682C820", Slot = "18")]
	public virtual object Invoke(object target, object arg0, object arg1, object arg2, object arg3)
	{
		return null;
	}

	[Token(Token = "0x6000DD0")]
	[Address(RVA = "0x682C860", Offset = "0x682B860", VA = "0x682C860", Slot = "19")]
	public virtual object Invoke(object target, object arg0, object arg1, object arg2, object arg3, object arg4)
	{
		return null;
	}

	[Token(Token = "0x6000DD1")]
	protected abstract void CompileExpression();

	[Token(Token = "0x6000DD2")]
	protected abstract void CreateDelegate();

	[Token(Token = "0x6000DD3")]
	protected abstract void VerifyTarget(object target);
}
