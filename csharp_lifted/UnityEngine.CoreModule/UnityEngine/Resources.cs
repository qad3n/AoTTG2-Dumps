// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Resources
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngineInternal;

namespace UnityEngine;

[Token(Token = "0x200016B")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/ResourceManagerUtility.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Resources/Resources.bindings.h")]
public sealed class Resources
{
	[Token(Token = "0x6000C92")]
	internal static T[] ConvertObjects<T>(Object[] rawObjects) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000C93")]
	[Address(RVA = "0x690F7E0", Offset = "0x690E7E0", VA = "0x690F7E0")]
	public static Object[] FindObjectsOfTypeAll(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000C94")]
	public static T[] FindObjectsOfTypeAll<T>() where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000C95")]
	[Address(RVA = "0x690F860", Offset = "0x690E860", VA = "0x690F860")]
	public static Object Load(string path)
	{
		return null;
	}

	[Token(Token = "0x6000C96")]
	public static T Load<T>(string path) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000C97")]
	[Address(RVA = "0x690E850", Offset = "0x690D850", VA = "0x690E850")]
	public static Object Load(string path, Type systemTypeInstance)
	{
		return null;
	}

	[Token(Token = "0x6000C98")]
	public static ResourceRequest LoadAsync<T>(string path) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000C99")]
	[Address(RVA = "0x690F940", Offset = "0x690E940", VA = "0x690F940")]
	public static ResourceRequest LoadAsync(string path, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000C9A")]
	[Address(RVA = "0x690F9D0", Offset = "0x690E9D0", VA = "0x690F9D0")]
	public static Object[] LoadAll(string path, Type systemTypeInstance)
	{
		return null;
	}

	[Token(Token = "0x6000C9B")]
	public static T[] LoadAll<T>(string path) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000C9C")]
	[Address(RVA = "0x690FA60", Offset = "0x690EA60", VA = "0x690FA60")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	[UnityEngine.Bindings.FreeFunction("GetScriptingBuiltinResource", ThrowsException = true)]
	public static Object GetBuiltinResource([UnityEngine.Bindings.NotNull] Type type, string path)
	{
		return null;
	}

	[Token(Token = "0x6000C9D")]
	public static T GetBuiltinResource<T>(string path) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000C9E")]
	[Address(RVA = "0x690FCD0", Offset = "0x690ECD0", VA = "0x690FCD0")]
	public static void UnloadAsset(Object assetToUnload)
	{
	}

	[Token(Token = "0x6000C9F")]
	[Address(RVA = "0x690FD50", Offset = "0x690ED50", VA = "0x690FD50")]
	[UnityEngine.Bindings.FreeFunction("Resources_Bindings::UnloadUnusedAssets")]
	public static AsyncOperation UnloadUnusedAssets()
	{
		return null;
	}

	[Token(Token = "0x6000CA0")]
	[Address(RVA = "0x690FEC0", Offset = "0x690EEC0", VA = "0x690FEC0")]
	[UnityEngine.Bindings.FreeFunction("Resources_Bindings::InstanceIDToObject")]
	public static Object EntityIdToObject(EntityId entityId)
	{
		return null;
	}

	[Token(Token = "0x6000CA1")]
	[Address(RVA = "0x690FF50", Offset = "0x690EF50", VA = "0x690FF50")]
	[UnityEngine.Bindings.FreeFunction("Resources_Bindings::DoesObjectWithInstanceIDExist", IsThreadSafe = true)]
	public static bool EntityIdIsValid(EntityId entityId)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CA2")]
	[Address(RVA = "0x690FC90", Offset = "0x690EC90", VA = "0x690FC90")]
	private static extern IntPtr GetBuiltinResource_Injected(Type type, ref ManagedSpanWrapper path);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CA3")]
	[Address(RVA = "0x690FE10", Offset = "0x690EE10", VA = "0x690FE10")]
	private static extern IntPtr UnloadUnusedAssets_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CA4")]
	[Address(RVA = "0x690FF20", Offset = "0x690EF20", VA = "0x690FF20")]
	private static extern IntPtr EntityIdToObject_Injected([In] ref EntityId entityId);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000CA5")]
	[Address(RVA = "0x690FF90", Offset = "0x690EF90", VA = "0x690FF90")]
	private static extern bool EntityIdIsValid_Injected([In] ref EntityId entityId);
}
