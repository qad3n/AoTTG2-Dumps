// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.IEncoderDirect
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/VoiceCodec.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200007C")]
public interface IEncoderDirect<B> : IEncoder, IDisposable
{
	[Token(Token = "0x60002C1")]
	void Input(B buf);
}
