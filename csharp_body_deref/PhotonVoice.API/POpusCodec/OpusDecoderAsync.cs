using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using POpusCodec.Enums;
using Photon.Voice;

namespace POpusCodec;

[Token(Token = "0x2000005")]
public class OpusDecoderAsync<T> : OpusDecoder<T>
{
	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x0")]
	protected static Dictionary<IntPtr, OpusDecoderAsync<T>> handles;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x0")]
	private float[] bufOutFloat;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x0")]
	private short[] bufOutShort;

	[Token(Token = "0x6000009")]
	[MonoPInvokeCallback(typeof(Action<IntPtr, IntPtr, int, bool>))]
	public static void DataCallbackStatic(IntPtr handle, IntPtr p, int count, bool endOfStream)
	{
	}

	[Token(Token = "0x600000A")]
	public OpusDecoderAsync(Action<FrameOut<T>> output, SamplingRate outputSamplingRateHz, Channels numChannels, int frameDurationSamples)
	{
	}

	[Token(Token = "0x600000B")]
	protected void dataCallback(IntPtr p, int count, bool endOfStream)
	{
	}

	[Token(Token = "0x600000C")]
	public override void Dispose()
	{
	}
}
