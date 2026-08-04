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

[Token(Token = "0x2000785")]
internal class DiscordManager : MonoBehaviour
{
	[Token(Token = "0x400243C")]
	[FieldOffset(Offset = "0x0")]
	private static DiscordManager _instance;

	[Token(Token = "0x400243D")]
	[FieldOffset(Offset = "0x8")]
	public static global::Discord.Discord discord;

	[Token(Token = "0x400243E")]
	[FieldOffset(Offset = "0x10")]
	private static long appID;

	[Token(Token = "0x400243F")]
	[FieldOffset(Offset = "0x18")]
	private static bool instanceExists;

	[Token(Token = "0x4002440")]
	[FieldOffset(Offset = "0x20")]
	private string largeImage;

	[Token(Token = "0x4002441")]
	[FieldOffset(Offset = "0x20")]
	private static long time;

	[Token(Token = "0x4002442")]
	[FieldOffset(Offset = "0x28")]
	private string roomName;

	[Token(Token = "0x4002443")]
	[FieldOffset(Offset = "0x30")]
	private int playerCount;

	[Token(Token = "0x4002444")]
	[FieldOffset(Offset = "0x34")]
	private int maxPlayerCount;

	[Token(Token = "0x4002445")]
	[FieldOffset(Offset = "0x38")]
	private RoomInfo roomInfo;

	[Token(Token = "0x4002446")]
	[FieldOffset(Offset = "0x40")]
	private Activity roomActivity;

	[Token(Token = "0x4002447")]
	[FieldOffset(Offset = "0xD0")]
	private Activity mainMenuActivity;

	[Token(Token = "0x4002448")]
	[FieldOffset(Offset = "0x160")]
	private string[] trackedProperties;

	[Token(Token = "0x60048C7")]
	[Address(RVA = "0x43B5570", Offset = "0x43B5570", VA = "0x43B5570")]
	public static void Init()
	{
	}

	[Token(Token = "0x60048C8")]
	[Address(RVA = "0x43B58C0", Offset = "0x43B58C0", VA = "0x43B58C0")]
	private void Update()
	{
	}

	[Token(Token = "0x60048C9")]
	[Address(RVA = "0x43B59E0", Offset = "0x43B59E0", VA = "0x43B59E0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60048CA")]
	[Address(RVA = "0x43B67B0", Offset = "0x43B67B0", VA = "0x43B67B0")]
	private void SetRoomActivity(string state, string details, string profileIcon, long startTime, int playerCount, int maxPlayers)
	{
	}

	[Token(Token = "0x60048CB")]
	[Address(RVA = "0x43B6840", Offset = "0x43B6840", VA = "0x43B6840")]
	private void SetMenuActivity(string state, string details, string profileIcon, long startTime)
	{
	}

	[Token(Token = "0x60048CC")]
	[Address(RVA = "0x43B59F0", Offset = "0x43B59F0", VA = "0x43B59F0")]
	private void UpdateStatus()
	{
	}

	[Token(Token = "0x60048CD")]
	[Address(RVA = "0x43B68C0", Offset = "0x43B68C0", VA = "0x43B68C0")]
	public DiscordManager()
	{
	}
}
