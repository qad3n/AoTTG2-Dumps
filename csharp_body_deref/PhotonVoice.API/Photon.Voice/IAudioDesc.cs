// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.IAudioDesc
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/VoiceAudio.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000063")]
public interface IAudioDesc : IDisposable
{
	[Token(Token = "0x17000090")]
	int SamplingRate
	{
		[Token(Token = "0x600022B")]
		get;
	}

	[Token(Token = "0x17000091")]
	int Channels
	{
		[Token(Token = "0x600022C")]
		get;
	}

	[Token(Token = "0x17000092")]
	string Error
	{
		[Token(Token = "0x600022D")]
		get;
	}
}
