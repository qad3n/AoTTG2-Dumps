using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000002")]
[UnityEngine.Bindings.NativeHeader("Modules/JSONSerialize/Public/JsonUtility.bindings.h")]
public static class JsonUtility
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000001")]
	[Address(RVA = "0x4B49FE0", Offset = "0x4B49FE0", VA = "0x4B49FE0")]
	[UnityEngine.Bindings.FreeFunction("ToJsonInternal", true)]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern string ToJsonInternal([UnityEngine.Bindings.NotNull("ArgumentNullException")] object obj, bool prettyPrint);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4B4A020", Offset = "0x4B4A020", VA = "0x4B4A020")]
	[UnityEngine.Bindings.FreeFunction("FromJsonInternal", true, ThrowsException = true)]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern object FromJsonInternal(string json, object objectToOverwrite, Type type);

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4B4A060", Offset = "0x4B4A060", VA = "0x4B4A060")]
	public static string ToJson(object obj)
	{
		return null;
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x4B4A070", Offset = "0x4B4A070", VA = "0x4B4A070")]
	public static string ToJson(object obj, bool prettyPrint)
	{
		return null;
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4B4A1B0", Offset = "0x4B4A1B0", VA = "0x4B4A1B0")]
	public static object FromJson(string json, Type type)
	{
		return null;
	}
}
