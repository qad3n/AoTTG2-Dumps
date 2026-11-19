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

[Token(Token = "0x200051F")]
internal struct MonoMethodInfo
{
	[Token(Token = "0x4001499")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Type parent;

	[Token(Token = "0x400149A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private Type ret;

	[Token(Token = "0x400149B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal MethodAttributes attrs;

	[Token(Token = "0x400149C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	internal MethodImplAttributes iattrs;

	[Token(Token = "0x400149D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private CallingConventions callconv;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026CA")]
	[Address(RVA = "0x53E8660", Offset = "0x53E7660", VA = "0x53E8660")]
	private static extern void get_method_info(IntPtr handle, out System.Reflection.MonoMethodInfo info);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026CB")]
	[Address(RVA = "0x53E8670", Offset = "0x53E7670", VA = "0x53E8670")]
	private static extern int get_method_attributes(IntPtr handle);

	[Token(Token = "0x60026CC")]
	[Address(RVA = "0x53E8680", Offset = "0x53E7680", VA = "0x53E8680")]
	internal static System.Reflection.MonoMethodInfo GetMethodInfo(IntPtr handle)
	{
		return default(System.Reflection.MonoMethodInfo);
	}

	[Token(Token = "0x60026CD")]
	[Address(RVA = "0x53E86C0", Offset = "0x53E76C0", VA = "0x53E86C0")]
	internal static Type GetDeclaringType(IntPtr handle)
	{
		return null;
	}

	[Token(Token = "0x60026CE")]
	[Address(RVA = "0x53E86F0", Offset = "0x53E76F0", VA = "0x53E86F0")]
	internal static Type GetReturnType(IntPtr handle)
	{
		return null;
	}

	[Token(Token = "0x60026CF")]
	[Address(RVA = "0x53E8720", Offset = "0x53E7720", VA = "0x53E8720")]
	internal static MethodAttributes GetAttributes(IntPtr handle)
	{
		return default(MethodAttributes);
	}

	[Token(Token = "0x60026D0")]
	[Address(RVA = "0x53E8730", Offset = "0x53E7730", VA = "0x53E8730")]
	internal static CallingConventions GetCallingConvention(IntPtr handle)
	{
		return default(CallingConventions);
	}

	[Token(Token = "0x60026D1")]
	[Address(RVA = "0x53E8760", Offset = "0x53E7760", VA = "0x53E8760")]
	internal static MethodImplAttributes GetMethodImplementationFlags(IntPtr handle)
	{
		return default(MethodImplAttributes);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026D2")]
	[Address(RVA = "0x53E8790", Offset = "0x53E7790", VA = "0x53E8790")]
	private static extern ParameterInfo[] get_parameter_info(IntPtr handle, MemberInfo member);

	[Token(Token = "0x60026D3")]
	[Address(RVA = "0x53E87A0", Offset = "0x53E77A0", VA = "0x53E87A0")]
	internal static ParameterInfo[] GetParametersInfo(IntPtr handle, MemberInfo member)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60026D4")]
	[Address(RVA = "0x53E87B0", Offset = "0x53E77B0", VA = "0x53E87B0")]
	private static extern MarshalAsAttribute get_retval_marshal(IntPtr handle);

	[Token(Token = "0x60026D5")]
	[Address(RVA = "0x53E87C0", Offset = "0x53E77C0", VA = "0x53E87C0")]
	internal static ParameterInfo GetReturnParameterInfo(System.Reflection.RuntimeMethodInfo method)
	{
		return null;
	}
}
