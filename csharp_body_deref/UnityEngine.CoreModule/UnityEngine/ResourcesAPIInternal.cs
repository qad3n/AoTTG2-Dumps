// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ResourcesAPIInternal
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

[Token(Token = "0x2000168")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/ResourceManagerUtility.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Resources/Resources.bindings.h")]
internal static class ResourcesAPIInternal
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C6B")]
	[Address(RVA = "0x2F25320", Offset = "0x2F23920", VA = "0x182F25320")]
	[TypeInferenceRule(TypeInferenceRules.ArrayOfTypeReferencedByFirstArgument)]
	[UnityEngine.Bindings.FreeFunction("Resources_Bindings::FindObjectsOfTypeAll")]
	public static extern Object[] FindObjectsOfTypeAll(Type type);

	[Token(Token = "0x6000C6C")]
	[Address(RVA = "0x2F253A0", Offset = "0x2F239A0", VA = "0x182F253A0")]
	[UnityEngine.Bindings.FreeFunction("GetShaderNameRegistry().FindShader")]
	public static Shader FindShaderByName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000C6D")]
	[Address(RVA = "0x2F25A70", Offset = "0x2F24070", VA = "0x182F25A70")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("Resources_Bindings::Load")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedBySecondArgument)]
	public static Object Load(string path, [UnityEngine.Bindings.NotNull] Type systemTypeInstance)
	{
		return null;
	}

	[Token(Token = "0x6000C6E")]
	[Address(RVA = "0x2F255D0", Offset = "0x2F23BD0", VA = "0x182F255D0")]
	[UnityEngine.Bindings.FreeFunction("Resources_Bindings::LoadAll")]
	[UnityEngine.Bindings.NativeThrows]
	public static Object[] LoadAll([UnityEngine.Bindings.NotNull] string path, [UnityEngine.Bindings.NotNull] Type systemTypeInstance)
	{
		return null;
	}

	[Token(Token = "0x6000C6F")]
	[Address(RVA = "0x2F25810", Offset = "0x2F23E10", VA = "0x182F25810")]
	[UnityEngine.Bindings.FreeFunction("Resources_Bindings::LoadAsyncInternal")]
	internal static ResourceRequest LoadAsyncInternal(string path, Type type)
	{
		return null;
	}

	[Token(Token = "0x6000C70")]
	[Address(RVA = "0x2F25CB0", Offset = "0x2F242B0", VA = "0x182F25CB0")]
	[UnityEngine.Bindings.FreeFunction("Scripting::UnloadAssetFromScripting")]
	public static void UnloadAsset(Object assetToUnload)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C71")]
	[Address(RVA = "0x2F25360", Offset = "0x2F23960", VA = "0x182F25360")]
	private static extern IntPtr FindShaderByName_Injected(ref ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C72")]
	[Address(RVA = "0x2F25A20", Offset = "0x2F24020", VA = "0x182F25A20")]
	private static extern IntPtr Load_Injected(ref ManagedSpanWrapper path, Type systemTypeInstance);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C73")]
	[Address(RVA = "0x2F25580", Offset = "0x2F23B80", VA = "0x182F25580")]
	private static extern Object[] LoadAll_Injected(ref ManagedSpanWrapper path, Type systemTypeInstance);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C74")]
	[Address(RVA = "0x2F257C0", Offset = "0x2F23DC0", VA = "0x182F257C0")]
	private static extern IntPtr LoadAsyncInternal_Injected(ref ManagedSpanWrapper path, Type type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C75")]
	[Address(RVA = "0x2F25C70", Offset = "0x2F24270", VA = "0x182F25C70")]
	private static extern void UnloadAsset_Injected(IntPtr assetToUnload);
}
