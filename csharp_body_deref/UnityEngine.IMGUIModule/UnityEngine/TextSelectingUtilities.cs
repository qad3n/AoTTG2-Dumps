// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextSelectingUtilities
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4E63610", Offset = "0x4E63610", VA = "0x4E63610")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009D")]
	public bool revealCursor
	{
		[Token(Token = "0x60002AA")]
		[Address(RVA = "0x4E6B870", Offset = "0x4E6B870", VA = "0x4E6B870")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002AB")]
		[Address(RVA = "0x4E63710", Offset = "0x4E63710", VA = "0x4E63710")]
		set
		{
		}
	}

	[Token(Token = "0x1700009E")]
	private int m_CharacterCount
	{
		[Token(Token = "0x60002AC")]
		[Address(RVA = "0x4E6B880", Offset = "0x4E6B880", VA = "0x4E6B880")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700009F")]
	private int characterCount
	{
		[Token(Token = "0x60002AD")]
		[Address(RVA = "0x4E6B8A0", Offset = "0x4E6B8A0", VA = "0x4E6B8A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A0")]
	private UnityEngine.TextCore.Text.TextElementInfo[] m_TextElementInfos
	{
		[Token(Token = "0x60002AE")]
		[Address(RVA = "0x4E6B980", Offset = "0x4E6B980", VA = "0x4E6B980")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A1")]
	public int cursorIndex
	{
		[Token(Token = "0x60002AF")]
		[Address(RVA = "0x4E63830", Offset = "0x4E63830", VA = "0x4E63830")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002B0")]
		[Address(RVA = "0x4E638D0", Offset = "0x4E638D0", VA = "0x4E638D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A2")]
	internal int cursorIndexNoValidation
	{
		[Token(Token = "0x60002B1")]
		[Address(RVA = "0x4E6B0D0", Offset = "0x4E6B0D0", VA = "0x4E6B0D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A3")]
	public int selectIndex
	{
		[Token(Token = "0x60002B2")]
		[Address(RVA = "0x4E639E0", Offset = "0x4E639E0", VA = "0x4E639E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002B3")]
		[Address(RVA = "0x4E63A80", Offset = "0x4E63A80", VA = "0x4E63A80")]
		set
		{
		}
	}

	[Token(Token = "0x170000A4")]
	public string selectedText
	{
		[Token(Token = "0x60002B5")]
		[Address(RVA = "0x4E6BA00", Offset = "0x4E6BA00", VA = "0x4E6BA00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x4E6B9F0", Offset = "0x4E6B9F0", VA = "0x4E6B9F0")]
	internal void SetSelectIndexWithoutNotify(int index)
	{
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x4E69B10", Offset = "0x4E69B10", VA = "0x4E69B10")]
	public TextSelectingUtilities(UnityEngine.TextCore.Text.TextHandle textHandle)
	{
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x4E69E00", Offset = "0x4E69E00", VA = "0x4E69E00")]
	internal bool HandleKeyEvent(Event e)
	{
		return default(bool);
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x4E6CA60", Offset = "0x4E6CA60", VA = "0x4E6CA60")]
	private bool PerformOperation(TextSelectOp operation)
	{
		return default(bool);
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x4E6E680", Offset = "0x4E6E680", VA = "0x4E6E680")]
	private static void MapKey(string key, TextSelectOp action)
	{
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x4E6BD40", Offset = "0x4E6BD40", VA = "0x4E6BD40")]
	private void InitKeyActions()
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x4E68E10", Offset = "0x4E68E10", VA = "0x4E68E10")]
	public void ClearCursorPos()
	{
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x4E69D30", Offset = "0x4E69D30", VA = "0x4E69D30")]
	public void OnFocus(bool selectAll = true)
	{
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x4E6E620", Offset = "0x4E6E620", VA = "0x4E6E620")]
	public void SelectAll()
	{
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x4E69030", Offset = "0x4E69030", VA = "0x4E69030")]
	public void SelectNone()
	{
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x4E6CC90", Offset = "0x4E6CC90", VA = "0x4E6CC90")]
	public void SelectLeft()
	{
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x4E6CEA0", Offset = "0x4E6CEA0", VA = "0x4E6CEA0")]
	public void SelectRight()
	{
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x4E6D0B0", Offset = "0x4E6D0B0", VA = "0x4E6D0B0")]
	public void SelectUp()
	{
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x4E6D150", Offset = "0x4E6D150", VA = "0x4E6D150")]
	public void SelectDown()
	{
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x4E6D8E0", Offset = "0x4E6D8E0", VA = "0x4E6D8E0")]
	public void SelectTextEnd()
	{
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x4E6D8B0", Offset = "0x4E6D8B0", VA = "0x4E6D8B0")]
	public void SelectTextStart()
	{
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x4E6D820", Offset = "0x4E6D820", VA = "0x4E6D820")]
	public void SelectToStartOfNextWord()
	{
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x4E6D790", Offset = "0x4E6D790", VA = "0x4E6D790")]
	public void SelectToEndOfPreviousWord()
	{
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x4E6D1F0", Offset = "0x4E6D1F0", VA = "0x4E6D1F0")]
	public void SelectWordRight()
	{
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x4E6D4C0", Offset = "0x4E6D4C0", VA = "0x4E6D4C0")]
	public void SelectWordLeft()
	{
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x4E6E420", Offset = "0x4E6E420", VA = "0x4E6E420")]
	public void SelectGraphicalLineStart()
	{
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x4E6E520", Offset = "0x4E6E520", VA = "0x4E6E520")]
	public void SelectGraphicalLineEnd()
	{
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x4E6DE50", Offset = "0x4E6DE50", VA = "0x4E6DE50")]
	public void SelectParagraphForward()
	{
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x4E6E130", Offset = "0x4E6E130", VA = "0x4E6E130")]
	public void SelectParagraphBackward()
	{
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x4E6A760", Offset = "0x4E6A760", VA = "0x4E6A760")]
	public void SelectCurrentWord()
	{
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x4E6A920", Offset = "0x4E6A920", VA = "0x4E6A920")]
	public void SelectCurrentParagraph()
	{
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x4E65D40", Offset = "0x4E65D40", VA = "0x4E65D40")]
	public void MoveRight()
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x4E65AB0", Offset = "0x4E65AB0", VA = "0x4E65AB0")]
	public void MoveLeft()
	{
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x4E65FE0", Offset = "0x4E65FE0", VA = "0x4E65FE0")]
	public void MoveUp()
	{
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x4E66240", Offset = "0x4E66240", VA = "0x4E66240")]
	public void MoveDown()
	{
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x4E664A0", Offset = "0x4E664A0", VA = "0x4E664A0")]
	public void MoveLineStart()
	{
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x4E666A0", Offset = "0x4E666A0", VA = "0x4E666A0")]
	public void MoveLineEnd()
	{
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x4E67560", Offset = "0x4E67560", VA = "0x4E67560")]
	public void MoveGraphicalLineStart()
	{
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x4E67730", Offset = "0x4E67730", VA = "0x4E67730")]
	public void MoveGraphicalLineEnd()
	{
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x4E66FE0", Offset = "0x4E66FE0", VA = "0x4E66FE0")]
	public void MoveTextStart()
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x4E67030", Offset = "0x4E67030", VA = "0x4E67030")]
	public void MoveTextEnd()
	{
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x4E67090", Offset = "0x4E67090", VA = "0x4E67090")]
	public void MoveParagraphForward()
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x4E672F0", Offset = "0x4E672F0", VA = "0x4E672F0")]
	public void MoveParagraphBackward()
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x4E66890", Offset = "0x4E66890", VA = "0x4E66890")]
	public void MoveWordRight()
	{
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x4E66AC0", Offset = "0x4E66AC0", VA = "0x4E66AC0")]
	public void MoveToStartOfNextWord()
	{
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x4E66C40", Offset = "0x4E66C40", VA = "0x4E66C40")]
	public void MoveToEndOfPreviousWord()
	{
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x4E66DC0", Offset = "0x4E66DC0", VA = "0x4E66DC0")]
	public void MoveWordLeft()
	{
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x4E6A6B0", Offset = "0x4E6A6B0", VA = "0x4E6A6B0")]
	public void MouseDragSelectsWholeWords(bool on)
	{
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x4E6D910", Offset = "0x4E6D910", VA = "0x4E6D910")]
	public void ExpandSelectGraphicalLineStart()
	{
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x4E6DBB0", Offset = "0x4E6DBB0", VA = "0x4E6DBB0")]
	public void ExpandSelectGraphicalLineEnd()
	{
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x4E6A730", Offset = "0x4E6A730", VA = "0x4E6A730")]
	public void DblClickSnap(TextEditor.DblClickSnapping snapping)
	{
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x4E6A1F0", Offset = "0x4E6A1F0", VA = "0x4E6A1F0")]
	protected internal void MoveCursorToPosition_Internal(Vector2 cursorPosition, bool shift)
	{
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x4E6A370", Offset = "0x4E6A370", VA = "0x4E6A370")]
	public void SelectToPosition(Vector2 cursorPosition)
	{
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x4E6EA10", Offset = "0x4E6EA10", VA = "0x4E6EA10")]
	private int FindNextSeperator(int startPos)
	{
		return default(int);
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x4E6EA90", Offset = "0x4E6EA90", VA = "0x4E6EA90")]
	private int FindPrevSeperator(int startPos)
	{
		return default(int);
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x4E68B70", Offset = "0x4E68B70", VA = "0x4E68B70")]
	public int FindStartOfNextWord(int p)
	{
		return default(int);
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x4E68AB0", Offset = "0x4E68AB0", VA = "0x4E68AB0")]
	public int FindEndOfPreviousWord(int p)
	{
		return default(int);
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x4E6E8E0", Offset = "0x4E6E8E0", VA = "0x4E6E8E0")]
	private int FindEndOfClassification(int p, Direction dir)
	{
		return default(int);
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x4E6B9B0", Offset = "0x4E6B9B0", VA = "0x4E6B9B0")]
	internal int EnsureValidCodePointIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x4E6EC60", Offset = "0x4E6EC60", VA = "0x4E6EC60")]
	private bool IsValidCodePointIndex(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x4E6EC40", Offset = "0x4E6EC40", VA = "0x4E6EC40")]
	private int ClampTextIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x4E6E8B0", Offset = "0x4E6E8B0", VA = "0x4E6E8B0")]
	private int IndexOfEndOfLine(int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x4E68D50", Offset = "0x4E68D50", VA = "0x4E68D50")]
	public int PreviousCodePointIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x4E6E700", Offset = "0x4E6E700", VA = "0x4E6E700")]
	public int NextCodePointIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x4E6E7C0", Offset = "0x4E6E7C0", VA = "0x4E6E7C0")]
	private int GetGraphicalLineStart(int p)
	{
		return default(int);
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x4E6E830", Offset = "0x4E6E830", VA = "0x4E6E830")]
	private int GetGraphicalLineEnd(int p)
	{
		return default(int);
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x4E68E90", Offset = "0x4E68E90", VA = "0x4E68E90")]
	public void Copy()
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x4E6EB30", Offset = "0x4E6EB30", VA = "0x4E6EB30")]
	private CharacterType ClassifyChar(int index)
	{
		return default(CharacterType);
	}
}
