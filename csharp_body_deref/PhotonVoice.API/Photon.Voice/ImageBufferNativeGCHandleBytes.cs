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
		[Address(RVA = "0x3F30220", Offset = "0x3F30220", VA = "0x3F30220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x3F2FF40", Offset = "0x3F2FF40", VA = "0x3F2FF40")]
	public ImageBufferNativeGCHandleBytes(ImageBufferNativePool<ImageBufferNativeGCHandleBytes> pool, ImageBufferInfo info)
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x3F30230", Offset = "0x3F30230", VA = "0x3F30230", Slot = "4")]
	public override void Release()
	{
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x3F30250", Offset = "0x3F30250", VA = "0x3F30250", Slot = "5")]
	public override void Dispose()
	{
	}
}
