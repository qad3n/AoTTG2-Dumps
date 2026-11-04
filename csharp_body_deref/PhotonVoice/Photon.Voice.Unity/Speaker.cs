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

[Token(Token = "0x200000D")]
[RequireComponent(typeof(AudioSource))]
[AddComponentMenu("Photon Voice/Speaker")]
[DisallowMultipleComponent]
public class Speaker : VoiceComponent
{
	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x28")]
	protected IAudioOut<float> audioOutput;

	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	protected AudioOutDelayControl.PlayDelayConfig playDelayConfig;

	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	protected bool restartOnDeviceChange;

	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x58")]
	private int restartPlaybackPending;

	[Token(Token = "0x17000024")]
	public bool IsPlaying
	{
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x1D944A0", Offset = "0x1D92AA0", VA = "0x181D944A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000025")]
	public int Lag
	{
		[Token(Token = "0x600007A")]
		[Address(RVA = "0x1D944F0", Offset = "0x1D92AF0", VA = "0x181D944F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000026")]
	public Action<Speaker> OnRemoteVoiceRemoveAction
	{
		[Token(Token = "0x600007B")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600007C")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public RemoteVoiceLink RemoteVoice
	{
		[Token(Token = "0x600007D")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600007E")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public bool IsLinked
	{
		[Token(Token = "0x600007F")]
		[Address(RVA = "0x1D94490", Offset = "0x1D92A90", VA = "0x181D94490")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000029")]
	public AudioOutDelayControl.PlayDelayConfig PlayDelayConfig
	{
		[Token(Token = "0x6000080")]
		[Address(RVA = "0x1D94540", Offset = "0x1D92B40", VA = "0x181D94540")]
		get
		{
			return default(AudioOutDelayControl.PlayDelayConfig);
		}
		[Token(Token = "0x6000081")]
		[Address(RVA = "0x1D94550", Offset = "0x1D92B50", VA = "0x181D94550")]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public int PlayDelay
	{
		[Token(Token = "0x6000082")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000083")]
		[Address(RVA = "0x1D94580", Offset = "0x1D92B80", VA = "0x181D94580")]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public bool RestartOnDeviceChange
	{
		[Token(Token = "0x6000091")]
		[Address(RVA = "0xA374E0", Offset = "0xA35AE0", VA = "0x180A374E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000092")]
		[Address(RVA = "0x1D945B0", Offset = "0x1D92BB0", VA = "0x181D945B0")]
		set
		{
		}
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x1D933C0", Offset = "0x1D919C0", VA = "0x181D933C0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x1D93320", Offset = "0x1D91920", VA = "0x181D93320")]
	private void AudioConfigurationChangeHandler(bool deviceWasChanged)
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x1D93570", Offset = "0x1D91B70", VA = "0x181D93570")]
	private void Initialize()
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x1D93490", Offset = "0x1D91A90", VA = "0x181D93490", Slot = "5")]
	protected virtual IAudioOut<float> CreateAudioOut()
	{
		return null;
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x1D93680", Offset = "0x1D91C80", VA = "0x181D93680")]
	internal bool Link(RemoteVoiceLink stream)
	{
		return default(bool);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x1D93BE0", Offset = "0x1D921E0", VA = "0x181D93BE0")]
	private void OnRemoteVoiceRemove()
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x1D939D0", Offset = "0x1D91FD0", VA = "0x181D939D0")]
	private void OnAudioFrame(FrameOut<float> frame)
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x1D93D30", Offset = "0x1D92330", VA = "0x181D93D30")]
	private bool StartPlayback()
	{
		return default(bool);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x1D93AF0", Offset = "0x1D920F0", VA = "0x181D93AF0", Slot = "6")]
	protected virtual void OnDestroy()
	{
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x1D940E0", Offset = "0x1D926E0", VA = "0x181D940E0")]
	private void StopPlayback()
	{
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x1D941B0", Offset = "0x1D927B0", VA = "0x181D941B0")]
	private void Unlink()
	{
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x1D943A0", Offset = "0x1D929A0", VA = "0x181D943A0")]
	protected void Update()
	{
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x1D93D20", Offset = "0x1D92320", VA = "0x181D93D20")]
	public void RestartPlayback()
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x1D93260", Offset = "0x1D91860", VA = "0x181D93260")]
	public Speaker()
	{
	}
}
