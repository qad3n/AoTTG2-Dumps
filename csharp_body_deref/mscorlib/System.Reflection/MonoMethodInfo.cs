using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x2000516")]
internal struct MonoMethodInfo
{
	[Token(Token = "0x400153A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Type parent;

	[Token(Token = "0x400153B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private Type ret;

	[Token(Token = "0x400153C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal MethodAttributes attrs;

	[Token(Token = "0x400153D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	internal MethodImplAttributes iattrs;

	[Token(Token = "0x400153E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private CallingConventions callconv;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002679")]
	[Address(RVA = "0x4EFBF70", Offset = "0x4EFBF70", VA = "0x4EFBF70")]
	private static extern void get_method_info(IntPtr handle, out System.Reflection.MonoMethodInfo info);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600267A")]
	[Address(RVA = "0x4EFBF80", Offset = "0x4EFBF80", VA = "0x4EFBF80")]
	private static extern int get_method_attributes(IntPtr handle);

	[Token(Token = "0x600267B")]
	[Address(RVA = "0x4EFBF90", Offset = "0x4EFBF90", VA = "0x4EFBF90")]
	internal static System.Reflection.MonoMethodInfo GetMethodInfo(IntPtr handle)
	{
		return default(System.Reflection.MonoMethodInfo);
	}

	[Token(Token = "0x600267C")]
	[Address(RVA = "0x4EFBFD0", Offset = "0x4EFBFD0", VA = "0x4EFBFD0")]
	internal static Type GetDeclaringType(IntPtr handle)
	{
		return null;
	}

	[Token(Token = "0x600267D")]
	[Address(RVA = "0x4EFC000", Offset = "0x4EFC000", VA = "0x4EFC000")]
	internal static Type GetReturnType(IntPtr handle)
	{
		return null;
	}

	[Token(Token = "0x600267E")]
	[Address(RVA = "0x4EFC030", Offset = "0x4EFC030", VA = "0x4EFC030")]
	internal static MethodAttributes GetAttributes(IntPtr handle)
	{
		return default(MethodAttributes);
	}

	[Token(Token = "0x600267F")]
	[Address(RVA = "0x4EFC040", Offset = "0x4EFC040", VA = "0x4EFC040")]
	internal static CallingConventions GetCallingConvention(IntPtr handle)
	{
		return default(CallingConventions);
	}

	[Token(Token = "0x6002680")]
	[Address(RVA = "0x4EFC070", Offset = "0x4EFC070", VA = "0x4EFC070")]
	internal static MethodImplAttributes GetMethodImplementationFlags(IntPtr handle)
	{
		return default(MethodImplAttributes);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002681")]
	[Address(RVA = "0x4EFC0A0", Offset = "0x4EFC0A0", VA = "0x4EFC0A0")]
	private static extern ParameterInfo[] get_parameter_info(IntPtr handle, MemberInfo member);

	[Token(Token = "0x6002682")]
	[Address(RVA = "0x4EFC0B0", Offset = "0x4EFC0B0", VA = "0x4EFC0B0")]
	internal static ParameterInfo[] GetParametersInfo(IntPtr handle, MemberInfo member)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002683")]
	[Address(RVA = "0x4EFC0C0", Offset = "0x4EFC0C0", VA = "0x4EFC0C0")]
	private static extern MarshalAsAttribute get_retval_marshal(IntPtr handle);

	[Token(Token = "0x6002684")]
	[Address(RVA = "0x4EFC0D0", Offset = "0x4EFC0D0", VA = "0x4EFC0D0")]
	internal static ParameterInfo GetReturnParameterInfo(System.Reflection.RuntimeMethodInfo method)
	{
		return null;
	}
}
