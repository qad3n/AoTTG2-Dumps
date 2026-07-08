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
		[Address(RVA = "0x3BBBDC0", Offset = "0x3BBBDC0", VA = "0x3BBBDC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x3BBBDD0", Offset = "0x3BBBDD0", VA = "0x3BBBDD0")]
	public ChatAppSettings()
	{
	}
}
