// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Resources
// Update status: CHANGED in this game update
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

[Token(Token = "0x200016A")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/ResourceManagerUtility.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Resources/Resources.bindings.h")]
public sealed class Resources
{
	[Token(Token = "0x6000C80")]
	internal static T[] ConvertObjects<T>(Object[] rawObjects) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000C81")]
	[Address(RVA = "0x2F20970", Offset = "0x2F1EF70", VA = "0x182F20970")]
	public static Object[] FindObjectsOfTypeAll(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000C82")]
	public static T[] FindObjectsOfTypeAll<T>() where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000C83")]
	[Address(RVA = "0x2F26500", Offset = "0x2F24B00", VA = "0x182F26500")]
	public static Object Load(string path)
	{
		return null;
	}

	[Token(Token = "0x6000C84")]
	public static T Load<T>(string path) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000C85")]
	[Address(RVA = "0x2F26480", Offset = "0x2F24A80", VA = "0x182F26480")]
	public static Object Load(string path, Type systemTypeInstance)
	{
		return null;
	}

	[Token(Token = "0x6000C86")]
	public static ResourceRequest LoadAsync<T>(string path) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000C87")]
	[Address(RVA = "0x2F26400", Offset = "0x2F24A00", VA = "0x182F26400")]
	public static ResourceRequest LoadAsync(string path, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000C88")]
	[Address(RVA = "0x2F26380", Offset = "0x2F24980", VA = "0x182F26380")]
	public static Object[] LoadAll(string path, Type systemTypeInstance)
	{
		return null;
	}

	[Token(Token = "0x6000C89")]
	public static T[] LoadAll<T>(string path) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000C8A")]
	[Address(RVA = "0x2F26180", Offset = "0x2F24780", VA = "0x182F26180")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedByFirstArgument)]
	[UnityEngine.Bindings.FreeFunction("GetScriptingBuiltinResource", ThrowsException = true)]
	public static Object GetBuiltinResource([UnityEngine.Bindings.NotNull] Type type, string path)
	{
		return null;
	}

	[Token(Token = "0x6000C8B")]
	public static T GetBuiltinResource<T>(string path) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000C8C")]
	[Address(RVA = "0x2F26570", Offset = "0x2F24B70", VA = "0x182F26570")]
	public static void UnloadAsset(Object assetToUnload)
	{
	}

	[Token(Token = "0x6000C8D")]
	[Address(RVA = "0x2F26610", Offset = "0x2F24C10", VA = "0x182F26610")]
	[UnityEngine.Bindings.FreeFunction("Resources_Bindings::UnloadUnusedAssets")]
	public static AsyncOperation UnloadUnusedAssets()
	{
		return null;
	}

	[Token(Token = "0x6000C8E")]
	[Address(RVA = "0x2F260D0", Offset = "0x2F246D0", VA = "0x182F260D0")]
	[UnityEngine.Bindings.FreeFunction("Resources_Bindings::InstanceIDToObject")]
	public static Object EntityIdToObject(EntityId entityId)
	{
		return null;
	}

	[Token(Token = "0x6000C8F")]
	[Address(RVA = "0x2F26050", Offset = "0x2F24650", VA = "0x182F26050")]
	[UnityEngine.Bindings.FreeFunction("Resources_Bindings::DoesObjectWithInstanceIDExist", IsThreadSafe = true)]
	public static bool EntityIdIsValid(EntityId entityId)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C90")]
	[Address(RVA = "0x2F26130", Offset = "0x2F24730", VA = "0x182F26130")]
	private static extern IntPtr GetBuiltinResource_Injected(Type type, ref ManagedSpanWrapper path);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C91")]
	[Address(RVA = "0x2F265E0", Offset = "0x2F24BE0", VA = "0x182F265E0")]
	private static extern IntPtr UnloadUnusedAssets_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C92")]
	[Address(RVA = "0x2F26090", Offset = "0x2F24690", VA = "0x182F26090")]
	private static extern IntPtr EntityIdToObject_Injected([In] ref EntityId entityId);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C93")]
	[Address(RVA = "0x2F26010", Offset = "0x2F24610", VA = "0x182F26010")]
	private static extern bool EntityIdIsValid_Injected([In] ref EntityId entityId);
}
