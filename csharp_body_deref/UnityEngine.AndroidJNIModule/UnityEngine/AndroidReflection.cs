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

[Token(Token = "0x200000D")]
internal class AndroidReflection
{
	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x0")]
	private static readonly GlobalJavaObjectRef s_ReflectionHelperClass;

	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x8")]
	private static readonly IntPtr s_ReflectionHelperGetConstructorID;

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x10")]
	private static readonly IntPtr s_ReflectionHelperGetMethodID;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x18")]
	private static readonly IntPtr s_ReflectionHelperGetFieldID;

	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x20")]
	private static readonly IntPtr s_ReflectionHelperGetFieldSignature;

	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x28")]
	private static readonly IntPtr s_ReflectionHelperNewProxyInstance;

	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x30")]
	private static readonly IntPtr s_ReflectionHelperSetNativeExceptionOnProxy;

	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x38")]
	private static readonly IntPtr s_FieldGetDeclaringClass;

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x4D9DF90", Offset = "0x4D9DF90", VA = "0x4D9DF90")]
	public static bool IsPrimitive(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x4D9DFB0", Offset = "0x4D9DFB0", VA = "0x4D9DFB0")]
	public static bool IsAssignableFrom(Type t, Type from)
	{
		return default(bool);
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x4D9DFD0", Offset = "0x4D9DFD0", VA = "0x4D9DFD0")]
	private static IntPtr GetStaticMethodID(string clazz, string methodName, string signature)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x4D9E0C0", Offset = "0x4D9E0C0", VA = "0x4D9E0C0")]
	private static IntPtr GetMethodID(string clazz, string methodName, string signature)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x4D9E1B0", Offset = "0x4D9E1B0", VA = "0x4D9E1B0")]
	public static IntPtr GetConstructorMember(IntPtr jclass, string signature)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x4D9E3E0", Offset = "0x4D9E3E0", VA = "0x4D9E3E0")]
	public static IntPtr GetMethodMember(IntPtr jclass, string methodName, string signature, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x4D9E620", Offset = "0x4D9E620", VA = "0x4D9E620")]
	public static IntPtr GetFieldMember(IntPtr jclass, string fieldName, string signature, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x4D9E860", Offset = "0x4D9E860", VA = "0x4D9E860")]
	public static IntPtr GetFieldClass(IntPtr field)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x4D9E910", Offset = "0x4D9E910", VA = "0x4D9E910")]
	public static string GetFieldSignature(IntPtr field)
	{
		return null;
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x4D9E9F0", Offset = "0x4D9E9F0", VA = "0x4D9E9F0")]
	public static IntPtr NewProxyInstance(IntPtr player, IntPtr delegateHandle, IntPtr interfaze)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x4D9B850", Offset = "0x4D9B850", VA = "0x4D9B850")]
	public static void SetNativeExceptionOnProxy(IntPtr proxy, Exception e, bool methodNotFound)
	{
	}
}
