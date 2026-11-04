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
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x1D9BCF0", Offset = "0x1D9A2F0", VA = "0x181D9BCF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public bool AecHighPass
	{
		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x1573470", Offset = "0x1571A70", VA = "0x181573470")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x1D9BD10", Offset = "0x1D9A310", VA = "0x181D9BD10")]
		set
		{
		}
	}

	[Token(Token = "0x17000042")]
	public int ReverseStreamDelayMs
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x172E4A0", Offset = "0x172CAA0", VA = "0x18172E4A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x1D9BD90", Offset = "0x1D9A390", VA = "0x181D9BD90")]
		set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public bool NoiseSuppression
	{
		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x1D9BAF0", Offset = "0x1D9A0F0", VA = "0x181D9BAF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000EB")]
		[Address(RVA = "0x1D9BD60", Offset = "0x1D9A360", VA = "0x181D9BD60")]
		set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public bool HighPass
	{
		[Token(Token = "0x60000EC")]
		[Address(RVA = "0x1D9BAE0", Offset = "0x1D9A0E0", VA = "0x181D9BAE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x1D9BD50", Offset = "0x1D9A350", VA = "0x181D9BD50")]
		set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public bool Bypass
	{
		[Token(Token = "0x60000EE")]
		[Address(RVA = "0x1D9BAD0", Offset = "0x1D9A0D0", VA = "0x181D9BAD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000EF")]
		[Address(RVA = "0x1D9BD40", Offset = "0x1D9A340", VA = "0x181D9BD40")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	public bool AGC
	{
		[Token(Token = "0x60000F0")]
		[Address(RVA = "0x1573430", Offset = "0x1571A30", VA = "0x181573430")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000F1")]
		[Address(RVA = "0x1D9BD00", Offset = "0x1D9A300", VA = "0x181D9BD00")]
		set
		{
		}
	}

	[Token(Token = "0x17000047")]
	public int AgcCompressionGain
	{
		[Token(Token = "0x60000F2")]
		[Address(RVA = "0xB3E080", Offset = "0xB3C680", VA = "0x180B3E080")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000F3")]
		[Address(RVA = "0x1D9BD20", Offset = "0x1D9A320", VA = "0x181D9BD20")]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	public int AgcTargetLevel
	{
		[Token(Token = "0x60000F4")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000F5")]
		[Address(RVA = "0x1D9BD30", Offset = "0x1D9A330", VA = "0x181D9BD30")]
		set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public bool VAD
	{
		[Token(Token = "0x60000F6")]
		[Address(RVA = "0xAB9F70", Offset = "0xAB8570", VA = "0x180AB9F70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000F7")]
		[Address(RVA = "0x1D9BDA0", Offset = "0x1D9A3A0", VA = "0x181D9BDA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	public bool IsSupported
	{
		[Token(Token = "0x60000FA")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x1D9AA20", Offset = "0x1D99020", VA = "0x181D9AA20", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void Start()
	{
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x1D9A790", Offset = "0x1D98D90", VA = "0x181D9A790")]
	public void AdjustVoiceInfo(ref VoiceInfo voiceInfo, ref AudioSampleType st)
	{
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x1D9AAF0", Offset = "0x1D990F0", VA = "0x181D9AAF0")]
	private void OnAudioConfigurationChanged(bool deviceWasChanged)
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x1D9AED0", Offset = "0x1D994D0", VA = "0x181D9AED0")]
	private void OnAudioOutFrameFloat(float[] data, int outChannels)
	{
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x1D9B0F0", Offset = "0x1D996F0", VA = "0x181D9B0F0")]
	private void PhotonVoiceCreated(PhotonVoiceCreatedParams p)
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x1D9B250", Offset = "0x1D99850", VA = "0x181D9B250")]
	private void PhotonVoiceRemoved()
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x1D9B070", Offset = "0x1D99670", VA = "0x181D9B070")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x1D9B340", Offset = "0x1D99940", VA = "0x181D9B340")]
	private void StartProc(LocalVoiceAudioShort v)
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x1D9B620", Offset = "0x1D99C20", VA = "0x181D9B620")]
	private void StopProc(LocalVoiceAudioShort v)
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x1D9B280", Offset = "0x1D99880", VA = "0x181D9B280")]
	private void Restart()
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x1D9BB00", Offset = "0x1D9A100", VA = "0x181D9BB00")]
	private void setOutputListener(bool set)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x1D9B960", Offset = "0x1D99F60", VA = "0x181D9B960")]
	private void applyToProc()
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x1D9B8D0", Offset = "0x1D99ED0", VA = "0x181D9B8D0")]
	public WebRtcAudioDsp()
	{
	}
}
