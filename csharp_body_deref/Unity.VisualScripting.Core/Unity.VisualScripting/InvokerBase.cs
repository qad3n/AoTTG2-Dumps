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

[Token(Token = "0x200014E")]
public abstract class InvokerBase : IOptimizedInvoker
{
	[Token(Token = "0x4000826")]
	[FieldOffset(Offset = "0x10")]
	protected readonly Type targetType;

	[Token(Token = "0x4000827")]
	[FieldOffset(Offset = "0x18")]
	protected readonly MethodInfo methodInfo;

	[Token(Token = "0x6000DB0")]
	[Address(RVA = "0x4D3ECC0", Offset = "0x4D3ECC0", VA = "0x4D3ECC0")]
	protected InvokerBase(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000DB1")]
	protected void VerifyArgument<TParam>(MethodInfo methodInfo, int argIndex, object arg)
	{
	}

	[Token(Token = "0x6000DB2")]
	[Address(RVA = "0x4D3EE10", Offset = "0x4D3EE10", VA = "0x4D3EE10", Slot = "4")]
	public void Compile()
	{
	}

	[Token(Token = "0x6000DB3")]
	[Address(RVA = "0x4D3EF80", Offset = "0x4D3EF80", VA = "0x4D3EF80")]
	protected ParameterExpression[] GetParameterExpressions()
	{
		return null;
	}

	[Token(Token = "0x6000DB4")]
	protected abstract Type[] GetParameterTypes();

	[Token(Token = "0x6000DB5")]
	public abstract object Invoke(object target, params object[] args);

	[Token(Token = "0x6000DB6")]
	[Address(RVA = "0x4D3F2B0", Offset = "0x4D3F2B0", VA = "0x4D3F2B0", Slot = "14")]
	public virtual object Invoke(object target)
	{
		return null;
	}

	[Token(Token = "0x6000DB7")]
	[Address(RVA = "0x4D3F2F0", Offset = "0x4D3F2F0", VA = "0x4D3F2F0", Slot = "15")]
	public virtual object Invoke(object target, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6000DB8")]
	[Address(RVA = "0x4D3F330", Offset = "0x4D3F330", VA = "0x4D3F330", Slot = "16")]
	public virtual object Invoke(object target, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x4D3F370", Offset = "0x4D3F370", VA = "0x4D3F370", Slot = "17")]
	public virtual object Invoke(object target, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x4D3F3B0", Offset = "0x4D3F3B0", VA = "0x4D3F3B0", Slot = "18")]
	public virtual object Invoke(object target, object arg0, object arg1, object arg2, object arg3)
	{
		return null;
	}

	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x4D3F3F0", Offset = "0x4D3F3F0", VA = "0x4D3F3F0", Slot = "19")]
	public virtual object Invoke(object target, object arg0, object arg1, object arg2, object arg3, object arg4)
	{
		return null;
	}

	[Token(Token = "0x6000DBC")]
	protected abstract void CompileExpression();

	[Token(Token = "0x6000DBD")]
	protected abstract void CreateDelegate();

	[Token(Token = "0x6000DBE")]
	protected abstract void VerifyTarget(object target);
}
