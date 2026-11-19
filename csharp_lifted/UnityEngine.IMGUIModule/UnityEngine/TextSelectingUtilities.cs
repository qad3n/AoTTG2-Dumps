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
		[Address(RVA = "0x69A55E0", Offset = "0x69A45E0", VA = "0x69A55E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A5")]
	public bool revealCursor
	{
		[Token(Token = "0x600030D")]
		[Address(RVA = "0x69AFD20", Offset = "0x69AED20", VA = "0x69AFD20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600030E")]
		[Address(RVA = "0x69A56B0", Offset = "0x69A46B0", VA = "0x69A56B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A6")]
	private int m_CharacterCount
	{
		[Token(Token = "0x600030F")]
		[Address(RVA = "0x69AFD30", Offset = "0x69AED30", VA = "0x69AFD30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A7")]
	private int characterCount
	{
		[Token(Token = "0x6000310")]
		[Address(RVA = "0x69AFD50", Offset = "0x69AED50", VA = "0x69AFD50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A8")]
	private UnityEngine.TextCore.Text.TextElementInfo[] m_TextElementInfos
	{
		[Token(Token = "0x6000311")]
		[Address(RVA = "0x69AFE10", Offset = "0x69AEE10", VA = "0x69AFE10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A9")]
	public int cursorIndex
	{
		[Token(Token = "0x6000312")]
		[Address(RVA = "0x69A57B0", Offset = "0x69A47B0", VA = "0x69A57B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000313")]
		[Address(RVA = "0x69A5840", Offset = "0x69A4840", VA = "0x69A5840")]
		set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	internal int cursorIndexNoValidation
	{
		[Token(Token = "0x6000314")]
		[Address(RVA = "0x69A5880", Offset = "0x69A4880", VA = "0x69A5880")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000315")]
		[Address(RVA = "0x69A58D0", Offset = "0x69A48D0", VA = "0x69A58D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AB")]
	public int selectIndex
	{
		[Token(Token = "0x6000317")]
		[Address(RVA = "0x69A5A20", Offset = "0x69A4A20", VA = "0x69A5A20")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000318")]
		[Address(RVA = "0x69A5AB0", Offset = "0x69A4AB0", VA = "0x69A5AB0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AC")]
	internal int selectIndexNoValidation
	{
		[Token(Token = "0x6000319")]
		[Address(RVA = "0x69A5930", Offset = "0x69A4930", VA = "0x69A5930")]
		set
		{
		}
	}

	[Token(Token = "0x170000AD")]
	public string selectedText
	{
		[Token(Token = "0x600031B")]
		[Address(RVA = "0x69AFE80", Offset = "0x69AEE80", VA = "0x69AFE80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x69AFE60", Offset = "0x69AEE60", VA = "0x69AFE60")]
	internal void SetCursorIndexWithoutNotify(int index)
	{
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x69AFE70", Offset = "0x69AEE70", VA = "0x69AFE70")]
	internal void SetSelectIndexWithoutNotify(int index)
	{
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x69ADA50", Offset = "0x69ACA50", VA = "0x69ADA50")]
	public TextSelectingUtilities(UnityEngine.TextCore.Text.TextHandle textHandle)
	{
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x69ADDA0", Offset = "0x69ACDA0", VA = "0x69ADDA0")]
	internal bool HandleKeyEvent(Event e)
	{
		return default(bool);
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x69B0140", Offset = "0x69AF140", VA = "0x69B0140")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal bool HandleKeyEvent(KeyCode key, EventModifiers modifiers)
	{
		return default(bool);
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x69B0530", Offset = "0x69AF530", VA = "0x69B0530")]
	private bool PerformOperation(TextSelectOp operation)
	{
		return default(bool);
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x69B01F0", Offset = "0x69AF1F0", VA = "0x69B01F0")]
	internal static TextSelectOp? TextSelectOpFromEnum(KeyCode key, EventModifiers modifiers, bool IsMacOsFamily)
	{
		return null;
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x69AAD00", Offset = "0x69A9D00", VA = "0x69AAD00")]
	public void ClearCursorPos()
	{
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x69ADC80", Offset = "0x69ACC80", VA = "0x69ADC80")]
	public void OnFocus(bool selectAll = true)
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x69B1FE0", Offset = "0x69B0FE0", VA = "0x69B1FE0")]
	public void SelectAll()
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x69AB140", Offset = "0x69AA140", VA = "0x69AB140")]
	public void SelectNone()
	{
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x69B08D0", Offset = "0x69AF8D0", VA = "0x69B08D0")]
	public void SelectLeft()
	{
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x69B0AD0", Offset = "0x69AFAD0", VA = "0x69B0AD0")]
	public void SelectRight()
	{
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x69B0CE0", Offset = "0x69AFCE0", VA = "0x69B0CE0")]
	public void SelectUp()
	{
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x69B0D60", Offset = "0x69AFD60", VA = "0x69B0D60")]
	public void SelectDown()
	{
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x69B14D0", Offset = "0x69B04D0", VA = "0x69B14D0")]
	public void SelectTextEnd()
	{
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x69B14A0", Offset = "0x69B04A0", VA = "0x69B14A0")]
	public void SelectTextStart()
	{
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x69B1420", Offset = "0x69B0420", VA = "0x69B1420")]
	public void SelectToStartOfNextWord()
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x69B13A0", Offset = "0x69B03A0", VA = "0x69B13A0")]
	public void SelectToEndOfPreviousWord()
	{
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x69B0DE0", Offset = "0x69AFDE0", VA = "0x69B0DE0")]
	public void SelectWordRight()
	{
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x69B10C0", Offset = "0x69B00C0", VA = "0x69B10C0")]
	public void SelectWordLeft()
	{
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x69B1EC0", Offset = "0x69B0EC0", VA = "0x69B1EC0")]
	public void SelectGraphicalLineStart()
	{
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x69B1F50", Offset = "0x69B0F50", VA = "0x69B1F50")]
	public void SelectGraphicalLineEnd()
	{
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x69B18A0", Offset = "0x69B08A0", VA = "0x69B18A0")]
	public void SelectParagraphForward()
	{
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x69B1BA0", Offset = "0x69B0BA0", VA = "0x69B1BA0")]
	public void SelectParagraphBackward()
	{
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x69AE800", Offset = "0x69AD800", VA = "0x69AE800")]
	public void SelectCurrentWord()
	{
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x69AEAA0", Offset = "0x69ADAA0", VA = "0x69AEAA0")]
	public void SelectCurrentParagraph()
	{
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x69A6CF0", Offset = "0x69A5CF0", VA = "0x69A6CF0")]
	public void MoveRight()
	{
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x69A6A90", Offset = "0x69A5A90", VA = "0x69A6A90")]
	public void MoveLeft()
	{
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x69A6F70", Offset = "0x69A5F70", VA = "0x69A6F70")]
	public void MoveUp()
	{
	}

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x69A7170", Offset = "0x69A6170", VA = "0x69A7170")]
	public void MoveDown()
	{
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x69A7390", Offset = "0x69A6390", VA = "0x69A7390")]
	public void MoveLineStart()
	{
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x69A7630", Offset = "0x69A6630", VA = "0x69A7630")]
	public void MoveLineEnd()
	{
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x69A85B0", Offset = "0x69A75B0", VA = "0x69A85B0")]
	public void MoveGraphicalLineStart()
	{
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x69A86F0", Offset = "0x69A76F0", VA = "0x69A86F0")]
	public void MoveGraphicalLineEnd()
	{
	}

	[Token(Token = "0x600033D")]
	[Address(RVA = "0x69A7F40", Offset = "0x69A6F40", VA = "0x69A7F40")]
	public void MoveTextStart()
	{
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x69A7F90", Offset = "0x69A6F90", VA = "0x69A7F90")]
	public void MoveTextEnd()
	{
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x69A7FF0", Offset = "0x69A6FF0", VA = "0x69A7FF0")]
	public void MoveParagraphForward()
	{
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x69A82C0", Offset = "0x69A72C0", VA = "0x69A82C0")]
	public void MoveParagraphBackward()
	{
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x69A78D0", Offset = "0x69A68D0", VA = "0x69A78D0")]
	public void MoveWordRight()
	{
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x69A7AC0", Offset = "0x69A6AC0", VA = "0x69A7AC0")]
	public void MoveToStartOfNextWord()
	{
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x69A7BF0", Offset = "0x69A6BF0", VA = "0x69A7BF0")]
	public void MoveToEndOfPreviousWord()
	{
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x69A7D20", Offset = "0x69A6D20", VA = "0x69A7D20")]
	public void MoveWordLeft()
	{
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x69AE5E0", Offset = "0x69AD5E0", VA = "0x69AE5E0")]
	public void MouseDragSelectsWholeWords(bool on)
	{
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x69B1500", Offset = "0x69B0500", VA = "0x69B1500")]
	public void ExpandSelectGraphicalLineStart()
	{
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x69B16D0", Offset = "0x69B06D0", VA = "0x69B16D0")]
	public void ExpandSelectGraphicalLineEnd()
	{
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x69AE7D0", Offset = "0x69AD7D0", VA = "0x69AE7D0")]
	public void DblClickSnap(TextEditor.DblClickSnapping snapping)
	{
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x69ADF90", Offset = "0x69ACF90", VA = "0x69ADF90")]
	protected internal void MoveCursorToPosition_Internal(Vector2 cursorPosition, bool shift)
	{
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x69AE060", Offset = "0x69AD060", VA = "0x69AE060")]
	public void SelectToPosition(Vector2 cursorPosition)
	{
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x69B22D0", Offset = "0x69B12D0", VA = "0x69B22D0")]
	private int FindNextSeperator(int startPos)
	{
		return default(int);
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x69B23D0", Offset = "0x69B13D0", VA = "0x69B23D0")]
	private int FindPrevSeperator(int startPos)
	{
		return default(int);
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x69AA950", Offset = "0x69A9950", VA = "0x69AA950")]
	public int FindStartOfNextWord(int p)
	{
		return default(int);
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x69AA780", Offset = "0x69A9780", VA = "0x69AA780")]
	public int FindEndOfPreviousWord(int p)
	{
		return default(int);
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x69B20B0", Offset = "0x69B10B0", VA = "0x69B20B0")]
	private int FindEndOfClassification(int p, Direction dir)
	{
		return default(int);
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x69AFE40", Offset = "0x69AEE40", VA = "0x69AFE40")]
	private int ClampTextIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x69B2080", Offset = "0x69B1080", VA = "0x69B2080")]
	private int IndexOfEndOfLine(int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x69AAC50", Offset = "0x69A9C50", VA = "0x69AAC50")]
	public int PreviousCodePointIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x69AACA0", Offset = "0x69A9CA0", VA = "0x69AACA0")]
	public int NextCodePointIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x69B2040", Offset = "0x69B1040", VA = "0x69B2040")]
	private int GetGraphicalLineStart(int p)
	{
		return default(int);
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x69B2060", Offset = "0x69B1060", VA = "0x69B2060")]
	private int GetGraphicalLineEnd(int p)
	{
		return default(int);
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x69AAEC0", Offset = "0x69A9EC0", VA = "0x69AAEC0")]
	public void Copy()
	{
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x69B2510", Offset = "0x69B1510", VA = "0x69B2510")]
	private CharacterType ClassifyChar(int index)
	{
		return default(CharacterType);
	}
}
