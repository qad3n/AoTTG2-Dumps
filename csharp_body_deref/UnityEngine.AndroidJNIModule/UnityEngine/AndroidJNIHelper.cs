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
	[Address(RVA = "0x4A6AA90", Offset = "0x4A6AA90", VA = "0x4A6AA90")]
	public static IntPtr GetConstructorID(IntPtr javaClass, [DefaultValue("")] string signature)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4A6ACF0", Offset = "0x4A6ACF0", VA = "0x4A6ACF0")]
	public static IntPtr GetMethodID(IntPtr javaClass, string methodName, [DefaultValue("")] string signature, [DefaultValue("false")] bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4A6AF90", Offset = "0x4A6AF90", VA = "0x4A6AF90")]
	public static IntPtr GetFieldID(IntPtr javaClass, string fieldName, [DefaultValue("")] string signature, [DefaultValue("false")] bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x4A6B390", Offset = "0x4A6B390", VA = "0x4A6B390")]
	public static IntPtr CreateJavaRunnable(AndroidJavaRunnable jrunnable)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4A6B490", Offset = "0x4A6B490", VA = "0x4A6B490")]
	public static IntPtr CreateJavaProxy(AndroidJavaProxy proxy)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4A6B6E0", Offset = "0x4A6B6E0", VA = "0x4A6B6E0")]
	public static void CreateJNIArgArray(object[] args, Span<jvalue> jniArgs)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4A6BE30", Offset = "0x4A6BE30", VA = "0x4A6BE30")]
	public static void DeleteJNIArgArray(object[] args, Span<jvalue> jniArgs)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x4A6BFE0", Offset = "0x4A6BFE0", VA = "0x4A6BFE0")]
	public static IntPtr GetConstructorID(IntPtr jclass, object[] args)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x4A6C0C0", Offset = "0x4A6C0C0", VA = "0x4A6C0C0")]
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
	[Address(RVA = "0x4A6C1C0", Offset = "0x4A6C1C0", VA = "0x4A6C1C0")]
	private static IntPtr Box(jvalue val, string boxedClass, string signature)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x4A6C540", Offset = "0x4A6C540", VA = "0x4A6C540")]
	public static IntPtr Box(int value)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x4A6C590", Offset = "0x4A6C590", VA = "0x4A6C590")]
	public static IntPtr Box(bool value)
	{
		return default(IntPtr);
	}
}
