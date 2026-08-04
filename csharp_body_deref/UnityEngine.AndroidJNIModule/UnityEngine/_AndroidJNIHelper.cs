// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine._AndroidJNIHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200000E")]
[UnityEngine.Scripting.UsedByNativeCode]
internal sealed class _AndroidJNIHelper
{
	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x0")]
	private static int FRAME_SIZE_FOR_ARRAYS;

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x4D92E80", Offset = "0x4D92E80", VA = "0x4D92E80")]
	public static IntPtr CreateJavaProxy(IntPtr player, IntPtr delegateHandle, AndroidJavaProxy proxy)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x4D92C60", Offset = "0x4D92C60", VA = "0x4D92C60")]
	public static IntPtr CreateJavaRunnable(AndroidJavaRunnable jrunnable)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x4D9EDD0", Offset = "0x4D9EDD0", VA = "0x4D9EDD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static IntPtr InvokeJavaProxyMethod(AndroidJavaProxy proxy, IntPtr jmethodName, IntPtr jargs)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x4D93020", Offset = "0x4D93020", VA = "0x4D93020")]
	public static void CreateJNIArgArray(object[] args, Span<jvalue> ret)
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x4D9FB10", Offset = "0x4D9FB10", VA = "0x4D9FB10")]
	public static object UnboxArray(AndroidJavaObject obj)
	{
		return null;
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x4D9BBD0", Offset = "0x4D9BBD0", VA = "0x4D9BBD0")]
	public static object Unbox(AndroidJavaObject obj)
	{
		return null;
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x4D9AD00", Offset = "0x4D9AD00", VA = "0x4D9AD00")]
	public static AndroidJavaObject Box(object obj)
	{
		return null;
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x4D936A0", Offset = "0x4D936A0", VA = "0x4D936A0")]
	public static void DeleteJNIArgArray(object[] args, Span<jvalue> jniArgs)
	{
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x4D9EFC0", Offset = "0x4D9EFC0", VA = "0x4D9EFC0")]
	public static IntPtr ConvertToJNIArray(Array array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000116")]
	public static ArrayType ConvertFromJNIArray<ArrayType>(IntPtr array)
	{
		return (ArrayType)null;
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x4D93850", Offset = "0x4D93850", VA = "0x4D93850")]
	public static IntPtr GetConstructorID(IntPtr jclass, object[] args)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x4D93940", Offset = "0x4D93940", VA = "0x4D93940")]
	public static IntPtr GetMethodID(IntPtr jclass, string methodName, object[] args, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000119")]
	public static IntPtr GetMethodID<ReturnType>(IntPtr jclass, string methodName, object[] args, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600011A")]
	public static IntPtr GetFieldID<ReturnType>(IntPtr jclass, string fieldName, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x4D92300", Offset = "0x4D92300", VA = "0x4D92300")]
	public static IntPtr GetConstructorID(IntPtr jclass, string signature)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x4D92570", Offset = "0x4D92570", VA = "0x4D92570")]
	public static IntPtr GetMethodID(IntPtr jclass, string methodName, string signature, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x4DA06C0", Offset = "0x4DA06C0", VA = "0x4DA06C0")]
	private static IntPtr GetMethodIDFallback(IntPtr jclass, string methodName, string signature, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x4D92810", Offset = "0x4D92810", VA = "0x4D92810")]
	public static IntPtr GetFieldID(IntPtr jclass, string fieldName, string signature, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x4DA0750", Offset = "0x4DA0750", VA = "0x4DA0750")]
	public static string GetSignature(object obj)
	{
		return null;
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x4DA0560", Offset = "0x4DA0560", VA = "0x4DA0560")]
	public static string GetSignature(object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000121")]
	public static string GetSignature<ReturnType>(object[] args)
	{
		return null;
	}
}
