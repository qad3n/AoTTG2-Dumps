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
	[Address(RVA = "0x4B471A0", Offset = "0x4B471A0", VA = "0x4B471A0")]
	[UnityEngine.Bindings.NativeMethod(Name = "ImageConversionBindings::EncodeToPNG", IsFreeFunction = true, ThrowsException = true)]
	public static byte[] EncodeToPNG(this Texture2D tex)
	{
		return null;
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4B47280", Offset = "0x4B47280", VA = "0x4B47280")]
	[UnityEngine.Bindings.NativeMethod(Name = "ImageConversionBindings::LoadImage", IsFreeFunction = true)]
	public static bool LoadImage([UnityEngine.Bindings.NotNull("ArgumentNullException")] this Texture2D tex, byte[] data, bool markNonReadable)
	{
		return default(bool);
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4B47420", Offset = "0x4B47420", VA = "0x4B47420")]
	public static bool LoadImage(this Texture2D tex, byte[] data)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000004")]
	[Address(RVA = "0x4B47250", Offset = "0x4B47250", VA = "0x4B47250")]
	private static extern byte[] EncodeToPNG_Injected(IntPtr tex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4B473E0", Offset = "0x4B473E0", VA = "0x4B473E0")]
	private static extern bool LoadImage_Injected(IntPtr tex, ref UnityEngine.Bindings.ManagedSpanWrapper data, bool markNonReadable);
}
