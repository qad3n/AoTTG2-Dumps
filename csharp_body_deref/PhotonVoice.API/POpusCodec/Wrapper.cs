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
	[Address(RVA = "0x3F16AE0", Offset = "0x3F16AE0", VA = "0x3F16AE0")]
	public static void opus_encoder_destroy(IntPtr st)
	{
	}

	[PreserveSig]
	[Token(Token = "0x6000032")]
	[Address(RVA = "0x3F16C50", Offset = "0x3F16C50", VA = "0x3F16C50")]
	private static extern int opus_decode(IntPtr st, IntPtr data, int len, short[] pcm, int frame_size, int decode_fec);

	[PreserveSig]
	[Token(Token = "0x6000033")]
	[Address(RVA = "0x3F16D00", Offset = "0x3F16D00", VA = "0x3F16D00")]
	private static extern int opus_decode_float(IntPtr st, IntPtr data, int len, float[] pcm, int frame_size, int decode_fec);

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x3F16DB0", Offset = "0x3F16DB0", VA = "0x3F16DB0")]
	public static int opus_decode_async(IntPtr st, IntPtr data, int len, int decodeFEC, bool eos)
	{
		return default(int);
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x3F16DC0", Offset = "0x3F16DC0", VA = "0x3F16DC0")]
	public static int opus_decode_float_async(IntPtr st, IntPtr data, int len, int decodeFEC, bool eos)
	{
		return default(int);
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x3F16DD0", Offset = "0x3F16DD0", VA = "0x3F16DD0")]
	public static void opus_decoder_destroy(IntPtr st)
	{
	}

	[PreserveSig]
	[Token(Token = "0x6000037")]
	[Address(RVA = "0x3F16E40", Offset = "0x3F16E40", VA = "0x3F16E40")]
	private static extern int opus_encoder_get_size(Channels channels);

	[PreserveSig]
	[Token(Token = "0x6000038")]
	[Address(RVA = "0x3F16EB0", Offset = "0x3F16EB0", VA = "0x3F16EB0")]
	private static extern OpusStatusCode opus_encoder_init(IntPtr st, SamplingRate Fs, Channels channels, OpusApplicationType application);

	[PreserveSig]
	[Token(Token = "0x6000039")]
	[Address(RVA = "0x3F15130", Offset = "0x3F15130", VA = "0x3F15130")]
	public static extern IntPtr opus_get_version_string();

	[PreserveSig]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x3F16F40", Offset = "0x3F16F40", VA = "0x3F16F40")]
	private static extern int opus_encode(IntPtr st, short[] pcm, int frame_size, byte[] data, int max_data_bytes);

	[PreserveSig]
	[Token(Token = "0x600003B")]
	[Address(RVA = "0x3F16FF0", Offset = "0x3F16FF0", VA = "0x3F16FF0")]
	private static extern int opus_encode_float(IntPtr st, float[] pcm, int frame_size, byte[] data, int max_data_bytes);

	[PreserveSig]
	[Token(Token = "0x600003C")]
	[Address(RVA = "0x3F170A0", Offset = "0x3F170A0", VA = "0x3F170A0")]
	private static extern int opus_encoder_ctl_set(IntPtr st, OpusCtlSetRequest request, int value);

	[PreserveSig]
	[Token(Token = "0x600003D")]
	[Address(RVA = "0x3F17120", Offset = "0x3F17120", VA = "0x3F17120")]
	private static extern int opus_encoder_ctl_get(IntPtr st, OpusCtlGetRequest request, ref int value);

	[PreserveSig]
	[Token(Token = "0x600003E")]
	[Address(RVA = "0x3F171A0", Offset = "0x3F171A0", VA = "0x3F171A0")]
	private static extern int opus_decoder_ctl_set(IntPtr st, OpusCtlSetRequest request, int value);

	[PreserveSig]
	[Token(Token = "0x600003F")]
	[Address(RVA = "0x3F17220", Offset = "0x3F17220", VA = "0x3F17220")]
	private static extern int opus_decoder_ctl_get(IntPtr st, OpusCtlGetRequest request, ref int value);

	[PreserveSig]
	[Token(Token = "0x6000040")]
	[Address(RVA = "0x3F172A0", Offset = "0x3F172A0", VA = "0x3F172A0")]
	private static extern int opus_decoder_get_size(Channels channels);

	[PreserveSig]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x3F17310", Offset = "0x3F17310", VA = "0x3F17310")]
	private static extern OpusStatusCode opus_decoder_init(IntPtr st, SamplingRate Fs, Channels channels);

	[PreserveSig]
	[Token(Token = "0x6000042")]
	[Address(RVA = "0x3F17390", Offset = "0x3F17390", VA = "0x3F17390")]
	public static extern int opus_packet_get_bandwidth(IntPtr data);

	[PreserveSig]
	[Token(Token = "0x6000043")]
	[Address(RVA = "0x3F17400", Offset = "0x3F17400", VA = "0x3F17400")]
	public static extern int opus_packet_get_nb_channels(byte[] data);

	[PreserveSig]
	[Token(Token = "0x6000044")]
	[Address(RVA = "0x3F17480", Offset = "0x3F17480", VA = "0x3F17480")]
	private static extern IntPtr opus_strerror(OpusStatusCode error);

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x3F15D90", Offset = "0x3F15D90", VA = "0x3F15D90")]
	public static IntPtr opus_encoder_create(SamplingRate Fs, Channels channels, OpusApplicationType application)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x3F16790", Offset = "0x3F16790", VA = "0x3F16790")]
	public static int opus_encode(IntPtr st, short[] pcm, int frame_size, byte[] data)
	{
		return default(int);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x3F16480", Offset = "0x3F16480", VA = "0x3F16480")]
	public static int opus_encode(IntPtr st, float[] pcm, int frame_size, byte[] data)
	{
		return default(int);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x3F15390", Offset = "0x3F15390", VA = "0x3F15390")]
	public static int get_opus_encoder_ctl(IntPtr st, OpusCtlGetRequest request)
	{
		return default(int);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x3F155B0", Offset = "0x3F155B0", VA = "0x3F155B0")]
	public static void set_opus_encoder_ctl(IntPtr st, OpusCtlSetRequest request, int value)
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x3F17630", Offset = "0x3F17630", VA = "0x3F17630")]
	public static int get_opus_decoder_ctl(IntPtr st, OpusCtlGetRequest request)
	{
		return default(int);
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x3F17890", Offset = "0x3F17890", VA = "0x3F17890")]
	public static void set_opus_decoder_ctl(IntPtr st, OpusCtlSetRequest request, int value)
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x3F17AE0", Offset = "0x3F17AE0", VA = "0x3F17AE0")]
	public static IntPtr opus_decoder_create(SamplingRate Fs, Channels channels, [Optional] Action<IntPtr, bool> dataCallbackStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x3F17EB0", Offset = "0x3F17EB0", VA = "0x3F17EB0")]
	public static int opus_decode(IntPtr st, FrameBuffer data, short[] pcm, int frame_size, int decode_fec)
	{
		return default(int);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x3F182C0", Offset = "0x3F182C0", VA = "0x3F182C0")]
	public static int opus_decode(IntPtr st, FrameBuffer data, float[] pcm, int frame_size, int decode_fec)
	{
		return default(int);
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x3F174F0", Offset = "0x3F174F0", VA = "0x3F174F0")]
	private static void HandleStatusCode(OpusStatusCode statusCode, params object[] info)
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x3F18680", Offset = "0x3F18680", VA = "0x3F18680")]
	public Wrapper()
	{
	}
}
