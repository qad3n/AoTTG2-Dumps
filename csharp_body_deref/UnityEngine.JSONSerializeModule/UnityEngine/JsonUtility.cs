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
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000001")]
	[Address(RVA = "0x4E71910", Offset = "0x4E71910", VA = "0x4E71910")]
	[UnityEngine.Bindings.FreeFunction("ToJsonInternal", true)]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern string ToJsonInternal([UnityEngine.Bindings.NotNull("ArgumentNullException")] object obj, bool prettyPrint);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4E71950", Offset = "0x4E71950", VA = "0x4E71950")]
	[UnityEngine.Bindings.FreeFunction("FromJsonInternal", true, ThrowsException = true)]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern object FromJsonInternal(string json, object objectToOverwrite, Type type);

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4E71990", Offset = "0x4E71990", VA = "0x4E71990")]
	public static string ToJson(object obj)
	{
		return null;
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x4E719A0", Offset = "0x4E719A0", VA = "0x4E719A0")]
	public static string ToJson(object obj, bool prettyPrint)
	{
		return null;
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4E71AE0", Offset = "0x4E71AE0", VA = "0x4E71AE0")]
	public static object FromJson(string json, Type type)
	{
		return null;
	}
}
