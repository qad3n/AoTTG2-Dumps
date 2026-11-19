// ==================== AoTTG2 cross-reference ====================
// Type: Anticheat.AnticheatManager
// Update status: CHANGED in this game update
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

[Token(Token = "0x20009CB")]
internal class AnticheatManager : MonoBehaviour
{
	[Token(Token = "0x4003119")]
	[FieldOffset(Offset = "0x0")]
	private static AnticheatManager _instance;

	[Token(Token = "0x400311A")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<int, Dictionary<PhotonEventType, BaseEventFilter>> _IdToEventFilters;

	[Token(Token = "0x400311B")]
	[FieldOffset(Offset = "0x10")]
	private static BallotBox VoteKick;

	[Token(Token = "0x400311C")]
	[FieldOffset(Offset = "0x18")]
	public static HashSet<string> BanList;

	[Token(Token = "0x6005AA8")]
	[Address(RVA = "0x5D2BE10", Offset = "0x5D2AE10", VA = "0x5D2BE10")]
	public static void Init()
	{
	}

	[Token(Token = "0x6005AA9")]
	[Address(RVA = "0x5D2BEE0", Offset = "0x5D2AEE0", VA = "0x5D2BEE0")]
	public static void Reset()
	{
	}

	[Token(Token = "0x6005AAA")]
	[Address(RVA = "0x5D2C0E0", Offset = "0x5D2B0E0", VA = "0x5D2C0E0")]
	private static void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6005AAB")]
	[Address(RVA = "0x5D2C170", Offset = "0x5D2B170", VA = "0x5D2C170")]
	public static bool CheckPhotonEvent(Player sender, PhotonEventType eventType, object[] data)
	{
		return default(bool);
	}

	[Token(Token = "0x6005AAC")]
	[Address(RVA = "0x5D2C420", Offset = "0x5D2B420", VA = "0x5D2C420")]
	public static void KickPlayer(Player player, bool ban = false, string reason = "")
	{
	}

	[Token(Token = "0x6005AAD")]
	[Address(RVA = "0x5D2C7D0", Offset = "0x5D2B7D0", VA = "0x5D2C7D0")]
	public static BallotBox.Result TryVoteKickPlayer(Player voter, Player target)
	{
		return default(BallotBox.Result);
	}

	[Token(Token = "0x6005AAE")]
	[Address(RVA = "0x5D2CF40", Offset = "0x5D2BF40", VA = "0x5D2CF40")]
	public static void ResetVoteKicks(Player voter)
	{
	}

	[Token(Token = "0x6005AAF")]
	[Address(RVA = "0x5D2D1C0", Offset = "0x5D2C1C0", VA = "0x5D2D1C0")]
	public AnticheatManager()
	{
	}
}
