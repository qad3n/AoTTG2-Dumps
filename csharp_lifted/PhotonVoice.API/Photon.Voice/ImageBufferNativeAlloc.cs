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

[Token(Token = "0x2000089")]
public class ImageBufferNativeAlloc : ImageBufferNative, IDisposable
{
	[Token(Token = "0x4000221")]
	[FieldOffset(Offset = "0x60")]
	private ImageBufferNativePool<ImageBufferNativeAlloc> pool;

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x5719F30", Offset = "0x5718F30", VA = "0x5719F30")]
	public ImageBufferNativeAlloc(ImageBufferNativePool<ImageBufferNativeAlloc> pool, ImageBufferInfo info)
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x571A120", Offset = "0x5719120", VA = "0x571A120", Slot = "4")]
	public override void Release()
	{
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x571A140", Offset = "0x5719140", VA = "0x571A140", Slot = "5")]
	public override void Dispose()
	{
	}
}
