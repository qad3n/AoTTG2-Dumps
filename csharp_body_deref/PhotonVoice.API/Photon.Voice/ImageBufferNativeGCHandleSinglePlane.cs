using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200008D")]
[Obsolete("Requres regular allocations of byte[]. May leak if used w/o pool. Use ImageBufferNativeGCHandleBytes with Texture2D.GetRawTextureData<byte>().CopyTo(b.PlaneBytes)) instead")]
public class ImageBufferNativeGCHandleSinglePlane : ImageBufferNative, IDisposable
{
	[Token(Token = "0x400022A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private ImageBufferNativePool<ImageBufferNativeGCHandleSinglePlane> pool;

	[Token(Token = "0x400022B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private GCHandle planeHandle;

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x3C3A960", Offset = "0x3C3A960", VA = "0x3C3A960")]
	public ImageBufferNativeGCHandleSinglePlane(ImageBufferNativePool<ImageBufferNativeGCHandleSinglePlane> pool, ImageBufferInfo info)
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x3C3AA50", Offset = "0x3C3AA50", VA = "0x3C3AA50")]
	public void PinPlane(byte[] plane)
	{
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x3C3AA80", Offset = "0x3C3AA80", VA = "0x3C3AA80", Slot = "4")]
	public override void Release()
	{
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x3C3AAC0", Offset = "0x3C3AAC0", VA = "0x3C3AAC0", Slot = "5")]
	public override void Dispose()
	{
	}
}
