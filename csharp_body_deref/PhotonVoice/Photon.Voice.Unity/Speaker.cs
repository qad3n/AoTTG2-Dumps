// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.Speaker
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/Speaker.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity;

[Token(Token = "0x200000F")]
[RequireComponent(typeof(AudioSource))]
[AddComponentMenu("Photon Voice/Speaker")]
[DisallowMultipleComponent]
public class Speaker : VoiceComponent
{
	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x28")]
	protected IAudioOut<float> audioOutput;

	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	protected AudioOutDelayControl.PlayDelayConfig playDelayConfig;

	[Token(Token = "0x400004F")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	protected bool restartOnDeviceChange;

	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x58")]
	private int restartPlaybackPending;

	[Token(Token = "0x17000024")]
	public bool IsPlaying
	{
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x3F47C50", Offset = "0x3F47C50", VA = "0x3F47C50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000025")]
	public int Lag
	{
		[Token(Token = "0x600007C")]
		[Address(RVA = "0x3F47CE0", Offset = "0x3F47CE0", VA = "0x3F47CE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000026")]
	public Action<Speaker> OnRemoteVoiceRemoveAction
	{
		[Token(Token = "0x600007D")]
		[Address(RVA = "0x3F47D80", Offset = "0x3F47D80", VA = "0x3F47D80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600007E")]
		[Address(RVA = "0x3F47D90", Offset = "0x3F47D90", VA = "0x3F47D90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public RemoteVoiceLink RemoteVoice
	{
		[Token(Token = "0x600007F")]
		[Address(RVA = "0x3F47DA0", Offset = "0x3F47DA0", VA = "0x3F47DA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000080")]
		[Address(RVA = "0x3F47DB0", Offset = "0x3F47DB0", VA = "0x3F47DB0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public bool IsLinked
	{
		[Token(Token = "0x6000081")]
		[Address(RVA = "0x3F47DC0", Offset = "0x3F47DC0", VA = "0x3F47DC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000029")]
	public AudioOutDelayControl.PlayDelayConfig PlayDelayConfig
	{
		[Token(Token = "0x6000082")]
		[Address(RVA = "0x3F47DD0", Offset = "0x3F47DD0", VA = "0x3F47DD0")]
		get
		{
			return default(AudioOutDelayControl.PlayDelayConfig);
		}
		[Token(Token = "0x6000083")]
		[Address(RVA = "0x3F47DE0", Offset = "0x3F47DE0", VA = "0x3F47DE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public int PlayDelay
	{
		[Token(Token = "0x6000084")]
		[Address(RVA = "0x3F47E20", Offset = "0x3F47E20", VA = "0x3F47E20")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000085")]
		[Address(RVA = "0x3F47E30", Offset = "0x3F47E30", VA = "0x3F47E30")]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public bool RestartOnDeviceChange
	{
		[Token(Token = "0x6000093")]
		[Address(RVA = "0x3F49AA0", Offset = "0x3F49AA0", VA = "0x3F49AA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000094")]
		[Address(RVA = "0x3F47E90", Offset = "0x3F47E90", VA = "0x3F47E90")]
		set
		{
		}
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x3F47E60", Offset = "0x3F47E60", VA = "0x3F47E60", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x3F47F40", Offset = "0x3F47F40", VA = "0x3F47F40")]
	private void AudioConfigurationChangeHandler(bool deviceWasChanged)
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x3F480E0", Offset = "0x3F480E0", VA = "0x3F480E0")]
	private void Initialize()
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x3F483E0", Offset = "0x3F483E0", VA = "0x3F483E0", Slot = "5")]
	protected virtual IAudioOut<float> CreateAudioOut()
	{
		return null;
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x3F484A0", Offset = "0x3F484A0", VA = "0x3F484A0")]
	internal bool Link(RemoteVoiceLink stream)
	{
		return default(bool);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x3F48F30", Offset = "0x3F48F30", VA = "0x3F48F30")]
	private void OnRemoteVoiceRemove()
	{
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x3F494E0", Offset = "0x3F494E0", VA = "0x3F494E0")]
	private void OnAudioFrame(FrameOut<float> frame)
	{
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x3F489B0", Offset = "0x3F489B0", VA = "0x3F489B0")]
	private bool StartPlayback()
	{
		return default(bool);
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x3F49650", Offset = "0x3F49650", VA = "0x3F49650", Slot = "6")]
	protected virtual void OnDestroy()
	{
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x3F490B0", Offset = "0x3F490B0", VA = "0x3F490B0")]
	private void StopPlayback()
	{
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x3F492F0", Offset = "0x3F492F0", VA = "0x3F492F0")]
	private void Unlink()
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x3F49850", Offset = "0x3F49850", VA = "0x3F49850")]
	protected void Update()
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x3F47E10", Offset = "0x3F47E10", VA = "0x3F47E10")]
	public void RestartPlayback()
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x3F49AB0", Offset = "0x3F49AB0", VA = "0x3F49AB0")]
	public Speaker()
	{
	}
}
