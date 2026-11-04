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
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0")]
		get
		{
			return default(SamplingRate);
		}
	}

	[Token(Token = "0x17000003")]
	public Channels InputChannels
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		get
		{
			return default(Channels);
		}
	}

	[Token(Token = "0x17000004")]
	public Delay EncoderDelay
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		get
		{
			return default(Delay);
		}
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x1D70260", Offset = "0x1D6E860", VA = "0x181D70260")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public int FrameSizePerChannel
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000006")]
	public int Bitrate
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x1D700E0", Offset = "0x1D6E6E0", VA = "0x181D700E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x1D70200", Offset = "0x1D6E800", VA = "0x181D70200")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public Bandwidth MaxBandwidth
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x1D70180", Offset = "0x1D6E780", VA = "0x181D70180")]
		get
		{
			return default(Bandwidth);
		}
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x1D703B0", Offset = "0x1D6E9B0", VA = "0x181D703B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public Complexity Complexity
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x1D70100", Offset = "0x1D6E700", VA = "0x181D70100")]
		get
		{
			return default(Complexity);
		}
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x1D70220", Offset = "0x1D6E820", VA = "0x181D70220")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public int ExpectedPacketLossPercentage
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x1D70140", Offset = "0x1D6E740", VA = "0x181D70140")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x1D70370", Offset = "0x1D6E970", VA = "0x181D70370")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public SignalHint SignalHint
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x1D701A0", Offset = "0x1D6E7A0", VA = "0x181D701A0")]
		get
		{
			return default(SignalHint);
		}
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x1D703D0", Offset = "0x1D6E9D0", VA = "0x181D703D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public ForceChannels ForceChannels
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x1D70160", Offset = "0x1D6E760", VA = "0x181D70160")]
		get
		{
			return default(ForceChannels);
		}
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x1D70390", Offset = "0x1D6E990", VA = "0x181D70390")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public bool UseInbandFEC
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x1D701C0", Offset = "0x1D6E7C0", VA = "0x181D701C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x1D703F0", Offset = "0x1D6E9F0", VA = "0x181D703F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public int PacketLossPercentage
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x1D70140", Offset = "0x1D6E740", VA = "0x181D70140")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x1D70370", Offset = "0x1D6E970", VA = "0x181D70370")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public bool UseUnconstrainedVBR
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x1D701E0", Offset = "0x1D6E7E0", VA = "0x181D701E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x1D70410", Offset = "0x1D6EA10", VA = "0x181D70410")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public bool DtxEnabled
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x1D70120", Offset = "0x1D6E720", VA = "0x181D70120")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x1D70240", Offset = "0x1D6E840", VA = "0x181D70240")]
		set
		{
		}
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x1D6F5E0", Offset = "0x1D6DBE0", VA = "0x181D6F5E0")]
	public OpusEncoder(SamplingRate inputSamplingRateHz, Channels numChannels, int bitrate, OpusApplicationType applicationType, Delay encoderDelay)
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x1D6F0E0", Offset = "0x1D6D6E0", VA = "0x181D6F0E0")]
	[MonoPInvokeCallback(typeof(Action<IntPtr, IntPtr, int>))]
	public static void DataCallbackStatic(IntPtr handle, IntPtr p, int count)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x1D6FFB0", Offset = "0x1D6E5B0", VA = "0x181D6FFB0")]
	private void dataCallback(IntPtr p, int count)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x1D6F380", Offset = "0x1D6D980", VA = "0x181D6F380")]
	public void Encode(float[] pcmSamples)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x1D6F430", Offset = "0x1D6DA30", VA = "0x181D6F430")]
	public void Encode(short[] pcmSamples)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x1D6F2A0", Offset = "0x1D6D8A0", VA = "0x181D6F2A0", Slot = "4")]
	public void Dispose()
	{
	}
}
