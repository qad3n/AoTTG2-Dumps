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

[Token(Token = "0x2000003")]
[UnityEngine.Bindings.NativeHeader("Modules/AndroidJNI/Public/AndroidJNIBindingsHelpers.h")]
[UnityEngine.Bindings.NativeConditional("PLATFORM_ANDROID")]
[UnityEngine.Bindings.StaticAccessor("AndroidJNIBindingsHelpers", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Scripting.UsedByNativeCode]
public static class AndroidJNIHelper
{
	[Token(Token = "0x6000001")]
	[Address(RVA = "0x4D922B0", Offset = "0x4D922B0", VA = "0x4D922B0")]
	public static IntPtr GetConstructorID(IntPtr javaClass, [DefaultValue("")] string signature)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4D92510", Offset = "0x4D92510", VA = "0x4D92510")]
	public static IntPtr GetMethodID(IntPtr javaClass, string methodName, [DefaultValue("")] string signature, [DefaultValue("false")] bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4D927B0", Offset = "0x4D927B0", VA = "0x4D927B0")]
	public static IntPtr GetFieldID(IntPtr javaClass, string fieldName, [DefaultValue("")] string signature, [DefaultValue("false")] bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x4D92BB0", Offset = "0x4D92BB0", VA = "0x4D92BB0")]
	public static IntPtr CreateJavaRunnable(AndroidJavaRunnable jrunnable)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4D92CB0", Offset = "0x4D92CB0", VA = "0x4D92CB0")]
	public static IntPtr CreateJavaProxy(AndroidJavaProxy proxy)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4D92F00", Offset = "0x4D92F00", VA = "0x4D92F00")]
	public static void CreateJNIArgArray(object[] args, Span<jvalue> jniArgs)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4D93650", Offset = "0x4D93650", VA = "0x4D93650")]
	public static void DeleteJNIArgArray(object[] args, Span<jvalue> jniArgs)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x4D93800", Offset = "0x4D93800", VA = "0x4D93800")]
	public static IntPtr GetConstructorID(IntPtr jclass, object[] args)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x4D938E0", Offset = "0x4D938E0", VA = "0x4D938E0")]
	public static IntPtr GetMethodID(IntPtr jclass, string methodName, object[] args, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600000A")]
	public static ArrayType ConvertFromJNIArray<ArrayType>(IntPtr array)
	{
		return (ArrayType)null;
	}

	[Token(Token = "0x600000B")]
	public static IntPtr GetMethodID<ReturnType>(IntPtr jclass, string methodName, object[] args, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600000C")]
	public static IntPtr GetFieldID<FieldType>(IntPtr jclass, string fieldName, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x4D939E0", Offset = "0x4D939E0", VA = "0x4D939E0")]
	private static IntPtr Box(jvalue val, string boxedClass, string signature)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x4D93D60", Offset = "0x4D93D60", VA = "0x4D93D60")]
	public static IntPtr Box(int value)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x4D93DB0", Offset = "0x4D93DB0", VA = "0x4D93DB0")]
	public static IntPtr Box(bool value)
	{
		return default(IntPtr);
	}
}
