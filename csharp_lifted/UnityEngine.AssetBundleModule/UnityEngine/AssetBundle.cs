// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AssetBundle
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

[Token(Token = "0x2000002")]
[UnityEngine.Bindings.NativeHeader("AssetBundleScriptingClasses.h")]
[UnityEngine.Bindings.NativeHeader("Modules/AssetBundle/Public/AssetBundleUtility.h")]
[UnityEngine.Bindings.NativeHeader("Modules/AssetBundle/Public/AssetBundleSaveAndLoadHelper.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Scripting/ScriptingUtility.h")]
[UnityEngine.Bindings.NativeHeader("Modules/AssetBundle/Public/AssetBundleLoadAssetUtility.h")]
[UnityEngine.Bindings.NativeHeader("Modules/AssetBundle/Public/AssetBundleLoadAssetOperation.h")]
[UnityEngine.Bindings.NativeHeader("Modules/AssetBundle/Public/AssetBundleLoadFromManagedStreamAsyncOperation.h")]
[UnityEngine.Bindings.NativeHeader("Modules/AssetBundle/Public/AssetBundleLoadFromMemoryAsyncOperation.h")]
[UnityEngine.Bindings.NativeHeader("Modules/AssetBundle/Public/AssetBundleLoadFromFileAsyncOperation.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Scripting/ScriptingExportUtility.h")]
[ExcludeFromPreset]
public class AssetBundle : Object
{
	[Token(Token = "0x6000001")]
	[Address(RVA = "0x68AD640", Offset = "0x68AC640", VA = "0x68AD640")]
	private AssetBundle()
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x68AD6B0", Offset = "0x68AC6B0", VA = "0x68AD6B0")]
	[UnityEngine.Bindings.FreeFunction("LoadFromFile")]
	internal static AssetBundle LoadFromFile_Internal(string path, uint crc, ulong offset)
	{
		return null;
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x68AD900", Offset = "0x68AC900", VA = "0x68AD900")]
	public static AssetBundle LoadFromFile(string path)
	{
		return null;
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x68AD910", Offset = "0x68AC910", VA = "0x68AD910")]
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
	[Address(RVA = "0x68AD980", Offset = "0x68AC980", VA = "0x68AD980")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedBySecondArgument)]
	public Object LoadAsset(string name, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x68ADA80", Offset = "0x68ACA80", VA = "0x68ADA80")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedBySecondArgument)]
	[UnityEngine.Bindings.NativeMethod("LoadAsset_Internal")]
	[UnityEngine.Bindings.NativeThrows]
	private Object LoadAsset_Internal(string name, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x68ADD10", Offset = "0x68ACD10", VA = "0x68ADD10")]
	[UnityEngine.Bindings.NativeMethod("Unload")]
	[UnityEngine.Bindings.NativeThrows]
	public void Unload(bool unloadAllLoadedObjects)
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x68ADDD0", Offset = "0x68ACDD0", VA = "0x68ADDD0")]
	[UnityEngine.Bindings.NativeMethod("GetAllAssetNames")]
	public string[] GetAllAssetNames()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000A")]
	[Address(RVA = "0x68AD8C0", Offset = "0x68AC8C0", VA = "0x68AD8C0")]
	private static extern IntPtr LoadFromFile_Internal_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper path, uint crc, ulong offset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000B")]
	[Address(RVA = "0x68ADCD0", Offset = "0x68ACCD0", VA = "0x68ADCD0")]
	private static extern IntPtr LoadAsset_Internal_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper name, Type type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000C")]
	[Address(RVA = "0x68ADD90", Offset = "0x68ACD90", VA = "0x68ADD90")]
	private static extern void Unload_Injected(IntPtr _unity_self, bool unloadAllLoadedObjects);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000D")]
	[Address(RVA = "0x68ADE50", Offset = "0x68ACE50", VA = "0x68ADE50")]
	private static extern string[] GetAllAssetNames_Injected(IntPtr _unity_self);
}
