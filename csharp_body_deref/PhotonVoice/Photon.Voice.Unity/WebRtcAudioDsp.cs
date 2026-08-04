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
		[Address(RVA = "0x3F4DA30", Offset = "0x3F4DA30", VA = "0x3F4DA30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x3F475A0", Offset = "0x3F475A0", VA = "0x3F475A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public bool AecHighPass
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x3F4DBA0", Offset = "0x3F4DBA0", VA = "0x3F4DBA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x3F4DBB0", Offset = "0x3F4DBB0", VA = "0x3F4DBB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000042")]
	public int ReverseStreamDelayMs
	{
		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x3F4DBD0", Offset = "0x3F4DBD0", VA = "0x3F4DBD0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000EB")]
		[Address(RVA = "0x3F4DBE0", Offset = "0x3F4DBE0", VA = "0x3F4DBE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public bool NoiseSuppression
	{
		[Token(Token = "0x60000EC")]
		[Address(RVA = "0x3F4DBF0", Offset = "0x3F4DBF0", VA = "0x3F4DBF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x3F4DC00", Offset = "0x3F4DC00", VA = "0x3F4DC00")]
		set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public bool HighPass
	{
		[Token(Token = "0x60000EE")]
		[Address(RVA = "0x3F4DDE0", Offset = "0x3F4DDE0", VA = "0x3F4DDE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000EF")]
		[Address(RVA = "0x3F4DDF0", Offset = "0x3F4DDF0", VA = "0x3F4DDF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public bool Bypass
	{
		[Token(Token = "0x60000F0")]
		[Address(RVA = "0x3F4DE10", Offset = "0x3F4DE10", VA = "0x3F4DE10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000F1")]
		[Address(RVA = "0x3F4DE20", Offset = "0x3F4DE20", VA = "0x3F4DE20")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	public bool AGC
	{
		[Token(Token = "0x60000F2")]
		[Address(RVA = "0x3F4DE40", Offset = "0x3F4DE40", VA = "0x3F4DE40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000F3")]
		[Address(RVA = "0x3F4DE50", Offset = "0x3F4DE50", VA = "0x3F4DE50")]
		set
		{
		}
	}

	[Token(Token = "0x17000047")]
	public int AgcCompressionGain
	{
		[Token(Token = "0x60000F4")]
		[Address(RVA = "0x3F4DE70", Offset = "0x3F4DE70", VA = "0x3F4DE70")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000F5")]
		[Address(RVA = "0x3F4DE80", Offset = "0x3F4DE80", VA = "0x3F4DE80")]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	public int AgcTargetLevel
	{
		[Token(Token = "0x60000F6")]
		[Address(RVA = "0x3F4DE90", Offset = "0x3F4DE90", VA = "0x3F4DE90")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000F7")]
		[Address(RVA = "0x3F4DEA0", Offset = "0x3F4DEA0", VA = "0x3F4DEA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public bool VAD
	{
		[Token(Token = "0x60000F8")]
		[Address(RVA = "0x3F4DEB0", Offset = "0x3F4DEB0", VA = "0x3F4DEB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000F9")]
		[Address(RVA = "0x3F475C0", Offset = "0x3F475C0", VA = "0x3F475C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	public bool IsSupported
	{
		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x3F4E0A0", Offset = "0x3F4E0A0", VA = "0x3F4E0A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x3F4DEC0", Offset = "0x3F4DEC0", VA = "0x3F4DEC0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x3F4E0B0", Offset = "0x3F4E0B0", VA = "0x3F4E0B0")]
	private void Start()
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x3F45630", Offset = "0x3F45630", VA = "0x3F45630")]
	public void AdjustVoiceInfo(ref VoiceInfo voiceInfo, ref AudioSampleType st)
	{
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x3F4E0C0", Offset = "0x3F4E0C0", VA = "0x3F4E0C0")]
	private void OnAudioConfigurationChanged(bool deviceWasChanged)
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x3F4E520", Offset = "0x3F4E520", VA = "0x3F4E520")]
	private void OnAudioOutFrameFloat(float[] data, int outChannels)
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x3F4E720", Offset = "0x3F4E720", VA = "0x3F4E720")]
	private void PhotonVoiceCreated(PhotonVoiceCreatedParams p)
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x3F4EB00", Offset = "0x3F4EB00", VA = "0x3F4EB00")]
	private void PhotonVoiceRemoved()
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x3F4ED70", Offset = "0x3F4ED70", VA = "0x3F4ED70")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x3F4E770", Offset = "0x3F4E770", VA = "0x3F4E770")]
	private void StartProc(LocalVoiceAudioShort v)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x3F4EB30", Offset = "0x3F4EB30", VA = "0x3F4EB30")]
	private void StopProc(LocalVoiceAudioShort v)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x3F4DC20", Offset = "0x3F4DC20", VA = "0x3F4DC20")]
	private void Restart()
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x3F4EDF0", Offset = "0x3F4EDF0", VA = "0x3F4EDF0")]
	private void setOutputListener(bool set)
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x3F4DA40", Offset = "0x3F4DA40", VA = "0x3F4DA40")]
	private void applyToProc()
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x3F4EFE0", Offset = "0x3F4EFE0", VA = "0x3F4EFE0")]
	public WebRtcAudioDsp()
	{
	}
}
