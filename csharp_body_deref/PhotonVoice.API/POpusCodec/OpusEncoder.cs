// ==================== AoTTG2 cross-reference ====================
// Type: POpusCodec.OpusEncoder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/POpusCodec/OpusEncoder.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using POpusCodec.Enums;
using Photon.Voice;

namespace POpusCodec;

[Token(Token = "0x2000007")]
public class OpusEncoder : IDisposable
{
	[Token(Token = "0x4000014")]
	public const int BitrateMax = -1;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x10")]
	private IntPtr handle;

	[Token(Token = "0x4000016")]
	private const int RecommendedMaxPacketSize = 4000;

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x18")]
	private int frameSamples;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x1C")]
	private SamplingRate inputSamplingRate;

	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x20")]
	private Channels channels;

	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x28")]
	private readonly byte[] writePacket;

	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ArraySegment<byte> EmptyBuffer;

	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x30")]
	private Delay _encoderDelay;

	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x10")]
	public static Dictionary<IntPtr, OpusEncoder> handles;

	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x38")]
	private byte[] bufOut;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x40")]
	public Action<ArraySegment<byte>, FrameFlags> Output;

	[Token(Token = "0x17000002")]
	public SamplingRate InputSamplingRate
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x3F15260", Offset = "0x3F15260", VA = "0x3F15260")]
		get
		{
			return default(SamplingRate);
		}
	}

	[Token(Token = "0x17000003")]
	public Channels InputChannels
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x3F15270", Offset = "0x3F15270", VA = "0x3F15270")]
		get
		{
			return default(Channels);
		}
	}

	[Token(Token = "0x17000004")]
	public Delay EncoderDelay
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x3F15360", Offset = "0x3F15360", VA = "0x3F15360")]
		get
		{
			return default(Delay);
		}
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x3F15280", Offset = "0x3F15280", VA = "0x3F15280")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public int FrameSizePerChannel
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x3F15370", Offset = "0x3F15370", VA = "0x3F15370")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000006")]
	public int Bitrate
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x3F15380", Offset = "0x3F15380", VA = "0x3F15380")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x3F155A0", Offset = "0x3F155A0", VA = "0x3F155A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public Bandwidth MaxBandwidth
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x3F15800", Offset = "0x3F15800", VA = "0x3F15800")]
		get
		{
			return default(Bandwidth);
		}
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x3F15810", Offset = "0x3F15810", VA = "0x3F15810")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public Complexity Complexity
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x3F15820", Offset = "0x3F15820", VA = "0x3F15820")]
		get
		{
			return default(Complexity);
		}
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x3F15830", Offset = "0x3F15830", VA = "0x3F15830")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public int ExpectedPacketLossPercentage
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x3F15840", Offset = "0x3F15840", VA = "0x3F15840")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x3F15850", Offset = "0x3F15850", VA = "0x3F15850")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public SignalHint SignalHint
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x3F15860", Offset = "0x3F15860", VA = "0x3F15860")]
		get
		{
			return default(SignalHint);
		}
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x3F15870", Offset = "0x3F15870", VA = "0x3F15870")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public ForceChannels ForceChannels
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x3F15880", Offset = "0x3F15880", VA = "0x3F15880")]
		get
		{
			return default(ForceChannels);
		}
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x3F15890", Offset = "0x3F15890", VA = "0x3F15890")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public bool UseInbandFEC
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x3F158A0", Offset = "0x3F158A0", VA = "0x3F158A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x3F158C0", Offset = "0x3F158C0", VA = "0x3F158C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public int PacketLossPercentage
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x3F158D0", Offset = "0x3F158D0", VA = "0x3F158D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x3F158E0", Offset = "0x3F158E0", VA = "0x3F158E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public bool UseUnconstrainedVBR
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x3F158F0", Offset = "0x3F158F0", VA = "0x3F158F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x3F15910", Offset = "0x3F15910", VA = "0x3F15910")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public bool DtxEnabled
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x3F15930", Offset = "0x3F15930", VA = "0x3F15930")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x3F15950", Offset = "0x3F15950", VA = "0x3F15950")]
		set
		{
		}
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x3F15960", Offset = "0x3F15960", VA = "0x3F15960")]
	public OpusEncoder(SamplingRate inputSamplingRateHz, Channels numChannels, int bitrate, OpusApplicationType applicationType, Delay encoderDelay)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x3F151B0", Offset = "0x3F151B0", VA = "0x3F151B0")]
	[MonoPInvokeCallback(typeof(Action<IntPtr, IntPtr, int>))]
	public static void DataCallbackStatic(IntPtr handle, IntPtr p, int count)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x3F162E0", Offset = "0x3F162E0", VA = "0x3F162E0")]
	private void dataCallback(IntPtr p, int count)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x3F163F0", Offset = "0x3F163F0", VA = "0x3F163F0")]
	public void Encode(float[] pcmSamples)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x3F16700", Offset = "0x3F16700", VA = "0x3F16700")]
	public void Encode(short[] pcmSamples)
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x3F16A10", Offset = "0x3F16A10", VA = "0x3F16A10", Slot = "4")]
	public void Dispose()
	{
	}
}
