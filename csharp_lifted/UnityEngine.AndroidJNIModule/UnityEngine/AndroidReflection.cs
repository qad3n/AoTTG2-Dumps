// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AndroidReflection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200000E")]
internal class AndroidReflection
{
	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x0")]
	private static readonly GlobalJavaObjectRef s_ReflectionHelperClass;

	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x8")]
	private static readonly IntPtr s_ReflectionHelperGetConstructorID;

	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x10")]
	private static readonly IntPtr s_ReflectionHelperGetMethodID;

	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x18")]
	private static readonly IntPtr s_ReflectionHelperGetFieldID;

	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x20")]
	private static readonly IntPtr s_ReflectionHelperGetFieldSignature;

	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x28")]
	private static readonly IntPtr s_ReflectionHelperNewProxyInstance;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x30")]
	private static readonly IntPtr s_ReflectionHelperCeateInvocationError;

	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x38")]
	private static readonly IntPtr s_FieldGetDeclaringClass;

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x68A2880", Offset = "0x68A1880", VA = "0x68A2880")]
	public static bool IsPrimitive(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x68A28A0", Offset = "0x68A18A0", VA = "0x68A28A0")]
	public static bool IsAssignableFrom(Type t, Type from)
	{
		return default(bool);
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x68A28C0", Offset = "0x68A18C0", VA = "0x68A28C0")]
	private static IntPtr GetStaticMethodID(string clazz, string methodName, string signature)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x68A29A0", Offset = "0x68A19A0", VA = "0x68A29A0")]
	private static IntPtr GetMethodID(string clazz, string methodName, string signature)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x68A2A80", Offset = "0x68A1A80", VA = "0x68A2A80")]
	public static IntPtr GetConstructorMember(IntPtr jclass, string signature)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x68A2C70", Offset = "0x68A1C70", VA = "0x68A2C70")]
	public static IntPtr GetMethodMember(IntPtr jclass, string methodName, string signature, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x68A2E60", Offset = "0x68A1E60", VA = "0x68A2E60")]
	public static IntPtr GetFieldMember(IntPtr jclass, string fieldName, string signature, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x68A3050", Offset = "0x68A2050", VA = "0x68A3050")]
	public static IntPtr GetFieldClass(IntPtr field)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x68A3100", Offset = "0x68A2100", VA = "0x68A3100")]
	public static string GetFieldSignature(IntPtr field)
	{
		return null;
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x68A31E0", Offset = "0x68A21E0", VA = "0x68A31E0")]
	public static IntPtr NewProxyInstance(IntPtr player, IntPtr delegateHandle, IntPtr interfaze)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x68A0570", Offset = "0x689F570", VA = "0x68A0570")]
	internal static IntPtr CreateInvocationError(Exception ex, bool methodNotFound)
	{
		return default(IntPtr);
	}
}
