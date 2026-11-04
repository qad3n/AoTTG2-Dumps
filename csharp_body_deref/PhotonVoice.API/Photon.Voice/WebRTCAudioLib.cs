// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.WebRTCAudioLib
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/WebRTCAudioProcessor.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000095")]
public class WebRTCAudioLib
{
	[Token(Token = "0x2000096")]
	public enum Error
	{
		[Token(Token = "0x4000265")]
		kNoError = 0,
		[Token(Token = "0x4000266")]
		kUnspecifiedError = -1,
		[Token(Token = "0x4000267")]
		kCreationFailedError = -2,
		[Token(Token = "0x4000268")]
		kUnsupportedComponentError = -3,
		[Token(Token = "0x4000269")]
		kUnsupportedFunctionError = -4,
		[Token(Token = "0x400026A")]
		kNullPointerError = -5,
		[Token(Token = "0x400026B")]
		kBadParameterError = -6,
		[Token(Token = "0x400026C")]
		kBadSampleRateError = -7,
		[Token(Token = "0x400026D")]
		kBadDataLengthError = -8,
		[Token(Token = "0x400026E")]
		kBadNumberChannelsError = -9,
		[Token(Token = "0x400026F")]
		kFileError = -10,
		[Token(Token = "0x4000270")]
		kStreamParameterNotSetError = -11,
		[Token(Token = "0x4000271")]
		kNotEnabledError = -12,
		[Token(Token = "0x4000272")]
		kBadStreamParameterWarning = -13
	}

	[Token(Token = "0x2000097")]
	public enum Param
	{
		[Token(Token = "0x4000274")]
		REVERSE_STREAM_DELAY_MS = 1,
		[Token(Token = "0x4000275")]
		AEC = 10,
		[Token(Token = "0x4000276")]
		AEC_HIGH_PASS_FILTER = 11,
		[Token(Token = "0x4000277")]
		AECM = 20,
		[Token(Token = "0x4000278")]
		HIGH_PASS_FILTER = 31,
		[Token(Token = "0x4000279")]
		NS = 41,
		[Token(Token = "0x400027A")]
		NS_LEVEL = 42,
		[Token(Token = "0x400027B")]
		AGC = 51,
		[Token(Token = "0x400027C")]
		AGC_TARGET_LEVEL_DBFS = 55,
		[Token(Token = "0x400027D")]
		AGC_COMPRESSION_GAIN = 56,
		[Token(Token = "0x400027E")]
		AGC_LIMITER = 57,
		[Token(Token = "0x400027F")]
		VAD = 61,
		[Token(Token = "0x4000280")]
		VAD_FRAME_SIZE_MS = 62,
		[Token(Token = "0x4000281")]
		VAD_LIKELIHOOD = 63,
		[Token(Token = "0x4000282")]
		AGC2 = 71
	}

	[Token(Token = "0x4000263")]
	private const string lib_name = "webrtc-audio";

	[PreserveSig]
	[Token(Token = "0x6000342")]
	[Address(RVA = "0x1D7CED0", Offset = "0x1D7B4D0", VA = "0x181D7CED0")]
	public static extern IntPtr webrtc_audio_processor_create(int samplingRate, int channels, int frameSize, int revSamplingRate, int revChannels);

	[PreserveSig]
	[Token(Token = "0x6000343")]
	[Address(RVA = "0x1D7CFE0", Offset = "0x1D7B5E0", VA = "0x181D7CFE0")]
	public static extern int webrtc_audio_processor_init(IntPtr proc);

	[PreserveSig]
	[Token(Token = "0x6000344")]
	[Address(RVA = "0x1D7D1B0", Offset = "0x1D7B7B0", VA = "0x181D7D1B0")]
	public static extern int webrtc_audio_processor_set_param(IntPtr proc, int param, int v);

	[PreserveSig]
	[Token(Token = "0x6000345")]
	[Address(RVA = "0x1D7D060", Offset = "0x1D7B660", VA = "0x181D7D060")]
	public static extern int webrtc_audio_processor_process(IntPtr proc, short[] buffer, int offset, out bool voiceDetected);

	[PreserveSig]
	[Token(Token = "0x6000346")]
	[Address(RVA = "0x1D7D110", Offset = "0x1D7B710", VA = "0x181D7D110")]
	public static extern int webrtc_audio_processor_process_reverse(IntPtr proc, short[] buffer, int bufferSize);

	[PreserveSig]
	[Token(Token = "0x6000347")]
	[Address(RVA = "0x1D7CF60", Offset = "0x1D7B560", VA = "0x181D7CF60")]
	public static extern void webrtc_audio_processor_destroy(IntPtr proc);

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public WebRTCAudioLib()
	{
	}
}
