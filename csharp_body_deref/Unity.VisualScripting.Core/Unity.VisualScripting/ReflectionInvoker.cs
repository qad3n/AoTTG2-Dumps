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
	[Token(Token = "0x400082F")]
	[FieldOffset(Offset = "0x10")]
	private readonly MethodInfo methodInfo;

	[Token(Token = "0x4000830")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object[] EmptyObjects;

	[Token(Token = "0x6000DFB")]
	[Address(RVA = "0x68320B0", Offset = "0x68310B0", VA = "0x68320B0")]
	public ReflectionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000DFC")]
	[Address(RVA = "0x6832310", Offset = "0x6831310", VA = "0x6832310", Slot = "4")]
	public void Compile()
	{
	}

	[Token(Token = "0x6000DFD")]
	[Address(RVA = "0x6832320", Offset = "0x6831320", VA = "0x6832320", Slot = "11")]
	public object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000DFE")]
	[Address(RVA = "0x6832340", Offset = "0x6831340", VA = "0x6832340", Slot = "5")]
	public object Invoke(object target)
	{
		return null;
	}

	[Token(Token = "0x6000DFF")]
	[Address(RVA = "0x68323B0", Offset = "0x68313B0", VA = "0x68323B0", Slot = "6")]
	public object Invoke(object target, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6000E00")]
	[Address(RVA = "0x6832470", Offset = "0x6831470", VA = "0x6832470", Slot = "7")]
	public object Invoke(object target, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000E01")]
	[Address(RVA = "0x6832560", Offset = "0x6831560", VA = "0x6832560", Slot = "8")]
	public object Invoke(object target, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000E02")]
	[Address(RVA = "0x68326A0", Offset = "0x68316A0", VA = "0x68326A0", Slot = "9")]
	public object Invoke(object target, object arg0, object arg1, object arg2, object arg3)
	{
		return null;
	}

	[Token(Token = "0x6000E03")]
	[Address(RVA = "0x6832810", Offset = "0x6831810", VA = "0x6832810", Slot = "10")]
	public object Invoke(object target, object arg0, object arg1, object arg2, object arg3, object arg4)
	{
		return null;
	}

	[Token(Token = "0x6000E04")]
	[Address(RVA = "0x68329D0", Offset = "0x68319D0", VA = "0x68329D0")]
	public Type[] GetParameterTypes()
	{
		return null;
	}
}
