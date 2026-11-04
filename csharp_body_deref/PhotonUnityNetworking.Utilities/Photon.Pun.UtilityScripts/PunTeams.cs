// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.UtilityScripts.PunTeams
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/PhotonPlayer/PunTeams.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using ExitGames.Client.Photon;
using Il2CppDummyDll;
using Photon.Realtime;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x2000015")]
[Obsolete("do not use this or add it to the scene. use PhotonTeamsManager instead")]
public class PunTeams : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x2000016")]
	[Obsolete("use custom PhotonTeam instead")]
	public enum Team : byte
	{
		[Token(Token = "0x4000060")]
		none,
		[Token(Token = "0x4000061")]
		red,
		[Token(Token = "0x4000062")]
		blue
	}

	[Token(Token = "0x400005D")]
	[FieldOffset(Offset = "0x0")]
	[Obsolete("use PhotonTeamsManager.Instance.TryGetTeamMembers instead")]
	public static Dictionary<Team, List<Player>> PlayersPerTeam;

	[Token(Token = "0x400005E")]
	[Obsolete("do not use this. PhotonTeamsManager.TeamPlayerProp is used internally instead.")]
	public const string TeamPlayerProp = "team";

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x1D5B5E0", Offset = "0x1D59BE0", VA = "0x181D5B5E0")]
	public void Start()
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x1D5B5A0", Offset = "0x1D59BA0", VA = "0x181D5B5A0", Slot = "29")]
	public override void OnDisable()
	{
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x1D5B5C0", Offset = "0x1D59BC0", VA = "0x181D5B5C0", Slot = "41")]
	public override void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x1D5B5D0", Offset = "0x1D59BD0", VA = "0x181D5B5D0", Slot = "31")]
	public override void OnLeftRoom()
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x1D5B5C0", Offset = "0x1D59BC0", VA = "0x181D5B5C0", Slot = "47")]
	public override void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x1D5B5C0", Offset = "0x1D59BC0", VA = "0x181D5B5C0", Slot = "43")]
	public override void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x1D5B5C0", Offset = "0x1D59BC0", VA = "0x181D5B5C0", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x1D5B910", Offset = "0x1D59F10", VA = "0x181D5B910")]
	[Obsolete("do not call this.")]
	public void UpdateTeams()
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x190EDA0", Offset = "0x190D3A0", VA = "0x18190EDA0")]
	public PunTeams()
	{
	}
}
