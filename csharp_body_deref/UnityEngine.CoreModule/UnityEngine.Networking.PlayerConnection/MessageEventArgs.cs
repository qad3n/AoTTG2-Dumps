using System;
using Il2CppDummyDll;

namespace UnityEngine.Networking.PlayerConnection;

[Serializable]
[Token(Token = "0x2000291")]
public class MessageEventArgs
{
	[Token(Token = "0x40006D2")]
	[FieldOffset(Offset = "0x10")]
	public int playerId;

	[Token(Token = "0x40006D3")]
	[FieldOffset(Offset = "0x18")]
	public byte[] data;

	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x4AEE420", Offset = "0x4AEE420", VA = "0x4AEE420")]
	public MessageEventArgs()
	{
	}
}
