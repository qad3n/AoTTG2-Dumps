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

[Token(Token = "0x2000017")]
[Obsolete("do not use this or add it to the scene. use PhotonTeamsManager instead")]
public class PunTeams : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x2000018")]
	[Obsolete("use custom PhotonTeam instead")]
	public enum Team : byte
	{
		[Token(Token = "0x4000065")]
		none,
		[Token(Token = "0x4000066")]
		red,
		[Token(Token = "0x4000067")]
		blue
	}

	[Token(Token = "0x4000062")]
	[FieldOffset(Offset = "0x0")]
	[Obsolete("use PhotonTeamsManager.Instance.TryGetTeamMembers instead")]
	public static Dictionary<Team, List<Player>> PlayersPerTeam;

	[Token(Token = "0x4000063")]
	[Obsolete("do not use this. PhotonTeamsManager.TeamPlayerProp is used internally instead.")]
	public const string TeamPlayerProp = "team";

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x3F07480", Offset = "0x3F07480", VA = "0x3F07480")]
	public void Start()
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x3F078F0", Offset = "0x3F078F0", VA = "0x3F078F0", Slot = "29")]
	public override void OnDisable()
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x3F07900", Offset = "0x3F07900", VA = "0x3F07900", Slot = "41")]
	public override void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x3F07E90", Offset = "0x3F07E90", VA = "0x3F07E90", Slot = "31")]
	public override void OnLeftRoom()
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x3F07EA0", Offset = "0x3F07EA0", VA = "0x3F07EA0", Slot = "47")]
	public override void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x3F07EB0", Offset = "0x3F07EB0", VA = "0x3F07EB0", Slot = "43")]
	public override void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x3F07EC0", Offset = "0x3F07EC0", VA = "0x3F07EC0", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x3F07910", Offset = "0x3F07910", VA = "0x3F07910")]
	[Obsolete("do not call this.")]
	public void UpdateTeams()
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x3F07F90", Offset = "0x3F07F90", VA = "0x3F07F90")]
	public PunTeams()
	{
	}
}
