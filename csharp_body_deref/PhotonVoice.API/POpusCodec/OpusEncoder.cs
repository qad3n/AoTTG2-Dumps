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
		[Address(RVA = "0x3C1F910", Offset = "0x3C1F910", VA = "0x3C1F910")]
		get
		{
			return default(SamplingRate);
		}
	}

	[Token(Token = "0x17000003")]
	public Channels InputChannels
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x3C1F920", Offset = "0x3C1F920", VA = "0x3C1F920")]
		get
		{
			return default(Channels);
		}
	}

	[Token(Token = "0x17000004")]
	public Delay EncoderDelay
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x3C1FA10", Offset = "0x3C1FA10", VA = "0x3C1FA10")]
		get
		{
			return default(Delay);
		}
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x3C1F930", Offset = "0x3C1F930", VA = "0x3C1F930")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public int FrameSizePerChannel
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x3C1FA20", Offset = "0x3C1FA20", VA = "0x3C1FA20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000006")]
	public int Bitrate
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x3C1FA30", Offset = "0x3C1FA30", VA = "0x3C1FA30")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x3C1FC50", Offset = "0x3C1FC50", VA = "0x3C1FC50")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public Bandwidth MaxBandwidth
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x3C1FEB0", Offset = "0x3C1FEB0", VA = "0x3C1FEB0")]
		get
		{
			return default(Bandwidth);
		}
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x3C1FEC0", Offset = "0x3C1FEC0", VA = "0x3C1FEC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public Complexity Complexity
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x3C1FED0", Offset = "0x3C1FED0", VA = "0x3C1FED0")]
		get
		{
			return default(Complexity);
		}
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x3C1FEE0", Offset = "0x3C1FEE0", VA = "0x3C1FEE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public int ExpectedPacketLossPercentage
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x3C1FEF0", Offset = "0x3C1FEF0", VA = "0x3C1FEF0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x3C1FF00", Offset = "0x3C1FF00", VA = "0x3C1FF00")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public SignalHint SignalHint
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x3C1FF10", Offset = "0x3C1FF10", VA = "0x3C1FF10")]
		get
		{
			return default(SignalHint);
		}
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x3C1FF20", Offset = "0x3C1FF20", VA = "0x3C1FF20")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public ForceChannels ForceChannels
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x3C1FF30", Offset = "0x3C1FF30", VA = "0x3C1FF30")]
		get
		{
			return default(ForceChannels);
		}
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x3C1FF40", Offset = "0x3C1FF40", VA = "0x3C1FF40")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public bool UseInbandFEC
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x3C1FF50", Offset = "0x3C1FF50", VA = "0x3C1FF50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x3C1FF70", Offset = "0x3C1FF70", VA = "0x3C1FF70")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public int PacketLossPercentage
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x3C1FF80", Offset = "0x3C1FF80", VA = "0x3C1FF80")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x3C1FF90", Offset = "0x3C1FF90", VA = "0x3C1FF90")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public bool UseUnconstrainedVBR
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x3C1FFA0", Offset = "0x3C1FFA0", VA = "0x3C1FFA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x3C1FFC0", Offset = "0x3C1FFC0", VA = "0x3C1FFC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public bool DtxEnabled
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x3C1FFE0", Offset = "0x3C1FFE0", VA = "0x3C1FFE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x3C20000", Offset = "0x3C20000", VA = "0x3C20000")]
		set
		{
		}
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x3C20010", Offset = "0x3C20010", VA = "0x3C20010")]
	public OpusEncoder(SamplingRate inputSamplingRateHz, Channels numChannels, int bitrate, OpusApplicationType applicationType, Delay encoderDelay)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x3C1F860", Offset = "0x3C1F860", VA = "0x3C1F860")]
	[MonoPInvokeCallback(typeof(Action<IntPtr, IntPtr, int>))]
	public static void DataCallbackStatic(IntPtr handle, IntPtr p, int count)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x3C20990", Offset = "0x3C20990", VA = "0x3C20990")]
	private void dataCallback(IntPtr p, int count)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x3C20AA0", Offset = "0x3C20AA0", VA = "0x3C20AA0")]
	public void Encode(float[] pcmSamples)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x3C20DB0", Offset = "0x3C20DB0", VA = "0x3C20DB0")]
	public void Encode(short[] pcmSamples)
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x3C210C0", Offset = "0x3C210C0", VA = "0x3C210C0", Slot = "4")]
	public void Dispose()
	{
	}
}
