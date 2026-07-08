using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000030")]
public class AudioSyncBuffer<T> : AudioOutDelayControl<T>
{
	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x0")]
	private T[] buffer;

	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x0")]
	private int readPosSamples;

	[Token(Token = "0x40000DE")]
	[FieldOffset(Offset = "0x0")]
	private int sampleRate;

	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x0")]
	private int channels;

	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x0")]
	private int bufferSamples;

	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x0")]
	private bool started;

	[Token(Token = "0x1700003D")]
	public override long OutPos
	{
		[Token(Token = "0x60000F6")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x60000F5")]
	public AudioSyncBuffer(PlayDelayConfig playDelayConfig, ILogger logger, string logPrefix, bool debugInfo)
	{
	}

	[Token(Token = "0x60000F7")]
	public override void OutCreate(int frequency, int channels, int bufferSamples)
	{
	}

	[Token(Token = "0x60000F8")]
	public override void OutStart()
	{
	}

	[Token(Token = "0x60000F9")]
	public override void OutWrite(T[] data, int offsetSamples)
	{
	}

	[Token(Token = "0x60000FA")]
	public override void Stop()
	{
	}

	[Token(Token = "0x60000FB")]
	public void Read(T[] outBuf, int outChannels, int outSampleRate)
	{
	}
}
