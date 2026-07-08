using System.Collections.Generic;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200002F")]
public class DisconnectMessage
{
	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0x10")]
	public short Code;

	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x18")]
	public string DebugMessage;

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0x20")]
	public Dictionary<byte, object> Parameters;

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x3B839F0", Offset = "0x3B839F0", VA = "0x3B839F0")]
	public DisconnectMessage()
	{
	}
}
