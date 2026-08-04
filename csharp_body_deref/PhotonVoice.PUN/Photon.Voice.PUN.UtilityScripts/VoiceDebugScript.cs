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
	[Address(RVA = "0x3F59160", Offset = "0x3F59160", VA = "0x3F59160")]
	private void Awake()
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x3F591B0", Offset = "0x3F591B0", VA = "0x3F591B0")]
	private void Update()
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x3F59470", Offset = "0x3F59470", VA = "0x3F59470")]
	[ContextMenu("CantHearYou")]
	public void CantHearYou()
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x3F59540", Offset = "0x3F59540", VA = "0x3F59540")]
	[PunRPC]
	private void CantHearYou(string roomName, string serverIp, string appVersion, PhotonMessageInfo photonMessageInfo)
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x3F59550", Offset = "0x3F59550", VA = "0x3F59550")]
	private void Reply(string why, Player player)
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x3F59630", Offset = "0x3F59630", VA = "0x3F59630")]
	[PunRPC]
	private void HeresWhy(string why, PhotonMessageInfo photonMessageInfo)
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x3F593E0", Offset = "0x3F593E0", VA = "0x3F593E0")]
	private void MaxLogs()
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x3F59740", Offset = "0x3F59740", VA = "0x3F59740")]
	public VoiceDebugScript()
	{
	}
}
