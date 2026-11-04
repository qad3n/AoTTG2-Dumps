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
	[Address(RVA = "0x1D563F0", Offset = "0x1D549F0", VA = "0x181D563F0")]
	public static PhotonTeam GetPhotonTeam(this Player player)
	{
		return null;
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x1D56510", Offset = "0x1D54B10", VA = "0x181D56510")]
	public static bool JoinTeam(this Player player, PhotonTeam team)
	{
		return default(bool);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x1D56A00", Offset = "0x1D55000", VA = "0x181D56A00")]
	public static bool JoinTeam(this Player player, byte teamCode)
	{
		return default(bool);
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x1D56750", Offset = "0x1D54D50", VA = "0x181D56750")]
	public static bool JoinTeam(this Player player, string teamName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x1D56EA0", Offset = "0x1D554A0", VA = "0x181D56EA0")]
	public static bool SwitchTeam(this Player player, PhotonTeam team)
	{
		return default(bool);
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x1D575A0", Offset = "0x1D55BA0", VA = "0x181D575A0")]
	public static bool SwitchTeam(this Player player, byte teamCode)
	{
		return default(bool);
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x1D571F0", Offset = "0x1D557F0", VA = "0x181D571F0")]
	public static bool SwitchTeam(this Player player, string teamName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x1D56CB0", Offset = "0x1D552B0", VA = "0x181D56CB0")]
	public static bool LeaveCurrentTeam(this Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x1D57950", Offset = "0x1D55F50", VA = "0x181D57950")]
	public static bool TryGetTeamMates(this Player player, out Player[] teamMates)
	{
		return default(bool);
	}
}
