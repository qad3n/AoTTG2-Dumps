// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AndroidReflection
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000009")]
internal class AndroidReflection
{
	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly GlobalJavaObjectRef s_ReflectionHelperClass;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x8")]
	private static readonly IntPtr s_ReflectionHelperGetConstructorID;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x10")]
	private static readonly IntPtr s_ReflectionHelperGetMethodID;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x18")]
	private static readonly IntPtr s_ReflectionHelperGetFieldID;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x20")]
	private static readonly IntPtr s_ReflectionHelperGetFieldSignature;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x28")]
	private static readonly IntPtr s_ReflectionHelperNewProxyInstance;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x30")]
	private static readonly IntPtr s_ReflectionHelperCeateInvocationError;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x38")]
	private static readonly IntPtr s_FieldGetDeclaringClass;

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x1C53BD0", Offset = "0x1C521D0", VA = "0x181C53BD0")]
	public static bool IsPrimitive(Type t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x1D67630", Offset = "0x1D65C30", VA = "0x181D67630")]
	public static bool IsAssignableFrom(Type t, Type from)
	{
		return default(bool);
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x2EA50D0", Offset = "0x2EA36D0", VA = "0x182EA50D0")]
	private static IntPtr GetStaticMethodID(string clazz, string methodName, string signature)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x2EA4E10", Offset = "0x2EA3410", VA = "0x182EA4E10")]
	private static IntPtr GetMethodID(string clazz, string methodName, string signature)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x2EA48B0", Offset = "0x2EA2EB0", VA = "0x182EA48B0")]
	public static IntPtr GetConstructorMember(IntPtr jclass, string signature)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x2EA4ED0", Offset = "0x2EA34D0", VA = "0x182EA4ED0")]
	public static IntPtr GetMethodMember(IntPtr jclass, string methodName, string signature, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x2EA4B00", Offset = "0x2EA3100", VA = "0x182EA4B00")]
	public static IntPtr GetFieldMember(IntPtr jclass, string fieldName, string signature, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x2EA4A60", Offset = "0x2EA3060", VA = "0x182EA4A60")]
	public static IntPtr GetFieldClass(IntPtr field)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x2EA4D00", Offset = "0x2EA3300", VA = "0x182EA4D00")]
	public static string GetFieldSignature(IntPtr field)
	{
		return null;
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x2EA5190", Offset = "0x2EA3790", VA = "0x182EA5190")]
	public static IntPtr NewProxyInstance(IntPtr player, IntPtr delegateHandle, IntPtr interfaze)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x2EA4760", Offset = "0x2EA2D60", VA = "0x182EA4760")]
	internal static IntPtr CreateInvocationError(Exception ex, bool methodNotFound)
	{
		return default(IntPtr);
	}
}
