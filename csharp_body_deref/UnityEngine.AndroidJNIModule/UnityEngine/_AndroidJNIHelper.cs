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

[Token(Token = "0x200000F")]
[UnityEngine.Scripting.UsedByNativeCode]
internal sealed class _AndroidJNIHelper
{
	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x0")]
	private static int FRAME_SIZE_FOR_ARRAYS;

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x6896EC0", Offset = "0x6895EC0", VA = "0x6896EC0")]
	public static IntPtr CreateJavaProxy(IntPtr player, IntPtr delegateHandle, AndroidJavaProxy proxy)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x6896CC0", Offset = "0x6895CC0", VA = "0x6896CC0")]
	public static IntPtr CreateJavaRunnable(AndroidJavaRunnable jrunnable)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x68A35C0", Offset = "0x68A25C0", VA = "0x68A35C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static IntPtr InvokeJavaProxyMethod(AndroidJavaProxy proxy, IntPtr jmethodName, IntPtr jargs)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x6897060", Offset = "0x6896060", VA = "0x6897060")]
	public static void CreateJNIArgArray(object[] args, Span<jvalue> ret)
	{
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x68A44A0", Offset = "0x68A34A0", VA = "0x68A44A0")]
	public static object UnboxArray(AndroidJavaObject obj)
	{
		return null;
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x68A0A80", Offset = "0x689FA80", VA = "0x68A0A80")]
	public static object Unbox(AndroidJavaObject obj)
	{
		return null;
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x689FC10", Offset = "0x689EC10", VA = "0x689FC10")]
	public static AndroidJavaObject Box(object obj)
	{
		return null;
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x6897740", Offset = "0x6896740", VA = "0x6897740")]
	public static void DeleteJNIArgArray(object[] args, Span<jvalue> jniArgs)
	{
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x68A36B0", Offset = "0x68A26B0", VA = "0x68A36B0")]
	public static IntPtr ConvertToJNIArray(Array array)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000129")]
	public static ArrayType ConvertFromJNIArray<ArrayType>(IntPtr array)
	{
		return (ArrayType)null;
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x68978E0", Offset = "0x68968E0", VA = "0x68978E0")]
	public static IntPtr GetConstructorID(IntPtr jclass, object[] args)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x68979E0", Offset = "0x68969E0", VA = "0x68979E0")]
	public static IntPtr GetMethodID(IntPtr jclass, string methodName, object[] args, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600012C")]
	public static IntPtr GetMethodID<ReturnType>(IntPtr jclass, string methodName, object[] args, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600012D")]
	public static IntPtr GetFieldID<ReturnType>(IntPtr jclass, string fieldName, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x6896430", Offset = "0x6895430", VA = "0x6896430")]
	public static IntPtr GetConstructorID(IntPtr jclass, string signature)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x6896680", Offset = "0x6895680", VA = "0x6896680")]
	public static IntPtr GetMethodID(IntPtr jclass, string methodName, string signature, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x68A4F40", Offset = "0x68A3F40", VA = "0x68A4F40")]
	private static IntPtr GetMethodIDFallback(IntPtr jclass, string methodName, string signature, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x68968F0", Offset = "0x68958F0", VA = "0x68968F0")]
	public static IntPtr GetFieldID(IntPtr jclass, string fieldName, string signature, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x68A4FD0", Offset = "0x68A3FD0", VA = "0x68A4FD0")]
	public static string GetSignature(object obj)
	{
		return null;
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x68A4DF0", Offset = "0x68A3DF0", VA = "0x68A4DF0")]
	public static string GetSignature(object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000134")]
	public static string GetSignature<ReturnType>(object[] args)
	{
		return null;
	}
}
