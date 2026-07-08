using Il2CppDummyDll;
using Photon.Pun;
using Photon.Voice.PUN;
using Photon.Voice.Unity;
using Photon.Voice.Unity.UtilityScripts;
using UnityEngine;

namespace GameManagers;

[Token(Token = "0x20001EF")]
internal class PhotonVoiceSync : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x4000AD9")]
	[FieldOffset(Offset = "0x28")]
	public PhotonView PhotonView;

	[Token(Token = "0x4000ADA")]
	[FieldOffset(Offset = "0x30")]
	public PhotonVoiceView VoiceView;

	[Token(Token = "0x4000ADB")]
	[FieldOffset(Offset = "0x38")]
	public Recorder Recorder;

	[Token(Token = "0x4000ADC")]
	[FieldOffset(Offset = "0x40")]
	public GameObject SpeakerObject;

	[Token(Token = "0x4000ADD")]
	[FieldOffset(Offset = "0x48")]
	public AudioSource AudioSource;

	[Token(Token = "0x4000ADE")]
	[FieldOffset(Offset = "0x50")]
	public Speaker Speaker;

	[Token(Token = "0x4000ADF")]
	[FieldOffset(Offset = "0x58")]
	public Transform Transform;

	[Token(Token = "0x4000AE0")]
	[FieldOffset(Offset = "0x60")]
	public MicAmplifier MicAmplifier;

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x413A040", Offset = "0x413A040", VA = "0x413A040")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x413A380", Offset = "0x413A380", VA = "0x413A380")]
	public void Apply()
	{
	}

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x413A700", Offset = "0x413A700", VA = "0x413A700")]
	private void Update()
	{
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x413AAC0", Offset = "0x413AAC0", VA = "0x413AAC0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x413ABF0", Offset = "0x413ABF0", VA = "0x413ABF0")]
	public PhotonVoiceSync()
	{
	}
}
