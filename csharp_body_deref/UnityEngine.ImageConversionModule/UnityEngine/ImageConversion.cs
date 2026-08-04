// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ImageConversion
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000002")]
[UnityEngine.Bindings.NativeHeader("Modules/ImageConversion/ScriptBindings/ImageConversion.bindings.h")]
public static class ImageConversion
{
	[Token(Token = "0x6000001")]
	[Address(RVA = "0x4E3D270", Offset = "0x4E3D270", VA = "0x4E3D270")]
	[UnityEngine.Bindings.NativeMethod(Name = "ImageConversionBindings::EncodeToPNG", IsFreeFunction = true, ThrowsException = true)]
	public static byte[] EncodeToPNG(this Texture2D tex)
	{
		return null;
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4E3D350", Offset = "0x4E3D350", VA = "0x4E3D350")]
	[UnityEngine.Bindings.NativeMethod(Name = "ImageConversionBindings::LoadImage", IsFreeFunction = true)]
	public static bool LoadImage([UnityEngine.Bindings.NotNull("ArgumentNullException")] this Texture2D tex, byte[] data, bool markNonReadable)
	{
		return default(bool);
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4E3D4F0", Offset = "0x4E3D4F0", VA = "0x4E3D4F0")]
	public static bool LoadImage(this Texture2D tex, byte[] data)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000004")]
	[Address(RVA = "0x4E3D320", Offset = "0x4E3D320", VA = "0x4E3D320")]
	private static extern byte[] EncodeToPNG_Injected(IntPtr tex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4E3D4B0", Offset = "0x4E3D4B0", VA = "0x4E3D4B0")]
	private static extern bool LoadImage_Injected(IntPtr tex, ref UnityEngine.Bindings.ManagedSpanWrapper data, bool markNonReadable);
}
