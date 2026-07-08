using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000097")]
public class WebRTCAudioLib
{
	[Token(Token = "0x2000098")]
	public enum Error
	{
		[Token(Token = "0x400026A")]
		kNoError = 0,
		[Token(Token = "0x400026B")]
		kUnspecifiedError = -1,
		[Token(Token = "0x400026C")]
		kCreationFailedError = -2,
		[Token(Token = "0x400026D")]
		kUnsupportedComponentError = -3,
		[Token(Token = "0x400026E")]
		kUnsupportedFunctionError = -4,
		[Token(Token = "0x400026F")]
		kNullPointerError = -5,
		[Token(Token = "0x4000270")]
		kBadParameterError = -6,
		[Token(Token = "0x4000271")]
		kBadSampleRateError = -7,
		[Token(Token = "0x4000272")]
		kBadDataLengthError = -8,
		[Token(Token = "0x4000273")]
		kBadNumberChannelsError = -9,
		[Token(Token = "0x4000274")]
		kFileError = -10,
		[Token(Token = "0x4000275")]
		kStreamParameterNotSetError = -11,
		[Token(Token = "0x4000276")]
		kNotEnabledError = -12,
		[Token(Token = "0x4000277")]
		kBadStreamParameterWarning = -13
	}

	[Token(Token = "0x2000099")]
	public enum Param
	{
		[Token(Token = "0x4000279")]
		REVERSE_STREAM_DELAY_MS = 1,
		[Token(Token = "0x400027A")]
		AEC = 10,
		[Token(Token = "0x400027B")]
		AEC_HIGH_PASS_FILTER = 11,
		[Token(Token = "0x400027C")]
		AECM = 20,
		[Token(Token = "0x400027D")]
		HIGH_PASS_FILTER = 31,
		[Token(Token = "0x400027E")]
		NS = 41,
		[Token(Token = "0x400027F")]
		NS_LEVEL = 42,
		[Token(Token = "0x4000280")]
		AGC = 51,
		[Token(Token = "0x4000281")]
		AGC_TARGET_LEVEL_DBFS = 55,
		[Token(Token = "0x4000282")]
		AGC_COMPRESSION_GAIN = 56,
		[Token(Token = "0x4000283")]
		AGC_LIMITER = 57,
		[Token(Token = "0x4000284")]
		VAD = 61,
		[Token(Token = "0x4000285")]
		VAD_FRAME_SIZE_MS = 62,
		[Token(Token = "0x4000286")]
		VAD_LIKELIHOOD = 63,
		[Token(Token = "0x4000287")]
		AGC2 = 71
	}

	[Token(Token = "0x4000268")]
	private const string lib_name = "webrtc-audio";

	[PreserveSig]
	[Token(Token = "0x6000344")]
	[Address(RVA = "0x3C3CB10", Offset = "0x3C3CB10", VA = "0x3C3CB10")]
	public static extern IntPtr webrtc_audio_processor_create(int samplingRate, int channels, int frameSize, int revSamplingRate, int revChannels);

	[PreserveSig]
	[Token(Token = "0x6000345")]
	[Address(RVA = "0x3C3CBB0", Offset = "0x3C3CBB0", VA = "0x3C3CBB0")]
	public static extern int webrtc_audio_processor_init(IntPtr proc);

	[PreserveSig]
	[Token(Token = "0x6000346")]
	[Address(RVA = "0x3C3DFB0", Offset = "0x3C3DFB0", VA = "0x3C3DFB0")]
	public static extern int webrtc_audio_processor_set_param(IntPtr proc, int param, int v);

	[PreserveSig]
	[Token(Token = "0x6000347")]
	[Address(RVA = "0x3C3D030", Offset = "0x3C3D030", VA = "0x3C3D030")]
	public static extern int webrtc_audio_processor_process(IntPtr proc, short[] buffer, int offset, out bool voiceDetected);

	[PreserveSig]
	[Token(Token = "0x6000348")]
	[Address(RVA = "0x3C3DF20", Offset = "0x3C3DF20", VA = "0x3C3DF20")]
	public static extern int webrtc_audio_processor_process_reverse(IntPtr proc, short[] buffer, int bufferSize);

	[PreserveSig]
	[Token(Token = "0x6000349")]
	[Address(RVA = "0x3C3E430", Offset = "0x3C3E430", VA = "0x3C3E430")]
	public static extern void webrtc_audio_processor_destroy(IntPtr proc);

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x3C3CB00", Offset = "0x3C3CB00", VA = "0x3C3CB00")]
	public WebRTCAudioLib()
	{
	}
}
