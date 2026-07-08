using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200018C")]
public enum PropagationPhase
{
	[Token(Token = "0x400067E")]
	None = 0,
	[Token(Token = "0x400067F")]
	TrickleDown = 1,
	[Token(Token = "0x4000680")]
	AtTarget = 2,
	[Token(Token = "0x4000681")]
	DefaultActionAtTarget = 5,
	[Token(Token = "0x4000682")]
	BubbleUp = 3,
	[Token(Token = "0x4000683")]
	DefaultAction = 4
}
