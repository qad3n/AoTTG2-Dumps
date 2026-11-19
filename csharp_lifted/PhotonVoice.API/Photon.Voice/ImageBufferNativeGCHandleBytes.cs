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
		[Address(RVA = "0x571A4E0", Offset = "0x57194E0", VA = "0x571A4E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x571A230", Offset = "0x5719230", VA = "0x571A230")]
	public ImageBufferNativeGCHandleBytes(ImageBufferNativePool<ImageBufferNativeGCHandleBytes> pool, ImageBufferInfo info)
	{
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x571A4F0", Offset = "0x57194F0", VA = "0x571A4F0", Slot = "4")]
	public override void Release()
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x571A510", Offset = "0x5719510", VA = "0x571A510", Slot = "5")]
	public override void Dispose()
	{
	}
}
