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
	[Address(RVA = "0x4A76770", Offset = "0x4A76770", VA = "0x4A76770")]
	public static bool IsPrimitive(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x4A76790", Offset = "0x4A76790", VA = "0x4A76790")]
	public static bool IsAssignableFrom(Type t, Type from)
	{
		return default(bool);
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x4A767B0", Offset = "0x4A767B0", VA = "0x4A767B0")]
	private static IntPtr GetStaticMethodID(string clazz, string methodName, string signature)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x4A768A0", Offset = "0x4A768A0", VA = "0x4A768A0")]
	private static IntPtr GetMethodID(string clazz, string methodName, string signature)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x4A76990", Offset = "0x4A76990", VA = "0x4A76990")]
	public static IntPtr GetConstructorMember(IntPtr jclass, string signature)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x4A76BC0", Offset = "0x4A76BC0", VA = "0x4A76BC0")]
	public static IntPtr GetMethodMember(IntPtr jclass, string methodName, string signature, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x4A76E00", Offset = "0x4A76E00", VA = "0x4A76E00")]
	public static IntPtr GetFieldMember(IntPtr jclass, string fieldName, string signature, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x4A77040", Offset = "0x4A77040", VA = "0x4A77040")]
	public static IntPtr GetFieldClass(IntPtr field)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x4A770F0", Offset = "0x4A770F0", VA = "0x4A770F0")]
	public static string GetFieldSignature(IntPtr field)
	{
		return null;
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x4A771D0", Offset = "0x4A771D0", VA = "0x4A771D0")]
	public static IntPtr NewProxyInstance(IntPtr player, IntPtr delegateHandle, IntPtr interfaze)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x4A74030", Offset = "0x4A74030", VA = "0x4A74030")]
	public static void SetNativeExceptionOnProxy(IntPtr proxy, Exception e, bool methodNotFound)
	{
	}
}
