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

[Token(Token = "0x2000225")]
internal class PhotonVoiceSync : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x4000BB2")]
	[FieldOffset(Offset = "0x28")]
	public PhotonView PhotonView;

	[Token(Token = "0x4000BB3")]
	[FieldOffset(Offset = "0x30")]
	public PhotonVoiceView VoiceView;

	[Token(Token = "0x4000BB4")]
	[FieldOffset(Offset = "0x38")]
	public Recorder Recorder;

	[Token(Token = "0x4000BB5")]
	[FieldOffset(Offset = "0x40")]
	public GameObject SpeakerObject;

	[Token(Token = "0x4000BB6")]
	[FieldOffset(Offset = "0x48")]
	public AudioSource AudioSource;

	[Token(Token = "0x4000BB7")]
	[FieldOffset(Offset = "0x50")]
	public Speaker Speaker;

	[Token(Token = "0x4000BB8")]
	[FieldOffset(Offset = "0x58")]
	public Transform Transform;

	[Token(Token = "0x4000BB9")]
	[FieldOffset(Offset = "0x60")]
	public MicAmplifier MicAmplifier;

	[Token(Token = "0x6000D81")]
	[Address(RVA = "0x446EA70", Offset = "0x446EA70", VA = "0x446EA70")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000D82")]
	[Address(RVA = "0x446EDB0", Offset = "0x446EDB0", VA = "0x446EDB0")]
	public void Apply()
	{
	}

	[Token(Token = "0x6000D83")]
	[Address(RVA = "0x446F130", Offset = "0x446F130", VA = "0x446F130")]
	private void Update()
	{
	}

	[Token(Token = "0x6000D84")]
	[Address(RVA = "0x446F4F0", Offset = "0x446F4F0", VA = "0x446F4F0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6000D85")]
	[Address(RVA = "0x446F620", Offset = "0x446F620", VA = "0x446F620")]
	public PhotonVoiceSync()
	{
	}
}
