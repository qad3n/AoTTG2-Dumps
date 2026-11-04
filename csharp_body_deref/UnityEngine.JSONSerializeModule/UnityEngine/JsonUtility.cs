// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.JsonUtility
// Update status: CHANGED in this game update
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
	[Address(RVA = "0x2FC6CD0", Offset = "0x2FC52D0", VA = "0x182FC6CD0")]
	[UnityEngine.Bindings.FreeFunction("ToJsonInternal", true)]
	[UnityEngine.Bindings.ThreadSafe]
	private static string ToJsonInternal([UnityEngine.Bindings.NotNull] object obj, bool prettyPrint)
	{
		return null;
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x2FC6910", Offset = "0x2FC4F10", VA = "0x182FC6910")]
	[UnityEngine.Bindings.FreeFunction("FromJsonInternal", true, ThrowsException = true)]
	[UnityEngine.Bindings.ThreadSafe]
	private static object FromJsonInternal(string json, object objectToOverwrite, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x2FC6DE0", Offset = "0x2FC53E0", VA = "0x182FC6DE0")]
	public static string ToJson(object obj)
	{
		return null;
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x2FC6F30", Offset = "0x2FC5530", VA = "0x182FC6F30")]
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
	[Address(RVA = "0x2FC6AA0", Offset = "0x2FC50A0", VA = "0x182FC6AA0")]
	public static object FromJson(string json, Type type)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000007")]
	[Address(RVA = "0x2FC6C70", Offset = "0x2FC5270", VA = "0x182FC6C70")]
	private static extern void ToJsonInternal_Injected(object obj, bool prettyPrint, out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000008")]
	[Address(RVA = "0x2FC68B0", Offset = "0x2FC4EB0", VA = "0x182FC68B0")]
	private static extern object FromJsonInternal_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper json, object objectToOverwrite, Type type);
}
