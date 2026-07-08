using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using POpusCodec.Enums;
using Photon.Voice;

namespace POpusCodec;

[Token(Token = "0x2000009")]
internal class Wrapper
{
	[Token(Token = "0x4000021")]
	private const string lib_name = "opus_egpv";

	[Token(Token = "0x4000022")]
	public const bool AsyncAPI = false;

	[Token(Token = "0x4000023")]
	private const string jsProxyPref = "";

	[Token(Token = "0x4000024")]
	private const string ctl_entry_point_set = "";

	[Token(Token = "0x4000025")]
	private const string ctl_entry_point_get = "";

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x3C21190", Offset = "0x3C21190", VA = "0x3C21190")]
	public static void opus_encoder_destroy(IntPtr st)
	{
	}

	[PreserveSig]
	[Token(Token = "0x6000032")]
	[Address(RVA = "0x3C21300", Offset = "0x3C21300", VA = "0x3C21300")]
	private static extern int opus_decode(IntPtr st, IntPtr data, int len, short[] pcm, int frame_size, int decode_fec);

	[PreserveSig]
	[Token(Token = "0x6000033")]
	[Address(RVA = "0x3C213B0", Offset = "0x3C213B0", VA = "0x3C213B0")]
	private static extern int opus_decode_float(IntPtr st, IntPtr data, int len, float[] pcm, int frame_size, int decode_fec);

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x3C21460", Offset = "0x3C21460", VA = "0x3C21460")]
	public static int opus_decode_async(IntPtr st, IntPtr data, int len, int decodeFEC, bool eos)
	{
		return default(int);
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x3C21470", Offset = "0x3C21470", VA = "0x3C21470")]
	public static int opus_decode_float_async(IntPtr st, IntPtr data, int len, int decodeFEC, bool eos)
	{
		return default(int);
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x3C21480", Offset = "0x3C21480", VA = "0x3C21480")]
	public static void opus_decoder_destroy(IntPtr st)
	{
	}

	[PreserveSig]
	[Token(Token = "0x6000037")]
	[Address(RVA = "0x3C214F0", Offset = "0x3C214F0", VA = "0x3C214F0")]
	private static extern int opus_encoder_get_size(Channels channels);

	[PreserveSig]
	[Token(Token = "0x6000038")]
	[Address(RVA = "0x3C21560", Offset = "0x3C21560", VA = "0x3C21560")]
	private static extern OpusStatusCode opus_encoder_init(IntPtr st, SamplingRate Fs, Channels channels, OpusApplicationType application);

	[PreserveSig]
	[Token(Token = "0x6000039")]
	[Address(RVA = "0x3C1F7E0", Offset = "0x3C1F7E0", VA = "0x3C1F7E0")]
	public static extern IntPtr opus_get_version_string();

	[PreserveSig]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x3C215F0", Offset = "0x3C215F0", VA = "0x3C215F0")]
	private static extern int opus_encode(IntPtr st, short[] pcm, int frame_size, byte[] data, int max_data_bytes);

	[PreserveSig]
	[Token(Token = "0x600003B")]
	[Address(RVA = "0x3C216A0", Offset = "0x3C216A0", VA = "0x3C216A0")]
	private static extern int opus_encode_float(IntPtr st, float[] pcm, int frame_size, byte[] data, int max_data_bytes);

	[PreserveSig]
	[Token(Token = "0x600003C")]
	[Address(RVA = "0x3C21750", Offset = "0x3C21750", VA = "0x3C21750")]
	private static extern int opus_encoder_ctl_set(IntPtr st, OpusCtlSetRequest request, int value);

	[PreserveSig]
	[Token(Token = "0x600003D")]
	[Address(RVA = "0x3C217D0", Offset = "0x3C217D0", VA = "0x3C217D0")]
	private static extern int opus_encoder_ctl_get(IntPtr st, OpusCtlGetRequest request, ref int value);

	[PreserveSig]
	[Token(Token = "0x600003E")]
	[Address(RVA = "0x3C21850", Offset = "0x3C21850", VA = "0x3C21850")]
	private static extern int opus_decoder_ctl_set(IntPtr st, OpusCtlSetRequest request, int value);

	[PreserveSig]
	[Token(Token = "0x600003F")]
	[Address(RVA = "0x3C218D0", Offset = "0x3C218D0", VA = "0x3C218D0")]
	private static extern int opus_decoder_ctl_get(IntPtr st, OpusCtlGetRequest request, ref int value);

	[PreserveSig]
	[Token(Token = "0x6000040")]
	[Address(RVA = "0x3C21950", Offset = "0x3C21950", VA = "0x3C21950")]
	private static extern int opus_decoder_get_size(Channels channels);

	[PreserveSig]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x3C219C0", Offset = "0x3C219C0", VA = "0x3C219C0")]
	private static extern OpusStatusCode opus_decoder_init(IntPtr st, SamplingRate Fs, Channels channels);

	[PreserveSig]
	[Token(Token = "0x6000042")]
	[Address(RVA = "0x3C21A40", Offset = "0x3C21A40", VA = "0x3C21A40")]
	public static extern int opus_packet_get_bandwidth(IntPtr data);

	[PreserveSig]
	[Token(Token = "0x6000043")]
	[Address(RVA = "0x3C21AB0", Offset = "0x3C21AB0", VA = "0x3C21AB0")]
	public static extern int opus_packet_get_nb_channels(byte[] data);

	[PreserveSig]
	[Token(Token = "0x6000044")]
	[Address(RVA = "0x3C21B30", Offset = "0x3C21B30", VA = "0x3C21B30")]
	private static extern IntPtr opus_strerror(OpusStatusCode error);

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x3C20440", Offset = "0x3C20440", VA = "0x3C20440")]
	public static IntPtr opus_encoder_create(SamplingRate Fs, Channels channels, OpusApplicationType application)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x3C20E40", Offset = "0x3C20E40", VA = "0x3C20E40")]
	public static int opus_encode(IntPtr st, short[] pcm, int frame_size, byte[] data)
	{
		return default(int);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x3C20B30", Offset = "0x3C20B30", VA = "0x3C20B30")]
	public static int opus_encode(IntPtr st, float[] pcm, int frame_size, byte[] data)
	{
		return default(int);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x3C1FA40", Offset = "0x3C1FA40", VA = "0x3C1FA40")]
	public static int get_opus_encoder_ctl(IntPtr st, OpusCtlGetRequest request)
	{
		return default(int);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x3C1FC60", Offset = "0x3C1FC60", VA = "0x3C1FC60")]
	public static void set_opus_encoder_ctl(IntPtr st, OpusCtlSetRequest request, int value)
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x3C21CE0", Offset = "0x3C21CE0", VA = "0x3C21CE0")]
	public static int get_opus_decoder_ctl(IntPtr st, OpusCtlGetRequest request)
	{
		return default(int);
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x3C21F40", Offset = "0x3C21F40", VA = "0x3C21F40")]
	public static void set_opus_decoder_ctl(IntPtr st, OpusCtlSetRequest request, int value)
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x3C22190", Offset = "0x3C22190", VA = "0x3C22190")]
	public static IntPtr opus_decoder_create(SamplingRate Fs, Channels channels, [Optional] Action<IntPtr, bool> dataCallbackStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x3C22560", Offset = "0x3C22560", VA = "0x3C22560")]
	public static int opus_decode(IntPtr st, FrameBuffer data, short[] pcm, int frame_size, int decode_fec)
	{
		return default(int);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x3C22970", Offset = "0x3C22970", VA = "0x3C22970")]
	public static int opus_decode(IntPtr st, FrameBuffer data, float[] pcm, int frame_size, int decode_fec)
	{
		return default(int);
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x3C21BA0", Offset = "0x3C21BA0", VA = "0x3C21BA0")]
	private static void HandleStatusCode(OpusStatusCode statusCode, params object[] info)
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x3C22D30", Offset = "0x3C22D30", VA = "0x3C22D30")]
	public Wrapper()
	{
	}
}
