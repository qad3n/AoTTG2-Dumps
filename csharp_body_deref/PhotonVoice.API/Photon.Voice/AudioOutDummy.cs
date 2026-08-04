// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.AudioOutDummy
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/AudioOut.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200002C")]
public class AudioOutDummy<T> : IAudioOut<T>
{
	[Token(Token = "0x17000037")]
	public bool IsPlaying
	{
		[Token(Token = "0x60000DB")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000038")]
	public int Lag
	{
		[Token(Token = "0x60000DC")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000DD")]
	public void Flush()
	{
	}

	[Token(Token = "0x60000DE")]
	public void Push(T[] frame)
	{
	}

	[Token(Token = "0x60000DF")]
	public void Service()
	{
	}

	[Token(Token = "0x60000E0")]
	public void Start(int frequency, int channels, int frameSamplesPerChannel)
	{
	}

	[Token(Token = "0x60000E1")]
	public void Stop()
	{
	}

	[Token(Token = "0x60000E2")]
	public AudioOutDummy()
	{
	}
}
