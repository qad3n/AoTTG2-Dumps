// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.ImageBufferNativeGCHandleBytes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/VoiceCodec.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200008A")]
public class ImageBufferNativeGCHandleBytes : ImageBufferNative, IDisposable
{
	[Token(Token = "0x4000222")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private ImageBufferNativePool<ImageBufferNativeGCHandleBytes> pool;

	[Token(Token = "0x4000223")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private readonly GCHandle[] planeHandle;

	[Token(Token = "0x4000224")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private readonly byte[][] planeBytes;

	[Token(Token = "0x170000CD")]
	public byte[][] PlaneBytes
	{
		[Token(Token = "0x60002EE")]
		[Address(RVA = "0xB48770", Offset = "0xB46D70", VA = "0x180B48770")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x1D6AA10", Offset = "0x1D69010", VA = "0x181D6AA10")]
	public ImageBufferNativeGCHandleBytes(ImageBufferNativePool<ImageBufferNativeGCHandleBytes> pool, ImageBufferInfo info)
	{
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x1D6A7E0", Offset = "0x1D68DE0", VA = "0x181D6A7E0", Slot = "4")]
	public override void Release()
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x1D6A9A0", Offset = "0x1D68FA0", VA = "0x181D6A9A0", Slot = "5")]
	public override void Dispose()
	{
	}
}
