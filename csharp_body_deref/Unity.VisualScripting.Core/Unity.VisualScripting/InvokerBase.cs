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
	[Address(RVA = "0x2E2E810", Offset = "0x2E2CE10", VA = "0x182E2E810")]
	protected InvokerBase(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000DC6")]
	protected void VerifyArgument<TParam>(MethodInfo methodInfo, int argIndex, object arg)
	{
	}

	[Token(Token = "0x6000DC7")]
	[Address(RVA = "0x2E2E290", Offset = "0x2E2C890", VA = "0x182E2E290", Slot = "4")]
	public void Compile()
	{
	}

	[Token(Token = "0x6000DC8")]
	[Address(RVA = "0x2E2E3A0", Offset = "0x2E2C9A0", VA = "0x182E2E3A0")]
	protected ParameterExpression[] GetParameterExpressions()
	{
		return null;
	}

	[Token(Token = "0x6000DC9")]
	protected abstract Type[] GetParameterTypes();

	[Token(Token = "0x6000DCA")]
	public abstract object Invoke(object target, params object[] args);

	[Token(Token = "0x6000DCB")]
	[Address(RVA = "0x2E2E750", Offset = "0x2E2CD50", VA = "0x182E2E750", Slot = "14")]
	public virtual object Invoke(object target)
	{
		return null;
	}

	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x2E2E7D0", Offset = "0x2E2CDD0", VA = "0x182E2E7D0", Slot = "15")]
	public virtual object Invoke(object target, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x2E2E790", Offset = "0x2E2CD90", VA = "0x182E2E790", Slot = "16")]
	public virtual object Invoke(object target, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x2E2E6D0", Offset = "0x2E2CCD0", VA = "0x182E2E6D0", Slot = "17")]
	public virtual object Invoke(object target, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x2E2E710", Offset = "0x2E2CD10", VA = "0x182E2E710", Slot = "18")]
	public virtual object Invoke(object target, object arg0, object arg1, object arg2, object arg3)
	{
		return null;
	}

	[Token(Token = "0x6000DD0")]
	[Address(RVA = "0x2E2E690", Offset = "0x2E2CC90", VA = "0x182E2E690", Slot = "19")]
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
