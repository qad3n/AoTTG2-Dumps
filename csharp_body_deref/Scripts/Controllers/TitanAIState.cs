using Il2CppDummyDll;

namespace Controllers;

[Token(Token = "0x2000482")]
public enum TitanAIState
{
	[Token(Token = "0x40013F4")]
	Idle,
	[Token(Token = "0x40013F5")]
	Wander,
	[Token(Token = "0x40013F6")]
	SitIdle,
	[Token(Token = "0x40013F7")]
	MoveToEnemy,
	[Token(Token = "0x40013F8")]
	MoveToPosition,
	[Token(Token = "0x40013F9")]
	Action,
	[Token(Token = "0x40013FA")]
	WaitAttack,
	[Token(Token = "0x40013FB")]
	ForcedIdle
}
