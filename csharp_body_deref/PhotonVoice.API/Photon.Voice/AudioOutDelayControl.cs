// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.AudioOutDelayControl
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/AudioOut.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Concurrent;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200002D")]
public class AudioOutDelayControl
{
	[Serializable]
	[Token(Token = "0x200002E")]
	public struct PlayDelayConfig
	{
		[Token(Token = "0x40000B8")]
		[FieldOffset(Offset = "0x0")]
		public static PlayDelayConfig Default;

		[Token(Token = "0x40000B9")]
		[FieldOffset(Offset = "0x0")]
		public int Low;

		[Token(Token = "0x40000BA")]
		[FieldOffset(Offset = "0x4")]
		public int High;

		[Token(Token = "0x40000BB")]
		[FieldOffset(Offset = "0x8")]
		public int Max;

		[Token(Token = "0x40000BC")]
		[FieldOffset(Offset = "0xC")]
		public int SpeedUpPerc;
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x3F191A0", Offset = "0x3F191A0", VA = "0x3F191A0")]
	public AudioOutDelayControl()
	{
	}
}
[Token(Token = "0x200002F")]
public abstract class AudioOutDelayControl<T> : AudioOutDelayControl, IAudioOut<T>
{
	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x0")]
	protected readonly int sizeofT;

	[Token(Token = "0x40000BE")]
	private const int TEMPO_UP_SKIP_GROUP = 6;

	[Token(Token = "0x40000BF")]
	[FieldOffset(Offset = "0x0")]
	private int frameSamples;

	[Token(Token = "0x40000C0")]
	[FieldOffset(Offset = "0x0")]
	private int frameSize;

	[Token(Token = "0x40000C1")]
	[FieldOffset(Offset = "0x0")]
	private int bufferSamples;

	[Token(Token = "0x40000C2")]
	[FieldOffset(Offset = "0x0")]
	private int bufferSamplesHalf;

	[Token(Token = "0x40000C3")]
	[FieldOffset(Offset = "0x0")]
	private int frequency;

	[Token(Token = "0x40000C4")]
	[FieldOffset(Offset = "0x0")]
	private int writeSamplePos;

	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0x0")]
	private int clearSamplePos;

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x0")]
	private int playSamplePos;

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x0")]
	private PlayDelayConfig playDelayConfig;

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x0")]
	private int channels;

	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x0")]
	private bool started;

	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0x0")]
	private bool flushed;

	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0x0")]
	private int targetDelaySamples;

	[Token(Token = "0x40000CC")]
	[FieldOffset(Offset = "0x0")]
	private int upperTargetDelaySamples;

	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x0")]
	private int maxDelaySamples;

	[Token(Token = "0x40000CE")]
	private const int NO_PUSH_TIMEOUT_MS = 120;

	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x0")]
	private int lastPushTime;

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x0")]
	protected readonly ILogger logger;

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x0")]
	protected readonly string logPrefix;

	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x0")]
	private readonly bool debugInfo;

	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0x0")]
	private readonly bool processInService;

	[Token(Token = "0x40000D4")]
	[FieldOffset(Offset = "0x0")]
	private T[] zeroFrame;

	[Token(Token = "0x40000D5")]
	[FieldOffset(Offset = "0x0")]
	private T[] resampledFrame;

	[Token(Token = "0x40000D6")]
	[FieldOffset(Offset = "0x0")]
	private AudioUtil.TempoUp<T> tempoUp;

	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0x0")]
	private bool tempoChangeHQ;

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x0")]
	private ConcurrentQueue<T[]> frameQueue;

	[Token(Token = "0x40000D9")]
	public const int FRAME_POOL_CAPACITY = 50;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x0")]
	private PrimitiveArrayPool<T> framePool;

	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x0")]
	private bool catchingUp;

	[Token(Token = "0x17000039")]
	public abstract long OutPos
	{
		[Token(Token = "0x60000E5")]
		get;
	}

	[Token(Token = "0x1700003A")]
	public int Lag
	{
		[Token(Token = "0x60000EB")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700003B")]
	public bool IsFlushed
	{
		[Token(Token = "0x60000EC")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700003C")]
	public bool IsPlaying
	{
		[Token(Token = "0x60000ED")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000E6")]
	public abstract void OutCreate(int frequency, int channels, int bufferSamples);

	[Token(Token = "0x60000E7")]
	public abstract void OutStart();

	[Token(Token = "0x60000E8")]
	public abstract void OutWrite(T[] data, int offsetSamples);

	[Token(Token = "0x60000E9")]
	public bool IsZeroFrame(T[] f)
	{
		return default(bool);
	}

	[Token(Token = "0x60000EA")]
	public AudioOutDelayControl(bool processInService, PlayDelayConfig playDelayConfig, ILogger logger, string logPrefix, bool debugInfo)
	{
	}

	[Token(Token = "0x60000EE")]
	public void Start(int frequency, int channels, int frameSamples)
	{
	}

	[Token(Token = "0x60000EF")]
	private void processFrame(T[] frame, int playSamplePos)
	{
	}

	[Token(Token = "0x60000F0")]
	public void Service()
	{
	}

	[Token(Token = "0x60000F1")]
	private int writeResampled(T[] f, int resampledLenSamples)
	{
		return default(int);
	}

	[Token(Token = "0x60000F2")]
	public void Push(T[] frame)
	{
	}

	[Token(Token = "0x60000F3")]
	public void Flush()
	{
	}

	[Token(Token = "0x60000F4")]
	public virtual void Stop()
	{
	}
}
