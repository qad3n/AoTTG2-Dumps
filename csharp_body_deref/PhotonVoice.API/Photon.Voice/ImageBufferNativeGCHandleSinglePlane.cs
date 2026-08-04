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
	[Address(RVA = "0x3F302B0", Offset = "0x3F302B0", VA = "0x3F302B0")]
	public ImageBufferNativeGCHandleSinglePlane(ImageBufferNativePool<ImageBufferNativeGCHandleSinglePlane> pool, ImageBufferInfo info)
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x3F303A0", Offset = "0x3F303A0", VA = "0x3F303A0")]
	public void PinPlane(byte[] plane)
	{
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x3F303D0", Offset = "0x3F303D0", VA = "0x3F303D0", Slot = "4")]
	public override void Release()
	{
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x3F30410", Offset = "0x3F30410", VA = "0x3F30410", Slot = "5")]
	public override void Dispose()
	{
	}
}
