using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001A5")]
internal interface IMouseEventInternal
{
	[Token(Token = "0x17000202")]
	bool triggeredByOS
	{
		[Token(Token = "0x6000B19")]
		get;
		[Token(Token = "0x6000B1A")]
		set;
	}

	[Token(Token = "0x17000203")]
	IPointerEvent sourcePointerEvent
	{
		[Token(Token = "0x6000B1B")]
		get;
		[Token(Token = "0x6000B1C")]
		set;
	}
}
