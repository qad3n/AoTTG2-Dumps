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
		[Address(RVA = "0x3F564F0", Offset = "0x3F564F0", VA = "0x3F564F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x3F56500", Offset = "0x3F56500", VA = "0x3F56500")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public Speaker SpeakerInUse
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x3F56510", Offset = "0x3F56510", VA = "0x3F56510")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x3F56520", Offset = "0x3F56520", VA = "0x3F56520")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public bool IsSpeaking
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x3F56530", Offset = "0x3F56530", VA = "0x3F56530")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000004")]
	public bool IsRecording
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x3F565B0", Offset = "0x3F565B0", VA = "0x3F565B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x3F56630", Offset = "0x3F56630", VA = "0x3F56630", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x3F56DB0", Offset = "0x3F56DB0", VA = "0x3F56DB0")]
	private void Start()
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x3F57410", Offset = "0x3F57410", VA = "0x3F57410")]
	private void SetupRecorder()
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x3F57CC0", Offset = "0x3F57CC0", VA = "0x3F57CC0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x3F57860", Offset = "0x3F57860", VA = "0x3F57860")]
	private void SetupSpeaker()
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x3F57CE0", Offset = "0x3F57CE0", VA = "0x3F57CE0")]
	public PhotonVoiceView()
	{
	}
}
