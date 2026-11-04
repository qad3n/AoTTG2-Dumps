// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.UtilityScripts.TeamExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/PhotonPlayer/PunTeams.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Photon.Realtime;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x2000017")]
public static class TeamExtensions
{
	[Token(Token = "0x6000089")]
	[Address(RVA = "0x1D5F780", Offset = "0x1D5DD80", VA = "0x181D5F780")]
	[Obsolete("Use player.GetPhotonTeam")]
	public static PunTeams.Team GetTeam(this Player player)
	{
		return default(PunTeams.Team);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x1D5F840", Offset = "0x1D5DE40", VA = "0x181D5F840")]
	[Obsolete("Use player.JoinTeam")]
	public static void SetTeam(this Player player, PunTeams.Team team)
	{
	}
}
