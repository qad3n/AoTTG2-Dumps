using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Voice.Unity;
using UnityEngine;

namespace Photon.Voice.PUN;

[Token(Token = "0x2000004")]
[AddComponentMenu("Photon Voice/PUN/Photon Voice View")]
[RequireComponent(typeof(PhotonView))]
[HelpURL("https://doc.photonengine.com/en-us/voice/v2/getting-started/voice-for-pun")]
public class PhotonVoiceView : VoiceComponent
{
	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x28")]
	private PhotonView photonView;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x30")]
	private PunVoiceClient punVoiceClient;

	[Token(Token = "0x17000001")]
	public Recorder RecorderInUse
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x3C45AC0", Offset = "0x3C45AC0", VA = "0x3C45AC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x3C45AD0", Offset = "0x3C45AD0", VA = "0x3C45AD0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public Speaker SpeakerInUse
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x3C45AE0", Offset = "0x3C45AE0", VA = "0x3C45AE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x3C45AF0", Offset = "0x3C45AF0", VA = "0x3C45AF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public bool IsSpeaking
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x3C45B00", Offset = "0x3C45B00", VA = "0x3C45B00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000004")]
	public bool IsRecording
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x3C45B80", Offset = "0x3C45B80", VA = "0x3C45B80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x3C45C00", Offset = "0x3C45C00", VA = "0x3C45C00", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x3C46380", Offset = "0x3C46380", VA = "0x3C46380")]
	private void Start()
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x3C469E0", Offset = "0x3C469E0", VA = "0x3C469E0")]
	private void SetupRecorder()
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x3C47290", Offset = "0x3C47290", VA = "0x3C47290")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x3C46E30", Offset = "0x3C46E30", VA = "0x3C46E30")]
	private void SetupSpeaker()
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x3C472B0", Offset = "0x3C472B0", VA = "0x3C472B0")]
	public PhotonVoiceView()
	{
	}
}
