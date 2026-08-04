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

[Token(Token = "0x200008E")]
public class ImageManager
{
	[Token(Token = "0x200008F")]
	internal struct FFIEvents
	{
	}

	[Token(Token = "0x2000090")]
	internal struct FFIMethods
	{
		[Token(Token = "0x2000091")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void FetchCallback(IntPtr ptr, Result result, ImageHandle handleResult);

		[Token(Token = "0x2000092")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate void FetchMethod(IntPtr methodsPtr, ImageHandle handle, bool refresh, IntPtr callbackData, FetchCallback callback);

		[Token(Token = "0x2000093")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetDimensionsMethod(IntPtr methodsPtr, ImageHandle handle, ref ImageDimensions dimensions);

		[Token(Token = "0x2000094")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result GetDataMethod(IntPtr methodsPtr, ImageHandle handle, byte[] data, int dataLen);

		[Token(Token = "0x4000168")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal FetchMethod Fetch;

		[Token(Token = "0x4000169")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal GetDimensionsMethod GetDimensions;

		[Token(Token = "0x400016A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal GetDataMethod GetData;
	}

	[Token(Token = "0x2000095")]
	public delegate void FetchHandler(Result result, ImageHandle handleResult);

	[Token(Token = "0x4000166")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr MethodsPtr;

	[Token(Token = "0x4000167")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private object MethodsStructure;

	[Token(Token = "0x17000008")]
	private FFIMethods Methods
	{
		[Token(Token = "0x6000180")]
		[Address(RVA = "0x2336FB0", Offset = "0x2336FB0", VA = "0x2336FB0")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x23322D0", Offset = "0x23322D0", VA = "0x23322D0")]
	internal ImageManager(IntPtr ptr, IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x23370C0", Offset = "0x23370C0", VA = "0x23370C0")]
	private void InitEvents(IntPtr eventsPtr, ref FFIEvents events)
	{
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x2336E90", Offset = "0x2336E90", VA = "0x2336E90")]
	[MonoPInvokeCallback]
	private static void FetchCallbackImpl(IntPtr ptr, Result result, ImageHandle handleResult)
	{
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x2337120", Offset = "0x2337120", VA = "0x2337120")]
	public void Fetch(ImageHandle handle, bool refresh, FetchHandler callback)
	{
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x2337340", Offset = "0x2337340", VA = "0x2337340")]
	public ImageDimensions GetDimensions(ImageHandle handle)
	{
		return default(ImageDimensions);
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x2337400", Offset = "0x2337400", VA = "0x2337400")]
	public void GetData(ImageHandle handle, byte[] data)
	{
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x23374C0", Offset = "0x23374C0", VA = "0x23374C0")]
	public void Fetch(ImageHandle handle, FetchHandler callback)
	{
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x23374D0", Offset = "0x23374D0", VA = "0x23374D0")]
	public byte[] GetData(ImageHandle handle)
	{
		return null;
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x2337570", Offset = "0x2337570", VA = "0x2337570")]
	public Texture2D GetTexture(ImageHandle handle)
	{
		return null;
	}
}
