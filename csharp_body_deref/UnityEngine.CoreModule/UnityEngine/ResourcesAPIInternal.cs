// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ResourcesAPIInternal
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

[Token(Token = "0x2000169")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Resources/Resources.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/ResourceManagerUtility.h")]
internal static class ResourcesAPIInternal
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C7D")]
	[Address(RVA = "0x690EA20", Offset = "0x690DA20", VA = "0x690EA20")]
	[UnityEngine.Bindings.FreeFunction("Resources_Bindings::FindObjectsOfTypeAll")]
	[TypeInferenceRule(TypeInferenceRules.ArrayOfTypeReferencedByFirstArgument)]
	public static extern Object[] FindObjectsOfTypeAll(Type type);

	[Token(Token = "0x6000C7E")]
	[Address(RVA = "0x690EA50", Offset = "0x690DA50", VA = "0x690EA50")]
	[UnityEngine.Bindings.FreeFunction("GetShaderNameRegistry().FindShader")]
	public static Shader FindShaderByName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000C7F")]
	[Address(RVA = "0x690EC80", Offset = "0x690DC80", VA = "0x690EC80")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedBySecondArgument)]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("Resources_Bindings::Load")]
	public static Object Load(string path, [UnityEngine.Bindings.NotNull] Type systemTypeInstance)
	{
		return null;
	}

	[Token(Token = "0x6000C80")]
	[Address(RVA = "0x690EEF0", Offset = "0x690DEF0", VA = "0x690EEF0")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("Resources_Bindings::LoadAll")]
	public static Object[] LoadAll([UnityEngine.Bindings.NotNull] string path, [UnityEngine.Bindings.NotNull] Type systemTypeInstance)
	{
		return null;
	}

	[Token(Token = "0x6000C81")]
	[Address(RVA = "0x690F110", Offset = "0x690E110", VA = "0x690F110")]
	[UnityEngine.Bindings.FreeFunction("Resources_Bindings::LoadAsyncInternal")]
	internal static ResourceRequest LoadAsyncInternal(string path, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000C82")]
	[Address(RVA = "0x690F410", Offset = "0x690E410", VA = "0x690F410")]
	[UnityEngine.Bindings.FreeFunction("Scripting::UnloadAssetFromScripting")]
	public static void UnloadAsset(Object assetToUnload)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C83")]
	[Address(RVA = "0x690EC50", Offset = "0x690DC50", VA = "0x690EC50")]
	private static extern IntPtr FindShaderByName_Injected(ref ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C84")]
	[Address(RVA = "0x690EEB0", Offset = "0x690DEB0", VA = "0x690EEB0")]
	private static extern IntPtr Load_Injected(ref ManagedSpanWrapper path, Type systemTypeInstance);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C85")]
	[Address(RVA = "0x690F0D0", Offset = "0x690E0D0", VA = "0x690F0D0")]
	private static extern Object[] LoadAll_Injected(ref ManagedSpanWrapper path, Type systemTypeInstance);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C86")]
	[Address(RVA = "0x690F3D0", Offset = "0x690E3D0", VA = "0x690F3D0")]
	private static extern IntPtr LoadAsyncInternal_Injected(ref ManagedSpanWrapper path, Type type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C87")]
	[Address(RVA = "0x690F4A0", Offset = "0x690E4A0", VA = "0x690F4A0")]
	private static extern void UnloadAsset_Injected(IntPtr assetToUnload);
}
