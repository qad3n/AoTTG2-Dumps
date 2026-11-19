// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.IAudioInChangeNotifier
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/Device.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000038")]
public interface IAudioInChangeNotifier : IDisposable
{
	[Token(Token = "0x1700004C")]
	bool IsSupported
	{
		[Token(Token = "0x600012A")]
		get;
	}

	[Token(Token = "0x1700004D")]
	string Error
	{
		[Token(Token = "0x600012B")]
		get;
	}
}
