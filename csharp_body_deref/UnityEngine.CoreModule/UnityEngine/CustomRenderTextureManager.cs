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

[Token(Token = "0x20000A4")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/CustomRenderTextureManager.h")]
public static class CustomRenderTextureManager
{
	[Token(Token = "0x40001B3")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<CustomRenderTexture> textureLoaded;

	[Token(Token = "0x40001B4")]
	[FieldOffset(Offset = "0x8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<CustomRenderTexture> textureUnloaded;

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x4DBFC00", Offset = "0x4DBFC00", VA = "0x4DBFC00")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnTextureLoaded_Internal(CustomRenderTexture source)
	{
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x4DBFC50", Offset = "0x4DBFC50", VA = "0x4DBFC50")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnTextureUnloaded_Internal(CustomRenderTexture source)
	{
	}
}
