// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.WebRtcAudioDsp
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/WebRtcAudioDsp.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity;

[Token(Token = "0x2000019")]
[RequireComponent(typeof(Recorder))]
[AddComponentMenu("Photon Voice/WebRTC Audio DSP")]
[DisallowMultipleComponent]
public class WebRtcAudioDsp : VoiceComponent
{
	[Token(Token = "0x4000078")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private bool aec;

	[Token(Token = "0x4000079")]
	[FieldOffset(Offset = "0x29")]
	[SerializeField]
	private bool aecHighPass;

	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0x2A")]
	[SerializeField]
	private bool agc;

	[Token(Token = "0x400007B")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	[Range(0f, 90f)]
	private int agcCompressionGain;

	[Token(Token = "0x400007C")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	[Range(0f, 31f)]
	private int agcTargetLevel;

	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	private bool vad;

	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x35")]
	[SerializeField]
	private bool highPass;

	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x36")]
	private bool bypass;

	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0x37")]
	[SerializeField]
	private bool noiseSuppression;

	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private int reverseStreamDelayMs;

	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0x3C")]
	private int reverseChannels;

	[Token(Token = "0x4000083")]
	[FieldOffset(Offset = "0x40")]
	private WebRTCAudioProcessor proc;

	[Token(Token = "0x4000084")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<AudioSpeakerMode, int> channelsMap;

	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x48")]
	private LocalVoiceAudioShort localVoice;

	[Token(Token = "0x4000086")]
	[FieldOffset(Offset = "0x50")]
	private int outputSampleRate;

	[Token(Token = "0x17000040")]
	public bool AEC
	{
		[Token(Token = "0x60000E4")]
		[Address(RVA = "0x5737540", Offset = "0x5736540", VA = "0x5737540")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x5731000", Offset = "0x5730000", VA = "0x5731000")]
		set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public bool AecHighPass
	{
		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x57376B0", Offset = "0x57366B0", VA = "0x57376B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x57376C0", Offset = "0x57366C0", VA = "0x57376C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000042")]
	public int ReverseStreamDelayMs
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x57376D0", Offset = "0x57366D0", VA = "0x57376D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x57376E0", Offset = "0x57366E0", VA = "0x57376E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public bool NoiseSuppression
	{
		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x57376F0", Offset = "0x57366F0", VA = "0x57376F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000EB")]
		[Address(RVA = "0x5737700", Offset = "0x5736700", VA = "0x5737700")]
		set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public bool HighPass
	{
		[Token(Token = "0x60000EC")]
		[Address(RVA = "0x57378E0", Offset = "0x57368E0", VA = "0x57378E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x57378F0", Offset = "0x57368F0", VA = "0x57378F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public bool Bypass
	{
		[Token(Token = "0x60000EE")]
		[Address(RVA = "0x5737900", Offset = "0x5736900", VA = "0x5737900")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000EF")]
		[Address(RVA = "0x5737910", Offset = "0x5736910", VA = "0x5737910")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	public bool AGC
	{
		[Token(Token = "0x60000F0")]
		[Address(RVA = "0x5737920", Offset = "0x5736920", VA = "0x5737920")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000F1")]
		[Address(RVA = "0x5737930", Offset = "0x5736930", VA = "0x5737930")]
		set
		{
		}
	}

	[Token(Token = "0x17000047")]
	public int AgcCompressionGain
	{
		[Token(Token = "0x60000F2")]
		[Address(RVA = "0x5737940", Offset = "0x5736940", VA = "0x5737940")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000F3")]
		[Address(RVA = "0x5737950", Offset = "0x5736950", VA = "0x5737950")]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	public int AgcTargetLevel
	{
		[Token(Token = "0x60000F4")]
		[Address(RVA = "0x5737960", Offset = "0x5736960", VA = "0x5737960")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000F5")]
		[Address(RVA = "0x5737970", Offset = "0x5736970", VA = "0x5737970")]
		set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public bool VAD
	{
		[Token(Token = "0x60000F6")]
		[Address(RVA = "0x5737980", Offset = "0x5736980", VA = "0x5737980")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000F7")]
		[Address(RVA = "0x5731010", Offset = "0x5730010", VA = "0x5731010")]
		set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	public bool IsSupported
	{
		[Token(Token = "0x60000FA")]
		[Address(RVA = "0x5737B70", Offset = "0x5736B70", VA = "0x5737B70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x5737990", Offset = "0x5736990", VA = "0x5737990", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x5737B80", Offset = "0x5736B80", VA = "0x5737B80")]
	private void Start()
	{
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x572F060", Offset = "0x572E060", VA = "0x572F060")]
	public void AdjustVoiceInfo(ref VoiceInfo voiceInfo, ref AudioSampleType st)
	{
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x5737B90", Offset = "0x5736B90", VA = "0x5737B90")]
	private void OnAudioConfigurationChanged(bool deviceWasChanged)
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x5737FF0", Offset = "0x5736FF0", VA = "0x5737FF0")]
	private void OnAudioOutFrameFloat(float[] data, int outChannels)
	{
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x57381F0", Offset = "0x57371F0", VA = "0x57381F0")]
	private void PhotonVoiceCreated(PhotonVoiceCreatedParams p)
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x57385D0", Offset = "0x57375D0", VA = "0x57385D0")]
	private void PhotonVoiceRemoved()
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x5738840", Offset = "0x5737840", VA = "0x5738840")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x5738240", Offset = "0x5737240", VA = "0x5738240")]
	private void StartProc(LocalVoiceAudioShort v)
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x5738600", Offset = "0x5737600", VA = "0x5738600")]
	private void StopProc(LocalVoiceAudioShort v)
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x5737720", Offset = "0x5736720", VA = "0x5737720")]
	private void Restart()
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x57388C0", Offset = "0x57378C0", VA = "0x57388C0")]
	private void setOutputListener(bool set)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x5737550", Offset = "0x5736550", VA = "0x5737550")]
	private void applyToProc()
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x5738AB0", Offset = "0x5737AB0", VA = "0x5738AB0")]
	public WebRtcAudioDsp()
	{
	}
}
