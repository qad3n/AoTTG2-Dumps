// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.DiscordManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/DiscordManager.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/DiscordManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Discord;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x2000910")]
internal class DiscordManager : MonoBehaviour
{
	[Token(Token = "0x4002D0B")]
	[FieldOffset(Offset = "0x0")]
	private static DiscordManager _instance;

	[Token(Token = "0x4002D0C")]
	[FieldOffset(Offset = "0x8")]
	public static global::Discord.Discord discord;

	[Token(Token = "0x4002D0D")]
	[FieldOffset(Offset = "0x10")]
	private static long appID;

	[Token(Token = "0x4002D0E")]
	[FieldOffset(Offset = "0x18")]
	private static bool instanceExists;

	[Token(Token = "0x4002D0F")]
	[FieldOffset(Offset = "0x20")]
	private string largeImage;

	[Token(Token = "0x4002D10")]
	[FieldOffset(Offset = "0x20")]
	private static long time;

	[Token(Token = "0x4002D11")]
	[FieldOffset(Offset = "0x28")]
	private string roomName;

	[Token(Token = "0x4002D12")]
	[FieldOffset(Offset = "0x30")]
	private int playerCount;

	[Token(Token = "0x4002D13")]
	[FieldOffset(Offset = "0x34")]
	private int maxPlayerCount;

	[Token(Token = "0x4002D14")]
	[FieldOffset(Offset = "0x38")]
	private RoomInfo roomInfo;

	[Token(Token = "0x4002D15")]
	[FieldOffset(Offset = "0x40")]
	private Activity roomActivity;

	[Token(Token = "0x4002D16")]
	[FieldOffset(Offset = "0xD0")]
	private Activity mainMenuActivity;

	[Token(Token = "0x4002D17")]
	[FieldOffset(Offset = "0x160")]
	private string[] trackedProperties;

	[Token(Token = "0x600553D")]
	[Address(RVA = "0x234D9D0", Offset = "0x234BFD0", VA = "0x18234D9D0")]
	public static void Init()
	{
	}

	[Token(Token = "0x600553E")]
	[Address(RVA = "0x234E720", Offset = "0x234CD20", VA = "0x18234E720")]
	private void Update()
	{
	}

	[Token(Token = "0x600553F")]
	[Address(RVA = "0x234DC90", Offset = "0x234C290", VA = "0x18234DC90")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6005540")]
	[Address(RVA = "0x234DD30", Offset = "0x234C330", VA = "0x18234DD30")]
	private void SetRoomActivity(string state, string details, string profileIcon, long startTime, int playerCount, int maxPlayers)
	{
	}

	[Token(Token = "0x6005541")]
	[Address(RVA = "0x234DCA0", Offset = "0x234C2A0", VA = "0x18234DCA0")]
	private void SetMenuActivity(string state, string details, string profileIcon, long startTime)
	{
	}

	[Token(Token = "0x6005542")]
	[Address(RVA = "0x234DDC0", Offset = "0x234C3C0", VA = "0x18234DDC0")]
	private void UpdateStatus()
	{
	}

	[Token(Token = "0x6005543")]
	[Address(RVA = "0x234E820", Offset = "0x234CE20", VA = "0x18234E820")]
	public DiscordManager()
	{
	}
}
