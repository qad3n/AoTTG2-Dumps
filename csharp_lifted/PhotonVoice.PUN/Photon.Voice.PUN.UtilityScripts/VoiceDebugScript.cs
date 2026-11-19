// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.PUN.UtilityScripts.VoiceDebugScript
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/PUN/UtilityScripts/VoiceDebugScript.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine;

namespace Photon.Voice.PUN.UtilityScripts;

[Token(Token = "0x2000004")]
[RequireComponent(typeof(PhotonVoiceView))]
public class VoiceDebugScript : MonoBehaviourPun
{
	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x28")]
	private PhotonVoiceView photonVoiceView;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x30")]
	public bool ForceRecordingAndTransmission;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x38")]
	public AudioClip TestAudioClip;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x40")]
	public bool TestUsingAudioClip;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x41")]
	public bool DisableVad;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x42")]
	public bool IncreaseLogLevels;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x43")]
	public bool LocalDebug;

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x5742C90", Offset = "0x5741C90", VA = "0x5742C90")]
	private void Awake()
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x5742CE0", Offset = "0x5741CE0", VA = "0x5742CE0")]
	private void Update()
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x5742F90", Offset = "0x5741F90", VA = "0x5742F90")]
	[ContextMenu("CantHearYou")]
	public void CantHearYou()
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x5743060", Offset = "0x5742060", VA = "0x5743060")]
	[PunRPC]
	private void CantHearYou(string roomName, string serverIp, string appVersion, PhotonMessageInfo photonMessageInfo)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x5743070", Offset = "0x5742070", VA = "0x5743070")]
	private void Reply(string why, Player player)
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x5743150", Offset = "0x5742150", VA = "0x5743150")]
	[PunRPC]
	private void HeresWhy(string why, PhotonMessageInfo photonMessageInfo)
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x5742F00", Offset = "0x5741F00", VA = "0x5742F00")]
	private void MaxLogs()
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x5743270", Offset = "0x5742270", VA = "0x5743270")]
	public VoiceDebugScript()
	{
	}
}
