// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.LocalVoiceAudioDummy
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/VoiceAudio.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000068")]
public class LocalVoiceAudioDummy : LocalVoice, ILocalVoiceAudio
{
	[Token(Token = "0x40001B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private AudioUtil.VoiceDetectorDummy voiceDetector;

	[Token(Token = "0x40001B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private AudioUtil.LevelMeterDummy levelMeter;

	[Token(Token = "0x40001B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static LocalVoiceAudioDummy Dummy;

	[Token(Token = "0x1700009C")]
	public AudioUtil.IVoiceDetector VoiceDetector
	{
		[Token(Token = "0x6000240")]
		[Address(RVA = "0x57113B0", Offset = "0x57103B0", VA = "0x57113B0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009D")]
	public AudioUtil.ILevelMeter LevelMeter
	{
		[Token(Token = "0x6000241")]
		[Address(RVA = "0x57113C0", Offset = "0x57103C0", VA = "0x57113C0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009E")]
	public bool VoiceDetectorCalibrating
	{
		[Token(Token = "0x6000242")]
		[Address(RVA = "0x57113D0", Offset = "0x57103D0", VA = "0x57113D0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x57113E0", Offset = "0x57103E0", VA = "0x57113E0", Slot = "10")]
	public void VoiceDetectorCalibrate(int durationMs, [Optional] Action<float> onCalibrated)
	{
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x57113F0", Offset = "0x57103F0", VA = "0x57113F0")]
	public LocalVoiceAudioDummy()
	{
	}
}
