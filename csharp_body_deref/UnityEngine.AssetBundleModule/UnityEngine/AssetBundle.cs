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
	[Address(RVA = "0x4A7FCB0", Offset = "0x4A7FCB0", VA = "0x4A7FCB0")]
	private AssetBundle()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4A7FD20", Offset = "0x4A7FD20", VA = "0x4A7FD20")]
	[UnityEngine.Bindings.FreeFunction("LoadFromFile")]
	internal static extern AssetBundle LoadFromFile_Internal(string path, uint crc, ulong offset);

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4A7FD60", Offset = "0x4A7FD60", VA = "0x4A7FD60")]
	public static AssetBundle LoadFromFile(string path)
	{
		return null;
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x4A7FD90", Offset = "0x4A7FD90", VA = "0x4A7FD90")]
	public Object LoadAsset(string name)
	{
		return null;
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4A7FE00", Offset = "0x4A7FE00", VA = "0x4A7FE00")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedBySecondArgument)]
	public Object LoadAsset(string name, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4A7FF90", Offset = "0x4A7FF90", VA = "0x4A7FF90")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedBySecondArgument)]
	[UnityEngine.Bindings.NativeMethod("LoadAsset_Internal")]
	[UnityEngine.Bindings.NativeThrows]
	private Object LoadAsset_Internal(string name, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4A80080", Offset = "0x4A80080", VA = "0x4A80080")]
	[UnityEngine.Bindings.NativeMethod("Unload")]
	[UnityEngine.Bindings.NativeThrows]
	public void Unload(bool unloadAllLoadedObjects)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x4A80160", Offset = "0x4A80160", VA = "0x4A80160")]
	[UnityEngine.Bindings.NativeMethod("GetAllAssetNames")]
	public string[] GetAllAssetNames()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000009")]
	[Address(RVA = "0x4A80040", Offset = "0x4A80040", VA = "0x4A80040")]
	private static extern Object LoadAsset_Internal_Injected(IntPtr _unity_self, string name, Type type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000A")]
	[Address(RVA = "0x4A80120", Offset = "0x4A80120", VA = "0x4A80120")]
	private static extern void Unload_Injected(IntPtr _unity_self, bool unloadAllLoadedObjects);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000B")]
	[Address(RVA = "0x4A80200", Offset = "0x4A80200", VA = "0x4A80200")]
	private static extern string[] GetAllAssetNames_Injected(IntPtr _unity_self);
}
