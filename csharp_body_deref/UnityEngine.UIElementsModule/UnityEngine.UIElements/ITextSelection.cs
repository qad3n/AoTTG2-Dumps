// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ITextSelection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20004B8")]
public interface ITextSelection
{
	[Token(Token = "0x170009B6")]
	bool isSelectable
	{
		[Token(Token = "0x60024FC")]
		get;
		[Token(Token = "0x60024FD")]
		set;
	}

	[Token(Token = "0x170009B7")]
	[Obsolete("cursorColor is deprecated. Please use the corresponding USS property (--unity-cursor-color) instead.")]
	Color cursorColor
	{
		[Token(Token = "0x60024FE")]
		get;
		[Token(Token = "0x60024FF")]
		set;
	}

	[Token(Token = "0x170009B8")]
	[Obsolete("selectionColor is deprecated. Please use the corresponding USS property (--unity-selection-color) instead.")]
	Color selectionColor
	{
		[Token(Token = "0x6002500")]
		get;
		[Token(Token = "0x6002501")]
		set;
	}

	[Token(Token = "0x170009B9")]
	int cursorIndex
	{
		[Token(Token = "0x6002502")]
		get;
		[Token(Token = "0x6002503")]
		set;
	}

	[Token(Token = "0x170009BA")]
	bool doubleClickSelectsWord
	{
		[Token(Token = "0x6002504")]
		get;
		[Token(Token = "0x6002505")]
		set;
	}

	[Token(Token = "0x170009BB")]
	int selectIndex
	{
		[Token(Token = "0x6002506")]
		get;
		[Token(Token = "0x6002507")]
		set;
	}

	[Token(Token = "0x170009BC")]
	bool tripleClickSelectsLine
	{
		[Token(Token = "0x6002508")]
		get;
		[Token(Token = "0x6002509")]
		set;
	}

	[Token(Token = "0x170009BD")]
	bool selectAllOnFocus
	{
		[Token(Token = "0x600250D")]
		get;
		[Token(Token = "0x600250E")]
		set;
	}

	[Token(Token = "0x170009BE")]
	bool selectAllOnMouseUp
	{
		[Token(Token = "0x600250F")]
		get;
		[Token(Token = "0x6002510")]
		set;
	}

	[Token(Token = "0x170009BF")]
	Vector2 cursorPosition
	{
		[Token(Token = "0x6002511")]
		get;
	}

	[Token(Token = "0x170009C0")]
	internal float lineHeightAtCursorPosition
	{
		[Token(Token = "0x6002512")]
		get;
	}

	[Token(Token = "0x170009C1")]
	internal float cursorWidth
	{
		[Token(Token = "0x6002513")]
		get;
	}

	[Token(Token = "0x600250A")]
	bool HasSelection();

	[Token(Token = "0x600250B")]
	void SelectAll();

	[Token(Token = "0x600250C")]
	void SelectNone();
}
