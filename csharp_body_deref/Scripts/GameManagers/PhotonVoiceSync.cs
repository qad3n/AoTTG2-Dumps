// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.PhotonVoiceSync
// Update status: CHANGED in this game update
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

[Token(Token = "0x200039E")]
internal class PhotonVoiceSync : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x4001263")]
	[FieldOffset(Offset = "0x28")]
	public PhotonView PhotonView;

	[Token(Token = "0x4001264")]
	[FieldOffset(Offset = "0x30")]
	public PhotonVoiceView VoiceView;

	[Token(Token = "0x4001265")]
	[FieldOffset(Offset = "0x38")]
	public Recorder Recorder;

	[Token(Token = "0x4001266")]
	[FieldOffset(Offset = "0x40")]
	public GameObject SpeakerObject;

	[Token(Token = "0x4001267")]
	[FieldOffset(Offset = "0x48")]
	public AudioSource AudioSource;

	[Token(Token = "0x4001268")]
	[FieldOffset(Offset = "0x50")]
	public Speaker Speaker;

	[Token(Token = "0x4001269")]
	[FieldOffset(Offset = "0x58")]
	public Transform Transform;

	[Token(Token = "0x400126A")]
	[FieldOffset(Offset = "0x60")]
	public MicAmplifier MicAmplifier;

	[Token(Token = "0x400126B")]
	private const float PushToTalkIdleSeconds = 30f;

	[Token(Token = "0x400126C")]
	private const bool ClosesIdleMicrophone = false;

	[Token(Token = "0x400126D")]
	[FieldOffset(Offset = "0x68")]
	private bool _hasMicrophone;

	[Token(Token = "0x400126E")]
	[FieldOffset(Offset = "0x6C")]
	private float _lastTransmitTime;

	[Token(Token = "0x6001741")]
	[Address(RVA = "0x5856CC0", Offset = "0x5855CC0", VA = "0x5856CC0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6001742")]
	[Address(RVA = "0x5857000", Offset = "0x5856000", VA = "0x5857000")]
	public void Apply()
	{
	}

	[Token(Token = "0x6001743")]
	[Address(RVA = "0x5857280", Offset = "0x5856280", VA = "0x5857280")]
	private void Update()
	{
	}

	[Token(Token = "0x6001744")]
	[Address(RVA = "0x5857680", Offset = "0x5856680", VA = "0x5857680")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6001745")]
	[Address(RVA = "0x58577B0", Offset = "0x58567B0", VA = "0x58577B0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6001746")]
	[Address(RVA = "0x5857810", Offset = "0x5856810", VA = "0x5857810")]
	public PhotonVoiceSync()
	{
	}
}
