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

[Token(Token = "0x2000069")]
public abstract class LocalVoiceAudio<T> : LocalVoiceFramed<T>, ILocalVoiceAudio
{
	[Token(Token = "0x40001B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	protected AudioUtil.VoiceDetector<T> voiceDetector;

	[Token(Token = "0x40001B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	protected AudioUtil.VoiceDetectorCalibration<T> voiceDetectorCalibration;

	[Token(Token = "0x40001B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	protected AudioUtil.LevelMeter<T> levelMeter;

	[Token(Token = "0x40001B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	protected int channels;

	[Token(Token = "0x17000099")]
	public virtual AudioUtil.IVoiceDetector VoiceDetector
	{
		[Token(Token = "0x600023C")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009A")]
	public virtual AudioUtil.ILevelMeter LevelMeter
	{
		[Token(Token = "0x600023D")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009B")]
	public bool VoiceDetectorCalibrating
	{
		[Token(Token = "0x600023F")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600023B")]
	internal static LocalVoiceAudio<T> Create(VoiceClient voiceClient, byte voiceId, VoiceInfo voiceInfo, IAudioDesc audioSourceDesc, int channelId, [Optional] VoiceCreateOptions options)
	{
		return null;
	}

	[Token(Token = "0x600023E")]
	public void VoiceDetectorCalibrate(int durationMs, [Optional] Action<float> onCalibrated)
	{
	}

	[Token(Token = "0x6000240")]
	internal LocalVoiceAudio(VoiceClient voiceClient, byte id, VoiceInfo voiceInfo, IAudioDesc audioSourceDesc, int channelId, VoiceCreateOptions opt)
	{
	}

	[Token(Token = "0x6000241")]
	protected void initBuiltinProcessors()
	{
	}
}
