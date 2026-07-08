using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200005F")]
public enum PlayerLoopTiming
{
	[Token(Token = "0x400009E")]
	Initialization,
	[Token(Token = "0x400009F")]
	LastInitialization,
	[Token(Token = "0x40000A0")]
	EarlyUpdate,
	[Token(Token = "0x40000A1")]
	LastEarlyUpdate,
	[Token(Token = "0x40000A2")]
	FixedUpdate,
	[Token(Token = "0x40000A3")]
	LastFixedUpdate,
	[Token(Token = "0x40000A4")]
	PreUpdate,
	[Token(Token = "0x40000A5")]
	LastPreUpdate,
	[Token(Token = "0x40000A6")]
	Update,
	[Token(Token = "0x40000A7")]
	LastUpdate,
	[Token(Token = "0x40000A8")]
	PreLateUpdate,
	[Token(Token = "0x40000A9")]
	LastPreLateUpdate,
	[Token(Token = "0x40000AA")]
	PostLateUpdate,
	[Token(Token = "0x40000AB")]
	LastPostLateUpdate,
	[Token(Token = "0x40000AC")]
	TimeUpdate,
	[Token(Token = "0x40000AD")]
	LastTimeUpdate
}
