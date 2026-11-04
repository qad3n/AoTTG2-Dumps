// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AndroidJNIHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200000C")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/AndroidJNI/Public/AndroidJNIBindingsHelpers.h")]
[UnityEngine.Bindings.StaticAccessor("AndroidJNIBindingsHelpers", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeConditional("PLATFORM_ANDROID")]
public static class AndroidJNIHelper
{
	[Token(Token = "0x600005A")]
	[Address(RVA = "0x2E9B1F0", Offset = "0x2E997F0", VA = "0x182E9B1F0")]
	public static IntPtr GetConstructorID(IntPtr javaClass, [DefaultValue("")] string signature)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x2E9B3A0", Offset = "0x2E999A0", VA = "0x182E9B3A0")]
	public static IntPtr GetMethodID(IntPtr javaClass, string methodName, [DefaultValue("")] string signature, [DefaultValue("false")] bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x2E9B250", Offset = "0x2E99850", VA = "0x182E9B250")]
	public static IntPtr GetFieldID(IntPtr javaClass, string fieldName, [DefaultValue("")] string signature, [DefaultValue("false")] bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x2E9AE70", Offset = "0x2E99470", VA = "0x182E9AE70")]
	public static IntPtr CreateJavaRunnable(AndroidJavaRunnable jrunnable)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x2E9AC10", Offset = "0x2E99210", VA = "0x182E9AC10")]
	public static IntPtr CreateJavaProxy(AndroidJavaProxy proxy)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x2E9AAD0", Offset = "0x2E990D0", VA = "0x182E9AAD0")]
	public static void CreateJNIArgArray(object[] args, Span<jvalue> jniArgs)
	{
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x2E9AFA0", Offset = "0x2E995A0", VA = "0x182E9AFA0")]
	public static void DeleteJNIArgArray(object[] args, Span<jvalue> jniArgs)
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x2E9B120", Offset = "0x2E99720", VA = "0x182E9B120")]
	public static IntPtr GetConstructorID(IntPtr jclass, object[] args)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x2E9B2C0", Offset = "0x2E998C0", VA = "0x182E9B2C0")]
	public static IntPtr GetMethodID(IntPtr jclass, string methodName, object[] args, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000063")]
	public static ArrayType ConvertFromJNIArray<ArrayType>(IntPtr array)
	{
		return (ArrayType)null;
	}

	[Token(Token = "0x6000064")]
	public static IntPtr GetMethodID<ReturnType>(IntPtr jclass, string methodName, object[] args, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000065")]
	public static IntPtr GetFieldID<FieldType>(IntPtr jclass, string fieldName, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x2E9A9B0", Offset = "0x2E98FB0", VA = "0x182E9A9B0")]
	private static IntPtr Box(jvalue val, string boxedClass, string signature)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x2E9A8F0", Offset = "0x2E98EF0", VA = "0x182E9A8F0")]
	public static IntPtr Box(int value)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x2E9A950", Offset = "0x2E98F50", VA = "0x182E9A950")]
	public static IntPtr Box(bool value)
	{
		return default(IntPtr);
	}
}
