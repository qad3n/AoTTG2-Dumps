// ==================== AoTTG2 cross-reference ====================
// Type: Settings.MultiplayerSettings
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/MultiplayerSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/MultiplayerSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Net;
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000A3")]
internal class MultiplayerSettings : SaveableSettingsContainer
{
	[Token(Token = "0x400042F")]
	[FieldOffset(Offset = "0x0")]
	public static string VoiceRoomSuffix;

	[Token(Token = "0x4000430")]
	[FieldOffset(Offset = "0x8")]
	public static string PublicAppId;

	[Token(Token = "0x4000431")]
	[FieldOffset(Offset = "0x20")]
	public IntSetting LobbyMode;

	[Token(Token = "0x4000432")]
	[FieldOffset(Offset = "0x28")]
	public IntSetting AppIdMode;

	[Token(Token = "0x4000433")]
	[FieldOffset(Offset = "0x30")]
	public StringSetting CustomLobby;

	[Token(Token = "0x4000434")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting CustomAppId;

	[Token(Token = "0x4000435")]
	[FieldOffset(Offset = "0x40")]
	public StringSetting LanIP;

	[Token(Token = "0x4000436")]
	[FieldOffset(Offset = "0x48")]
	public IntSetting LanPort;

	[Token(Token = "0x4000437")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting LanPassword;

	[Token(Token = "0x4000438")]
	[FieldOffset(Offset = "0x58")]
	public BoolSetting LanSupportsAccounts;

	[Token(Token = "0x4000439")]
	[FieldOffset(Offset = "0x60")]
	public StringSetting ModUsername;

	[Token(Token = "0x400043A")]
	[FieldOffset(Offset = "0x68")]
	public StringSetting ModPassword;

	[Token(Token = "0x400043B")]
	[FieldOffset(Offset = "0x70")]
	public MultiplayerServerType CurrentMultiplayerServerType;

	[Token(Token = "0x400043C")]
	[FieldOffset(Offset = "0x78")]
	public readonly Dictionary<MultiplayerRegion, string> CloudAddresses;

	[Token(Token = "0x400043D")]
	[FieldOffset(Offset = "0x80")]
	public readonly Dictionary<MultiplayerRegion, string> PublicAddresses;

	[Token(Token = "0x400043E")]
	[FieldOffset(Offset = "0x88")]
	public readonly int DefaultPort;

	[Token(Token = "0x17000098")]
	protected override string FileName
	{
		[Token(Token = "0x600034D")]
		[Address(RVA = "0x40F7540", Offset = "0x40F7540", VA = "0x40F7540", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x40F7570", Offset = "0x40F7570", VA = "0x40F7570")]
	public bool IsConnectedToPublic()
	{
		return default(bool);
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x40F75C0", Offset = "0x40F75C0", VA = "0x40F75C0")]
	public void Disconnect()
	{
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x40F7680", Offset = "0x40F7680", VA = "0x40F7680")]
	public void ConnectServer(MultiplayerRegion region)
	{
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x40F77B0", Offset = "0x40F77B0", VA = "0x40F77B0")]
	private void ConnectServerInternal(MultiplayerRegion region)
	{
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x40F7EA0", Offset = "0x40F7EA0", VA = "0x40F7EA0")]
	public void ConnectLAN()
	{
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x40F8210", Offset = "0x40F8210", VA = "0x40F8210")]
	public void ConnectOffline()
	{
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x40F7D90", Offset = "0x40F7D90", VA = "0x40F7D90")]
	public NetworkCredential GetCurrentLobby(bool isPublic)
	{
		return null;
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x40F8270", Offset = "0x40F8270", VA = "0x40F8270")]
	public void StartRoom()
	{
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x40F8B70", Offset = "0x40F8B70", VA = "0x40F8B70")]
	public void JoinRoom(string roomId, string roomName, string password)
	{
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x40F8AB0", Offset = "0x40F8AB0", VA = "0x40F8AB0")]
	public string GetHashKey(string str)
	{
		return null;
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x40F8F00", Offset = "0x40F8F00", VA = "0x40F8F00")]
	public string GetHashCode(string str)
	{
		return null;
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x40F8FC0", Offset = "0x40F8FC0", VA = "0x40F8FC0")]
	public MultiplayerSettings()
	{
	}
}
