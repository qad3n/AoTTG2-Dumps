using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngineInternal;

namespace UnityEngine;

[Token(Token = "0x2000138")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/ResourceManagerUtility.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Resources/Resources.bindings.h")]
internal static class ResourcesAPIInternal
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600094E")]
	[Address(RVA = "0x4ACADF0", Offset = "0x4ACADF0", VA = "0x4ACADF0")]
	[UnityEngine.Bindings.FreeFunction("Resources_Bindings::FindObjectsOfTypeAll")]
	[TypeInferenceRule(TypeInferenceRules.ArrayOfTypeReferencedByFirstArgument)]
	public static extern Object[] FindObjectsOfTypeAll(Type type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600094F")]
	[Address(RVA = "0x4ACAE20", Offset = "0x4ACAE20", VA = "0x4ACAE20")]
	[UnityEngine.Bindings.FreeFunction("GetShaderNameRegistry().FindShader")]
	public static extern Shader FindShaderByName(string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000950")]
	[Address(RVA = "0x4ACAE50", Offset = "0x4ACAE50", VA = "0x4ACAE50")]
	[TypeInferenceRule(TypeInferenceRules.TypeReferencedBySecondArgument)]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("Resources_Bindings::Load")]
	public static extern Object Load(string path, [UnityEngine.Bindings.NotNull("ArgumentNullException")] Type systemTypeInstance);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000951")]
	[Address(RVA = "0x4ACAE90", Offset = "0x4ACAE90", VA = "0x4ACAE90")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("Resources_Bindings::LoadAll")]
	public static extern Object[] LoadAll([UnityEngine.Bindings.NotNull("ArgumentNullException")] string path, [UnityEngine.Bindings.NotNull("ArgumentNullException")] Type systemTypeInstance);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000952")]
	[Address(RVA = "0x4ACAED0", Offset = "0x4ACAED0", VA = "0x4ACAED0")]
	[UnityEngine.Bindings.FreeFunction("Resources_Bindings::LoadAsyncInternal")]
	internal static extern ResourceRequest LoadAsyncInternal(string path, Type type);
}
