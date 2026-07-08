using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity;

[Token(Token = "0x200001B")]
[RequireComponent(typeof(Recorder))]
[AddComponentMenu("Photon Voice/WebRTC Audio DSP")]
[DisallowMultipleComponent]
public class WebRtcAudioDsp : VoiceComponent
{
	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private bool aec;

	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x29")]
	[SerializeField]
	private bool aecHighPass;

	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x2A")]
	[SerializeField]
	private bool agc;

	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	[Range(0f, 90f)]
	private int agcCompressionGain;

	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	[Range(0f, 31f)]
	private int agcTargetLevel;

	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	private bool vad;

	[Token(Token = "0x4000083")]
	[FieldOffset(Offset = "0x35")]
	[SerializeField]
	private bool highPass;

	[Token(Token = "0x4000084")]
	[FieldOffset(Offset = "0x36")]
	private bool bypass;

	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x37")]
	[SerializeField]
	private bool noiseSuppression;

	[Token(Token = "0x4000086")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private int reverseStreamDelayMs;

	[Token(Token = "0x4000087")]
	[FieldOffset(Offset = "0x3C")]
	private int reverseChannels;

	[Token(Token = "0x4000088")]
	[FieldOffset(Offset = "0x40")]
	private WebRTCAudioProcessor proc;

	[Token(Token = "0x4000089")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<AudioSpeakerMode, int> channelsMap;

	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0x48")]
	private LocalVoiceAudioShort localVoice;

	[Token(Token = "0x400008B")]
	[FieldOffset(Offset = "0x50")]
	private int outputSampleRate;

	[Token(Token = "0x17000040")]
	public bool AEC
	{
		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x3C5B480", Offset = "0x3C5B480", VA = "0x3C5B480")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x3C54FF0", Offset = "0x3C54FF0", VA = "0x3C54FF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public bool AecHighPass
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x3C5B5F0", Offset = "0x3C5B5F0", VA = "0x3C5B5F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x3C5B600", Offset = "0x3C5B600", VA = "0x3C5B600")]
		set
		{
		}
	}

	[Token(Token = "0x17000042")]
	public int ReverseStreamDelayMs
	{
		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x3C5B620", Offset = "0x3C5B620", VA = "0x3C5B620")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000EB")]
		[Address(RVA = "0x3C5B630", Offset = "0x3C5B630", VA = "0x3C5B630")]
		set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public bool NoiseSuppression
	{
		[Token(Token = "0x60000EC")]
		[Address(RVA = "0x3C5B640", Offset = "0x3C5B640", VA = "0x3C5B640")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x3C5B650", Offset = "0x3C5B650", VA = "0x3C5B650")]
		set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public bool HighPass
	{
		[Token(Token = "0x60000EE")]
		[Address(RVA = "0x3C5B830", Offset = "0x3C5B830", VA = "0x3C5B830")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000EF")]
		[Address(RVA = "0x3C5B840", Offset = "0x3C5B840", VA = "0x3C5B840")]
		set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public bool Bypass
	{
		[Token(Token = "0x60000F0")]
		[Address(RVA = "0x3C5B860", Offset = "0x3C5B860", VA = "0x3C5B860")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000F1")]
		[Address(RVA = "0x3C5B870", Offset = "0x3C5B870", VA = "0x3C5B870")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	public bool AGC
	{
		[Token(Token = "0x60000F2")]
		[Address(RVA = "0x3C5B890", Offset = "0x3C5B890", VA = "0x3C5B890")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000F3")]
		[Address(RVA = "0x3C5B8A0", Offset = "0x3C5B8A0", VA = "0x3C5B8A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000047")]
	public int AgcCompressionGain
	{
		[Token(Token = "0x60000F4")]
		[Address(RVA = "0x3C5B8C0", Offset = "0x3C5B8C0", VA = "0x3C5B8C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000F5")]
		[Address(RVA = "0x3C5B8D0", Offset = "0x3C5B8D0", VA = "0x3C5B8D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	public int AgcTargetLevel
	{
		[Token(Token = "0x60000F6")]
		[Address(RVA = "0x3C5B8E0", Offset = "0x3C5B8E0", VA = "0x3C5B8E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000F7")]
		[Address(RVA = "0x3C5B8F0", Offset = "0x3C5B8F0", VA = "0x3C5B8F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public bool VAD
	{
		[Token(Token = "0x60000F8")]
		[Address(RVA = "0x3C5B900", Offset = "0x3C5B900", VA = "0x3C5B900")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000F9")]
		[Address(RVA = "0x3C55010", Offset = "0x3C55010", VA = "0x3C55010")]
		set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	public bool IsSupported
	{
		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x3C5BAF0", Offset = "0x3C5BAF0", VA = "0x3C5BAF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x3C5B910", Offset = "0x3C5B910", VA = "0x3C5B910", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x3C5BB00", Offset = "0x3C5BB00", VA = "0x3C5BB00")]
	private void Start()
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x3C53080", Offset = "0x3C53080", VA = "0x3C53080")]
	public void AdjustVoiceInfo(ref VoiceInfo voiceInfo, ref AudioSampleType st)
	{
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x3C5BB10", Offset = "0x3C5BB10", VA = "0x3C5BB10")]
	private void OnAudioConfigurationChanged(bool deviceWasChanged)
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x3C5BF70", Offset = "0x3C5BF70", VA = "0x3C5BF70")]
	private void OnAudioOutFrameFloat(float[] data, int outChannels)
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x3C5C170", Offset = "0x3C5C170", VA = "0x3C5C170")]
	private void PhotonVoiceCreated(PhotonVoiceCreatedParams p)
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x3C5C550", Offset = "0x3C5C550", VA = "0x3C5C550")]
	private void PhotonVoiceRemoved()
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x3C5C7C0", Offset = "0x3C5C7C0", VA = "0x3C5C7C0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x3C5C1C0", Offset = "0x3C5C1C0", VA = "0x3C5C1C0")]
	private void StartProc(LocalVoiceAudioShort v)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x3C5C580", Offset = "0x3C5C580", VA = "0x3C5C580")]
	private void StopProc(LocalVoiceAudioShort v)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x3C5B670", Offset = "0x3C5B670", VA = "0x3C5B670")]
	private void Restart()
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x3C5C840", Offset = "0x3C5C840", VA = "0x3C5C840")]
	private void setOutputListener(bool set)
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x3C5B490", Offset = "0x3C5B490", VA = "0x3C5B490")]
	private void applyToProc()
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x3C5CA30", Offset = "0x3C5CA30", VA = "0x3C5CA30")]
	public WebRtcAudioDsp()
	{
	}
}
