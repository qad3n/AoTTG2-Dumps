// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ImageConversion
// Update status: CHANGED in this game update
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
	[Address(RVA = "0x2F82FC0", Offset = "0x2F815C0", VA = "0x182F82FC0")]
	[UnityEngine.Bindings.NativeMethod(Name = "ImageConversionBindings::EncodeToPNG", IsFreeFunction = true, ThrowsException = true)]
	public static byte[] EncodeToPNG(this Texture2D tex)
	{
		return null;
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x2F83280", Offset = "0x2F81880", VA = "0x182F83280")]
	[UnityEngine.Bindings.NativeMethod(Name = "ImageConversionBindings::LoadImage", IsFreeFunction = true)]
	public static bool LoadImage([UnityEngine.Bindings.NotNull] this Texture2D tex, ReadOnlySpan<byte> data, bool markNonReadable)
	{
		return default(bool);
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x2F83110", Offset = "0x2F81710", VA = "0x182F83110")]
	public static bool LoadImage(this Texture2D tex, byte[] data)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000004")]
	[Address(RVA = "0x2F82F70", Offset = "0x2F81570", VA = "0x182F82F70")]
	private static extern void EncodeToPNG_Injected(IntPtr tex, out UnityEngine.Bindings.BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000005")]
	[Address(RVA = "0x2F830B0", Offset = "0x2F816B0", VA = "0x182F830B0")]
	private static extern bool LoadImage_Injected(IntPtr tex, ref UnityEngine.Bindings.ManagedSpanWrapper data, bool markNonReadable);
}
