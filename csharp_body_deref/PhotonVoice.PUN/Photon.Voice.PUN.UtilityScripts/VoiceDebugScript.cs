using Il2CppDummyDll;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine;

namespace Photon.Voice.PUN.UtilityScripts;

[Token(Token = "0x2000006")]
[RequireComponent(typeof(PhotonVoiceView))]
public class VoiceDebugScript : MonoBehaviourPun
{
	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x28")]
	private PhotonVoiceView photonVoiceView;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x30")]
	public bool ForceRecordingAndTransmission;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x38")]
	public AudioClip TestAudioClip;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x40")]
	public bool TestUsingAudioClip;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x41")]
	public bool DisableVad;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x42")]
	public bool IncreaseLogLevels;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x43")]
	public bool LocalDebug;

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x3C48730", Offset = "0x3C48730", VA = "0x3C48730")]
	private void Awake()
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x3C48780", Offset = "0x3C48780", VA = "0x3C48780")]
	private void Update()
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x3C48A40", Offset = "0x3C48A40", VA = "0x3C48A40")]
	[ContextMenu("CantHearYou")]
	public void CantHearYou()
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x3C48B10", Offset = "0x3C48B10", VA = "0x3C48B10")]
	[PunRPC]
	private void CantHearYou(string roomName, string serverIp, string appVersion, PhotonMessageInfo photonMessageInfo)
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x3C48B20", Offset = "0x3C48B20", VA = "0x3C48B20")]
	private void Reply(string why, Player player)
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x3C48C00", Offset = "0x3C48C00", VA = "0x3C48C00")]
	[PunRPC]
	private void HeresWhy(string why, PhotonMessageInfo photonMessageInfo)
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x3C489B0", Offset = "0x3C489B0", VA = "0x3C489B0")]
	private void MaxLogs()
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x3C48D10", Offset = "0x3C48D10", VA = "0x3C48D10")]
	public VoiceDebugScript()
	{
	}
}
