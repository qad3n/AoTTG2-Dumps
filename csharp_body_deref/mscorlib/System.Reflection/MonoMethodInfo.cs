// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.MonoMethodInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x2000546")]
internal struct MonoMethodInfo
{
	[Token(Token = "0x4001539")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Type parent;

	[Token(Token = "0x400153A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private Type ret;

	[Token(Token = "0x400153B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal MethodAttributes attrs;

	[Token(Token = "0x400153C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	internal MethodImplAttributes iattrs;

	[Token(Token = "0x400153D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private CallingConventions callconv;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026FC")]
	[Address(RVA = "0x1A6AE10", Offset = "0x1A69410", VA = "0x181A6AE10")]
	private static extern void get_method_info(IntPtr handle, out System.Reflection.MonoMethodInfo info);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026FD")]
	[Address(RVA = "0x1A6AC00", Offset = "0x1A69200", VA = "0x181A6AC00")]
	private static extern int get_method_attributes(IntPtr handle);

	[Token(Token = "0x60026FE")]
	[Address(RVA = "0x1A6ACA0", Offset = "0x1A692A0", VA = "0x181A6ACA0")]
	internal static System.Reflection.MonoMethodInfo GetMethodInfo(IntPtr handle)
	{
		return default(System.Reflection.MonoMethodInfo);
	}

	[Token(Token = "0x60026FF")]
	[Address(RVA = "0x1A6AC40", Offset = "0x1A69240", VA = "0x181A6AC40")]
	internal static Type GetDeclaringType(IntPtr handle)
	{
		return null;
	}

	[Token(Token = "0x6002700")]
	[Address(RVA = "0x1A6ADE0", Offset = "0x1A693E0", VA = "0x181A6ADE0")]
	internal static Type GetReturnType(IntPtr handle)
	{
		return null;
	}

	[Token(Token = "0x6002701")]
	[Address(RVA = "0x1A6AC00", Offset = "0x1A69200", VA = "0x181A6AC00")]
	internal static MethodAttributes GetAttributes(IntPtr handle)
	{
		return default(MethodAttributes);
	}

	[Token(Token = "0x6002702")]
	[Address(RVA = "0x1A6AC10", Offset = "0x1A69210", VA = "0x181A6AC10")]
	internal static CallingConventions GetCallingConvention(IntPtr handle)
	{
		return default(CallingConventions);
	}

	[Token(Token = "0x6002703")]
	[Address(RVA = "0x1A6AC70", Offset = "0x1A69270", VA = "0x181A6AC70")]
	internal static MethodImplAttributes GetMethodImplementationFlags(IntPtr handle)
	{
		return default(MethodImplAttributes);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002704")]
	[Address(RVA = "0x1A6ACD0", Offset = "0x1A692D0", VA = "0x181A6ACD0")]
	private static extern ParameterInfo[] get_parameter_info(IntPtr handle, MemberInfo member);

	[Token(Token = "0x6002705")]
	[Address(RVA = "0x1A6ACD0", Offset = "0x1A692D0", VA = "0x181A6ACD0")]
	internal static ParameterInfo[] GetParametersInfo(IntPtr handle, MemberInfo member)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002706")]
	[Address(RVA = "0x19E8C50", Offset = "0x19E7250", VA = "0x1819E8C50")]
	private static extern MarshalAsAttribute get_retval_marshal(IntPtr handle);

	[Token(Token = "0x6002707")]
	[Address(RVA = "0x1A6ACE0", Offset = "0x1A692E0", VA = "0x181A6ACE0")]
	internal static ParameterInfo GetReturnParameterInfo(System.Reflection.RuntimeMethodInfo method)
	{
		return null;
	}
}
