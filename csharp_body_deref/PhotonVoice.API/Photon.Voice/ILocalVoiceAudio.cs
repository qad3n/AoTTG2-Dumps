using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000067")]
public interface ILocalVoiceAudio
{
	[Token(Token = "0x17000096")]
	AudioUtil.IVoiceDetector VoiceDetector
	{
		[Token(Token = "0x6000237")]
		get;
	}

	[Token(Token = "0x17000097")]
	AudioUtil.ILevelMeter LevelMeter
	{
		[Token(Token = "0x6000238")]
		get;
	}

	[Token(Token = "0x17000098")]
	bool VoiceDetectorCalibrating
	{
		[Token(Token = "0x6000239")]
		get;
	}

	[Token(Token = "0x600023A")]
	void VoiceDetectorCalibrate(int durationMs, [Optional] Action<float> onCalibrated);
}
