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
		[Address(RVA = "0x5731680", Offset = "0x5730680", VA = "0x5731680")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000025")]
	public int Lag
	{
		[Token(Token = "0x600007A")]
		[Address(RVA = "0x5731710", Offset = "0x5730710", VA = "0x5731710")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000026")]
	public Action<Speaker> OnRemoteVoiceRemoveAction
	{
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x57317B0", Offset = "0x57307B0", VA = "0x57317B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600007C")]
		[Address(RVA = "0x57317C0", Offset = "0x57307C0", VA = "0x57317C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public RemoteVoiceLink RemoteVoice
	{
		[Token(Token = "0x600007D")]
		[Address(RVA = "0x57317D0", Offset = "0x57307D0", VA = "0x57317D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600007E")]
		[Address(RVA = "0x57317E0", Offset = "0x57307E0", VA = "0x57317E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public bool IsLinked
	{
		[Token(Token = "0x600007F")]
		[Address(RVA = "0x57317F0", Offset = "0x57307F0", VA = "0x57317F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000029")]
	public AudioOutDelayControl.PlayDelayConfig PlayDelayConfig
	{
		[Token(Token = "0x6000080")]
		[Address(RVA = "0x5731800", Offset = "0x5730800", VA = "0x5731800")]
		get
		{
			return default(AudioOutDelayControl.PlayDelayConfig);
		}
		[Token(Token = "0x6000081")]
		[Address(RVA = "0x5731810", Offset = "0x5730810", VA = "0x5731810")]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public int PlayDelay
	{
		[Token(Token = "0x6000082")]
		[Address(RVA = "0x5731850", Offset = "0x5730850", VA = "0x5731850")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000083")]
		[Address(RVA = "0x5731860", Offset = "0x5730860", VA = "0x5731860")]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public bool RestartOnDeviceChange
	{
		[Token(Token = "0x6000091")]
		[Address(RVA = "0x5733520", Offset = "0x5732520", VA = "0x5733520")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000092")]
		[Address(RVA = "0x57318C0", Offset = "0x57308C0", VA = "0x57318C0")]
		set
		{
		}
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x5731890", Offset = "0x5730890", VA = "0x5731890", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x5731970", Offset = "0x5730970", VA = "0x5731970")]
	private void AudioConfigurationChangeHandler(bool deviceWasChanged)
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x5731B10", Offset = "0x5730B10", VA = "0x5731B10")]
	private void Initialize()
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x5731E10", Offset = "0x5730E10", VA = "0x5731E10", Slot = "5")]
	protected virtual IAudioOut<float> CreateAudioOut()
	{
		return null;
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x5731ED0", Offset = "0x5730ED0", VA = "0x5731ED0")]
	internal bool Link(RemoteVoiceLink stream)
	{
		return default(bool);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x57329C0", Offset = "0x57319C0", VA = "0x57329C0")]
	private void OnRemoteVoiceRemove()
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x5732F60", Offset = "0x5731F60", VA = "0x5732F60")]
	private void OnAudioFrame(FrameOut<float> frame)
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x5732440", Offset = "0x5731440", VA = "0x5732440")]
	private bool StartPlayback()
	{
		return default(bool);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x57330D0", Offset = "0x57320D0", VA = "0x57330D0", Slot = "6")]
	protected virtual void OnDestroy()
	{
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x5732B40", Offset = "0x5731B40", VA = "0x5732B40")]
	private void StopPlayback()
	{
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x5732D80", Offset = "0x5731D80", VA = "0x5732D80")]
	private void Unlink()
	{
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x57332D0", Offset = "0x57322D0", VA = "0x57332D0")]
	protected void Update()
	{
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x5731840", Offset = "0x5730840", VA = "0x5731840")]
	public void RestartPlayback()
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x5733530", Offset = "0x5732530", VA = "0x5733530")]
	public Speaker()
	{
	}
}
