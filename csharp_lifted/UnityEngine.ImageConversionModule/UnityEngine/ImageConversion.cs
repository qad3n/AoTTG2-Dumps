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
	[Address(RVA = "0x6977DC0", Offset = "0x6976DC0", VA = "0x6977DC0")]
	[UnityEngine.Bindings.NativeMethod(Name = "ImageConversionBindings::EncodeToPNG", IsFreeFunction = true, ThrowsException = true)]
	public static byte[] EncodeToPNG(this Texture2D tex)
	{
		return null;
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x6977F40", Offset = "0x6976F40", VA = "0x6977F40")]
	[UnityEngine.Bindings.NativeMethod(Name = "ImageConversionBindings::LoadImage", IsFreeFunction = true)]
	public static bool LoadImage([UnityEngine.Bindings.NotNull] this Texture2D tex, ReadOnlySpan<byte> data, bool markNonReadable)
	{
		return default(bool);
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x69780A0", Offset = "0x69770A0", VA = "0x69780A0")]
	public static bool LoadImage(this Texture2D tex, byte[] data)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000004")]
	[Address(RVA = "0x6977F00", Offset = "0x6976F00", VA = "0x6977F00")]
	private static extern void EncodeToPNG_Injected(IntPtr tex, out UnityEngine.Bindings.BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000005")]
	[Address(RVA = "0x6978060", Offset = "0x6977060", VA = "0x6978060")]
	private static extern bool LoadImage_Injected(IntPtr tex, ref UnityEngine.Bindings.ManagedSpanWrapper data, bool markNonReadable);
}
