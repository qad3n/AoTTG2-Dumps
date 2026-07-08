using System.Collections.Generic;
using ApplicationManagers;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Anticheat;

[Token(Token = "0x2000775")]
internal class AnticheatManager : MonoBehaviour
{
	[Token(Token = "0x40023FB")]
	[FieldOffset(Offset = "0x0")]
	private static AnticheatManager _instance;

	[Token(Token = "0x40023FC")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<int, Dictionary<PhotonEventType, BaseEventFilter>> _IdToEventFilters;

	[Token(Token = "0x40023FD")]
	[FieldOffset(Offset = "0x10")]
	private static BallotBox VoteKick;

	[Token(Token = "0x40023FE")]
	[FieldOffset(Offset = "0x18")]
	public static HashSet<string> BanList;

	[Token(Token = "0x60047E3")]
	[Address(RVA = "0x40B2770", Offset = "0x40B2770", VA = "0x40B2770")]
	public static void Init()
	{
	}

	[Token(Token = "0x60047E4")]
	[Address(RVA = "0x40B2840", Offset = "0x40B2840", VA = "0x40B2840")]
	public static void Reset()
	{
	}

	[Token(Token = "0x60047E5")]
	[Address(RVA = "0x40B2A40", Offset = "0x40B2A40", VA = "0x40B2A40")]
	private static void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x60047E6")]
	[Address(RVA = "0x40B2AD0", Offset = "0x40B2AD0", VA = "0x40B2AD0")]
	public static bool CheckPhotonEvent(Player sender, PhotonEventType eventType, object[] data)
	{
		return default(bool);
	}

	[Token(Token = "0x60047E7")]
	[Address(RVA = "0x40B2D40", Offset = "0x40B2D40", VA = "0x40B2D40")]
	private static bool HasModPassword()
	{
		return default(bool);
	}

	[Token(Token = "0x60047E8")]
	[Address(RVA = "0x40B2DC0", Offset = "0x40B2DC0", VA = "0x40B2DC0")]
	public static void KickPlayer(Player player, bool ban = false, string reason = "")
	{
	}

	[Token(Token = "0x60047E9")]
	[Address(RVA = "0x40B3120", Offset = "0x40B3120", VA = "0x40B3120")]
	public static BallotBox.Result TryVoteKickPlayer(Player voter, Player target)
	{
		return default(BallotBox.Result);
	}

	[Token(Token = "0x60047EA")]
	[Address(RVA = "0x40B3850", Offset = "0x40B3850", VA = "0x40B3850")]
	public static void ResetVoteKicks(Player voter)
	{
	}

	[Token(Token = "0x60047EB")]
	[Address(RVA = "0x40B3AE0", Offset = "0x40B3AE0", VA = "0x40B3AE0")]
	public AnticheatManager()
	{
	}
}
