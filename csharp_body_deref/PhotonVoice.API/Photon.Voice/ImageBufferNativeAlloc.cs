// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.ImageBufferNativeAlloc
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/VoiceCodec.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3F2FBA0", Offset = "0x3F2FBA0", VA = "0x3F2FBA0")]
	public ImageBufferNativeAlloc(ImageBufferNativePool<ImageBufferNativeAlloc> pool, ImageBufferInfo info)
	{
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x3F2FDD0", Offset = "0x3F2FDD0", VA = "0x3F2FDD0", Slot = "4")]
	public override void Release()
	{
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x3F2FDF0", Offset = "0x3F2FDF0", VA = "0x3F2FDF0", Slot = "5")]
	public override void Dispose()
	{
	}
}
