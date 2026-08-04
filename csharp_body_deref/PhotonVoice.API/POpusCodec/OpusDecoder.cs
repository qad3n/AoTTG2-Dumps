// ==================== AoTTG2 cross-reference ====================
// Type: POpusCodec.OpusDecoder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/POpusCodec/OpusDecoder.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using POpusCodec.Enums;
using Photon.Voice;

namespace POpusCodec;

[Token(Token = "0x2000004")]
public class OpusDecoder<T> : IDisposable
{
	[Token(Token = "0x4000006")]
	private const bool UseInbandFEC = true;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x0")]
	protected Action<FrameOut<T>> output;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x0")]
	protected bool TisFloat;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x0")]
	protected int sizeofT;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x0")]
	protected FrameOut<T> frameOut;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x0")]
	protected IntPtr handle;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x0")]
	protected int channels;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x0")]
	protected int frameSamples;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x0")]
	protected static readonly T[] EmptyBuffer;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x0")]
	private T[] buffer;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x0")]
	private bool prevPacketInvalid;

	[Token(Token = "0x6000003")]
	public OpusDecoder(Action<FrameOut<T>> output, SamplingRate outputSamplingRateHz, Channels channels, int frameSamples)
	{
	}

	[Token(Token = "0x6000004")]
	protected void decodePacket(FrameBuffer data, int decodeFEC, int channels, bool endOfStream)
	{
	}

	[Token(Token = "0x6000005")]
	protected void procOutput(T[] buffer, bool endOfStream)
	{
	}

	[Token(Token = "0x6000006")]
	public void DecodePacket(ref FrameBuffer packetData, bool endOfStream)
	{
	}

	[Token(Token = "0x6000007")]
	public virtual void Dispose()
	{
	}
}
