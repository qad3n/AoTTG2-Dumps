// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.DiscordManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/DiscordManager.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/DiscordManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Discord;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x200097A")]
internal class DiscordManager : MonoBehaviour
{
	[Token(Token = "0x4002FCD")]
	private const float StatusUpdateInterval = 5f;

	[Token(Token = "0x4002FCE")]
	private const string LargeImage = "aottg2-logo2";

	[Token(Token = "0x4002FCF")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] TrackedProperties;

	[Token(Token = "0x4002FD0")]
	[FieldOffset(Offset = "0x8")]
	private static DiscordManager _instance;

	[Token(Token = "0x4002FD1")]
	[FieldOffset(Offset = "0x10")]
	public static global::Discord.Discord discord;

	[Token(Token = "0x4002FD2")]
	[FieldOffset(Offset = "0x18")]
	private static long appID;

	[Token(Token = "0x4002FD3")]
	[FieldOffset(Offset = "0x20")]
	private static long time;

	[Token(Token = "0x4002FD4")]
	[FieldOffset(Offset = "0x20")]
	private float _nextStatusUpdateTime;

	[Token(Token = "0x4002FD5")]
	[FieldOffset(Offset = "0x28")]
	private string _lastStatus;

	[Token(Token = "0x600589F")]
	[Address(RVA = "0x5D09FD0", Offset = "0x5D08FD0", VA = "0x5D09FD0")]
	public static void Init()
	{
	}

	[Token(Token = "0x60058A0")]
	[Address(RVA = "0x5D140E0", Offset = "0x5D130E0", VA = "0x5D140E0")]
	private void Update()
	{
	}

	[Token(Token = "0x60058A1")]
	[Address(RVA = "0x5D141F0", Offset = "0x5D131F0", VA = "0x5D141F0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60058A2")]
	[Address(RVA = "0x5D14230", Offset = "0x5D13230", VA = "0x5D14230")]
	private void UpdateStatus()
	{
	}

	[Token(Token = "0x60058A3")]
	[Address(RVA = "0x5D14C10", Offset = "0x5D13C10", VA = "0x5D14C10")]
	private static string GetScore(Player player)
	{
		return null;
	}

	[Token(Token = "0x60058A4")]
	[Address(RVA = "0x5D14DF0", Offset = "0x5D13DF0", VA = "0x5D14DF0")]
	public DiscordManager()
	{
	}
}
