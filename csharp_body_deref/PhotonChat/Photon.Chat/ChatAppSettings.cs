// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Chat.ChatAppSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonChat/Code/ChatAppSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Chat;

[Serializable]
[Token(Token = "0x2000006")]
public class ChatAppSettings
{
	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x10")]
	public string AppIdChat;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x18")]
	public string AppVersion;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x20")]
	public string FixedRegion;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x28")]
	public string Server;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x30")]
	public ushort Port;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x38")]
	public string ProxyServer;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x40")]
	public ConnectionProtocol Protocol;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x41")]
	public bool EnableProtocolFallback;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x42")]
	public DebugLevel NetworkLogging;

	[Token(Token = "0x17000003")]
	public bool IsDefaultNameServer
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x3EB1710", Offset = "0x3EB1710", VA = "0x3EB1710")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x3EB1720", Offset = "0x3EB1720", VA = "0x3EB1720")]
	public ChatAppSettings()
	{
	}
}
