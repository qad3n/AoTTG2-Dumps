using System;
using Il2CppDummyDll;
using Photon.Realtime;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x2000019")]
public static class TeamExtensions
{
	[Token(Token = "0x600008B")]
	[Address(RVA = "0x3BEFA00", Offset = "0x3BEFA00", VA = "0x3BEFA00")]
	[Obsolete("Use player.GetPhotonTeam")]
	public static PunTeams.Team GetTeam(this Player player)
	{
		return default(PunTeams.Team);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x3BEFAD0", Offset = "0x3BEFAD0", VA = "0x3BEFAD0")]
	[Obsolete("Use player.JoinTeam")]
	public static void SetTeam(this Player player, PunTeams.Team team)
	{
	}
}
