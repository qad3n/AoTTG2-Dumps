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
		[Address(RVA = "0x3C556A0", Offset = "0x3C556A0", VA = "0x3C556A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000025")]
	public int Lag
	{
		[Token(Token = "0x600007C")]
		[Address(RVA = "0x3C55730", Offset = "0x3C55730", VA = "0x3C55730")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000026")]
	public Action<Speaker> OnRemoteVoiceRemoveAction
	{
		[Token(Token = "0x600007D")]
		[Address(RVA = "0x3C557D0", Offset = "0x3C557D0", VA = "0x3C557D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600007E")]
		[Address(RVA = "0x3C557E0", Offset = "0x3C557E0", VA = "0x3C557E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public RemoteVoiceLink RemoteVoice
	{
		[Token(Token = "0x600007F")]
		[Address(RVA = "0x3C557F0", Offset = "0x3C557F0", VA = "0x3C557F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000080")]
		[Address(RVA = "0x3C55800", Offset = "0x3C55800", VA = "0x3C55800")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public bool IsLinked
	{
		[Token(Token = "0x6000081")]
		[Address(RVA = "0x3C55810", Offset = "0x3C55810", VA = "0x3C55810")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000029")]
	public AudioOutDelayControl.PlayDelayConfig PlayDelayConfig
	{
		[Token(Token = "0x6000082")]
		[Address(RVA = "0x3C55820", Offset = "0x3C55820", VA = "0x3C55820")]
		get
		{
			return default(AudioOutDelayControl.PlayDelayConfig);
		}
		[Token(Token = "0x6000083")]
		[Address(RVA = "0x3C55830", Offset = "0x3C55830", VA = "0x3C55830")]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public int PlayDelay
	{
		[Token(Token = "0x6000084")]
		[Address(RVA = "0x3C55870", Offset = "0x3C55870", VA = "0x3C55870")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000085")]
		[Address(RVA = "0x3C55880", Offset = "0x3C55880", VA = "0x3C55880")]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public bool RestartOnDeviceChange
	{
		[Token(Token = "0x6000093")]
		[Address(RVA = "0x3C574F0", Offset = "0x3C574F0", VA = "0x3C574F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000094")]
		[Address(RVA = "0x3C558E0", Offset = "0x3C558E0", VA = "0x3C558E0")]
		set
		{
		}
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x3C558B0", Offset = "0x3C558B0", VA = "0x3C558B0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x3C55990", Offset = "0x3C55990", VA = "0x3C55990")]
	private void AudioConfigurationChangeHandler(bool deviceWasChanged)
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x3C55B30", Offset = "0x3C55B30", VA = "0x3C55B30")]
	private void Initialize()
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x3C55E30", Offset = "0x3C55E30", VA = "0x3C55E30", Slot = "5")]
	protected virtual IAudioOut<float> CreateAudioOut()
	{
		return null;
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x3C55EF0", Offset = "0x3C55EF0", VA = "0x3C55EF0")]
	internal bool Link(RemoteVoiceLink stream)
	{
		return default(bool);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x3C56980", Offset = "0x3C56980", VA = "0x3C56980")]
	private void OnRemoteVoiceRemove()
	{
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x3C56F30", Offset = "0x3C56F30", VA = "0x3C56F30")]
	private void OnAudioFrame(FrameOut<float> frame)
	{
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x3C56400", Offset = "0x3C56400", VA = "0x3C56400")]
	private bool StartPlayback()
	{
		return default(bool);
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x3C570A0", Offset = "0x3C570A0", VA = "0x3C570A0", Slot = "6")]
	protected virtual void OnDestroy()
	{
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x3C56B00", Offset = "0x3C56B00", VA = "0x3C56B00")]
	private void StopPlayback()
	{
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x3C56D40", Offset = "0x3C56D40", VA = "0x3C56D40")]
	private void Unlink()
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x3C572A0", Offset = "0x3C572A0", VA = "0x3C572A0")]
	protected void Update()
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x3C55860", Offset = "0x3C55860", VA = "0x3C55860")]
	public void RestartPlayback()
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x3C57500", Offset = "0x3C57500", VA = "0x3C57500")]
	public Speaker()
	{
	}
}
