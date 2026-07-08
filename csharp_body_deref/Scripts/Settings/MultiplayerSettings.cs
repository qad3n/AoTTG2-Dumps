using System.Collections.Generic;
using System.Net;
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000A2")]
internal class MultiplayerSettings : SaveableSettingsContainer
{
	[Token(Token = "0x400042A")]
	[FieldOffset(Offset = "0x0")]
	public static string VoiceRoomSuffix;

	[Token(Token = "0x400042B")]
	[FieldOffset(Offset = "0x8")]
	public static string PublicAppId;

	[Token(Token = "0x400042C")]
	[FieldOffset(Offset = "0x20")]
	public IntSetting LobbyMode;

	[Token(Token = "0x400042D")]
	[FieldOffset(Offset = "0x28")]
	public IntSetting AppIdMode;

	[Token(Token = "0x400042E")]
	[FieldOffset(Offset = "0x30")]
	public StringSetting CustomLobby;

	[Token(Token = "0x400042F")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting CustomAppId;

	[Token(Token = "0x4000430")]
	[FieldOffset(Offset = "0x40")]
	public StringSetting LanIP;

	[Token(Token = "0x4000431")]
	[FieldOffset(Offset = "0x48")]
	public IntSetting LanPort;

	[Token(Token = "0x4000432")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting LanPassword;

	[Token(Token = "0x4000433")]
	[FieldOffset(Offset = "0x58")]
	public StringSetting ModUsername;

	[Token(Token = "0x4000434")]
	[FieldOffset(Offset = "0x60")]
	public StringSetting ModPassword;

	[Token(Token = "0x4000435")]
	[FieldOffset(Offset = "0x68")]
	public MultiplayerServerType CurrentMultiplayerServerType;

	[Token(Token = "0x4000436")]
	[FieldOffset(Offset = "0x70")]
	public readonly Dictionary<MultiplayerRegion, string> CloudAddresses;

	[Token(Token = "0x4000437")]
	[FieldOffset(Offset = "0x78")]
	public readonly Dictionary<MultiplayerRegion, string> PublicAddresses;

	[Token(Token = "0x4000438")]
	[FieldOffset(Offset = "0x80")]
	public readonly int DefaultPort;

	[Token(Token = "0x17000096")]
	protected override string FileName
	{
		[Token(Token = "0x6000347")]
		[Address(RVA = "0x3E08790", Offset = "0x3E08790", VA = "0x3E08790", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x3E087C0", Offset = "0x3E087C0", VA = "0x3E087C0")]
	public bool IsConnectedToPublic()
	{
		return default(bool);
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x3E08810", Offset = "0x3E08810", VA = "0x3E08810")]
	public void Disconnect()
	{
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x3E088D0", Offset = "0x3E088D0", VA = "0x3E088D0")]
	public void ConnectServer(MultiplayerRegion region)
	{
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x3E08A00", Offset = "0x3E08A00", VA = "0x3E08A00")]
	private void ConnectServerInternal(MultiplayerRegion region)
	{
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x3E090F0", Offset = "0x3E090F0", VA = "0x3E090F0")]
	public void ConnectLAN()
	{
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x3E09200", Offset = "0x3E09200", VA = "0x3E09200")]
	public void ConnectOffline()
	{
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x3E08FE0", Offset = "0x3E08FE0", VA = "0x3E08FE0")]
	public NetworkCredential GetCurrentLobby(bool isPublic)
	{
		return null;
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x3E09260", Offset = "0x3E09260", VA = "0x3E09260")]
	public void StartRoom()
	{
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x3E09B60", Offset = "0x3E09B60", VA = "0x3E09B60")]
	public void JoinRoom(string roomId, string roomName, string password)
	{
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x3E09AA0", Offset = "0x3E09AA0", VA = "0x3E09AA0")]
	public string GetHashKey(string str)
	{
		return null;
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x3E09EF0", Offset = "0x3E09EF0", VA = "0x3E09EF0")]
	public string GetHashCode(string str)
	{
		return null;
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x3E09FB0", Offset = "0x3E09FB0", VA = "0x3E09FB0")]
	public MultiplayerSettings()
	{
	}
}
