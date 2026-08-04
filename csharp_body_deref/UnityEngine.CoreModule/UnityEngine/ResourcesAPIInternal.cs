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

[Token(Token = "0x200013B")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/ResourceManagerUtility.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Resources/Resources.bindings.h")]
internal static class ResourcesAPIInternal
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000950")]
	[Address(RVA = "0x4DF2720", Offset = "0x4DF2720", VA = "0x4DF2720")]
	[UnityEngine.Bindings.FreeFunction("Resources_Bindings::FindObjectsOfTypeAll")]
	[TypeInferenceRule(TypeInferenceRules.ArrayOfTypeReferencedByFirstArgument)]
	public static extern Object[] FindObjectsOfTypeAll(Type type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000951")]
	[Address(RVA = "0x4DF2750", Offset = "0x4DF2750", VA = "0x4DF2750")]
	[UnityEngine.Bindings.FreeFunction("GetShaderNameRegistry().FindShader")]
	public static extern Shader FindShaderByName(string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000952")]
	[Address(RVA = "0x4DF2780", Offset = "0x4DF2780", VA = "0x4DF2780")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedBySecondArgument)]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("Resources_Bindings::Load")]
	public static extern Object Load(string path, [UnityEngine.Bindings.NotNull("ArgumentNullException")] Type systemTypeInstance);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000953")]
	[Address(RVA = "0x4DF27C0", Offset = "0x4DF27C0", VA = "0x4DF27C0")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("Resources_Bindings::LoadAll")]
	public static extern Object[] LoadAll([UnityEngine.Bindings.NotNull("ArgumentNullException")] string path, [UnityEngine.Bindings.NotNull("ArgumentNullException")] Type systemTypeInstance);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000954")]
	[Address(RVA = "0x4DF2800", Offset = "0x4DF2800", VA = "0x4DF2800")]
	[UnityEngine.Bindings.FreeFunction("Resources_Bindings::LoadAsyncInternal")]
	internal static extern ResourceRequest LoadAsyncInternal(string path, Type type);
}
