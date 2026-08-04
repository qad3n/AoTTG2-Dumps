// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.IAudioOut
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/AudioOut.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200002B")]
public interface IAudioOut<T>
{
	[Token(Token = "0x17000035")]
	bool IsPlaying
	{
		[Token(Token = "0x60000D4")]
		get;
	}

	[Token(Token = "0x17000036")]
	int Lag
	{
		[Token(Token = "0x60000DA")]
		get;
	}

	[Token(Token = "0x60000D5")]
	void Start(int frequency, int channels, int frameSamplesPerChannel);

	[Token(Token = "0x60000D6")]
	void Flush();

	[Token(Token = "0x60000D7")]
	void Stop();

	[Token(Token = "0x60000D8")]
	void Push(T[] frame);

	[Token(Token = "0x60000D9")]
	void Service();
}
