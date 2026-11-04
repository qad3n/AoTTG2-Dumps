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
		[Address(RVA = "0x1D90450", Offset = "0x1D8EA50", VA = "0x181D90450")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x1D91140", Offset = "0x1D8F740", VA = "0x181D91140")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public bool Encrypt
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x1D90230", Offset = "0x1D8E830", VA = "0x181D90230")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x1D90A00", Offset = "0x1D8F000", VA = "0x181D90A00")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public bool DebugEchoMode
	{
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x1D90210", Offset = "0x1D8E810", VA = "0x181D90210")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x1D909C0", Offset = "0x1D8EFC0", VA = "0x181D909C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public bool ReliableMode
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x1D90400", Offset = "0x1D8EA00", VA = "0x181D90400")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x1D90F60", Offset = "0x1D8F560", VA = "0x181D90F60")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public bool VoiceDetection
	{
		[Token(Token = "0x6000027")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x1D915E0", Offset = "0x1D8FBE0", VA = "0x181D915E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public float VoiceDetectionThreshold
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x1D90480", Offset = "0x1D8EA80", VA = "0x181D90480")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x1D91440", Offset = "0x1D8FA40", VA = "0x181D91440")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public int VoiceDetectionDelayMs
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x1D913C0", Offset = "0x1D8F9C0", VA = "0x181D913C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public object UserData
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x1D91300", Offset = "0x1D8F900", VA = "0x181D91300")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public Func<IAudioDesc> InputFactory
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x1D90AD0", Offset = "0x1D8F0D0", VA = "0x181D90AD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public AudioUtil.IVoiceDetector VoiceDetector
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x1D90550", Offset = "0x1D8EB50", VA = "0x181D90550")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000E")]
	public byte InterestGroup
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x1D90250", Offset = "0x1D8E850", VA = "0x181D90250")]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x1D90BB0", Offset = "0x1D8F1B0", VA = "0x181D90BB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public int[] TargetPlayers
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x1D90430", Offset = "0x1D8EA30", VA = "0x181D90430")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x1D910F0", Offset = "0x1D8F6F0", VA = "0x181D910F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public bool IsCurrentlyTransmitting
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x1D90270", Offset = "0x1D8E870", VA = "0x181D90270")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000011")]
	public AudioUtil.ILevelMeter LevelMeter
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x1D902B0", Offset = "0x1D8E8B0", VA = "0x181D902B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000012")]
	public bool VoiceDetectorCalibrating
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x1D90490", Offset = "0x1D8EA90", VA = "0x181D90490")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000013")]
	protected ILocalVoiceAudio voiceAudio
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x1D90600", Offset = "0x1D8EC00", VA = "0x181D90600")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000014")]
	public InputSourceType SourceType
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x58A600", Offset = "0x588C00", VA = "0x18058A600")]
		get
		{
			return default(InputSourceType);
		}
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x1D91030", Offset = "0x1D8F630", VA = "0x181D91030")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public MicType MicrophoneType
	{
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x1D90390", Offset = "0x1D8E990", VA = "0x181D90390")]
		get
		{
			return default(MicType);
		}
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x1D90E60", Offset = "0x1D8F460", VA = "0x181D90E60")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public AudioClip AudioClip
	{
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x58A5D0", Offset = "0x588BD0", VA = "0x18058A5D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x1D90640", Offset = "0x1D8EC40", VA = "0x181D90640")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public bool LoopAudioClip
	{
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x1C40680", Offset = "0x1C3EC80", VA = "0x181C40680")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x1D90BD0", Offset = "0x1D8F1D0", VA = "0x181D90BD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public SamplingRate SamplingRate
	{
		[Token(Token = "0x6000042")]
		[Address(RVA = "0xACB500", Offset = "0xAC9B00", VA = "0x180ACB500")]
		get
		{
			return default(SamplingRate);
		}
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x1D90F80", Offset = "0x1D8F580", VA = "0x181D90F80")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public OpusCodec.FrameDuration FrameDuration
	{
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x58A560", Offset = "0x588B60", VA = "0x18058A560")]
		get
		{
			return default(OpusCodec.FrameDuration);
		}
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x1D90A20", Offset = "0x1D8F020", VA = "0x181D90A20")]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public int Bitrate
	{
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x187BA40", Offset = "0x187A040", VA = "0x18187BA40")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x1D90750", Offset = "0x1D8ED50", VA = "0x181D90750")]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public bool RecordingEnabled
	{
		[Token(Token = "0x6000048")]
		[Address(RVA = "0xEBBA50", Offset = "0xEBA050", VA = "0x180EBBA50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x1D90F30", Offset = "0x1D8F530", VA = "0x181D90F30")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public bool StopRecordingWhenPaused
	{
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x1D90420", Offset = "0x1D8EA20", VA = "0x181D90420")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x1D910E0", Offset = "0x1D8F6E0", VA = "0x181D910E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public bool UseOnAudioFilterRead
	{
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x1D90470", Offset = "0x1D8EA70", VA = "0x181D90470")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x1D911F0", Offset = "0x1D8F7F0", VA = "0x181D911F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public bool UseMicrophoneTypeFallback
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x1D90460", Offset = "0x1D8EA60", VA = "0x181D90460")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x1D911E0", Offset = "0x1D8F7E0", VA = "0x181D911E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public bool RecordWhenJoined
	{
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x1D903F0", Offset = "0x1D8E9F0", VA = "0x181D903F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x1D90F20", Offset = "0x1D8F520", VA = "0x181D90F20")]
		set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public DeviceInfo MicrophoneDevice
	{
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x1D90360", Offset = "0x1D8E960", VA = "0x181D90360")]
		get
		{
			return default(DeviceInfo);
		}
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x1D90CD0", Offset = "0x1D8F2D0", VA = "0x181D90CD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public bool AndroidMicrophoneAGC
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x1CAC590", Offset = "0x1CAAB90", VA = "0x181CAC590")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000022")]
	public bool AndroidMicrophoneAEC
	{
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x1CAC5A0", Offset = "0x1CAABA0", VA = "0x181CAC5A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000023")]
	public bool AndroidMicrophoneNS
	{
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x1D90200", Offset = "0x1D8E800", VA = "0x181D90200")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x1D8EBE0", Offset = "0x1D8D1E0", VA = "0x181D8EBE0")]
	internal void MicrophoneDeviceChangeDetected()
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x1D8EA90", Offset = "0x1D8D090", VA = "0x181D8EA90")]
	internal bool Init(VoiceConnection connection)
	{
		return default(bool);
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x1D8E560", Offset = "0x1D8CB60", VA = "0x181D8E560")]
	internal bool Deinit(VoiceConnection connection)
	{
		return default(bool);
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x1D8F180", Offset = "0x1D8D780", VA = "0x181D8F180")]
	public bool RestartRecording()
	{
		return default(bool);
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x1D8FDF0", Offset = "0x1D8E3F0", VA = "0x181D8FDF0")]
	public void VoiceDetectorCalibrate(int durationMs, [Optional] Action<float> detectionEndedCallback)
	{
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x1D8F740", Offset = "0x1D8DD40", VA = "0x181D8F740")]
	private void StartRecording()
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x1D8FA60", Offset = "0x1D8E060", VA = "0x181D8FA60")]
	private void StopRecording()
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x1D8F500", Offset = "0x1D8DB00", VA = "0x181D8F500")]
	public bool SetIosAudioSessionParameters(AudioSessionParameters asp)
	{
		return default(bool);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x1D8F530", Offset = "0x1D8DB30", VA = "0x181D8F530")]
	public bool SetIosAudioSessionParameters(AudioSessionCategory category, AudioSessionMode mode, AudioSessionCategoryOption[] options)
	{
		return default(bool);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x1D8F270", Offset = "0x1D8D870", VA = "0x181D8F270")]
	public bool SetAndroidNativeMicrophoneSettings(bool aec = false, bool agc = false, bool ns = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x1D8F020", Offset = "0x1D8D620", VA = "0x181D8F020")]
	public bool ResetLocalAudio()
	{
		return default(bool);
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x1D8D170", Offset = "0x1D8B770", VA = "0x181D8D170")]
	private LocalVoice CreateLocalVoiceAudioAndSource()
	{
		return null;
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x1D8F1A0", Offset = "0x1D8D7A0", VA = "0x181D8F1A0", Slot = "5")]
	protected virtual void SendPhotonVoiceCreatedMessage()
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x1D8FBF0", Offset = "0x1D8E1F0", VA = "0x181D8FBF0")]
	protected void Update()
	{
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x1D8EEB0", Offset = "0x1D8D4B0", VA = "0x181D8EEB0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x1D8E970", Offset = "0x1D8CF70", VA = "0x181D8E970")]
	private void HandleDeviceChange()
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x1D8ED50", Offset = "0x1D8D350", VA = "0x181D8ED50")]
	private void OnApplicationPause(bool paused)
	{
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x1D8EBF0", Offset = "0x1D8D1F0", VA = "0x181D8EBF0")]
	private void OnApplicationFocus(bool focused)
	{
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x1D8E590", Offset = "0x1D8CB90", VA = "0x181D8E590")]
	private void HandleApplicationPause(bool paused)
	{
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x1D90010", Offset = "0x1D8E610", VA = "0x181D90010")]
	public Recorder()
	{
	}
}
