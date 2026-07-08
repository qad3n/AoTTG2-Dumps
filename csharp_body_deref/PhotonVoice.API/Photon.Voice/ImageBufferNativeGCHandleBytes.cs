using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200008C")]
public class ImageBufferNativeGCHandleBytes : ImageBufferNative, IDisposable
{
	[Token(Token = "0x4000227")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private ImageBufferNativePool<ImageBufferNativeGCHandleBytes> pool;

	[Token(Token = "0x4000228")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private readonly GCHandle[] planeHandle;

	[Token(Token = "0x4000229")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private readonly byte[][] planeBytes;

	[Token(Token = "0x170000CD")]
	public byte[][] PlaneBytes
	{
		[Token(Token = "0x60002F0")]
		[Address(RVA = "0x3C3A8D0", Offset = "0x3C3A8D0", VA = "0x3C3A8D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x3C3A5F0", Offset = "0x3C3A5F0", VA = "0x3C3A5F0")]
	public ImageBufferNativeGCHandleBytes(ImageBufferNativePool<ImageBufferNativeGCHandleBytes> pool, ImageBufferInfo info)
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x3C3A8E0", Offset = "0x3C3A8E0", VA = "0x3C3A8E0", Slot = "4")]
	public override void Release()
	{
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x3C3A900", Offset = "0x3C3A900", VA = "0x3C3A900", Slot = "5")]
	public override void Dispose()
	{
	}
}
