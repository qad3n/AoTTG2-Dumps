// ==================== AoTTG2 cross-reference ====================
// Type: Discord.ImageManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/ImageManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Discord;

[Token(Token = "0x200008C")]
public class ImageManager
{
	[Token(Token = "0x200008D")]
	internal struct FFIEvents
	{
	}

	[Token(Token = "0x200008E")]
	internal struct FFIMethods
	{
		[Token(Token = "0x200008F")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void FetchCallback(IntPtr ptr, Result result, ImageHandle handleResult);

		[Token(Token = "0x2000090")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void FetchMethod(IntPtr methodsPtr, ImageHandle handle, bool refresh, IntPtr callbackData, FetchCallback callback);

		[Token(Token = "0x2000091")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetDimensionsMethod(IntPtr methodsPtr, ImageHandle handle, ref ImageDimensions dimensions);

		[Token(Token = "0x2000092")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetDataMethod(IntPtr methodsPtr, ImageHandle handle, byte[] data, int dataLen);

		[Token(Token = "0x4000163")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal FetchMethod Fetch;

		[Token(Token = "0x4000164")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal GetDimensionsMethod GetDimensions;

		[Token(Token = "0x4000165")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal GetDataMethod GetData;
	}

	[Token(Token = "0x2000093")]
	public delegate void FetchHandler(Result result, ImageHandle handleResult);

	[Token(Token = "0x4000161")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr MethodsPtr;

	[Token(Token = "0x4000162")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object MethodsStructure;

	[Token(Token = "0x17000008")]
	private FFIMethods Methods
	{
		[Token(Token = "0x600017E")]
		[Address(RVA = "0x531530", Offset = "0x52FB30", VA = "0x180531530")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x531410", Offset = "0x52FA10", VA = "0x180531410")]
	internal ImageManager(IntPtr ptr, IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x5313A0", Offset = "0x52F9A0", VA = "0x1805313A0")]
	private void InitEvents(IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x530B10", Offset = "0x52F110", VA = "0x180530B10")]
	[MonoPInvokeCallback]
	private static void FetchCallbackImpl(IntPtr ptr, Result result, ImageHandle handleResult)
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x530C50", Offset = "0x52F250", VA = "0x180530C50")]
	public void Fetch(ImageHandle handle, bool refresh, FetchHandler callback)
	{
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x531110", Offset = "0x52F710", VA = "0x180531110")]
	public ImageDimensions GetDimensions(ImageHandle handle)
	{
		return default(ImageDimensions);
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x530F10", Offset = "0x52F510", VA = "0x180530F10")]
	public void GetData(ImageHandle handle, byte[] data)
	{
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x530DB0", Offset = "0x52F3B0", VA = "0x180530DB0")]
	public void Fetch(ImageHandle handle, FetchHandler callback)
	{
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x530FE0", Offset = "0x52F5E0", VA = "0x180530FE0")]
	public byte[] GetData(ImageHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x5311E0", Offset = "0x52F7E0", VA = "0x1805311E0")]
	public Texture2D GetTexture(ImageHandle handle)
	{
		return null;
	}
}
