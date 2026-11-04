// ==================== AoTTG2 cross-reference ====================
// Type: Settings.MultiplayerSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/MultiplayerSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/MultiplayerSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Net;
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000C1")]
internal class MultiplayerSettings : SaveableSettingsContainer
{
	[Token(Token = "0x40004B8")]
	[FieldOffset(Offset = "0x0")]
	public static string VoiceRoomSuffix;

	[Token(Token = "0x40004B9")]
	[FieldOffset(Offset = "0x8")]
	public static string PublicAppId;

	[Token(Token = "0x40004BA")]
	[FieldOffset(Offset = "0x38")]
	public IntSetting LobbyMode;

	[Token(Token = "0x40004BB")]
	[FieldOffset(Offset = "0x40")]
	public IntSetting AppIdMode;

	[Token(Token = "0x40004BC")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting CustomLobby;

	[Token(Token = "0x40004BD")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting CustomAppId;

	[Token(Token = "0x40004BE")]
	[FieldOffset(Offset = "0x58")]
	public StringSetting LanIP;

	[Token(Token = "0x40004BF")]
	[FieldOffset(Offset = "0x60")]
	public IntSetting LanPort;

	[Token(Token = "0x40004C0")]
	[FieldOffset(Offset = "0x68")]
	public StringSetting LanPassword;

	[Token(Token = "0x40004C1")]
	[FieldOffset(Offset = "0x70")]
	public BoolSetting LanSupportsAccounts;

	[Token(Token = "0x40004C2")]
	[FieldOffset(Offset = "0x78")]
	public StringSetting ModUsername;

	[Token(Token = "0x40004C3")]
	[FieldOffset(Offset = "0x80")]
	public StringSetting ModPassword;

	[Token(Token = "0x40004C4")]
	[FieldOffset(Offset = "0x88")]
	public MultiplayerServerType CurrentMultiplayerServerType;

	[Token(Token = "0x40004C5")]
	[FieldOffset(Offset = "0x90")]
	public readonly Dictionary<MultiplayerRegion, string> CloudAddresses;

	[Token(Token = "0x40004C6")]
	[FieldOffset(Offset = "0x98")]
	public readonly Dictionary<MultiplayerRegion, string> PublicAddresses;

	[Token(Token = "0x40004C7")]
	[FieldOffset(Offset = "0xA0")]
	public readonly int DefaultPort;

	[Token(Token = "0x170000A4")]
	protected override string FileName
	{
		[Token(Token = "0x60003D6")]
		[Address(RVA = "0x1F23C30", Offset = "0x1F22230", VA = "0x181F23C30", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x1F229C0", Offset = "0x1F20FC0", VA = "0x181F229C0")]
	public bool IsConnectedToPublic()
	{
		return default(bool);
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x1F22660", Offset = "0x1F20C60", VA = "0x181F22660")]
	public void Disconnect()
	{
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x1F22530", Offset = "0x1F20B30", VA = "0x181F22530")]
	public void ConnectServer(MultiplayerRegion region)
	{
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x1F22000", Offset = "0x1F20600", VA = "0x181F22000")]
	private void ConnectServerInternal(MultiplayerRegion region)
	{
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x1F21CD0", Offset = "0x1F202D0", VA = "0x181F21CD0")]
	public void ConnectLAN()
	{
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x1F21FA0", Offset = "0x1F205A0", VA = "0x181F21FA0")]
	public void ConnectOffline()
	{
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x1F22730", Offset = "0x1F20D30", VA = "0x181F22730")]
	public NetworkCredential GetCurrentLobby(bool isPublic)
	{
		return null;
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x1F22C20", Offset = "0x1F21220", VA = "0x181F22C20")]
	public void StartRoom()
	{
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x1F22A20", Offset = "0x1F21020", VA = "0x181F22A20")]
	public void JoinRoom(string roomId, string roomName, string password)
	{
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x1F22910", Offset = "0x1F20F10", VA = "0x181F22910")]
	public string GetHashKey(string str)
	{
		return null;
	}

	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x1F22860", Offset = "0x1F20E60", VA = "0x181F22860")]
	public string GetHashCode(string str)
	{
		return null;
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x1F23510", Offset = "0x1F21B10", VA = "0x181F23510")]
	public MultiplayerSettings()
	{
	}
}
