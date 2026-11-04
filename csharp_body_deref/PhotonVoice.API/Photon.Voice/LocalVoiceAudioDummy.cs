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
		[Address(RVA = "0xB5B620", Offset = "0xB59C20", VA = "0x180B5B620", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009D")]
	public AudioUtil.ILevelMeter LevelMeter
	{
		[Token(Token = "0x6000241")]
		[Address(RVA = "0x1BD4F90", Offset = "0x1BD3590", VA = "0x181BD4F90", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009E")]
	public bool VoiceDetectorCalibrating
	{
		[Token(Token = "0x6000242")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "10")]
	public void VoiceDetectorCalibrate(int durationMs, [Optional] Action<float> onCalibrated)
	{
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x1D6BF20", Offset = "0x1D6A520", VA = "0x181D6BF20")]
	public LocalVoiceAudioDummy()
	{
	}
}
