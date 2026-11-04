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
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public Speaker SpeakerInUse
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000004")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public bool IsSpeaking
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x1D9C5E0", Offset = "0x1D9ABE0", VA = "0x181D9C5E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000004")]
	public bool IsRecording
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x1D9C560", Offset = "0x1D9AB60", VA = "0x181D9C560")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x1D9BDB0", Offset = "0x1D9A3B0", VA = "0x181D9BDB0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x1D9C2D0", Offset = "0x1D9A8D0", VA = "0x181D9C2D0")]
	private void Start()
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x1D9BE50", Offset = "0x1D9A450", VA = "0x181D9BE50")]
	private void SetupRecorder()
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x1D9BE20", Offset = "0x1D9A420", VA = "0x181D9BE20")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x1D9C0A0", Offset = "0x1D9A6A0", VA = "0x181D9C0A0")]
	private void SetupSpeaker()
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x1D9C550", Offset = "0x1D9AB50", VA = "0x181D9C550")]
	public PhotonVoiceView()
	{
	}
}
