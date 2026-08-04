// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.WebRTCAudioProcessor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/WebRTCAudioProcessor.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3F30C40", Offset = "0x3F30C40", VA = "0x3F30C40")]
		set
		{
		}
	}

	[Token(Token = "0x170000E1")]
	public bool AEC
	{
		[Token(Token = "0x6000330")]
		[Address(RVA = "0x3F30EF0", Offset = "0x3F30EF0", VA = "0x3F30EF0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E2")]
	public bool AECHighPass
	{
		[Token(Token = "0x6000331")]
		[Address(RVA = "0x3F31650", Offset = "0x3F31650", VA = "0x3F31650")]
		set
		{
		}
	}

	[Token(Token = "0x170000E3")]
	public bool AECMobile
	{
		[Token(Token = "0x6000332")]
		[Address(RVA = "0x3F31670", Offset = "0x3F31670", VA = "0x3F31670")]
		set
		{
		}
	}

	[Token(Token = "0x170000E4")]
	public bool HighPass
	{
		[Token(Token = "0x6000333")]
		[Address(RVA = "0x3F316B0", Offset = "0x3F316B0", VA = "0x3F316B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E5")]
	public bool NoiseSuppression
	{
		[Token(Token = "0x6000334")]
		[Address(RVA = "0x3F316D0", Offset = "0x3F316D0", VA = "0x3F316D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E6")]
	public bool AGC
	{
		[Token(Token = "0x6000335")]
		[Address(RVA = "0x3F316F0", Offset = "0x3F316F0", VA = "0x3F316F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E7")]
	public int AGCCompressionGain
	{
		[Token(Token = "0x6000336")]
		[Address(RVA = "0x3F31710", Offset = "0x3F31710", VA = "0x3F31710")]
		set
		{
		}
	}

	[Token(Token = "0x170000E8")]
	public int AGCTargetLevel
	{
		[Token(Token = "0x6000337")]
		[Address(RVA = "0x3F318A0", Offset = "0x3F318A0", VA = "0x3F318A0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E9")]
	public bool AGC2
	{
		[Token(Token = "0x6000338")]
		[Address(RVA = "0x3F31A30", Offset = "0x3F31A30", VA = "0x3F31A30")]
		set
		{
		}
	}

	[Token(Token = "0x170000EA")]
	public bool VAD
	{
		[Token(Token = "0x6000339")]
		[Address(RVA = "0x3F31A50", Offset = "0x3F31A50", VA = "0x3F31A50")]
		set
		{
		}
	}

	[Token(Token = "0x170000EB")]
	public bool Bypass
	{
		[Token(Token = "0x600033B")]
		[Address(RVA = "0x3F31C50", Offset = "0x3F31C50", VA = "0x3F31C50")]
		private get
		{
			return default(bool);
		}
		[Token(Token = "0x600033A")]
		[Address(RVA = "0x3F31A70", Offset = "0x3F31A70", VA = "0x3F31A70")]
		set
		{
		}
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x3F31C60", Offset = "0x3F31C60", VA = "0x3F31C60")]
	public WebRTCAudioProcessor(ILogger logger, int frameSize, int samplingRate, int channels, int reverseSamplingRate, int reverseChannels)
	{
	}

	[Token(Token = "0x600033D")]
	[Address(RVA = "0x3F30F30", Offset = "0x3F30F30", VA = "0x3F30F30")]
	private void InitReverseStream()
	{
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x3F32570", Offset = "0x3F32570", VA = "0x3F32570", Slot = "4")]
	public short[] Process(short[] buf)
	{
		return null;
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x3F32A30", Offset = "0x3F32A30", VA = "0x3F32A30")]
	public void OnAudioOutFrameFloat(float[] data)
	{
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x3F33120", Offset = "0x3F33120", VA = "0x3F33120")]
	private void ReverseStreamThread()
	{
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x3F30C60", Offset = "0x3F30C60", VA = "0x3F30C60")]
	private int setParam(Param param, int v)
	{
		return default(int);
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x3F33980", Offset = "0x3F33980", VA = "0x3F33980", Slot = "5")]
	public void Dispose()
	{
	}
}
