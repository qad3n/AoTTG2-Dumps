using Discord;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x2000736")]
internal class DiscordManager : MonoBehaviour
{
	[Token(Token = "0x40022DA")]
	[FieldOffset(Offset = "0x0")]
	private static DiscordManager _instance;

	[Token(Token = "0x40022DB")]
	[FieldOffset(Offset = "0x8")]
	public static global::Discord.Discord discord;

	[Token(Token = "0x40022DC")]
	[FieldOffset(Offset = "0x10")]
	private static long appID;

	[Token(Token = "0x40022DD")]
	[FieldOffset(Offset = "0x18")]
	private static bool instanceExists;

	[Token(Token = "0x40022DE")]
	[FieldOffset(Offset = "0x20")]
	private string largeImage;

	[Token(Token = "0x40022DF")]
	[FieldOffset(Offset = "0x20")]
	private static long time;

	[Token(Token = "0x40022E0")]
	[FieldOffset(Offset = "0x28")]
	private string roomName;

	[Token(Token = "0x40022E1")]
	[FieldOffset(Offset = "0x30")]
	private int playerCount;

	[Token(Token = "0x40022E2")]
	[FieldOffset(Offset = "0x34")]
	private int maxPlayerCount;

	[Token(Token = "0x40022E3")]
	[FieldOffset(Offset = "0x38")]
	private RoomInfo roomInfo;

	[Token(Token = "0x40022E4")]
	[FieldOffset(Offset = "0x40")]
	private Activity roomActivity;

	[Token(Token = "0x40022E5")]
	[FieldOffset(Offset = "0xD0")]
	private Activity mainMenuActivity;

	[Token(Token = "0x40022E6")]
	[FieldOffset(Offset = "0x160")]
	private string[] trackedProperties;

	[Token(Token = "0x6004658")]
	[Address(RVA = "0x409C3F0", Offset = "0x409C3F0", VA = "0x409C3F0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6004659")]
	[Address(RVA = "0x409C740", Offset = "0x409C740", VA = "0x409C740")]
	private void Update()
	{
	}

	[Token(Token = "0x600465A")]
	[Address(RVA = "0x409C860", Offset = "0x409C860", VA = "0x409C860")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x600465B")]
	[Address(RVA = "0x409D630", Offset = "0x409D630", VA = "0x409D630")]
	private void SetRoomActivity(string state, string details, string profileIcon, long startTime, int playerCount, int maxPlayers)
	{
	}

	[Token(Token = "0x600465C")]
	[Address(RVA = "0x409D6C0", Offset = "0x409D6C0", VA = "0x409D6C0")]
	private void SetMenuActivity(string state, string details, string profileIcon, long startTime)
	{
	}

	[Token(Token = "0x600465D")]
	[Address(RVA = "0x409C870", Offset = "0x409C870", VA = "0x409C870")]
	private void UpdateStatus()
	{
	}

	[Token(Token = "0x600465E")]
	[Address(RVA = "0x409D740", Offset = "0x409D740", VA = "0x409D740")]
	public DiscordManager()
	{
	}
}
