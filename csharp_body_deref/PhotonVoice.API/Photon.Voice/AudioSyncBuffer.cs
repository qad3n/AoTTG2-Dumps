// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.AudioSyncBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/AudioSyncBuffer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200002E")]
public class AudioSyncBuffer<T> : AudioOutDelayControl<T>
{
	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0x0")]
	private T[] buffer;

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x0")]
	private int readPosSamples;

	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x0")]
	private int sampleRate;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x0")]
	private int channels;

	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x0")]
	private int bufferSamples;

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x0")]
	private bool started;

	[Token(Token = "0x1700003D")]
	public override long OutPos
	{
		[Token(Token = "0x60000F4")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x60000F3")]
	public AudioSyncBuffer(PlayDelayConfig playDelayConfig, ILogger logger, string logPrefix, bool debugInfo)
	{
	}

	[Token(Token = "0x60000F5")]
	public override void OutCreate(int frequency, int channels, int bufferSamples)
	{
	}

	[Token(Token = "0x60000F6")]
	public override void OutStart()
	{
	}

	[Token(Token = "0x60000F7")]
	public override void OutWrite(T[] data, int offsetSamples)
	{
	}

	[Token(Token = "0x60000F8")]
	public override void Stop()
	{
	}

	[Token(Token = "0x60000F9")]
	public void Read(T[] outBuf, int outChannels, int outSampleRate)
	{
	}
}
