using System;
using Il2CppDummyDll;

namespace Photon.Chat;

[Token(Token = "0x200000E")]
public enum CustomAuthenticationType : byte
{
	[Token(Token = "0x400007C")]
	Custom = 0,
	[Token(Token = "0x400007D")]
	Steam = 1,
	[Token(Token = "0x400007E")]
	Facebook = 2,
	[Token(Token = "0x400007F")]
	Oculus = 3,
	[Token(Token = "0x4000080")]
	PlayStation4 = 4,
	[Token(Token = "0x4000081")]
	[Obsolete("Use PlayStation4 or PlayStation5 as needed")]
	PlayStation = 4,
	[Token(Token = "0x4000082")]
	Xbox = 5,
	[Token(Token = "0x4000083")]
	Viveport = 10,
	[Token(Token = "0x4000084")]
	NintendoSwitch = 11,
	[Token(Token = "0x4000085")]
	PlayStation5 = 12,
	[Token(Token = "0x4000086")]
	[Obsolete("Use PlayStation4 or PlayStation5 as needed")]
	Playstation5 = 12,
	[Token(Token = "0x4000087")]
	Epic = 13,
	[Token(Token = "0x4000088")]
	FacebookGaming = 15,
	[Token(Token = "0x4000089")]
	None = byte.MaxValue
}
