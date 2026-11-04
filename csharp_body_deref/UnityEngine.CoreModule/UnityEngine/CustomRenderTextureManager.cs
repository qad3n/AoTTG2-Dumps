// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.CustomRenderTextureManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000C5")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/CustomRenderTextureManager.h")]
public static class CustomRenderTextureManager
{
	[Token(Token = "0x4000208")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<CustomRenderTexture> textureLoaded;

	[Token(Token = "0x4000209")]
	[FieldOffset(Offset = "0x8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<CustomRenderTexture> textureUnloaded;

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x2EC1AA0", Offset = "0x2EC00A0", VA = "0x182EC1AA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnTextureLoaded_Internal(CustomRenderTexture source)
	{
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x2EC1B00", Offset = "0x2EC0100", VA = "0x182EC1B00")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnTextureUnloaded_Internal(CustomRenderTexture source)
	{
	}
}
