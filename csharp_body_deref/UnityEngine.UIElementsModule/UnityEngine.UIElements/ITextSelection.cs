using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20003F2")]
public interface ITextSelection
{
	[Token(Token = "0x170006ED")]
	bool isSelectable
	{
		[Token(Token = "0x60019A6")]
		get;
		[Token(Token = "0x60019A7")]
		set;
	}

	[Token(Token = "0x170006EE")]
	Color cursorColor
	{
		[Token(Token = "0x60019A8")]
		get;
		[Token(Token = "0x60019A9")]
		set;
	}

	[Token(Token = "0x170006EF")]
	Color selectionColor
	{
		[Token(Token = "0x60019AA")]
		get;
		[Token(Token = "0x60019AB")]
		set;
	}

	[Token(Token = "0x170006F0")]
	int cursorIndex
	{
		[Token(Token = "0x60019AC")]
		get;
		[Token(Token = "0x60019AD")]
		set;
	}

	[Token(Token = "0x170006F1")]
	bool doubleClickSelectsWord
	{
		[Token(Token = "0x60019AE")]
		get;
		[Token(Token = "0x60019AF")]
		set;
	}

	[Token(Token = "0x170006F2")]
	int selectIndex
	{
		[Token(Token = "0x60019B0")]
		get;
		[Token(Token = "0x60019B1")]
		set;
	}

	[Token(Token = "0x170006F3")]
	bool tripleClickSelectsLine
	{
		[Token(Token = "0x60019B2")]
		get;
		[Token(Token = "0x60019B3")]
		set;
	}

	[Token(Token = "0x170006F4")]
	bool selectAllOnFocus
	{
		[Token(Token = "0x60019B7")]
		get;
		[Token(Token = "0x60019B8")]
		set;
	}

	[Token(Token = "0x170006F5")]
	bool selectAllOnMouseUp
	{
		[Token(Token = "0x60019B9")]
		get;
		[Token(Token = "0x60019BA")]
		set;
	}

	[Token(Token = "0x170006F6")]
	Vector2 cursorPosition
	{
		[Token(Token = "0x60019BB")]
		get;
	}

	[Token(Token = "0x170006F7")]
	internal float lineHeightAtCursorPosition
	{
		[Token(Token = "0x60019BC")]
		get;
	}

	[Token(Token = "0x170006F8")]
	internal float cursorWidth
	{
		[Token(Token = "0x60019BD")]
		get;
	}

	[Token(Token = "0x60019B4")]
	bool HasSelection();

	[Token(Token = "0x60019B5")]
	void SelectAll();

	[Token(Token = "0x60019B6")]
	void SelectNone();
}
