// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.UtilityScripts.PhotonTeamExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/PhotonPlayer/PhotonTeamsManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Photon.Realtime;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x200000E")]
public static class PhotonTeamExtensions
{
	[Token(Token = "0x600005E")]
	[Address(RVA = "0x56EF680", Offset = "0x56EE680", VA = "0x56EF680")]
	public static PhotonTeam GetPhotonTeam(this Player player)
	{
		return null;
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x56F0800", Offset = "0x56EF800", VA = "0x56F0800")]
	public static bool JoinTeam(this Player player, PhotonTeam team)
	{
		return default(bool);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x56F0A20", Offset = "0x56EFA20", VA = "0x56F0A20")]
	public static bool JoinTeam(this Player player, byte teamCode)
	{
		return default(bool);
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x56F0AB0", Offset = "0x56EFAB0", VA = "0x56F0AB0")]
	public static bool JoinTeam(this Player player, string teamName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x56F0B40", Offset = "0x56EFB40", VA = "0x56F0B40")]
	public static bool SwitchTeam(this Player player, PhotonTeam team)
	{
		return default(bool);
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x56F0E60", Offset = "0x56EFE60", VA = "0x56F0E60")]
	public static bool SwitchTeam(this Player player, byte teamCode)
	{
		return default(bool);
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x56F0EF0", Offset = "0x56EFEF0", VA = "0x56F0EF0")]
	public static bool SwitchTeam(this Player player, string teamName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x56F0F80", Offset = "0x56EFF80", VA = "0x56F0F80")]
	public static bool LeaveCurrentTeam(this Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x56F1160", Offset = "0x56F0160", VA = "0x56F1160")]
	public static bool TryGetTeamMates(this Player player, out Player[] teamMates)
	{
		return default(bool);
	}
}
