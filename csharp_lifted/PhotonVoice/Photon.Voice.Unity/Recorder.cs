// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.Recorder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/Recorder.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using POpusCodec.Enums;
using Photon.Voice.IOS;
using UnityEngine;
using UnityEngine.Serialization;

namespace Photon.Voice.Unity;

[Token(Token = "0x2000005")]
[AddComponentMenu("Photon Voice/Recorder")]
[HelpURL("https://doc.photonengine.com/en-us/voice/v2/getting-started/recorder")]
[DisallowMultipleComponent]
public class Recorder : VoiceComponent
{
	[Token(Token = "0x2000006")]
	public enum InputSourceType
	{
		[Token(Token = "0x4000031")]
		Microphone,
		[Token(Token = "0x4000032")]
		AudioClip,
		[Token(Token = "0x4000033")]
		Factory
	}

	[Token(Token = "0x2000007")]
	public enum MicType
	{
		[Token(Token = "0x4000035")]
		Unity,
		[Token(Token = "0x4000036")]
		Photon
	}

	[Token(Token = "0x400000D")]
	public const int MIN_OPUS_BITRATE = 6000;

	[Token(Token = "0x400000E")]
	public const int MAX_OPUS_BITRATE = 510000;

	[Token(Token = "0x400000F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[SerializeField]
	private bool voiceDetection;

	[Token(Token = "0x4000010")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	[SerializeField]
	private float voiceDetectionThreshold;

	[Token(Token = "0x4000011")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[SerializeField]
	private int voiceDetectionDelayMs;

	[Token(Token = "0x4000012")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private object userData;

	[Token(Token = "0x4000013")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private LocalVoice voice;

	[Token(Token = "0x4000014")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private IAudioDesc inputSource;

	[Token(Token = "0x4000015")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private VoiceConnection voiceConnection;

	[Token(Token = "0x4000016")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	[SerializeField]
	[FormerlySerializedAs("audioGroup")]
	private byte interestGroup;

	[Token(Token = "0x4000017")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x59")]
	[SerializeField]
	private bool useTargetPlayers;

	[Token(Token = "0x4000018")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	[SerializeField]
	private int[] targetPlayers;

	[Token(Token = "0x4000019")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	[SerializeField]
	private bool debugEchoMode;

	[Token(Token = "0x400001A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x69")]
	[SerializeField]
	private bool reliableMode;

	[Token(Token = "0x400001B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6A")]
	[SerializeField]
	private bool encrypt;

	[Token(Token = "0x400001C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6B")]
	[SerializeField]
	private bool transmitEnabled;

	[Token(Token = "0x400001D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	[SerializeField]
	private SamplingRate samplingRate;

	[Token(Token = "0x400001E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	[SerializeField]
	private OpusCodec.FrameDuration frameDuration;

	[Token(Token = "0x400001F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	[SerializeField]
	[Range(6000f, 510000f)]
	private int bitrate;

	[Token(Token = "0x4000020")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	[SerializeField]
	private InputSourceType sourceType;

	[Token(Token = "0x4000021")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
	[SerializeField]
	private MicType microphoneType;

	[Token(Token = "0x4000022")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	[SerializeField]
	private AudioClip audioClip;

	[Token(Token = "0x4000023")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	[SerializeField]
	private bool loopAudioClip;

	[Token(Token = "0x4000024")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x89")]
	[SerializeField]
	private bool recordingEnabled;

	[Token(Token = "0x4000025")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private Func<IAudioDesc> inputFactory;

	[Token(Token = "0x4000026")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	[SerializeField]
	private AudioSessionParameters audioSessionParameters;

	[Token(Token = "0x4000027")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	[SerializeField]
	private AndroidAudioInParameters androidMicrophoneSettings;

	[Token(Token = "0x4000028")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xAB")]
	private bool isPausedOrInBackground;

	[Token(Token = "0x4000029")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xAC")]
	[SerializeField]
	private bool stopRecordingWhenPaused;

	[Token(Token = "0x400002A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xAD")]
	[SerializeField]
	private bool useOnAudioFilterRead;

	[Token(Token = "0x400002B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xAE")]
	[SerializeField]
	private bool useMicrophoneTypeFallback;

	[Token(Token = "0x400002C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xAF")]
	[SerializeField]
	private bool recordWhenJoined;

	[Token(Token = "0x400002D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private DeviceInfo microphoneDevice;

	[Token(Token = "0x400002E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private int microphoneDeviceChangePending;

	[Token(Token = "0x400002F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xDC")]
	private int restartRecordingPending;

	[Token(Token = "0x17000004")]
	public bool TransmitEnabled
	{
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x5728C20", Offset = "0x5727C20", VA = "0x5728C20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x5728C30", Offset = "0x5727C30", VA = "0x5728C30")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public bool Encrypt
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x5728CD0", Offset = "0x5727CD0", VA = "0x5728CD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x5728CF0", Offset = "0x5727CF0", VA = "0x5728CF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public bool DebugEchoMode
	{
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x5728D10", Offset = "0x5727D10", VA = "0x5728D10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x5728D30", Offset = "0x5727D30", VA = "0x5728D30")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public bool ReliableMode
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x5728D60", Offset = "0x5727D60", VA = "0x5728D60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x5728D80", Offset = "0x5727D80", VA = "0x5728D80")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public bool VoiceDetection
	{
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x5728DA0", Offset = "0x5727DA0", VA = "0x5728DA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x5728DB0", Offset = "0x5727DB0", VA = "0x5728DB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public float VoiceDetectionThreshold
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x5728F80", Offset = "0x5727F80", VA = "0x5728F80")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x5728F90", Offset = "0x5727F90", VA = "0x5728F90")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public int VoiceDetectionDelayMs
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x5729200", Offset = "0x5728200", VA = "0x5729200")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x5729210", Offset = "0x5728210", VA = "0x5729210")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public object UserData
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x57292E0", Offset = "0x57282E0", VA = "0x57292E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x57292F0", Offset = "0x57282F0", VA = "0x57292F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public Func<IAudioDesc> InputFactory
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x57294E0", Offset = "0x57284E0", VA = "0x57294E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x57294F0", Offset = "0x57284F0", VA = "0x57294F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public AudioUtil.IVoiceDetector VoiceDetector
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x5728E80", Offset = "0x5727E80", VA = "0x5728E80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000E")]
	public byte InterestGroup
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x5729710", Offset = "0x5728710", VA = "0x5729710")]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x5729730", Offset = "0x5728730", VA = "0x5729730")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public int[] TargetPlayers
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x5729750", Offset = "0x5728750", VA = "0x5729750")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x5729770", Offset = "0x5728770", VA = "0x5729770")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public bool IsCurrentlyTransmitting
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x57297B0", Offset = "0x57287B0", VA = "0x57297B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000011")]
	public AudioUtil.ILevelMeter LevelMeter
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x57297E0", Offset = "0x57287E0", VA = "0x57297E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000012")]
	public bool VoiceDetectorCalibrating
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x57298F0", Offset = "0x57288F0", VA = "0x57298F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000013")]
	protected ILocalVoiceAudio voiceAudio
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x57296D0", Offset = "0x57286D0", VA = "0x57296D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000014")]
	public InputSourceType SourceType
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x5729A00", Offset = "0x5728A00", VA = "0x5729A00")]
		get
		{
			return default(InputSourceType);
		}
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x5729A10", Offset = "0x5728A10", VA = "0x5729A10")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public MicType MicrophoneType
	{
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x5729BD0", Offset = "0x5728BD0", VA = "0x5729BD0")]
		get
		{
			return default(MicType);
		}
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x5729C20", Offset = "0x5728C20", VA = "0x5729C20")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public AudioClip AudioClip
	{
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x5729DE0", Offset = "0x5728DE0", VA = "0x5729DE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x5729DF0", Offset = "0x5728DF0", VA = "0x5729DF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public bool LoopAudioClip
	{
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x572A010", Offset = "0x5729010", VA = "0x572A010")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x572A020", Offset = "0x5729020", VA = "0x572A020")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public SamplingRate SamplingRate
	{
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x572A220", Offset = "0x5729220", VA = "0x572A220")]
		get
		{
			return default(SamplingRate);
		}
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x572A230", Offset = "0x5729230", VA = "0x572A230")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public OpusCodec.FrameDuration FrameDuration
	{
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x572A3F0", Offset = "0x57293F0", VA = "0x572A3F0")]
		get
		{
			return default(OpusCodec.FrameDuration);
		}
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x572A400", Offset = "0x5729400", VA = "0x572A400")]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public int Bitrate
	{
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x572A5C0", Offset = "0x57295C0", VA = "0x572A5C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x572A5D0", Offset = "0x57295D0", VA = "0x572A5D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public bool RecordingEnabled
	{
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x572A990", Offset = "0x5729990", VA = "0x572A990")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x572A9A0", Offset = "0x57299A0", VA = "0x572A9A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public bool StopRecordingWhenPaused
	{
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x572ACB0", Offset = "0x5729CB0", VA = "0x572ACB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x572ACC0", Offset = "0x5729CC0", VA = "0x572ACC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public bool UseOnAudioFilterRead
	{
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x572ACD0", Offset = "0x5729CD0", VA = "0x572ACD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x572ACE0", Offset = "0x5729CE0", VA = "0x572ACE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public bool UseMicrophoneTypeFallback
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x572AF20", Offset = "0x5729F20", VA = "0x572AF20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x572AF30", Offset = "0x5729F30", VA = "0x572AF30")]
		set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public bool RecordWhenJoined
	{
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x572AF40", Offset = "0x5729F40", VA = "0x572AF40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x572AF50", Offset = "0x5729F50", VA = "0x572AF50")]
		set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public DeviceInfo MicrophoneDevice
	{
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x572AF60", Offset = "0x5729F60", VA = "0x572AF60")]
		get
		{
			return default(DeviceInfo);
		}
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x572AF90", Offset = "0x5729F90", VA = "0x572AF90")]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public bool AndroidMicrophoneAGC
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x572B220", Offset = "0x572A220", VA = "0x572B220")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000022")]
	public bool AndroidMicrophoneAEC
	{
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x572B230", Offset = "0x572A230", VA = "0x572B230")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000023")]
	public bool AndroidMicrophoneNS
	{
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x572B240", Offset = "0x572A240", VA = "0x572B240")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x57289B0", Offset = "0x57279B0", VA = "0x57289B0")]
	internal void MicrophoneDeviceChangeDetected()
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x572B250", Offset = "0x572A250", VA = "0x572B250")]
	internal bool Init(VoiceConnection connection)
	{
		return default(bool);
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x572B580", Offset = "0x572A580", VA = "0x572B580")]
	internal bool Deinit(VoiceConnection connection)
	{
		return default(bool);
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x57294C0", Offset = "0x57284C0", VA = "0x57294C0")]
	public bool RestartRecording()
	{
		return default(bool);
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x572B5B0", Offset = "0x572A5B0", VA = "0x572B5B0")]
	public void VoiceDetectorCalibrate(int durationMs, [Optional] Action<float> detectionEndedCallback)
	{
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x572B900", Offset = "0x572A900", VA = "0x572B900")]
	private void StartRecording()
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x572A9D0", Offset = "0x57299D0", VA = "0x572A9D0")]
	private void StopRecording()
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x572E6B0", Offset = "0x572D6B0", VA = "0x572E6B0")]
	public bool SetIosAudioSessionParameters(AudioSessionParameters asp)
	{
		return default(bool);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x572E6C0", Offset = "0x572D6C0", VA = "0x572E6C0")]
	public bool SetIosAudioSessionParameters(AudioSessionCategory category, AudioSessionMode mode, AudioSessionCategoryOption[] options)
	{
		return default(bool);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x572E9D0", Offset = "0x572D9D0", VA = "0x572E9D0")]
	public bool SetAndroidNativeMicrophoneSettings(bool aec = false, bool agc = false, bool ns = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x572ECC0", Offset = "0x572DCC0", VA = "0x572ECC0")]
	public bool ResetLocalAudio()
	{
		return default(bool);
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x572C120", Offset = "0x572B120", VA = "0x572C120")]
	private LocalVoice CreateLocalVoiceAudioAndSource()
	{
		return null;
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x572F0F0", Offset = "0x572E0F0", VA = "0x572F0F0", Slot = "5")]
	protected virtual void SendPhotonVoiceCreatedMessage()
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x572F1A0", Offset = "0x572E1A0", VA = "0x572F1A0")]
	protected void Update()
	{
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x572F710", Offset = "0x572E710", VA = "0x572F710")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x572F3D0", Offset = "0x572E3D0", VA = "0x572F3D0")]
	private void HandleDeviceChange()
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x572F9A0", Offset = "0x572E9A0", VA = "0x572F9A0")]
	private void OnApplicationPause(bool paused)
	{
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x57302A0", Offset = "0x572F2A0", VA = "0x57302A0")]
	private void OnApplicationFocus(bool focused)
	{
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x572FB70", Offset = "0x572EB70", VA = "0x572FB70")]
	private void HandleApplicationPause(bool paused)
	{
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x5730470", Offset = "0x572F470", VA = "0x5730470")]
	public Recorder()
	{
	}
}
