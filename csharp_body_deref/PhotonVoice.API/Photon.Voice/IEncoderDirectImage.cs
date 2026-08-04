// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.IEncoderDirectImage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/VoiceCodec.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200007D")]
public interface IEncoderDirectImage : IEncoderDirect<ImageBufferNative>, IEncoder, IDisposable
{
	[Token(Token = "0x170000BE")]
	ImageFormat ImageFormat
	{
		[Token(Token = "0x60002C2")]
		get;
	}
}
