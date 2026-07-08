using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.TextCore.Text;

namespace UnityEngine;

[Token(Token = "0x200002F")]
internal class TextSelectingUtilities
{
	[Token(Token = "0x2000030")]
	private enum CharacterType
	{
		[Token(Token = "0x4000179")]
		LetterLike,
		[Token(Token = "0x400017A")]
		Symbol,
		[Token(Token = "0x400017B")]
		Symbol2,
		[Token(Token = "0x400017C")]
		WhiteSpace,
		[Token(Token = "0x400017D")]
		NewLine
	}

	[Token(Token = "0x2000031")]
	private enum Direction
	{
		[Token(Token = "0x400017F")]
		Forward,
		[Token(Token = "0x4000180")]
		Backward
	}

	[Token(Token = "0x4000168")]
	[FieldOffset(Offset = "0x10")]
	public TextEditor.DblClickSnapping dblClickSnap;

	[Token(Token = "0x4000169")]
	[FieldOffset(Offset = "0x14")]
	public int iAltCursorPos;

	[Token(Token = "0x400016A")]
	[FieldOffset(Offset = "0x18")]
	public bool hasHorizontalCursorPos;

	[Token(Token = "0x400016B")]
	[FieldOffset(Offset = "0x19")]
	private bool m_bJustSelected;

	[Token(Token = "0x400016C")]
	[FieldOffset(Offset = "0x1A")]
	private bool m_MouseDragSelectsWholeWords;

	[Token(Token = "0x400016D")]
	[FieldOffset(Offset = "0x1C")]
	private int m_DblClickInitPos;

	[Token(Token = "0x400016E")]
	[FieldOffset(Offset = "0x20")]
	public UnityEngine.TextCore.Text.TextHandle textHandle;

	[Token(Token = "0x400016F")]
	private const int kMoveDownHeight = 5;

	[Token(Token = "0x4000170")]
	private const char kNewLineChar = '\n';

	[Token(Token = "0x4000171")]
	[FieldOffset(Offset = "0x28")]
	private bool m_RevealCursor;

	[Token(Token = "0x4000172")]
	[FieldOffset(Offset = "0x2C")]
	private int m_CursorIndex;

	[Token(Token = "0x4000173")]
	[FieldOffset(Offset = "0x30")]
	internal int m_SelectIndex;

	[Token(Token = "0x4000174")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<Event, TextSelectOp> s_KeySelectOps;

	[Token(Token = "0x4000175")]
	[FieldOffset(Offset = "0x38")]
	internal Action OnCursorIndexChange;

	[Token(Token = "0x4000176")]
	[FieldOffset(Offset = "0x40")]
	internal Action OnSelectIndexChange;

	[Token(Token = "0x4000177")]
	[FieldOffset(Offset = "0x48")]
	internal Action OnRevealCursorChange;

	[Token(Token = "0x1700009C")]
	public bool hasSelection
	{
		[Token(Token = "0x60002A9")]
		[Address(RVA = "0x4B3BA50", Offset = "0x4B3BA50", VA = "0x4B3BA50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009D")]
	public bool revealCursor
	{
		[Token(Token = "0x60002AA")]
		[Address(RVA = "0x4B43CB0", Offset = "0x4B43CB0", VA = "0x4B43CB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002AB")]
		[Address(RVA = "0x4B3BB50", Offset = "0x4B3BB50", VA = "0x4B3BB50")]
		set
		{
		}
	}

	[Token(Token = "0x1700009E")]
	private int m_CharacterCount
	{
		[Token(Token = "0x60002AC")]
		[Address(RVA = "0x4B43CC0", Offset = "0x4B43CC0", VA = "0x4B43CC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700009F")]
	private int characterCount
	{
		[Token(Token = "0x60002AD")]
		[Address(RVA = "0x4B43CE0", Offset = "0x4B43CE0", VA = "0x4B43CE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A0")]
	private UnityEngine.TextCore.Text.TextElementInfo[] m_TextElementInfos
	{
		[Token(Token = "0x60002AE")]
		[Address(RVA = "0x4B43DC0", Offset = "0x4B43DC0", VA = "0x4B43DC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A1")]
	public int cursorIndex
	{
		[Token(Token = "0x60002AF")]
		[Address(RVA = "0x4B3BC70", Offset = "0x4B3BC70", VA = "0x4B3BC70")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002B0")]
		[Address(RVA = "0x4B3BD10", Offset = "0x4B3BD10", VA = "0x4B3BD10")]
		set
		{
		}
	}

	[Token(Token = "0x170000A2")]
	internal int cursorIndexNoValidation
	{
		[Token(Token = "0x60002B1")]
		[Address(RVA = "0x4B43510", Offset = "0x4B43510", VA = "0x4B43510")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A3")]
	public int selectIndex
	{
		[Token(Token = "0x60002B2")]
		[Address(RVA = "0x4B3BE20", Offset = "0x4B3BE20", VA = "0x4B3BE20")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002B3")]
		[Address(RVA = "0x4B3BEC0", Offset = "0x4B3BEC0", VA = "0x4B3BEC0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A4")]
	public string selectedText
	{
		[Token(Token = "0x60002B5")]
		[Address(RVA = "0x4B43E40", Offset = "0x4B43E40", VA = "0x4B43E40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x4B43E30", Offset = "0x4B43E30", VA = "0x4B43E30")]
	internal void SetSelectIndexWithoutNotify(int index)
	{
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x4B41F50", Offset = "0x4B41F50", VA = "0x4B41F50")]
	public TextSelectingUtilities(UnityEngine.TextCore.Text.TextHandle textHandle)
	{
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x4B42240", Offset = "0x4B42240", VA = "0x4B42240")]
	internal bool HandleKeyEvent(Event e)
	{
		return default(bool);
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x4B44EA0", Offset = "0x4B44EA0", VA = "0x4B44EA0")]
	private bool PerformOperation(TextSelectOp operation)
	{
		return default(bool);
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x4B46AC0", Offset = "0x4B46AC0", VA = "0x4B46AC0")]
	private static void MapKey(string key, TextSelectOp action)
	{
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x4B44180", Offset = "0x4B44180", VA = "0x4B44180")]
	private void InitKeyActions()
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x4B41250", Offset = "0x4B41250", VA = "0x4B41250")]
	public void ClearCursorPos()
	{
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x4B42170", Offset = "0x4B42170", VA = "0x4B42170")]
	public void OnFocus(bool selectAll = true)
	{
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x4B46A60", Offset = "0x4B46A60", VA = "0x4B46A60")]
	public void SelectAll()
	{
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x4B41470", Offset = "0x4B41470", VA = "0x4B41470")]
	public void SelectNone()
	{
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x4B450D0", Offset = "0x4B450D0", VA = "0x4B450D0")]
	public void SelectLeft()
	{
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x4B452E0", Offset = "0x4B452E0", VA = "0x4B452E0")]
	public void SelectRight()
	{
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x4B454F0", Offset = "0x4B454F0", VA = "0x4B454F0")]
	public void SelectUp()
	{
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x4B45590", Offset = "0x4B45590", VA = "0x4B45590")]
	public void SelectDown()
	{
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x4B45D20", Offset = "0x4B45D20", VA = "0x4B45D20")]
	public void SelectTextEnd()
	{
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x4B45CF0", Offset = "0x4B45CF0", VA = "0x4B45CF0")]
	public void SelectTextStart()
	{
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x4B45C60", Offset = "0x4B45C60", VA = "0x4B45C60")]
	public void SelectToStartOfNextWord()
	{
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x4B45BD0", Offset = "0x4B45BD0", VA = "0x4B45BD0")]
	public void SelectToEndOfPreviousWord()
	{
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x4B45630", Offset = "0x4B45630", VA = "0x4B45630")]
	public void SelectWordRight()
	{
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x4B45900", Offset = "0x4B45900", VA = "0x4B45900")]
	public void SelectWordLeft()
	{
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x4B46860", Offset = "0x4B46860", VA = "0x4B46860")]
	public void SelectGraphicalLineStart()
	{
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x4B46960", Offset = "0x4B46960", VA = "0x4B46960")]
	public void SelectGraphicalLineEnd()
	{
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x4B46290", Offset = "0x4B46290", VA = "0x4B46290")]
	public void SelectParagraphForward()
	{
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x4B46570", Offset = "0x4B46570", VA = "0x4B46570")]
	public void SelectParagraphBackward()
	{
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x4B42BA0", Offset = "0x4B42BA0", VA = "0x4B42BA0")]
	public void SelectCurrentWord()
	{
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x4B42D60", Offset = "0x4B42D60", VA = "0x4B42D60")]
	public void SelectCurrentParagraph()
	{
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x4B3E180", Offset = "0x4B3E180", VA = "0x4B3E180")]
	public void MoveRight()
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x4B3DEF0", Offset = "0x4B3DEF0", VA = "0x4B3DEF0")]
	public void MoveLeft()
	{
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x4B3E420", Offset = "0x4B3E420", VA = "0x4B3E420")]
	public void MoveUp()
	{
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x4B3E680", Offset = "0x4B3E680", VA = "0x4B3E680")]
	public void MoveDown()
	{
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x4B3E8E0", Offset = "0x4B3E8E0", VA = "0x4B3E8E0")]
	public void MoveLineStart()
	{
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x4B3EAE0", Offset = "0x4B3EAE0", VA = "0x4B3EAE0")]
	public void MoveLineEnd()
	{
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x4B3F9A0", Offset = "0x4B3F9A0", VA = "0x4B3F9A0")]
	public void MoveGraphicalLineStart()
	{
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x4B3FB70", Offset = "0x4B3FB70", VA = "0x4B3FB70")]
	public void MoveGraphicalLineEnd()
	{
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x4B3F420", Offset = "0x4B3F420", VA = "0x4B3F420")]
	public void MoveTextStart()
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x4B3F470", Offset = "0x4B3F470", VA = "0x4B3F470")]
	public void MoveTextEnd()
	{
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x4B3F4D0", Offset = "0x4B3F4D0", VA = "0x4B3F4D0")]
	public void MoveParagraphForward()
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x4B3F730", Offset = "0x4B3F730", VA = "0x4B3F730")]
	public void MoveParagraphBackward()
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x4B3ECD0", Offset = "0x4B3ECD0", VA = "0x4B3ECD0")]
	public void MoveWordRight()
	{
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x4B3EF00", Offset = "0x4B3EF00", VA = "0x4B3EF00")]
	public void MoveToStartOfNextWord()
	{
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x4B3F080", Offset = "0x4B3F080", VA = "0x4B3F080")]
	public void MoveToEndOfPreviousWord()
	{
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x4B3F200", Offset = "0x4B3F200", VA = "0x4B3F200")]
	public void MoveWordLeft()
	{
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x4B42AF0", Offset = "0x4B42AF0", VA = "0x4B42AF0")]
	public void MouseDragSelectsWholeWords(bool on)
	{
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x4B45D50", Offset = "0x4B45D50", VA = "0x4B45D50")]
	public void ExpandSelectGraphicalLineStart()
	{
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x4B45FF0", Offset = "0x4B45FF0", VA = "0x4B45FF0")]
	public void ExpandSelectGraphicalLineEnd()
	{
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x4B42B70", Offset = "0x4B42B70", VA = "0x4B42B70")]
	public void DblClickSnap(TextEditor.DblClickSnapping snapping)
	{
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x4B42630", Offset = "0x4B42630", VA = "0x4B42630")]
	protected internal void MoveCursorToPosition_Internal(Vector2 cursorPosition, bool shift)
	{
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x4B427B0", Offset = "0x4B427B0", VA = "0x4B427B0")]
	public void SelectToPosition(Vector2 cursorPosition)
	{
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x4B46E50", Offset = "0x4B46E50", VA = "0x4B46E50")]
	private int FindNextSeperator(int startPos)
	{
		return default(int);
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x4B46ED0", Offset = "0x4B46ED0", VA = "0x4B46ED0")]
	private int FindPrevSeperator(int startPos)
	{
		return default(int);
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x4B40FB0", Offset = "0x4B40FB0", VA = "0x4B40FB0")]
	public int FindStartOfNextWord(int p)
	{
		return default(int);
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x4B40EF0", Offset = "0x4B40EF0", VA = "0x4B40EF0")]
	public int FindEndOfPreviousWord(int p)
	{
		return default(int);
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x4B46D20", Offset = "0x4B46D20", VA = "0x4B46D20")]
	private int FindEndOfClassification(int p, Direction dir)
	{
		return default(int);
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x4B43DF0", Offset = "0x4B43DF0", VA = "0x4B43DF0")]
	internal int EnsureValidCodePointIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x4B470A0", Offset = "0x4B470A0", VA = "0x4B470A0")]
	private bool IsValidCodePointIndex(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x4B47080", Offset = "0x4B47080", VA = "0x4B47080")]
	private int ClampTextIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x4B46CF0", Offset = "0x4B46CF0", VA = "0x4B46CF0")]
	private int IndexOfEndOfLine(int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x4B41190", Offset = "0x4B41190", VA = "0x4B41190")]
	public int PreviousCodePointIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x4B46B40", Offset = "0x4B46B40", VA = "0x4B46B40")]
	public int NextCodePointIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x4B46C00", Offset = "0x4B46C00", VA = "0x4B46C00")]
	private int GetGraphicalLineStart(int p)
	{
		return default(int);
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x4B46C70", Offset = "0x4B46C70", VA = "0x4B46C70")]
	private int GetGraphicalLineEnd(int p)
	{
		return default(int);
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x4B412D0", Offset = "0x4B412D0", VA = "0x4B412D0")]
	public void Copy()
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x4B46F70", Offset = "0x4B46F70", VA = "0x4B46F70")]
	private CharacterType ClassifyChar(int index)
	{
		return default(CharacterType);
	}
}
