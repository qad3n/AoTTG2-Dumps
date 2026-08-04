// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AssetBundle
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000002")]
[UnityEngine.Bindings.NativeHeader("Modules/AssetBundle/Public/AssetBundleLoadFromMemoryAsyncOperation.h")]
[ExcludeFromPreset]
[UnityEngine.Bindings.NativeHeader("Modules/AssetBundle/Public/AssetBundleLoadAssetOperation.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Scripting/ScriptingExportUtility.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Scripting/ScriptingObjectWithIntPtrField.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Scripting/ScriptingUtility.h")]
[UnityEngine.Bindings.NativeHeader("AssetBundleScriptingClasses.h")]
[UnityEngine.Bindings.NativeHeader("Modules/AssetBundle/Public/AssetBundleSaveAndLoadHelper.h")]
[UnityEngine.Bindings.NativeHeader("Modules/AssetBundle/Public/AssetBundleUtility.h")]
[UnityEngine.Bindings.NativeHeader("Modules/AssetBundle/Public/AssetBundleLoadAssetUtility.h")]
[UnityEngine.Bindings.NativeHeader("Modules/AssetBundle/Public/AssetBundleLoadFromFileAsyncOperation.h")]
[UnityEngine.Bindings.NativeHeader("Modules/AssetBundle/Public/AssetBundleLoadFromManagedStreamAsyncOperation.h")]
public class AssetBundle : Object
{
	[Token(Token = "0x6000001")]
	[Address(RVA = "0x4DA74D0", Offset = "0x4DA74D0", VA = "0x4DA74D0")]
	private AssetBundle()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4DA7540", Offset = "0x4DA7540", VA = "0x4DA7540")]
	[UnityEngine.Bindings.FreeFunction("LoadFromFile")]
	internal static extern AssetBundle LoadFromFile_Internal(string path, uint crc, ulong offset);

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4DA7580", Offset = "0x4DA7580", VA = "0x4DA7580")]
	public static AssetBundle LoadFromFile(string path)
	{
		return null;
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x4DA75B0", Offset = "0x4DA75B0", VA = "0x4DA75B0")]
	public Object LoadAsset(string name)
	{
		return null;
	}

	[Token(Token = "0x6000005")]
	public T LoadAsset<T>(string name) where T : Object
	{
		return null;
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4DA7620", Offset = "0x4DA7620", VA = "0x4DA7620")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedBySecondArgument)]
	public Object LoadAsset(string name, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4DA77B0", Offset = "0x4DA77B0", VA = "0x4DA77B0")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedBySecondArgument)]
	[UnityEngine.Bindings.NativeMethod("LoadAsset_Internal")]
	[UnityEngine.Bindings.NativeThrows]
	private Object LoadAsset_Internal(string name, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x4DA78A0", Offset = "0x4DA78A0", VA = "0x4DA78A0")]
	[UnityEngine.Bindings.NativeMethod("Unload")]
	[UnityEngine.Bindings.NativeThrows]
	public void Unload(bool unloadAllLoadedObjects)
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x4DA7980", Offset = "0x4DA7980", VA = "0x4DA7980")]
	[UnityEngine.Bindings.NativeMethod("GetAllAssetNames")]
	public string[] GetAllAssetNames()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000A")]
	[Address(RVA = "0x4DA7860", Offset = "0x4DA7860", VA = "0x4DA7860")]
	private static extern Object LoadAsset_Internal_Injected(IntPtr _unity_self, string name, Type type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000B")]
	[Address(RVA = "0x4DA7940", Offset = "0x4DA7940", VA = "0x4DA7940")]
	private static extern void Unload_Injected(IntPtr _unity_self, bool unloadAllLoadedObjects);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000C")]
	[Address(RVA = "0x4DA7A20", Offset = "0x4DA7A20", VA = "0x4DA7A20")]
	private static extern string[] GetAllAssetNames_Injected(IntPtr _unity_self);
}
