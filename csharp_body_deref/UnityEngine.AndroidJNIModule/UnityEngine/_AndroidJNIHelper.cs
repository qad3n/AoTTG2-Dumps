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
	[Address(RVA = "0x4A6B660", Offset = "0x4A6B660", VA = "0x4A6B660")]
	public static IntPtr CreateJavaProxy(IntPtr player, IntPtr delegateHandle, AndroidJavaProxy proxy)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x4A6B440", Offset = "0x4A6B440", VA = "0x4A6B440")]
	public static IntPtr CreateJavaRunnable(AndroidJavaRunnable jrunnable)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x4A775B0", Offset = "0x4A775B0", VA = "0x4A775B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static IntPtr InvokeJavaProxyMethod(AndroidJavaProxy proxy, IntPtr jmethodName, IntPtr jargs)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x4A6B800", Offset = "0x4A6B800", VA = "0x4A6B800")]
	public static void CreateJNIArgArray(object[] args, Span<jvalue> ret)
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x4A782F0", Offset = "0x4A782F0", VA = "0x4A782F0")]
	public static object UnboxArray(AndroidJavaObject obj)
	{
		return null;
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x4A743B0", Offset = "0x4A743B0", VA = "0x4A743B0")]
	public static object Unbox(AndroidJavaObject obj)
	{
		return null;
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x4A734E0", Offset = "0x4A734E0", VA = "0x4A734E0")]
	public static AndroidJavaObject Box(object obj)
	{
		return null;
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x4A6BE80", Offset = "0x4A6BE80", VA = "0x4A6BE80")]
	public static void DeleteJNIArgArray(object[] args, Span<jvalue> jniArgs)
	{
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x4A777A0", Offset = "0x4A777A0", VA = "0x4A777A0")]
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
	[Address(RVA = "0x4A6C030", Offset = "0x4A6C030", VA = "0x4A6C030")]
	public static IntPtr GetConstructorID(IntPtr jclass, object[] args)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x4A6C120", Offset = "0x4A6C120", VA = "0x4A6C120")]
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
	[Address(RVA = "0x4A6AAE0", Offset = "0x4A6AAE0", VA = "0x4A6AAE0")]
	public static IntPtr GetConstructorID(IntPtr jclass, string signature)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x4A6AD50", Offset = "0x4A6AD50", VA = "0x4A6AD50")]
	public static IntPtr GetMethodID(IntPtr jclass, string methodName, string signature, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x4A78EA0", Offset = "0x4A78EA0", VA = "0x4A78EA0")]
	private static IntPtr GetMethodIDFallback(IntPtr jclass, string methodName, string signature, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x4A6AFF0", Offset = "0x4A6AFF0", VA = "0x4A6AFF0")]
	public static IntPtr GetFieldID(IntPtr jclass, string fieldName, string signature, bool isStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x4A78F30", Offset = "0x4A78F30", VA = "0x4A78F30")]
	public static string GetSignature(object obj)
	{
		return null;
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x4A78D40", Offset = "0x4A78D40", VA = "0x4A78D40")]
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
