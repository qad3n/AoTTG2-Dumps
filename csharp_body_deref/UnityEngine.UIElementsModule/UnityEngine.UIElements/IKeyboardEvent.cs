using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200019B")]
public interface IKeyboardEvent
{
	[Token(Token = "0x170001E8")]
	EventModifiers modifiers
	{
		[Token(Token = "0x6000ADC")]
		get;
	}

	[Token(Token = "0x170001E9")]
	char character
	{
		[Token(Token = "0x6000ADD")]
		get;
	}

	[Token(Token = "0x170001EA")]
	KeyCode keyCode
	{
		[Token(Token = "0x6000ADE")]
		get;
	}
}
