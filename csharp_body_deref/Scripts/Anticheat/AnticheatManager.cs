// ==================== AoTTG2 cross-reference ====================
// Type: Anticheat.AnticheatManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Anticheat/AnticheatManager.c
// Prior real C# source (older reference): Assets/Scripts/Anticheat/AnticheatManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using ApplicationManagers;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Anticheat;

[Token(Token = "0x2000964")]
internal class AnticheatManager : MonoBehaviour
{
	[Token(Token = "0x4002E6B")]
	[FieldOffset(Offset = "0x0")]
	private static AnticheatManager _instance;

	[Token(Token = "0x4002E6C")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<int, Dictionary<PhotonEventType, BaseEventFilter>> _IdToEventFilters;

	[Token(Token = "0x4002E6D")]
	[FieldOffset(Offset = "0x10")]
	private static BallotBox VoteKick;

	[Token(Token = "0x4002E6E")]
	[FieldOffset(Offset = "0x18")]
	public static HashSet<string> BanList;

	[Token(Token = "0x600574F")]
	[Address(RVA = "0x235EB40", Offset = "0x235D140", VA = "0x18235EB40")]
	public static void Init()
	{
	}

	[Token(Token = "0x6005750")]
	[Address(RVA = "0x235F040", Offset = "0x235D640", VA = "0x18235F040")]
	public static void Reset()
	{
	}

	[Token(Token = "0x6005751")]
	[Address(RVA = "0x235EF50", Offset = "0x235D550", VA = "0x18235EF50")]
	private static void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6005752")]
	[Address(RVA = "0x235E860", Offset = "0x235CE60", VA = "0x18235E860")]
	public static bool CheckPhotonEvent(Player sender, PhotonEventType eventType, object[] data)
	{
		return default(bool);
	}

	[Token(Token = "0x6005753")]
	[Address(RVA = "0x235EAC0", Offset = "0x235D0C0", VA = "0x18235EAC0")]
	private static bool HasModPassword()
	{
		return default(bool);
	}

	[Token(Token = "0x6005754")]
	[Address(RVA = "0x235EC20", Offset = "0x235D220", VA = "0x18235EC20")]
	public static void KickPlayer(Player player, bool ban = false, string reason = "")
	{
	}

	[Token(Token = "0x6005755")]
	[Address(RVA = "0x235F110", Offset = "0x235D710", VA = "0x18235F110")]
	public static BallotBox.Result TryVoteKickPlayer(Player voter, Player target)
	{
		return default(BallotBox.Result);
	}

	[Token(Token = "0x6005756")]
	[Address(RVA = "0x235EFD0", Offset = "0x235D5D0", VA = "0x18235EFD0")]
	public static void ResetVoteKicks(Player voter)
	{
	}

	[Token(Token = "0x6005757")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AnticheatManager()
	{
	}
}
