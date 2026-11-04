// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.ImageBufferNativeGCHandleSinglePlane
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/VoiceCodec.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200008B")]
[Obsolete("Requres regular allocations of byte[]. May leak if used w/o pool. Use ImageBufferNativeGCHandleBytes with Texture2D.GetRawTextureData<byte>().CopyTo(b.PlaneBytes)) instead")]
public class ImageBufferNativeGCHandleSinglePlane : ImageBufferNative, IDisposable
{
	[Token(Token = "0x4000225")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private ImageBufferNativePool<ImageBufferNativeGCHandleSinglePlane> pool;

	[Token(Token = "0x4000226")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private GCHandle planeHandle;

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x1D6AD10", Offset = "0x1D69310", VA = "0x181D6AD10")]
	public ImageBufferNativeGCHandleSinglePlane(ImageBufferNativePool<ImageBufferNativeGCHandleSinglePlane> pool, ImageBufferInfo info)
	{
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x1D6AC90", Offset = "0x1D69290", VA = "0x181D6AC90")]
	public void PinPlane(byte[] plane)
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x1D6ACD0", Offset = "0x1D692D0", VA = "0x181D6ACD0", Slot = "4")]
	public override void Release()
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	public override void Dispose()
	{
	}
}
