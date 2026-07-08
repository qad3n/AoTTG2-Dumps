using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001A4")]
public interface IMouseEvent
{
	[Token(Token = "0x170001F7")]
	EventModifiers modifiers
	{
		[Token(Token = "0x6000B0E")]
		get;
	}

	[Token(Token = "0x170001F8")]
	Vector2 mousePosition
	{
		[Token(Token = "0x6000B0F")]
		get;
	}

	[Token(Token = "0x170001F9")]
	Vector2 localMousePosition
	{
		[Token(Token = "0x6000B10")]
		get;
	}

	[Token(Token = "0x170001FA")]
	Vector2 mouseDelta
	{
		[Token(Token = "0x6000B11")]
		get;
	}

	[Token(Token = "0x170001FB")]
	int clickCount
	{
		[Token(Token = "0x6000B12")]
		get;
	}

	[Token(Token = "0x170001FC")]
	int button
	{
		[Token(Token = "0x6000B13")]
		get;
	}

	[Token(Token = "0x170001FD")]
	int pressedButtons
	{
		[Token(Token = "0x6000B14")]
		get;
	}

	[Token(Token = "0x170001FE")]
	bool shiftKey
	{
		[Token(Token = "0x6000B15")]
		get;
	}

	[Token(Token = "0x170001FF")]
	bool ctrlKey
	{
		[Token(Token = "0x6000B16")]
		get;
	}

	[Token(Token = "0x17000200")]
	bool commandKey
	{
		[Token(Token = "0x6000B17")]
		get;
	}

	[Token(Token = "0x17000201")]
	bool altKey
	{
		[Token(Token = "0x6000B18")]
		get;
	}
}
