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
	[Address(RVA = "0x2E36820", Offset = "0x2E34E20", VA = "0x182E36820")]
	public ReflectionInvoker(MethodInfo methodInfo)
	{
	}

	[Token(Token = "0x6000DFC")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	public void Compile()
	{
	}

	[Token(Token = "0x6000DFD")]
	[Address(RVA = "0x2E36350", Offset = "0x2E34950", VA = "0x182E36350", Slot = "11")]
	public object Invoke(object target, params object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000DFE")]
	[Address(RVA = "0x2E36730", Offset = "0x2E34D30", VA = "0x182E36730", Slot = "5")]
	public object Invoke(object target)
	{
		return null;
	}

	[Token(Token = "0x6000DFF")]
	[Address(RVA = "0x2E36670", Offset = "0x2E34C70", VA = "0x182E36670", Slot = "6")]
	public object Invoke(object target, object arg0)
	{
		return null;
	}

	[Token(Token = "0x6000E00")]
	[Address(RVA = "0x2E36040", Offset = "0x2E34640", VA = "0x182E36040", Slot = "7")]
	public object Invoke(object target, object arg0, object arg1)
	{
		return null;
	}

	[Token(Token = "0x6000E01")]
	[Address(RVA = "0x2E36370", Offset = "0x2E34970", VA = "0x182E36370", Slot = "8")]
	public object Invoke(object target, object arg0, object arg1, object arg2)
	{
		return null;
	}

	[Token(Token = "0x6000E02")]
	[Address(RVA = "0x2E364D0", Offset = "0x2E34AD0", VA = "0x182E364D0", Slot = "9")]
	public object Invoke(object target, object arg0, object arg1, object arg2, object arg3)
	{
		return null;
	}

	[Token(Token = "0x6000E03")]
	[Address(RVA = "0x2E36150", Offset = "0x2E34750", VA = "0x182E36150", Slot = "10")]
	public object Invoke(object target, object arg0, object arg1, object arg2, object arg3, object arg4)
	{
		return null;
	}

	[Token(Token = "0x6000E04")]
	[Address(RVA = "0x2E35EE0", Offset = "0x2E344E0", VA = "0x182E35EE0")]
	public Type[] GetParameterTypes()
	{
		return null;
	}
}
