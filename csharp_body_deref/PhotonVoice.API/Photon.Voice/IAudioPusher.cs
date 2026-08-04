// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.IAudioPusher
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/VoiceAudio.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000066")]
public interface IAudioPusher<T> : IAudioDesc, IDisposable
{
	[Token(Token = "0x6000236")]
	void SetCallback(Action<T[]> callback, ObjectFactory<T[], int> bufferFactory);
}
