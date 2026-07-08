using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200006A")]
public class LocalVoiceAudioDummy : LocalVoice, ILocalVoiceAudio
{
	[Token(Token = "0x40001B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private AudioUtil.VoiceDetectorDummy voiceDetector;

	[Token(Token = "0x40001B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private AudioUtil.LevelMeterDummy levelMeter;

	[Token(Token = "0x40001BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static LocalVoiceAudioDummy Dummy;

	[Token(Token = "0x1700009C")]
	public AudioUtil.IVoiceDetector VoiceDetector
	{
		[Token(Token = "0x6000242")]
		[Address(RVA = "0x3C310C0", Offset = "0x3C310C0", VA = "0x3C310C0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009D")]
	public AudioUtil.ILevelMeter LevelMeter
	{
		[Token(Token = "0x6000243")]
		[Address(RVA = "0x3C310D0", Offset = "0x3C310D0", VA = "0x3C310D0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009E")]
	public bool VoiceDetectorCalibrating
	{
		[Token(Token = "0x6000244")]
		[Address(RVA = "0x3C310E0", Offset = "0x3C310E0", VA = "0x3C310E0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x3C310F0", Offset = "0x3C310F0", VA = "0x3C310F0", Slot = "10")]
	public void VoiceDetectorCalibrate(int durationMs, [Optional] Action<float> onCalibrated)
	{
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x3C31100", Offset = "0x3C31100", VA = "0x3C31100")]
	public LocalVoiceAudioDummy()
	{
	}
}
