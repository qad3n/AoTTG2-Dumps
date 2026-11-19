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

[Token(Token = "0x2000005")]
public class OpusEncoder : IDisposable
{
	[Token(Token = "0x400000F")]
	public const int BitrateMax = -1;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x10")]
	private IntPtr handle;

	[Token(Token = "0x4000011")]
	private const int RecommendedMaxPacketSize = 4000;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x18")]
	private int frameSamples;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x1C")]
	private SamplingRate inputSamplingRate;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x20")]
	private Channels channels;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x28")]
	private readonly byte[] writePacket;

	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ArraySegment<byte> EmptyBuffer;

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x30")]
	private Delay _encoderDelay;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x10")]
	public static Dictionary<IntPtr, OpusEncoder> handles;

	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x38")]
	private byte[] bufOut;

	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x40")]
	public Action<ArraySegment<byte>, FrameFlags> Output;

	[Token(Token = "0x17000002")]
	public SamplingRate InputSamplingRate
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x57000F0", Offset = "0x56FF0F0", VA = "0x57000F0")]
		get
		{
			return default(SamplingRate);
		}
	}

	[Token(Token = "0x17000003")]
	public Channels InputChannels
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x5700100", Offset = "0x56FF100", VA = "0x5700100")]
		get
		{
			return default(Channels);
		}
	}

	[Token(Token = "0x17000004")]
	public Delay EncoderDelay
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x57001F0", Offset = "0x56FF1F0", VA = "0x57001F0")]
		get
		{
			return default(Delay);
		}
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x5700110", Offset = "0x56FF110", VA = "0x5700110")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public int FrameSizePerChannel
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x5700200", Offset = "0x56FF200", VA = "0x5700200")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000006")]
	public int Bitrate
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x5700210", Offset = "0x56FF210", VA = "0x5700210")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x5700410", Offset = "0x56FF410", VA = "0x5700410")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public Bandwidth MaxBandwidth
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x5700660", Offset = "0x56FF660", VA = "0x5700660")]
		get
		{
			return default(Bandwidth);
		}
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x5700670", Offset = "0x56FF670", VA = "0x5700670")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public Complexity Complexity
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x5700680", Offset = "0x56FF680", VA = "0x5700680")]
		get
		{
			return default(Complexity);
		}
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x5700690", Offset = "0x56FF690", VA = "0x5700690")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public int ExpectedPacketLossPercentage
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x57006A0", Offset = "0x56FF6A0", VA = "0x57006A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x57006B0", Offset = "0x56FF6B0", VA = "0x57006B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public SignalHint SignalHint
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x57006C0", Offset = "0x56FF6C0", VA = "0x57006C0")]
		get
		{
			return default(SignalHint);
		}
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x57006D0", Offset = "0x56FF6D0", VA = "0x57006D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public ForceChannels ForceChannels
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x57006E0", Offset = "0x56FF6E0", VA = "0x57006E0")]
		get
		{
			return default(ForceChannels);
		}
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x57006F0", Offset = "0x56FF6F0", VA = "0x57006F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public bool UseInbandFEC
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x5700700", Offset = "0x56FF700", VA = "0x5700700")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x5700720", Offset = "0x56FF720", VA = "0x5700720")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public int PacketLossPercentage
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x5700730", Offset = "0x56FF730", VA = "0x5700730")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x5700740", Offset = "0x56FF740", VA = "0x5700740")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public bool UseUnconstrainedVBR
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x5700750", Offset = "0x56FF750", VA = "0x5700750")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x5700770", Offset = "0x56FF770", VA = "0x5700770")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public bool DtxEnabled
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x5700790", Offset = "0x56FF790", VA = "0x5700790")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x57007B0", Offset = "0x56FF7B0", VA = "0x57007B0")]
		set
		{
		}
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x57007C0", Offset = "0x56FF7C0", VA = "0x57007C0")]
	public OpusEncoder(SamplingRate inputSamplingRateHz, Channels numChannels, int bitrate, OpusApplicationType applicationType, Delay encoderDelay)
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x5700040", Offset = "0x56FF040", VA = "0x5700040")]
	[MonoPInvokeCallback(typeof(Action<IntPtr, IntPtr, int>))]
	public static void DataCallbackStatic(IntPtr handle, IntPtr p, int count)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x57010B0", Offset = "0x57000B0", VA = "0x57010B0")]
	private void dataCallback(IntPtr p, int count)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x57011C0", Offset = "0x57001C0", VA = "0x57011C0")]
	public void Encode(float[] pcmSamples)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x57014C0", Offset = "0x57004C0", VA = "0x57014C0")]
	public void Encode(short[] pcmSamples)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x57017C0", Offset = "0x57007C0", VA = "0x57017C0", Slot = "4")]
	public void Dispose()
	{
	}
}
