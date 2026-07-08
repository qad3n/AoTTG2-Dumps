using System;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000033")]
[Flags]
public enum PropertyTypeFlag : byte
{
	[Token(Token = "0x400019F")]
	None = 0,
	[Token(Token = "0x40001A0")]
	Game = 1,
	[Token(Token = "0x40001A1")]
	Actor = 2,
	[Token(Token = "0x40001A2")]
	GameAndActor = 3
}
