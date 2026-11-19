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
	[Address(RVA = "0x5701890", Offset = "0x5700890", VA = "0x5701890")]
	public static void opus_encoder_destroy(IntPtr st)
	{
	}

	[PreserveSig]
	[Token(Token = "0x6000030")]
	[Address(RVA = "0x5701A00", Offset = "0x5700A00", VA = "0x5701A00")]
	private static extern int opus_decode(IntPtr st, IntPtr data, int len, short[] pcm, int frame_size, int decode_fec);

	[PreserveSig]
	[Token(Token = "0x6000031")]
	[Address(RVA = "0x5701AB0", Offset = "0x5700AB0", VA = "0x5701AB0")]
	private static extern int opus_decode_float(IntPtr st, IntPtr data, int len, float[] pcm, int frame_size, int decode_fec);

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x5701B60", Offset = "0x5700B60", VA = "0x5701B60")]
	public static int opus_decode_async(IntPtr st, IntPtr data, int len, int decodeFEC, bool eos)
	{
		return default(int);
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x5701B70", Offset = "0x5700B70", VA = "0x5701B70")]
	public static int opus_decode_float_async(IntPtr st, IntPtr data, int len, int decodeFEC, bool eos)
	{
		return default(int);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x5701B80", Offset = "0x5700B80", VA = "0x5701B80")]
	public static void opus_decoder_destroy(IntPtr st)
	{
	}

	[PreserveSig]
	[Token(Token = "0x6000035")]
	[Address(RVA = "0x5701BF0", Offset = "0x5700BF0", VA = "0x5701BF0")]
	private static extern int opus_encoder_get_size(Channels channels);

	[PreserveSig]
	[Token(Token = "0x6000036")]
	[Address(RVA = "0x5701C60", Offset = "0x5700C60", VA = "0x5701C60")]
	private static extern OpusStatusCode opus_encoder_init(IntPtr st, SamplingRate Fs, Channels channels, OpusApplicationType application);

	[PreserveSig]
	[Token(Token = "0x6000037")]
	[Address(RVA = "0x56FFFC0", Offset = "0x56FEFC0", VA = "0x56FFFC0")]
	public static extern IntPtr opus_get_version_string();

	[PreserveSig]
	[Token(Token = "0x6000038")]
	[Address(RVA = "0x5701CF0", Offset = "0x5700CF0", VA = "0x5701CF0")]
	private static extern int opus_encode(IntPtr st, short[] pcm, int frame_size, byte[] data, int max_data_bytes);

	[PreserveSig]
	[Token(Token = "0x6000039")]
	[Address(RVA = "0x5701DA0", Offset = "0x5700DA0", VA = "0x5701DA0")]
	private static extern int opus_encode_float(IntPtr st, float[] pcm, int frame_size, byte[] data, int max_data_bytes);

	[PreserveSig]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x5701E50", Offset = "0x5700E50", VA = "0x5701E50")]
	private static extern int opus_encoder_ctl_set(IntPtr st, OpusCtlSetRequest request, int value);

	[PreserveSig]
	[Token(Token = "0x600003B")]
	[Address(RVA = "0x5701ED0", Offset = "0x5700ED0", VA = "0x5701ED0")]
	private static extern int opus_encoder_ctl_get(IntPtr st, OpusCtlGetRequest request, ref int value);

	[PreserveSig]
	[Token(Token = "0x600003C")]
	[Address(RVA = "0x5701F50", Offset = "0x5700F50", VA = "0x5701F50")]
	private static extern int opus_decoder_ctl_set(IntPtr st, OpusCtlSetRequest request, int value);

	[PreserveSig]
	[Token(Token = "0x600003D")]
	[Address(RVA = "0x5701FD0", Offset = "0x5700FD0", VA = "0x5701FD0")]
	private static extern int opus_decoder_ctl_get(IntPtr st, OpusCtlGetRequest request, ref int value);

	[PreserveSig]
	[Token(Token = "0x600003E")]
	[Address(RVA = "0x5702050", Offset = "0x5701050", VA = "0x5702050")]
	private static extern int opus_decoder_get_size(Channels channels);

	[PreserveSig]
	[Token(Token = "0x600003F")]
	[Address(RVA = "0x57020C0", Offset = "0x57010C0", VA = "0x57020C0")]
	private static extern OpusStatusCode opus_decoder_init(IntPtr st, SamplingRate Fs, Channels channels);

	[PreserveSig]
	[Token(Token = "0x6000040")]
	[Address(RVA = "0x5702140", Offset = "0x5701140", VA = "0x5702140")]
	public static extern int opus_packet_get_bandwidth(IntPtr data);

	[PreserveSig]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x57021B0", Offset = "0x57011B0", VA = "0x57021B0")]
	public static extern int opus_packet_get_nb_channels(byte[] data);

	[PreserveSig]
	[Token(Token = "0x6000042")]
	[Address(RVA = "0x5702230", Offset = "0x5701230", VA = "0x5702230")]
	private static extern IntPtr opus_strerror(OpusStatusCode error);

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x5700BE0", Offset = "0x56FFBE0", VA = "0x5700BE0")]
	public static IntPtr opus_encoder_create(SamplingRate Fs, Channels channels, OpusApplicationType application)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x5701550", Offset = "0x5700550", VA = "0x5701550")]
	public static int opus_encode(IntPtr st, short[] pcm, int frame_size, byte[] data)
	{
		return default(int);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x5701250", Offset = "0x5700250", VA = "0x5701250")]
	public static int opus_encode(IntPtr st, float[] pcm, int frame_size, byte[] data)
	{
		return default(int);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x5700220", Offset = "0x56FF220", VA = "0x5700220")]
	public static int get_opus_encoder_ctl(IntPtr st, OpusCtlGetRequest request)
	{
		return default(int);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x5700420", Offset = "0x56FF420", VA = "0x5700420")]
	public static void set_opus_encoder_ctl(IntPtr st, OpusCtlSetRequest request, int value)
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x57023D0", Offset = "0x57013D0", VA = "0x57023D0")]
	public static int get_opus_decoder_ctl(IntPtr st, OpusCtlGetRequest request)
	{
		return default(int);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x5702610", Offset = "0x5701610", VA = "0x5702610")]
	public static void set_opus_decoder_ctl(IntPtr st, OpusCtlSetRequest request, int value)
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x5702850", Offset = "0x5701850", VA = "0x5702850")]
	public static IntPtr opus_decoder_create(SamplingRate Fs, Channels channels, [Optional] Action<IntPtr, bool> dataCallbackStatic)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x5702BB0", Offset = "0x5701BB0", VA = "0x5702BB0")]
	public static int opus_decode(IntPtr st, FrameBuffer data, short[] pcm, int frame_size, int decode_fec)
	{
		return default(int);
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x5702FB0", Offset = "0x5701FB0", VA = "0x5702FB0")]
	public static int opus_decode(IntPtr st, FrameBuffer data, float[] pcm, int frame_size, int decode_fec)
	{
		return default(int);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x57022A0", Offset = "0x57012A0", VA = "0x57022A0")]
	private static void HandleStatusCode(OpusStatusCode statusCode, params object[] info)
	{
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x5703360", Offset = "0x5702360", VA = "0x5703360")]
	public Wrapper()
	{
	}
}
