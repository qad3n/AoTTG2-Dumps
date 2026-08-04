// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.ReflectionInvoker
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000154")]
public class ReflectionInvoker : IOptimizedInvoker
{
	[Token(Token = "0x4000831")]
	[FieldOffset(Offset = "0x10")]
	private readonly MethodInfo methodInfo;

	[Token(Token = "0x4000832")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object[] EmptyObjects;

	[Token(Token = "0x6000DF1")]
	[Address(RVA = "0x4D46380", Offset = "0x4D46380", VA = "0x4D46380")]
	public ReflectionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000DF2")]
	[Address(RVA = "0x4D465E0", Offset = "0x4D465E0", VA = "0x4D465E0", Slot = "4")]
	public void Compile()
	{
	}

	[Token(Token = "0x6000DF3")]
	[Address(RVA = "0x4D465F0", Offset = "0x4D465F0", VA = "0x4D465F0", Slot = "11")]
	public object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000DF4")]
	[Address(RVA = "0x4D46610", Offset = "0x4D46610", VA = "0x4D46610", Slot = "5")]
	public object Invoke(object target)
	{
		return null;
	}

	[Token(Token = "0x6000DF5")]
	[Address(RVA = "0x4D46680", Offset = "0x4D46680", VA = "0x4D46680", Slot = "6")]
	public object Invoke(object target, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6000DF6")]
	[Address(RVA = "0x4D46740", Offset = "0x4D46740", VA = "0x4D46740", Slot = "7")]
	public object Invoke(object target, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000DF7")]
	[Address(RVA = "0x4D46830", Offset = "0x4D46830", VA = "0x4D46830", Slot = "8")]
	public object Invoke(object target, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000DF8")]
	[Address(RVA = "0x4D46960", Offset = "0x4D46960", VA = "0x4D46960", Slot = "9")]
	public object Invoke(object target, object arg0, object arg1, object arg2, object arg3)
	{
		return null;
	}

	[Token(Token = "0x6000DF9")]
	[Address(RVA = "0x4D46AD0", Offset = "0x4D46AD0", VA = "0x4D46AD0", Slot = "10")]
	public object Invoke(object target, object arg0, object arg1, object arg2, object arg3, object arg4)
	{
		return null;
	}

	[Token(Token = "0x6000DFA")]
	[Address(RVA = "0x4D46C90", Offset = "0x4D46C90", VA = "0x4D46C90")]
	public Type[] GetParameterTypes()
	{
		return null;
	}
}
