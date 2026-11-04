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

[Token(Token = "0x200000A")]
[UnityEngine.Scripting.UsedByNativeCode]
internal sealed class _AndroidJNIHelper
{
	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x0")]
	private static int FRAME_SIZE_FOR_ARRAYS;

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x2EA7B10", Offset = "0x2EA6110", VA = "0x182EA7B10")]
	public static IntPtr CreateJavaProxy(IntPtr player, IntPtr delegateHandle, AndroidJavaProxy proxy)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x2EA7CC0", Offset = "0x2EA62C0", VA = "0x182EA7CC0")]
	public static IntPtr CreateJavaRunnable(AndroidJavaRunnable jrunnable)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x2EA9670", Offset = "0x2EA7C70", VA = "0x182EA9670")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static IntPtr InvokeJavaProxyMethod(AndroidJavaProxy proxy, IntPtr jmethodName, IntPtr jargs)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x2EA7340", Offset = "0x2EA5940", VA = "0x182EA7340")]
	public static void CreateJNIArgArray(object[] args, Span<jvalue> ret)
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x2EA96F0", Offset = "0x2EA7CF0", VA = "0x182EA96F0")]
	public static object UnboxArray(AndroidJavaObject obj)
	{
		return null;
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x2EA9DF0", Offset = "0x2EA83F0", VA = "0x182EA9DF0")]
	public static object Unbox(AndroidJavaObject obj)
	{
		return null;
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x2EA57C0", Offset = "0x2EA3DC0", VA = "0x182EA57C0")]
	public static AndroidJavaObject Box(object obj)
	{
		return null;
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x2EA7DC0", Offset = "0x2EA63C0", VA = "0x182EA7DC0")]
	public static void DeleteJNIArgArray(object[] args, Span<jvalue> jniArgs)
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x2EA66D0", Offset = "0x2EA4CD0", VA = "0x182EA66D0")]
	public static IntPtr ConvertToJNIArray(Array array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600004D")]
	public static ArrayType ConvertFromJNIArray<ArrayType>(IntPtr array)
	{
		return (ArrayType)null;
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x2EA8060", Offset = "0x2EA6660", VA = "0x182EA8060")]
	public static IntPtr GetConstructorID(IntPtr jclass, object[] args)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x2EA8500", Offset = "0x2EA6B00", VA = "0x182EA8500")]
	public static IntPtr GetMethodID(IntPtr jclass, string methodName, object[] args, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000050")]
	public static IntPtr GetMethodID<ReturnType>(IntPtr jclass, string methodName, object[] args, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000051")]
	public static IntPtr GetFieldID<ReturnType>(IntPtr jclass, string fieldName, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x2EA7F10", Offset = "0x2EA6510", VA = "0x182EA7F10")]
	public static IntPtr GetConstructorID(IntPtr jclass, string signature)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x2EA85B0", Offset = "0x2EA6BB0", VA = "0x182EA85B0")]
	public static IntPtr GetMethodID(IntPtr jclass, string methodName, string signature, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x2EA84D0", Offset = "0x2EA6AD0", VA = "0x182EA84D0")]
	private static IntPtr GetMethodIDFallback(IntPtr jclass, string methodName, string signature, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x2EA8100", Offset = "0x2EA6700", VA = "0x182EA8100")]
	public static IntPtr GetFieldID(IntPtr jclass, string fieldName, string signature, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x2EA8880", Offset = "0x2EA6E80", VA = "0x182EA8880")]
	public static string GetSignature(object obj)
	{
		return null;
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x2EA8740", Offset = "0x2EA6D40", VA = "0x182EA8740")]
	public static string GetSignature(object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000058")]
	public static string GetSignature<ReturnType>(object[] args)
	{
		return null;
	}
}
