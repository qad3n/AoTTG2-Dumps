using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004B2")]
internal enum HorseState
{
	[Token(Token = "0x400150F")]
	Idle,
	[Token(Token = "0x4001510")]
	WalkToPoint,
	[Token(Token = "0x4001511")]
	RunToPoint,
	[Token(Token = "0x4001512")]
	ControlledIdle,
	[Token(Token = "0x4001513")]
	ControlledRun,
	[Token(Token = "0x4001514")]
	ControlledWalk
}
