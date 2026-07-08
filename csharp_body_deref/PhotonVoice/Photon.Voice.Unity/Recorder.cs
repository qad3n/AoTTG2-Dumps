using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using POpusCodec.Enums;
using Photon.Voice.IOS;
using UnityEngine;
using UnityEngine.Serialization;

namespace Photon.Voice.Unity;

[Token(Token = "0x2000007")]
[AddComponentMenu("Photon Voice/Recorder")]
[HelpURL("https://doc.photonengine.com/en-us/voice/v2/getting-started/recorder")]
[DisallowMultipleComponent]
public class Recorder : VoiceComponent
{
	[Token(Token = "0x2000008")]
	public enum InputSourceType
	{
		[Token(Token = "0x4000036")]
		Microphone,
		[Token(Token = "0x4000037")]
		AudioClip,
		[Token(Token = "0x4000038")]
		Factory
	}

	[Token(Token = "0x2000009")]
	public enum MicType
	{
		[Token(Token = "0x400003A")]
		Unity,
		[Token(Token = "0x400003B")]
		Photon
	}

	[Token(Token = "0x4000012")]
	public const int MIN_OPUS_BITRATE = 6000;

	[Token(Token = "0x4000013")]
	public const int MAX_OPUS_BITRATE = 510000;

	[Token(Token = "0x4000014")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[SerializeField]
	private bool voiceDetection;

	[Token(Token = "0x4000015")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	[SerializeField]
	private float voiceDetectionThreshold;

	[Token(Token = "0x4000016")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[SerializeField]
	private int voiceDetectionDelayMs;

	[Token(Token = "0x4000017")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private object userData;

	[Token(Token = "0x4000018")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private LocalVoice voice;

	[Token(Token = "0x4000019")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private IAudioDesc inputSource;

	[Token(Token = "0x400001A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private VoiceConnection voiceConnection;

	[Token(Token = "0x400001B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	[SerializeField]
	[FormerlySerializedAs("audioGroup")]
	private byte interestGroup;

	[Token(Token = "0x400001C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x59")]
	[SerializeField]
	private bool useTargetPlayers;

	[Token(Token = "0x400001D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	[SerializeField]
	private int[] targetPlayers;

	[Token(Token = "0x400001E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	[SerializeField]
	private bool debugEchoMode;

	[Token(Token = "0x400001F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x69")]
	[SerializeField]
	private bool reliableMode;

	[Token(Token = "0x4000020")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6A")]
	[SerializeField]
	private bool encrypt;

	[Token(Token = "0x4000021")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6B")]
	[SerializeField]
	private bool transmitEnabled;

	[Token(Token = "0x4000022")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	[SerializeField]
	private SamplingRate samplingRate;

	[Token(Token = "0x4000023")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	[SerializeField]
	private OpusCodec.FrameDuration frameDuration;

	[Token(Token = "0x4000024")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	[SerializeField]
	[Range(6000f, 510000f)]
	private int bitrate;

	[Token(Token = "0x4000025")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	[SerializeField]
	private InputSourceType sourceType;

	[Token(Token = "0x4000026")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
	[SerializeField]
	private MicType microphoneType;

	[Token(Token = "0x4000027")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	[SerializeField]
	private AudioClip audioClip;

	[Token(Token = "0x4000028")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	[SerializeField]
	private bool loopAudioClip;

	[Token(Token = "0x4000029")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x89")]
	[SerializeField]
	private bool recordingEnabled;

	[Token(Token = "0x400002A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private Func<IAudioDesc> inputFactory;

	[Token(Token = "0x400002B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	[SerializeField]
	private AudioSessionParameters audioSessionParameters;

	[Token(Token = "0x400002C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	[SerializeField]
	private AndroidAudioInParameters androidMicrophoneSettings;

	[Token(Token = "0x400002D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xAB")]
	private bool isPausedOrInBackground;

	[Token(Token = "0x400002E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xAC")]
	[SerializeField]
	private bool stopRecordingWhenPaused;

	[Token(Token = "0x400002F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xAD")]
	[SerializeField]
	private bool useOnAudioFilterRead;

	[Token(Token = "0x4000030")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xAE")]
	[SerializeField]
	private bool useMicrophoneTypeFallback;

	[Token(Token = "0x4000031")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xAF")]
	[SerializeField]
	private bool recordWhenJoined;

	[Token(Token = "0x4000032")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private DeviceInfo microphoneDevice;

	[Token(Token = "0x4000033")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private int microphoneDeviceChangePending;

	[Token(Token = "0x4000034")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xDC")]
	private int restartRecordingPending;

	[Token(Token = "0x17000004")]
	public bool TransmitEnabled
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x3C4CC80", Offset = "0x3C4CC80", VA = "0x3C4CC80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x3C4CC90", Offset = "0x3C4CC90", VA = "0x3C4CC90")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public bool Encrypt
	{
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x3C4CD30", Offset = "0x3C4CD30", VA = "0x3C4CD30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x3C4CD50", Offset = "0x3C4CD50", VA = "0x3C4CD50")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public bool DebugEchoMode
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x3C4CD70", Offset = "0x3C4CD70", VA = "0x3C4CD70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x3C4CD90", Offset = "0x3C4CD90", VA = "0x3C4CD90")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public bool ReliableMode
	{
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x3C4CDC0", Offset = "0x3C4CDC0", VA = "0x3C4CDC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x3C4CDE0", Offset = "0x3C4CDE0", VA = "0x3C4CDE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public bool VoiceDetection
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x3C4CE00", Offset = "0x3C4CE00", VA = "0x3C4CE00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x3C4CE10", Offset = "0x3C4CE10", VA = "0x3C4CE10")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public float VoiceDetectionThreshold
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x3C4CFE0", Offset = "0x3C4CFE0", VA = "0x3C4CFE0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x3C4CFF0", Offset = "0x3C4CFF0", VA = "0x3C4CFF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public int VoiceDetectionDelayMs
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x3C4D260", Offset = "0x3C4D260", VA = "0x3C4D260")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x3C4D270", Offset = "0x3C4D270", VA = "0x3C4D270")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public object UserData
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x3C4D340", Offset = "0x3C4D340", VA = "0x3C4D340")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x3C4D350", Offset = "0x3C4D350", VA = "0x3C4D350")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public Func<IAudioDesc> InputFactory
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x3C4D540", Offset = "0x3C4D540", VA = "0x3C4D540")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x3C4D550", Offset = "0x3C4D550", VA = "0x3C4D550")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public AudioUtil.IVoiceDetector VoiceDetector
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x3C4CEE0", Offset = "0x3C4CEE0", VA = "0x3C4CEE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000E")]
	public byte InterestGroup
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x3C4D770", Offset = "0x3C4D770", VA = "0x3C4D770")]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x3C4D790", Offset = "0x3C4D790", VA = "0x3C4D790")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public int[] TargetPlayers
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x3C4D7B0", Offset = "0x3C4D7B0", VA = "0x3C4D7B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x3C4D7D0", Offset = "0x3C4D7D0", VA = "0x3C4D7D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public bool IsCurrentlyTransmitting
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x3C4D810", Offset = "0x3C4D810", VA = "0x3C4D810")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000011")]
	public AudioUtil.ILevelMeter LevelMeter
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x3C4D840", Offset = "0x3C4D840", VA = "0x3C4D840")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000012")]
	public bool VoiceDetectorCalibrating
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x3C4D950", Offset = "0x3C4D950", VA = "0x3C4D950")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000013")]
	protected ILocalVoiceAudio voiceAudio
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x3C4D730", Offset = "0x3C4D730", VA = "0x3C4D730")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000014")]
	public InputSourceType SourceType
	{
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x3C4DA60", Offset = "0x3C4DA60", VA = "0x3C4DA60")]
		get
		{
			return default(InputSourceType);
		}
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x3C4DA70", Offset = "0x3C4DA70", VA = "0x3C4DA70")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public MicType MicrophoneType
	{
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x3C4DC30", Offset = "0x3C4DC30", VA = "0x3C4DC30")]
		get
		{
			return default(MicType);
		}
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x3C4DC80", Offset = "0x3C4DC80", VA = "0x3C4DC80")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public AudioClip AudioClip
	{
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x3C4DE40", Offset = "0x3C4DE40", VA = "0x3C4DE40")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x3C4DE50", Offset = "0x3C4DE50", VA = "0x3C4DE50")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public bool LoopAudioClip
	{
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x3C4E070", Offset = "0x3C4E070", VA = "0x3C4E070")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x3C4E080", Offset = "0x3C4E080", VA = "0x3C4E080")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public SamplingRate SamplingRate
	{
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x3C4E280", Offset = "0x3C4E280", VA = "0x3C4E280")]
		get
		{
			return default(SamplingRate);
		}
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x3C4E290", Offset = "0x3C4E290", VA = "0x3C4E290")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public OpusCodec.FrameDuration FrameDuration
	{
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x3C4E450", Offset = "0x3C4E450", VA = "0x3C4E450")]
		get
		{
			return default(OpusCodec.FrameDuration);
		}
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x3C4E460", Offset = "0x3C4E460", VA = "0x3C4E460")]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public int Bitrate
	{
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x3C4E620", Offset = "0x3C4E620", VA = "0x3C4E620")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x3C4E630", Offset = "0x3C4E630", VA = "0x3C4E630")]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public bool RecordingEnabled
	{
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x3C4E9E0", Offset = "0x3C4E9E0", VA = "0x3C4E9E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x3C4E9F0", Offset = "0x3C4E9F0", VA = "0x3C4E9F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public bool StopRecordingWhenPaused
	{
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x3C4ED00", Offset = "0x3C4ED00", VA = "0x3C4ED00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x3C4ED10", Offset = "0x3C4ED10", VA = "0x3C4ED10")]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public bool UseOnAudioFilterRead
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x3C4ED20", Offset = "0x3C4ED20", VA = "0x3C4ED20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x3C4ED30", Offset = "0x3C4ED30", VA = "0x3C4ED30")]
		set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public bool UseMicrophoneTypeFallback
	{
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x3C4EF70", Offset = "0x3C4EF70", VA = "0x3C4EF70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x3C4EF80", Offset = "0x3C4EF80", VA = "0x3C4EF80")]
		set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public bool RecordWhenJoined
	{
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x3C4EF90", Offset = "0x3C4EF90", VA = "0x3C4EF90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x3C4EFA0", Offset = "0x3C4EFA0", VA = "0x3C4EFA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public DeviceInfo MicrophoneDevice
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x3C4EFB0", Offset = "0x3C4EFB0", VA = "0x3C4EFB0")]
		get
		{
			return default(DeviceInfo);
		}
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x3C4EFE0", Offset = "0x3C4EFE0", VA = "0x3C4EFE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public bool AndroidMicrophoneAGC
	{
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x3C4F2A0", Offset = "0x3C4F2A0", VA = "0x3C4F2A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000022")]
	public bool AndroidMicrophoneAEC
	{
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x3C4F2B0", Offset = "0x3C4F2B0", VA = "0x3C4F2B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000023")]
	public bool AndroidMicrophoneNS
	{
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x3C4F2C0", Offset = "0x3C4F2C0", VA = "0x3C4F2C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x3C4CA10", Offset = "0x3C4CA10", VA = "0x3C4CA10")]
	internal void MicrophoneDeviceChangeDetected()
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x3C4F2D0", Offset = "0x3C4F2D0", VA = "0x3C4F2D0")]
	internal bool Init(VoiceConnection connection)
	{
		return default(bool);
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x3C4F600", Offset = "0x3C4F600", VA = "0x3C4F600")]
	internal bool Deinit(VoiceConnection connection)
	{
		return default(bool);
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x3C4D520", Offset = "0x3C4D520", VA = "0x3C4D520")]
	public bool RestartRecording()
	{
		return default(bool);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x3C4F630", Offset = "0x3C4F630", VA = "0x3C4F630")]
	public void VoiceDetectorCalibrate(int durationMs, [Optional] Action<float> detectionEndedCallback)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x3C4F980", Offset = "0x3C4F980", VA = "0x3C4F980")]
	private void StartRecording()
	{
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x3C4EA20", Offset = "0x3C4EA20", VA = "0x3C4EA20")]
	private void StopRecording()
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x3C52710", Offset = "0x3C52710", VA = "0x3C52710")]
	public bool SetIosAudioSessionParameters(AudioSessionParameters asp)
	{
		return default(bool);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x3C52720", Offset = "0x3C52720", VA = "0x3C52720")]
	public bool SetIosAudioSessionParameters(AudioSessionCategory category, AudioSessionMode mode, AudioSessionCategoryOption[] options)
	{
		return default(bool);
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x3C529E0", Offset = "0x3C529E0", VA = "0x3C529E0")]
	public bool SetAndroidNativeMicrophoneSettings(bool aec = false, bool agc = false, bool ns = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x3C52CE0", Offset = "0x3C52CE0", VA = "0x3C52CE0")]
	public bool ResetLocalAudio()
	{
		return default(bool);
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x3C500A0", Offset = "0x3C500A0", VA = "0x3C500A0")]
	private LocalVoice CreateLocalVoiceAudioAndSource()
	{
		return null;
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x3C53110", Offset = "0x3C53110", VA = "0x3C53110", Slot = "5")]
	protected virtual void SendPhotonVoiceCreatedMessage()
	{
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x3C531C0", Offset = "0x3C531C0", VA = "0x3C531C0")]
	protected void Update()
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x3C53660", Offset = "0x3C53660", VA = "0x3C53660")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x3C533F0", Offset = "0x3C533F0", VA = "0x3C533F0")]
	private void HandleDeviceChange()
	{
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x3C538F0", Offset = "0x3C538F0", VA = "0x3C538F0")]
	private void OnApplicationPause(bool paused)
	{
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x3C541F0", Offset = "0x3C541F0", VA = "0x3C541F0")]
	private void OnApplicationFocus(bool focused)
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x3C53AC0", Offset = "0x3C53AC0", VA = "0x3C53AC0")]
	private void HandleApplicationPause(bool paused)
	{
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x3C543C0", Offset = "0x3C543C0", VA = "0x3C543C0")]
	public Recorder()
	{
	}
}
