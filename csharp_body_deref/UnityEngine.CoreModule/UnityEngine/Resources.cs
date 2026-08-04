// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Resources
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngineInternal;

namespace UnityEngine;

[Token(Token = "0x200013D")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/ResourceManagerUtility.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Resources/Resources.bindings.h")]
public sealed class Resources
{
	[Token(Token = "0x600095E")]
	internal static T[] ConvertObjects<T>(Object[] rawObjects) where T : Object
	{
		return null;
	}

	[Token(Token = "0x600095F")]
	[Address(RVA = "0x4DF2B60", Offset = "0x4DF2B60", VA = "0x4DF2B60")]
	public static Object[] FindObjectsOfTypeAll(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000960")]
	public static T[] FindObjectsOfTypeAll<T>() where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000961")]
	[Address(RVA = "0x4DF2BE0", Offset = "0x4DF2BE0", VA = "0x4DF2BE0")]
	public static Object Load(string path)
	{
		return null;
	}

	[Token(Token = "0x6000962")]
	public static T Load<T>(string path) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000963")]
	[Address(RVA = "0x4DF2650", Offset = "0x4DF2650", VA = "0x4DF2650")]
	public static Object Load(string path, Type systemTypeInstance)
	{
		return null;
	}

	[Token(Token = "0x6000964")]
	public static ResourceRequest LoadAsync<T>(string path) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000965")]
	[Address(RVA = "0x4DF2CC0", Offset = "0x4DF2CC0", VA = "0x4DF2CC0")]
	public static ResourceRequest LoadAsync(string path, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000966")]
	[Address(RVA = "0x4DF2D50", Offset = "0x4DF2D50", VA = "0x4DF2D50")]
	public static Object[] LoadAll(string path, Type systemTypeInstance)
	{
		return null;
	}

	[Token(Token = "0x6000967")]
	public static T[] LoadAll<T>(string path) where T : Object
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000968")]
	[Address(RVA = "0x4DF2DE0", Offset = "0x4DF2DE0", VA = "0x4DF2DE0")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	[UnityEngine.Bindings.FreeFunction("GetScriptingBuiltinResource", ThrowsException = true)]
	public static extern Object GetBuiltinResource([UnityEngine.Bindings.NotNull("ArgumentNullException")] Type type, string path);

	[Token(Token = "0x6000969")]
	public static T GetBuiltinResource<T>(string path) where T : Object
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600096A")]
	[Address(RVA = "0x4DF2E20", Offset = "0x4DF2E20", VA = "0x4DF2E20")]
	[UnityEngine.Bindings.FreeFunction("Resources_Bindings::UnloadUnusedAssets")]
	public static extern AsyncOperation UnloadUnusedAssets();
}
