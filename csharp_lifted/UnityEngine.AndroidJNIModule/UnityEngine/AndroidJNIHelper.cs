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
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/AndroidJNI/Public/AndroidJNIBindingsHelpers.h")]
[UnityEngine.Bindings.StaticAccessor("AndroidJNIBindingsHelpers", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeConditional("PLATFORM_ANDROID")]
public static class AndroidJNIHelper
{
	[Token(Token = "0x6000001")]
	[Address(RVA = "0x68963E0", Offset = "0x68953E0", VA = "0x68963E0")]
	public static IntPtr GetConstructorID(IntPtr javaClass, [DefaultValue("")] string signature)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x6896610", Offset = "0x6895610", VA = "0x6896610")]
	public static IntPtr GetMethodID(IntPtr javaClass, string methodName, [DefaultValue("")] string signature, [DefaultValue("false")] bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x6896880", Offset = "0x6895880", VA = "0x6896880")]
	public static IntPtr GetFieldID(IntPtr javaClass, string fieldName, [DefaultValue("")] string signature, [DefaultValue("false")] bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x6896C10", Offset = "0x6895C10", VA = "0x6896C10")]
	public static IntPtr CreateJavaRunnable(AndroidJavaRunnable jrunnable)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x6896D10", Offset = "0x6895D10", VA = "0x6896D10")]
	public static IntPtr CreateJavaProxy(AndroidJavaProxy proxy)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x6896F40", Offset = "0x6895F40", VA = "0x6896F40")]
	public static void CreateJNIArgArray(object[] args, Span<jvalue> jniArgs)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x68976E0", Offset = "0x68966E0", VA = "0x68976E0")]
	public static void DeleteJNIArgArray(object[] args, Span<jvalue> jniArgs)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x6897890", Offset = "0x6896890", VA = "0x6897890")]
	public static IntPtr GetConstructorID(IntPtr jclass, object[] args)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x6897970", Offset = "0x6896970", VA = "0x6897970")]
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
	[Address(RVA = "0x6897A80", Offset = "0x6896A80", VA = "0x6897A80")]
	private static IntPtr Box(jvalue val, string boxedClass, string signature)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x6897D90", Offset = "0x6896D90", VA = "0x6897D90")]
	public static IntPtr Box(int value)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x6897DE0", Offset = "0x6896DE0", VA = "0x6897DE0")]
	public static IntPtr Box(bool value)
	{
		return default(IntPtr);
	}
}
