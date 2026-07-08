using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000060")]
[Flags]
public enum InjectPlayerLoopTimings
{
	[Token(Token = "0x40000AF")]
	All = 0xFFFF,
	[Token(Token = "0x40000B0")]
	Standard = 0x7555,
	[Token(Token = "0x40000B1")]
	Minimum = 0x2110,
	[Token(Token = "0x40000B2")]
	Initialization = 1,
	[Token(Token = "0x40000B3")]
	LastInitialization = 2,
	[Token(Token = "0x40000B4")]
	EarlyUpdate = 4,
	[Token(Token = "0x40000B5")]
	LastEarlyUpdate = 8,
	[Token(Token = "0x40000B6")]
	FixedUpdate = 0x10,
	[Token(Token = "0x40000B7")]
	LastFixedUpdate = 0x20,
	[Token(Token = "0x40000B8")]
	PreUpdate = 0x40,
	[Token(Token = "0x40000B9")]
	LastPreUpdate = 0x80,
	[Token(Token = "0x40000BA")]
	Update = 0x100,
	[Token(Token = "0x40000BB")]
	LastUpdate = 0x200,
	[Token(Token = "0x40000BC")]
	PreLateUpdate = 0x400,
	[Token(Token = "0x40000BD")]
	LastPreLateUpdate = 0x800,
	[Token(Token = "0x40000BE")]
	PostLateUpdate = 0x1000,
	[Token(Token = "0x40000BF")]
	LastPostLateUpdate = 0x2000,
	[Token(Token = "0x40000C0")]
	TimeUpdate = 0x4000,
	[Token(Token = "0x40000C1")]
	LastTimeUpdate = 0x8000
}
