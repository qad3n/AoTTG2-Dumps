// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.LocalVoiceAudio
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/VoiceAudio.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000067")]
public abstract class LocalVoiceAudio<T> : LocalVoiceFramed<T>, ILocalVoiceAudio
{
	[Token(Token = "0x40001AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	protected AudioUtil.VoiceDetector<T> voiceDetector;

	[Token(Token = "0x40001B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	protected AudioUtil.VoiceDetectorCalibration<T> voiceDetectorCalibration;

	[Token(Token = "0x40001B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	protected AudioUtil.LevelMeter<T> levelMeter;

	[Token(Token = "0x40001B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	protected int channels;

	[Token(Token = "0x17000099")]
	public virtual AudioUtil.IVoiceDetector VoiceDetector
	{
		[Token(Token = "0x600023A")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009A")]
	public virtual AudioUtil.ILevelMeter LevelMeter
	{
		[Token(Token = "0x600023B")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009B")]
	public bool VoiceDetectorCalibrating
	{
		[Token(Token = "0x600023D")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000239")]
	internal static LocalVoiceAudio<T> Create(VoiceClient voiceClient, byte voiceId, VoiceInfo voiceInfo, IAudioDesc audioSourceDesc, int channelId, [Optional] VoiceCreateOptions options)
	{
		return null;
	}

	[Token(Token = "0x600023C")]
	public void VoiceDetectorCalibrate(int durationMs, [Optional] Action<float> onCalibrated)
	{
	}

	[Token(Token = "0x600023E")]
	internal LocalVoiceAudio(VoiceClient voiceClient, byte id, VoiceInfo voiceInfo, IAudioDesc audioSourceDesc, int channelId, VoiceCreateOptions opt)
	{
	}

	[Token(Token = "0x600023F")]
	protected void initBuiltinProcessors()
	{
	}
}
