using Il2CppDummyDll;
using Photon.Realtime;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x2000010")]
public static class PhotonTeamExtensions
{
	[Token(Token = "0x6000060")]
	[Address(RVA = "0x3BEBF60", Offset = "0x3BEBF60", VA = "0x3BEBF60")]
	public static PhotonTeam GetPhotonTeam(this Player player)
	{
		return null;
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x3BED170", Offset = "0x3BED170", VA = "0x3BED170")]
	public static bool JoinTeam(this Player player, PhotonTeam team)
	{
		return default(bool);
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x3BED390", Offset = "0x3BED390", VA = "0x3BED390")]
	public static bool JoinTeam(this Player player, byte teamCode)
	{
		return default(bool);
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x3BED420", Offset = "0x3BED420", VA = "0x3BED420")]
	public static bool JoinTeam(this Player player, string teamName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x3BED4B0", Offset = "0x3BED4B0", VA = "0x3BED4B0")]
	public static bool SwitchTeam(this Player player, PhotonTeam team)
	{
		return default(bool);
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x3BED7D0", Offset = "0x3BED7D0", VA = "0x3BED7D0")]
	public static bool SwitchTeam(this Player player, byte teamCode)
	{
		return default(bool);
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x3BED860", Offset = "0x3BED860", VA = "0x3BED860")]
	public static bool SwitchTeam(this Player player, string teamName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x3BED8F0", Offset = "0x3BED8F0", VA = "0x3BED8F0")]
	public static bool LeaveCurrentTeam(this Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x3BEDAD0", Offset = "0x3BEDAD0", VA = "0x3BEDAD0")]
	public static bool TryGetTeamMates(this Player player, out Player[] teamMates)
	{
		return default(bool);
	}
}
