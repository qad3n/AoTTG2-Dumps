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
	[Address(RVA = "0x4A983E0", Offset = "0x4A983E0", VA = "0x4A983E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnTextureLoaded_Internal(CustomRenderTexture source)
	{
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x4A98430", Offset = "0x4A98430", VA = "0x4A98430")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeOnTextureUnloaded_Internal(CustomRenderTexture source)
	{
	}
}
