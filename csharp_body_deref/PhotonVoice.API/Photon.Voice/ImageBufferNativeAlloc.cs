using System;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200008B")]
public class ImageBufferNativeAlloc : ImageBufferNative, IDisposable
{
	[Token(Token = "0x4000226")]
	[FieldOffset(Offset = "0x60")]
	private ImageBufferNativePool<ImageBufferNativeAlloc> pool;

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x3C3A250", Offset = "0x3C3A250", VA = "0x3C3A250")]
	public ImageBufferNativeAlloc(ImageBufferNativePool<ImageBufferNativeAlloc> pool, ImageBufferInfo info)
	{
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x3C3A480", Offset = "0x3C3A480", VA = "0x3C3A480", Slot = "4")]
	public override void Release()
	{
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x3C3A4A0", Offset = "0x3C3A4A0", VA = "0x3C3A4A0", Slot = "5")]
	public override void Dispose()
	{
	}
}
