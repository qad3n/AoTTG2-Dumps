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

[Token(Token = "0x20007D7")]
internal class AnticheatManager : MonoBehaviour
{
	[Token(Token = "0x4002599")]
	[FieldOffset(Offset = "0x0")]
	private static AnticheatManager _instance;

	[Token(Token = "0x400259A")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<int, Dictionary<PhotonEventType, BaseEventFilter>> _IdToEventFilters;

	[Token(Token = "0x400259B")]
	[FieldOffset(Offset = "0x10")]
	private static BallotBox VoteKick;

	[Token(Token = "0x400259C")]
	[FieldOffset(Offset = "0x18")]
	public static HashSet<string> BanList;

	[Token(Token = "0x6004AD6")]
	[Address(RVA = "0x43D00F0", Offset = "0x43D00F0", VA = "0x43D00F0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6004AD7")]
	[Address(RVA = "0x43D01C0", Offset = "0x43D01C0", VA = "0x43D01C0")]
	public static void Reset()
	{
	}

	[Token(Token = "0x6004AD8")]
	[Address(RVA = "0x43D03C0", Offset = "0x43D03C0", VA = "0x43D03C0")]
	private static void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6004AD9")]
	[Address(RVA = "0x43D0450", Offset = "0x43D0450", VA = "0x43D0450")]
	public static bool CheckPhotonEvent(Player sender, PhotonEventType eventType, object[] data)
	{
		return default(bool);
	}

	[Token(Token = "0x6004ADA")]
	[Address(RVA = "0x43D06C0", Offset = "0x43D06C0", VA = "0x43D06C0")]
	private static bool HasModPassword()
	{
		return default(bool);
	}

	[Token(Token = "0x6004ADB")]
	[Address(RVA = "0x43D0740", Offset = "0x43D0740", VA = "0x43D0740")]
	public static void KickPlayer(Player player, bool ban = false, string reason = "")
	{
	}

	[Token(Token = "0x6004ADC")]
	[Address(RVA = "0x43D0AA0", Offset = "0x43D0AA0", VA = "0x43D0AA0")]
	public static BallotBox.Result TryVoteKickPlayer(Player voter, Player target)
	{
		return default(BallotBox.Result);
	}

	[Token(Token = "0x6004ADD")]
	[Address(RVA = "0x43D11D0", Offset = "0x43D11D0", VA = "0x43D11D0")]
	public static void ResetVoteKicks(Player voter)
	{
	}

	[Token(Token = "0x6004ADE")]
	[Address(RVA = "0x43D1460", Offset = "0x43D1460", VA = "0x43D1460")]
	public AnticheatManager()
	{
	}
}
