// ==================== AoTTG2 cross-reference ====================
// Type: POpusCodec.Wrapper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/POpusCodec/OpusWrapper.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using POpusCodec.Enums;
using Photon.Voice;

namespace POpusCodec;

[Token(Token = "0x2000007")]
internal class Wrapper
{
	[Token(Token = "0x400001C")]
	private const string lib_name = "opus_egpv";

	[Token(Token = "0x400001D")]
	public const bool AsyncAPI = false;

	[Token(Token = "0x400001E")]
	private const string jsProxyPref = "";

	[Token(Token = "0x400001F")]
	private const string ctl_entry_point_set = "";

	[Token(Token = "0x4000020")]
	private const string ctl_entry_point_get = "";

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x1D815C0", Offset = "0x1D7FBC0", VA = "0x181D815C0")]
	public static void opus_encoder_destroy(IntPtr st)
	{
	}

	[PreserveSig]
	[Token(Token = "0x6000030")]
	[Address(RVA = "0x1D7FC10", Offset = "0x1D7E210", VA = "0x181D7FC10")]
	private static extern int opus_decode(IntPtr st, IntPtr data, int len, short[] pcm, int frame_size, int decode_fec);

	[PreserveSig]
	[Token(Token = "0x6000031")]
	[Address(RVA = "0x1D7FB60", Offset = "0x1D7E160", VA = "0x181D7FB60")]
	private static extern int opus_decode_float(IntPtr st, IntPtr data, int len, float[] pcm, int frame_size, int decode_fec);

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
	public static int opus_decode_async(IntPtr st, IntPtr data, int len, int decodeFEC, bool eos)
	{
		return default(int);
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
	public static int opus_decode_float_async(IntPtr st, IntPtr data, int len, int decodeFEC, bool eos)
	{
		return default(int);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x1D80920", Offset = "0x1D7EF20", VA = "0x181D80920")]
	public static void opus_decoder_destroy(IntPtr st)
	{
	}

	[PreserveSig]
	[Token(Token = "0x6000035")]
	[Address(RVA = "0x1D81610", Offset = "0x1D7FC10", VA = "0x181D81610")]
	private static extern int opus_encoder_get_size(Channels channels);

	[PreserveSig]
	[Token(Token = "0x6000036")]
	[Address(RVA = "0x1D81680", Offset = "0x1D7FC80", VA = "0x181D81680")]
	private static extern OpusStatusCode opus_encoder_init(IntPtr st, SamplingRate Fs, Channels channels, OpusApplicationType application);

	[PreserveSig]
	[Token(Token = "0x6000037")]
	[Address(RVA = "0x1D81710", Offset = "0x1D7FD10", VA = "0x181D81710")]
	public static extern IntPtr opus_get_version_string();

	[PreserveSig]
	[Token(Token = "0x6000038")]
	[Address(RVA = "0x1D80DC0", Offset = "0x1D7F3C0", VA = "0x181D80DC0")]
	private static extern int opus_encode(IntPtr st, short[] pcm, int frame_size, byte[] data, int max_data_bytes);

	[PreserveSig]
	[Token(Token = "0x6000039")]
	[Address(RVA = "0x1D80A70", Offset = "0x1D7F070", VA = "0x181D80A70")]
	private static extern int opus_encode_float(IntPtr st, float[] pcm, int frame_size, byte[] data, int max_data_bytes);

	[PreserveSig]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x1D81530", Offset = "0x1D7FB30", VA = "0x181D81530")]
	private static extern int opus_encoder_ctl_set(IntPtr st, OpusCtlSetRequest request, int value);

	[PreserveSig]
	[Token(Token = "0x600003B")]
	[Address(RVA = "0x1D814A0", Offset = "0x1D7FAA0", VA = "0x181D814A0")]
	private static extern int opus_encoder_ctl_get(IntPtr st, OpusCtlGetRequest request, ref int value);

	[PreserveSig]
	[Token(Token = "0x600003C")]
	[Address(RVA = "0x1D80890", Offset = "0x1D7EE90", VA = "0x181D80890")]
	private static extern int opus_decoder_ctl_set(IntPtr st, OpusCtlSetRequest request, int value);

	[PreserveSig]
	[Token(Token = "0x600003D")]
	[Address(RVA = "0x1D80800", Offset = "0x1D7EE00", VA = "0x181D80800")]
	private static extern int opus_decoder_ctl_get(IntPtr st, OpusCtlGetRequest request, ref int value);

	[PreserveSig]
	[Token(Token = "0x600003E")]
	[Address(RVA = "0x1D80970", Offset = "0x1D7EF70", VA = "0x181D80970")]
	private static extern int opus_decoder_get_size(Channels channels);

	[PreserveSig]
	[Token(Token = "0x600003F")]
	[Address(RVA = "0x1D809E0", Offset = "0x1D7EFE0", VA = "0x181D809E0")]
	private static extern OpusStatusCode opus_decoder_init(IntPtr st, SamplingRate Fs, Channels channels);

	[PreserveSig]
	[Token(Token = "0x6000040")]
	[Address(RVA = "0x1D81780", Offset = "0x1D7FD80", VA = "0x181D81780")]
	public static extern int opus_packet_get_bandwidth(IntPtr data);

	[PreserveSig]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x1D81800", Offset = "0x1D7FE00", VA = "0x181D81800")]
	public static extern int opus_packet_get_nb_channels(byte[] data);

	[PreserveSig]
	[Token(Token = "0x6000042")]
	[Address(RVA = "0x1D81880", Offset = "0x1D7FE80", VA = "0x181D81880")]
	private static extern IntPtr opus_strerror(OpusStatusCode error);

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x1D81110", Offset = "0x1D7F710", VA = "0x181D81110")]
	public static IntPtr opus_encoder_create(SamplingRate Fs, Channels channels, OpusApplicationType application)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x1D80B20", Offset = "0x1D7F120", VA = "0x181D80B20")]
	public static int opus_encode(IntPtr st, short[] pcm, int frame_size, byte[] data)
	{
		return default(int);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x1D80E70", Offset = "0x1D7F470", VA = "0x181D80E70")]
	public static int opus_encode(IntPtr st, float[] pcm, int frame_size, byte[] data)
	{
		return default(int);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x1D7F950", Offset = "0x1D7DF50", VA = "0x181D7F950")]
	public static int get_opus_encoder_ctl(IntPtr st, OpusCtlGetRequest request)
	{
		return default(int);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x1D81B60", Offset = "0x1D80160", VA = "0x181D81B60")]
	public static void set_opus_encoder_ctl(IntPtr st, OpusCtlSetRequest request, int value)
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x1D7F6D0", Offset = "0x1D7DCD0", VA = "0x181D7F6D0")]
	public static int get_opus_decoder_ctl(IntPtr st, OpusCtlGetRequest request)
	{
		return default(int);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x1D818F0", Offset = "0x1D7FEF0", VA = "0x181D818F0")]
	public static void set_opus_decoder_ctl(IntPtr st, OpusCtlSetRequest request, int value)
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x1D804E0", Offset = "0x1D7EAE0", VA = "0x181D804E0")]
	public static IntPtr opus_decoder_create(SamplingRate Fs, Channels channels, [Optional] Action<IntPtr, bool> dataCallbackStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x1D800D0", Offset = "0x1D7E6D0", VA = "0x181D800D0")]
	public static int opus_decode(IntPtr st, FrameBuffer data, short[] pcm, int frame_size, int decode_fec)
	{
		return default(int);
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x1D7FCC0", Offset = "0x1D7E2C0", VA = "0x181D7FCC0")]
	public static int opus_decode(IntPtr st, FrameBuffer data, float[] pcm, int frame_size, int decode_fec)
	{
		return default(int);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x1D7F570", Offset = "0x1D7DB70", VA = "0x181D7F570")]
	private static void HandleStatusCode(OpusStatusCode statusCode, params object[] info)
	{
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public Wrapper()
	{
	}
}
