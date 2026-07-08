using System;
using System.Collections.Generic;
using System.Threading;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000096")]
public class WebRTCAudioProcessor : WebRTCAudioLib, IProcessor<short>, IDisposable
{
	[Token(Token = "0x4000248")]
	private const int REVERSE_BUFFER_POOL_CAPACITY = 50;

	[Token(Token = "0x4000249")]
	[FieldOffset(Offset = "0x10")]
	private int reverseStreamDelayMs;

	[Token(Token = "0x400024A")]
	[FieldOffset(Offset = "0x14")]
	private bool aec;

	[Token(Token = "0x400024B")]
	[FieldOffset(Offset = "0x15")]
	private bool aecHighPass;

	[Token(Token = "0x400024C")]
	[FieldOffset(Offset = "0x16")]
	private bool aecm;

	[Token(Token = "0x400024D")]
	[FieldOffset(Offset = "0x17")]
	private bool highPass;

	[Token(Token = "0x400024E")]
	[FieldOffset(Offset = "0x18")]
	private bool ns;

	[Token(Token = "0x400024F")]
	[FieldOffset(Offset = "0x19")]
	private bool agc;

	[Token(Token = "0x4000250")]
	[FieldOffset(Offset = "0x1C")]
	private int agcCompressionGain;

	[Token(Token = "0x4000251")]
	[FieldOffset(Offset = "0x20")]
	private int agcTargetLevel;

	[Token(Token = "0x4000252")]
	[FieldOffset(Offset = "0x24")]
	private bool agc2;

	[Token(Token = "0x4000253")]
	[FieldOffset(Offset = "0x25")]
	private bool vad;

	[Token(Token = "0x4000254")]
	[FieldOffset(Offset = "0x26")]
	private bool reverseStreamThreadRunning;

	[Token(Token = "0x4000255")]
	[FieldOffset(Offset = "0x28")]
	private Queue<short[]> reverseStreamQueue;

	[Token(Token = "0x4000256")]
	[FieldOffset(Offset = "0x30")]
	private AutoResetEvent reverseStreamQueueReady;

	[Token(Token = "0x4000257")]
	[FieldOffset(Offset = "0x38")]
	private FactoryPrimitiveArrayPool<short> reverseBufferFactory;

	[Token(Token = "0x4000258")]
	[FieldOffset(Offset = "0x40")]
	private bool bypass;

	[Token(Token = "0x4000259")]
	[FieldOffset(Offset = "0x44")]
	private int inFrameSize;

	[Token(Token = "0x400025A")]
	[FieldOffset(Offset = "0x48")]
	private int processFrameSize;

	[Token(Token = "0x400025B")]
	[FieldOffset(Offset = "0x4C")]
	private int samplingRate;

	[Token(Token = "0x400025C")]
	[FieldOffset(Offset = "0x50")]
	private int channels;

	[Token(Token = "0x400025D")]
	[FieldOffset(Offset = "0x58")]
	private IntPtr proc;

	[Token(Token = "0x400025E")]
	[FieldOffset(Offset = "0x60")]
	private bool disposed;

	[Token(Token = "0x400025F")]
	[FieldOffset(Offset = "0x68")]
	private Framer<float> reverseFramer;

	[Token(Token = "0x4000260")]
	[FieldOffset(Offset = "0x70")]
	private int reverseSamplingRate;

	[Token(Token = "0x4000261")]
	[FieldOffset(Offset = "0x74")]
	private int reverseChannels;

	[Token(Token = "0x4000262")]
	[FieldOffset(Offset = "0x78")]
	private ILogger logger;

	[Token(Token = "0x4000263")]
	private const int supportedFrameLenMs = 10;

	[Token(Token = "0x4000264")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int[] SupportedSamplingRates;

	[Token(Token = "0x4000265")]
	[FieldOffset(Offset = "0x80")]
	private bool aecInited;

	[Token(Token = "0x4000266")]
	[FieldOffset(Offset = "0x84")]
	private int lastProcessErr;

	[Token(Token = "0x4000267")]
	[FieldOffset(Offset = "0x88")]
	private int lastProcessReverseErr;

	[Token(Token = "0x170000E0")]
	public int AECStreamDelayMs
	{
		[Token(Token = "0x600032F")]
		[Address(RVA = "0x3C3B2F0", Offset = "0x3C3B2F0", VA = "0x3C3B2F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E1")]
	public bool AEC
	{
		[Token(Token = "0x6000330")]
		[Address(RVA = "0x3C3B5A0", Offset = "0x3C3B5A0", VA = "0x3C3B5A0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E2")]
	public bool AECHighPass
	{
		[Token(Token = "0x6000331")]
		[Address(RVA = "0x3C3BD00", Offset = "0x3C3BD00", VA = "0x3C3BD00")]
		set
		{
		}
	}

	[Token(Token = "0x170000E3")]
	public bool AECMobile
	{
		[Token(Token = "0x6000332")]
		[Address(RVA = "0x3C3BD20", Offset = "0x3C3BD20", VA = "0x3C3BD20")]
		set
		{
		}
	}

	[Token(Token = "0x170000E4")]
	public bool HighPass
	{
		[Token(Token = "0x6000333")]
		[Address(RVA = "0x3C3BD60", Offset = "0x3C3BD60", VA = "0x3C3BD60")]
		set
		{
		}
	}

	[Token(Token = "0x170000E5")]
	public bool NoiseSuppression
	{
		[Token(Token = "0x6000334")]
		[Address(RVA = "0x3C3BD80", Offset = "0x3C3BD80", VA = "0x3C3BD80")]
		set
		{
		}
	}

	[Token(Token = "0x170000E6")]
	public bool AGC
	{
		[Token(Token = "0x6000335")]
		[Address(RVA = "0x3C3BDA0", Offset = "0x3C3BDA0", VA = "0x3C3BDA0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E7")]
	public int AGCCompressionGain
	{
		[Token(Token = "0x6000336")]
		[Address(RVA = "0x3C3BDC0", Offset = "0x3C3BDC0", VA = "0x3C3BDC0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E8")]
	public int AGCTargetLevel
	{
		[Token(Token = "0x6000337")]
		[Address(RVA = "0x3C3BF50", Offset = "0x3C3BF50", VA = "0x3C3BF50")]
		set
		{
		}
	}

	[Token(Token = "0x170000E9")]
	public bool AGC2
	{
		[Token(Token = "0x6000338")]
		[Address(RVA = "0x3C3C0E0", Offset = "0x3C3C0E0", VA = "0x3C3C0E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000EA")]
	public bool VAD
	{
		[Token(Token = "0x6000339")]
		[Address(RVA = "0x3C3C100", Offset = "0x3C3C100", VA = "0x3C3C100")]
		set
		{
		}
	}

	[Token(Token = "0x170000EB")]
	public bool Bypass
	{
		[Token(Token = "0x600033B")]
		[Address(RVA = "0x3C3C300", Offset = "0x3C3C300", VA = "0x3C3C300")]
		private get
		{
			return default(bool);
		}
		[Token(Token = "0x600033A")]
		[Address(RVA = "0x3C3C120", Offset = "0x3C3C120", VA = "0x3C3C120")]
		set
		{
		}
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x3C3C310", Offset = "0x3C3C310", VA = "0x3C3C310")]
	public WebRTCAudioProcessor(ILogger logger, int frameSize, int samplingRate, int channels, int reverseSamplingRate, int reverseChannels)
	{
	}

	[Token(Token = "0x600033D")]
	[Address(RVA = "0x3C3B5E0", Offset = "0x3C3B5E0", VA = "0x3C3B5E0")]
	private void InitReverseStream()
	{
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x3C3CC20", Offset = "0x3C3CC20", VA = "0x3C3CC20", Slot = "4")]
	public short[] Process(short[] buf)
	{
		return null;
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x3C3D0E0", Offset = "0x3C3D0E0", VA = "0x3C3D0E0")]
	public void OnAudioOutFrameFloat(float[] data)
	{
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x3C3D7D0", Offset = "0x3C3D7D0", VA = "0x3C3D7D0")]
	private void ReverseStreamThread()
	{
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x3C3B310", Offset = "0x3C3B310", VA = "0x3C3B310")]
	private int setParam(Param param, int v)
	{
		return default(int);
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x3C3E030", Offset = "0x3C3E030", VA = "0x3C3E030", Slot = "5")]
	public void Dispose()
	{
	}
}
