// ==================== AoTTG2 cross-reference ====================
// Type: Settings.MultiplayerSettings
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/MultiplayerSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/MultiplayerSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Net;
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000F9")]
internal class MultiplayerSettings : SaveableSettingsContainer
{
	[Token(Token = "0x40005EE")]
	[FieldOffset(Offset = "0x0")]
	public static string VoiceRoomSuffix;

	[Token(Token = "0x40005EF")]
	[FieldOffset(Offset = "0x8")]
	public static string PublicAppId;

	[Token(Token = "0x40005F0")]
	[FieldOffset(Offset = "0x38")]
	public IntSetting LobbyMode;

	[Token(Token = "0x40005F1")]
	[FieldOffset(Offset = "0x40")]
	public IntSetting AppIdMode;

	[Token(Token = "0x40005F2")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting CustomLobby;

	[Token(Token = "0x40005F3")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting CustomAppId;

	[Token(Token = "0x40005F4")]
	[FieldOffset(Offset = "0x58")]
	public StringSetting LanIP;

	[Token(Token = "0x40005F5")]
	[FieldOffset(Offset = "0x60")]
	public IntSetting LanPort;

	[Token(Token = "0x40005F6")]
	[FieldOffset(Offset = "0x68")]
	public StringSetting LanPassword;

	[Token(Token = "0x40005F7")]
	[FieldOffset(Offset = "0x70")]
	public BoolSetting LanSupportsAccounts;

	[Token(Token = "0x40005F8")]
	[FieldOffset(Offset = "0x78")]
	public IntSetting QuickPlayRegion;

	[Token(Token = "0x40005F9")]
	[FieldOffset(Offset = "0x80")]
	public MultiplayerServerType CurrentMultiplayerServerType;

	[Token(Token = "0x40005FA")]
	[FieldOffset(Offset = "0x84")]
	private int _connectRequest;

	[Token(Token = "0x40005FB")]
	[FieldOffset(Offset = "0x88")]
	private Action _pendingVoiceRoom;

	[Token(Token = "0x40005FC")]
	[FieldOffset(Offset = "0x90")]
	public readonly Dictionary<MultiplayerRegion, string> CloudAddresses;

	[Token(Token = "0x40005FD")]
	[FieldOffset(Offset = "0x98")]
	public readonly Dictionary<MultiplayerRegion, string> PublicAddresses;

	[Token(Token = "0x40005FE")]
	[FieldOffset(Offset = "0xA0")]
	public readonly int DefaultPort;

	[Token(Token = "0x170000C1")]
	protected override string FileName
	{
		[Token(Token = "0x600054C")]
		[Address(RVA = "0x5A51940", Offset = "0x5A50940", VA = "0x5A51940", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x5A51970", Offset = "0x5A50970", VA = "0x5A51970")]
	public bool IsConnectedToPublic()
	{
		return default(bool);
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x5A519C0", Offset = "0x5A509C0", VA = "0x5A519C0")]
	public void Disconnect()
	{
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x5A51AA0", Offset = "0x5A50AA0", VA = "0x5A51AA0")]
	public void ConnectServer(MultiplayerRegion region)
	{
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x5A51BF0", Offset = "0x5A50BF0", VA = "0x5A51BF0")]
	private void ConnectServerInternal(MultiplayerRegion region)
	{
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x5A522E0", Offset = "0x5A512E0", VA = "0x5A522E0")]
	public void ConnectLAN()
	{
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x5A52640", Offset = "0x5A51640", VA = "0x5A52640")]
	public void ConnectOffline()
	{
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x5A521E0", Offset = "0x5A511E0", VA = "0x5A521E0")]
	public NetworkCredential GetCurrentLobby(bool isPublic)
	{
		return null;
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x5A526A0", Offset = "0x5A516A0", VA = "0x5A526A0")]
	public void StartRoom()
	{
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x5A530E0", Offset = "0x5A520E0", VA = "0x5A530E0")]
	public void JoinRoom(string roomId, string roomName, string password)
	{
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x5A53450", Offset = "0x5A52450", VA = "0x5A53450")]
	public void OnRoomJoined()
	{
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x5A53490", Offset = "0x5A52490", VA = "0x5A53490")]
	public void OnRoomEntryFailed()
	{
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x5A53020", Offset = "0x5A52020", VA = "0x5A53020")]
	public string GetHashKey(string str)
	{
		return null;
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x5A53390", Offset = "0x5A52390", VA = "0x5A53390")]
	public string GetHashCode(string str)
	{
		return null;
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x5A534B0", Offset = "0x5A524B0", VA = "0x5A534B0")]
	public MultiplayerSettings()
	{
	}
}
