// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.JsonUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000002")]
[UnityEngine.Bindings.NativeHeader("Modules/JSONSerialize/Public/JsonUtility.bindings.h")]
public static class JsonUtility
{
	[Token(Token = "0x6000001")]
	[Address(RVA = "0x69C12C0", Offset = "0x69C02C0", VA = "0x69C12C0")]
	[UnityEngine.Bindings.FreeFunction("ToJsonInternal", true)]
	[UnityEngine.Bindings.ThreadSafe]
	private static string ToJsonInternal([UnityEngine.Bindings.NotNull] object obj, bool prettyPrint)
	{
		return null;
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x69C1410", Offset = "0x69C0410", VA = "0x69C1410")]
	[UnityEngine.Bindings.FreeFunction("FromJsonInternal", true, ThrowsException = true)]
	[UnityEngine.Bindings.ThreadSafe]
	private static object FromJsonInternal(string json, object objectToOverwrite, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x69C15D0", Offset = "0x69C05D0", VA = "0x69C15D0")]
	public static string ToJson(object obj)
	{
		return null;
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x69C15E0", Offset = "0x69C05E0", VA = "0x69C15E0")]
	public static string ToJson(object obj, bool prettyPrint)
	{
		return null;
	}

	[Token(Token = "0x6000005")]
	public static T FromJson<T>(string json)
	{
		return (T)null;
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x69C1700", Offset = "0x69C0700", VA = "0x69C1700")]
	public static object FromJson(string json, Type type)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000007")]
	[Address(RVA = "0x69C13D0", Offset = "0x69C03D0", VA = "0x69C13D0")]
	private static extern void ToJsonInternal_Injected(object obj, bool prettyPrint, out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000008")]
	[Address(RVA = "0x69C1590", Offset = "0x69C0590", VA = "0x69C1590")]
	private static extern object FromJsonInternal_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper json, object objectToOverwrite, Type type);
}
