// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.PUN.PhotonVoiceView
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/PUN/PhotonVoiceView.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Voice.Unity;
using UnityEngine;

namespace Photon.Voice.PUN;

[Token(Token = "0x2000002")]
[AddComponentMenu("Photon Voice/PUN/Photon Voice View")]
[RequireComponent(typeof(PhotonView))]
[HelpURL("https://doc.photonengine.com/en-us/voice/v2/getting-started/voice-for-pun")]
public class PhotonVoiceView : VoiceComponent
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x28")]
	private PhotonView photonView;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x30")]
	private PunVoiceClient punVoiceClient;

	[Token(Token = "0x17000001")]
	public Recorder RecorderInUse
	{
		[Token(Token = "0x6000001")]
		[Address(RVA = "0x573FF20", Offset = "0x573EF20", VA = "0x573FF20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x573FF30", Offset = "0x573EF30", VA = "0x573FF30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public Speaker SpeakerInUse
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x573FF40", Offset = "0x573EF40", VA = "0x573FF40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x573FF50", Offset = "0x573EF50", VA = "0x573FF50")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public bool IsSpeaking
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x573FF60", Offset = "0x573EF60", VA = "0x573FF60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000004")]
	public bool IsRecording
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x573FFE0", Offset = "0x573EFE0", VA = "0x573FFE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x5740060", Offset = "0x573F060", VA = "0x5740060", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x57407E0", Offset = "0x573F7E0", VA = "0x57407E0")]
	private void Start()
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x5740E40", Offset = "0x573FE40", VA = "0x5740E40")]
	private void SetupRecorder()
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x57417E0", Offset = "0x57407E0", VA = "0x57417E0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x5741290", Offset = "0x5740290", VA = "0x5741290")]
	private void SetupSpeaker()
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x5741800", Offset = "0x5740800", VA = "0x5741800")]
	public PhotonVoiceView()
	{
	}
}
