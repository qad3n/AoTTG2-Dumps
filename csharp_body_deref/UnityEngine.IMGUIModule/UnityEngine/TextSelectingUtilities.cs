// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextSelectingUtilities
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.TextCore.Text;

namespace UnityEngine;

[Token(Token = "0x2000034")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "UnityEditor.UIBuilderModule" })]
internal class TextSelectingUtilities
{
	[Token(Token = "0x2000035")]
	private enum CharacterType
	{
		[Token(Token = "0x4000187")]
		LetterLike,
		[Token(Token = "0x4000188")]
		Symbol,
		[Token(Token = "0x4000189")]
		Symbol2,
		[Token(Token = "0x400018A")]
		WhiteSpace,
		[Token(Token = "0x400018B")]
		NewLine
	}

	[Token(Token = "0x2000036")]
	private enum Direction
	{
		[Token(Token = "0x400018D")]
		Forward,
		[Token(Token = "0x400018E")]
		Backward
	}

	[Token(Token = "0x4000173")]
	[FieldOffset(Offset = "0x10")]
	public TextEditor.DblClickSnapping dblClickSnap;

	[Token(Token = "0x4000174")]
	[FieldOffset(Offset = "0x14")]
	public int iAltCursorPos;

	[Token(Token = "0x4000175")]
	[FieldOffset(Offset = "0x18")]
	public bool hasHorizontalCursorPos;

	[Token(Token = "0x4000176")]
	[FieldOffset(Offset = "0x19")]
	private bool m_bJustSelected;

	[Token(Token = "0x4000177")]
	[FieldOffset(Offset = "0x1A")]
	private bool m_MouseDragSelectsWholeWords;

	[Token(Token = "0x4000178")]
	[FieldOffset(Offset = "0x1C")]
	private int m_DblClickInitPosStart;

	[Token(Token = "0x4000179")]
	[FieldOffset(Offset = "0x20")]
	private int m_DblClickInitPosEnd;

	[Token(Token = "0x400017A")]
	[FieldOffset(Offset = "0x28")]
	public UnityEngine.TextCore.Text.TextHandle textHandle;

	[Token(Token = "0x400017B")]
	private const int kMoveDownHeight = 5;

	[Token(Token = "0x400017C")]
	private const char kNewLineChar = '\n';

	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x30")]
	private bool m_RevealCursor;

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0x34")]
	private int m_CursorIndex;

	[Token(Token = "0x400017F")]
	[FieldOffset(Offset = "0x38")]
	internal int m_SelectIndex;

	[Token(Token = "0x4000180")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly List<(TextEditingUtilities.KeyEvent keyEvent, TextSelectOp operation)> s_GlobalKeyMappings;

	[Token(Token = "0x4000181")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly List<(TextEditingUtilities.KeyEvent keyEvent, TextSelectOp operation)> s_MacKeyMappings;

	[Token(Token = "0x4000182")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly List<(TextEditingUtilities.KeyEvent keyEvent, TextSelectOp operation)> s_WindowsLinuxKeyMappings;

	[Token(Token = "0x4000183")]
	[FieldOffset(Offset = "0x40")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal Action OnCursorIndexChange;

	[Token(Token = "0x4000184")]
	[FieldOffset(Offset = "0x48")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal Action OnSelectIndexChange;

	[Token(Token = "0x4000185")]
	[FieldOffset(Offset = "0x50")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal Action OnRevealCursorChange;

	[Token(Token = "0x170000A4")]
	public bool hasSelection
	{
		[Token(Token = "0x600030C")]
		[Address(RVA = "0x2FB97A0", Offset = "0x2FB7DA0", VA = "0x182FB97A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A5")]
	public bool revealCursor
	{
		[Token(Token = "0x600030D")]
		[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600030E")]
		[Address(RVA = "0x2FB9B10", Offset = "0x2FB8110", VA = "0x182FB9B10")]
		set
		{
		}
	}

	[Token(Token = "0x170000A6")]
	private int m_CharacterCount
	{
		[Token(Token = "0x600030F")]
		[Address(RVA = "0x2FB9850", Offset = "0x2FB7E50", VA = "0x182FB9850")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A7")]
	private int characterCount
	{
		[Token(Token = "0x6000310")]
		[Address(RVA = "0x2FB9650", Offset = "0x2FB7C50", VA = "0x182FB9650")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A8")]
	private UnityEngine.TextCore.Text.TextElementInfo[] m_TextElementInfos
	{
		[Token(Token = "0x6000311")]
		[Address(RVA = "0x2FB9870", Offset = "0x2FB7E70", VA = "0x182FB9870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A9")]
	public int cursorIndex
	{
		[Token(Token = "0x6000312")]
		[Address(RVA = "0x2FB9730", Offset = "0x2FB7D30", VA = "0x182FB9730")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000313")]
		[Address(RVA = "0x2FB9AE0", Offset = "0x2FB80E0", VA = "0x182FB9AE0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	internal int cursorIndexNoValidation
	{
		[Token(Token = "0x6000314")]
		[Address(RVA = "0x2FB9720", Offset = "0x2FB7D20", VA = "0x182FB9720")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000315")]
		[Address(RVA = "0x2FB9AE0", Offset = "0x2FB80E0", VA = "0x182FB9AE0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AB")]
	public int selectIndex
	{
		[Token(Token = "0x6000317")]
		[Address(RVA = "0x2FB98A0", Offset = "0x2FB7EA0", VA = "0x182FB98A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000318")]
		[Address(RVA = "0x2FB9B40", Offset = "0x2FB8140", VA = "0x182FB9B40")]
		set
		{
		}
	}

	[Token(Token = "0x170000AC")]
	internal int selectIndexNoValidation
	{
		[Token(Token = "0x6000319")]
		[Address(RVA = "0x2FB9B40", Offset = "0x2FB8140", VA = "0x182FB9B40")]
		set
		{
		}
	}

	[Token(Token = "0x170000AD")]
	public string selectedText
	{
		[Token(Token = "0x600031B")]
		[Address(RVA = "0x2FB9910", Offset = "0x2FB7F10", VA = "0x182FB9910")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x16EFA10", Offset = "0x16EE010", VA = "0x1816EFA10")]
	internal void SetCursorIndexWithoutNotify(int index)
	{
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x1A40490", Offset = "0x1A3EA90", VA = "0x181A40490")]
	internal void SetSelectIndexWithoutNotify(int index)
	{
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x2FB9600", Offset = "0x2FB7C00", VA = "0x182FB9600")]
	public TextSelectingUtilities(UnityEngine.TextCore.Text.TextHandle textHandle)
	{
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x2FB3350", Offset = "0x2FB1950", VA = "0x182FB3350")]
	internal bool HandleKeyEvent(Event e)
	{
		return default(bool);
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x2FB3290", Offset = "0x2FB1890", VA = "0x182FB3290")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal bool HandleKeyEvent(KeyCode key, EventModifiers modifiers)
	{
		return default(bool);
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x2FB55C0", Offset = "0x2FB3BC0", VA = "0x182FB55C0")]
	private bool PerformOperation(TextSelectOp operation)
	{
		return default(bool);
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x2FB7DA0", Offset = "0x2FB63A0", VA = "0x182FB7DA0")]
	internal static TextSelectOp? TextSelectOpFromEnum(KeyCode key, EventModifiers modifiers, bool IsMacOsFamily)
	{
		return null;
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x2FB24C0", Offset = "0x2FB0AC0", VA = "0x182FB24C0")]
	public void ClearCursorPos()
	{
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x2FB5530", Offset = "0x2FB3B30", VA = "0x182FB5530")]
	public void OnFocus(bool selectAll = true)
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x2FB5B90", Offset = "0x2FB4190", VA = "0x182FB5B90")]
	public void SelectAll()
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x2FB6800", Offset = "0x2FB4E00", VA = "0x182FB6800")]
	public void SelectNone()
	{
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x2FB6650", Offset = "0x2FB4C50", VA = "0x182FB6650")]
	public void SelectLeft()
	{
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x2FB6D40", Offset = "0x2FB5340", VA = "0x182FB6D40")]
	public void SelectRight()
	{
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x2FB77C0", Offset = "0x2FB5DC0", VA = "0x182FB77C0")]
	public void SelectUp()
	{
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x2FB6470", Offset = "0x2FB4A70", VA = "0x182FB6470")]
	public void SelectDown()
	{
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x2FB6F00", Offset = "0x2FB5500", VA = "0x182FB6F00")]
	public void SelectTextEnd()
	{
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x2FB6F40", Offset = "0x2FB5540", VA = "0x182FB6F40")]
	public void SelectTextStart()
	{
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x2FB7720", Offset = "0x2FB5D20", VA = "0x182FB7720")]
	public void SelectToStartOfNextWord()
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x2FB6F70", Offset = "0x2FB5570", VA = "0x182FB6F70")]
	public void SelectToEndOfPreviousWord()
	{
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x2FB7B00", Offset = "0x2FB6100", VA = "0x182FB7B00")]
	public void SelectWordRight()
	{
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x2FB7860", Offset = "0x2FB5E60", VA = "0x182FB7860")]
	public void SelectWordLeft()
	{
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x2FB65B0", Offset = "0x2FB4BB0", VA = "0x182FB65B0")]
	public void SelectGraphicalLineStart()
	{
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x2FB6510", Offset = "0x2FB4B10", VA = "0x182FB6510")]
	public void SelectGraphicalLineEnd()
	{
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x2FB6B10", Offset = "0x2FB5110", VA = "0x182FB6B10")]
	public void SelectParagraphForward()
	{
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x2FB6890", Offset = "0x2FB4E90", VA = "0x182FB6890")]
	public void SelectParagraphBackward()
	{
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x2FB5E40", Offset = "0x2FB4440", VA = "0x182FB5E40")]
	public void SelectCurrentWord()
	{
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x2FB5BF0", Offset = "0x2FB41F0", VA = "0x182FB5BF0")]
	public void SelectCurrentParagraph()
	{
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x2FB4780", Offset = "0x2FB2D80", VA = "0x182FB4780")]
	public void MoveRight()
	{
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x2FB3BF0", Offset = "0x2FB21F0", VA = "0x182FB3BF0")]
	public void MoveLeft()
	{
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x2FB4D70", Offset = "0x2FB3370", VA = "0x182FB4D70")]
	public void MoveUp()
	{
	}

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x2FB3730", Offset = "0x2FB1D30", VA = "0x182FB3730")]
	public void MoveDown()
	{
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x2FB4090", Offset = "0x2FB2690", VA = "0x182FB4090")]
	public void MoveLineStart()
	{
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x2FB3E40", Offset = "0x2FB2440", VA = "0x182FB3E40")]
	public void MoveLineEnd()
	{
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x2FB3AA0", Offset = "0x2FB20A0", VA = "0x182FB3AA0")]
	public void MoveGraphicalLineStart()
	{
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x2FB3950", Offset = "0x2FB1F50", VA = "0x182FB3950")]
	public void MoveGraphicalLineEnd()
	{
	}

	[Token(Token = "0x600033D")]
	[Address(RVA = "0x2FB4A50", Offset = "0x2FB3050", VA = "0x182FB4A50")]
	public void MoveTextStart()
	{
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x2FB49F0", Offset = "0x2FB2FF0", VA = "0x182FB49F0")]
	public void MoveTextEnd()
	{
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x2FB4530", Offset = "0x2FB2B30", VA = "0x182FB4530")]
	public void MoveParagraphForward()
	{
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x2FB42D0", Offset = "0x2FB28D0", VA = "0x182FB42D0")]
	public void MoveParagraphBackward()
	{
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x2FB51C0", Offset = "0x2FB37C0", VA = "0x182FB51C0")]
	public void MoveWordRight()
	{
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x2FB4C10", Offset = "0x2FB3210", VA = "0x182FB4C10")]
	public void MoveToStartOfNextWord()
	{
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x2FB4AB0", Offset = "0x2FB30B0", VA = "0x182FB4AB0")]
	public void MoveToEndOfPreviousWord()
	{
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x2FB4F80", Offset = "0x2FB3580", VA = "0x182FB4F80")]
	public void MoveWordLeft()
	{
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x2FB3490", Offset = "0x2FB1A90", VA = "0x182FB3490")]
	public void MouseDragSelectsWholeWords(bool on)
	{
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x2FB27C0", Offset = "0x2FB0DC0", VA = "0x182FB27C0")]
	public void ExpandSelectGraphicalLineStart()
	{
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x2FB25E0", Offset = "0x2FB0BE0", VA = "0x182FB25E0")]
	public void ExpandSelectGraphicalLineEnd()
	{
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0")]
	public void DblClickSnap(TextEditor.DblClickSnapping snapping)
	{
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x2FB3670", Offset = "0x2FB1C70", VA = "0x182FB3670")]
	protected internal void MoveCursorToPosition_Internal(Vector2 cursorPosition, bool shift)
	{
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x2FB7010", Offset = "0x2FB5610", VA = "0x182FB7010")]
	public void SelectToPosition(Vector2 cursorPosition)
	{
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x2FB2D20", Offset = "0x2FB1320", VA = "0x182FB2D20")]
	private int FindNextSeperator(int startPos)
	{
		return default(int);
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x2FB2E10", Offset = "0x2FB1410", VA = "0x182FB2E10")]
	private int FindPrevSeperator(int startPos)
	{
		return default(int);
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x2FB2F80", Offset = "0x2FB1580", VA = "0x182FB2F80")]
	public int FindStartOfNextWord(int p)
	{
		return default(int);
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x2FB2B50", Offset = "0x2FB1150", VA = "0x182FB2B50")]
	public int FindEndOfPreviousWord(int p)
	{
		return default(int);
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x2FB29A0", Offset = "0x2FB0FA0", VA = "0x182FB29A0")]
	private int FindEndOfClassification(int p, Direction dir)
	{
		return default(int);
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x2FB2350", Offset = "0x2FB0950", VA = "0x182FB2350")]
	private int ClampTextIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x2FB3450", Offset = "0x2FB1A50", VA = "0x182FB3450")]
	private int IndexOfEndOfLine(int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x2FB5B30", Offset = "0x2FB4130", VA = "0x182FB5B30")]
	public int PreviousCodePointIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x2FB54C0", Offset = "0x2FB3AC0", VA = "0x182FB54C0")]
	public int NextCodePointIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x2FB3270", Offset = "0x2FB1870", VA = "0x182FB3270")]
	private int GetGraphicalLineStart(int p)
	{
		return default(int);
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x2FB3250", Offset = "0x2FB1850", VA = "0x182FB3250")]
	private int GetGraphicalLineEnd(int p)
	{
		return default(int);
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x2FB24D0", Offset = "0x2FB0AD0", VA = "0x182FB24D0")]
	public void Copy()
	{
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x2FB2380", Offset = "0x2FB0980", VA = "0x182FB2380")]
	private CharacterType ClassifyChar(int index)
	{
		return default(CharacterType);
	}
}
