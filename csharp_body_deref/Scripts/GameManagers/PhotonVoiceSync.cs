// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.PhotonVoiceSync
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameManagers/PhotonVoiceSync.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PhotonVoiceSync.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Voice.PUN;
using Photon.Voice.Unity;
using Photon.Voice.Unity.UtilityScripts;
using UnityEngine;

namespace GameManagers;

[Token(Token = "0x200033D")]
internal class PhotonVoiceSync : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x40010B7")]
	[FieldOffset(Offset = "0x28")]
	public PhotonView PhotonView;

	[Token(Token = "0x40010B8")]
	[FieldOffset(Offset = "0x30")]
	public PhotonVoiceView VoiceView;

	[Token(Token = "0x40010B9")]
	[FieldOffset(Offset = "0x38")]
	public Recorder Recorder;

	[Token(Token = "0x40010BA")]
	[FieldOffset(Offset = "0x40")]
	public GameObject SpeakerObject;

	[Token(Token = "0x40010BB")]
	[FieldOffset(Offset = "0x48")]
	public AudioSource AudioSource;

	[Token(Token = "0x40010BC")]
	[FieldOffset(Offset = "0x50")]
	public Speaker Speaker;

	[Token(Token = "0x40010BD")]
	[FieldOffset(Offset = "0x58")]
	public Transform Transform;

	[Token(Token = "0x40010BE")]
	[FieldOffset(Offset = "0x60")]
	public MicAmplifier MicAmplifier;

	[Token(Token = "0x60014C6")]
	[Address(RVA = "0x1E72710", Offset = "0x1E70D10", VA = "0x181E72710")]
	private void Awake()
	{
	}

	[Token(Token = "0x60014C7")]
	[Address(RVA = "0x1E72320", Offset = "0x1E70920", VA = "0x181E72320")]
	public void Apply()
	{
	}

	[Token(Token = "0x60014C8")]
	[Address(RVA = "0x1E72B50", Offset = "0x1E71150", VA = "0x181E72B50")]
	private void Update()
	{
	}

	[Token(Token = "0x60014C9")]
	[Address(RVA = "0x1E72A60", Offset = "0x1E71060", VA = "0x181E72A60")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60014CA")]
	[Address(RVA = "0x190EDA0", Offset = "0x190D3A0", VA = "0x18190EDA0")]
	public PhotonVoiceSync()
	{
	}
}
