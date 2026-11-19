// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextEditor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000032")]
public class TextEditor
{
	[Token(Token = "0x2000033")]
	public enum DblClickSnapping : byte
	{
		[Token(Token = "0x4000171")]
		WORDS,
		[Token(Token = "0x4000172")]
		PARAGRAPHS
	}

	[Token(Token = "0x400015D")]
	[FieldOffset(Offset = "0x10")]
	private readonly GUIContent m_Content;

	[Token(Token = "0x400015E")]
	[FieldOffset(Offset = "0x18")]
	private TextSelectingUtilities m_TextSelecting;

	[Token(Token = "0x400015F")]
	[FieldOffset(Offset = "0x20")]
	internal TextEditingUtilities m_TextEditing;

	[Token(Token = "0x4000160")]
	[FieldOffset(Offset = "0x28")]
	internal IMGUITextHandle m_TextHandle;

	[Token(Token = "0x4000161")]
	[FieldOffset(Offset = "0x30")]
	public TouchScreenKeyboard keyboardOnScreen;

	[Token(Token = "0x4000162")]
	[FieldOffset(Offset = "0x38")]
	public int controlID;

	[Token(Token = "0x4000163")]
	[FieldOffset(Offset = "0x40")]
	public GUIStyle style;

	[Token(Token = "0x4000164")]
	[FieldOffset(Offset = "0x48")]
	[Obsolete("'hasHorizontalCursorPos' has been deprecated. Changes to this member will not be observed. Use 'hasHorizontalCursor' instead.", true)]
	public bool hasHorizontalCursorPos;

	[Token(Token = "0x4000165")]
	[FieldOffset(Offset = "0x49")]
	public bool isPasswordField;

	[Token(Token = "0x4000166")]
	[FieldOffset(Offset = "0x4C")]
	public Vector2 scrollOffset;

	[Token(Token = "0x4000167")]
	[FieldOffset(Offset = "0x54")]
	private bool focus;

	[Token(Token = "0x4000168")]
	[FieldOffset(Offset = "0x58")]
	private string m_TextWithWhitespace;

	[Token(Token = "0x400016A")]
	[FieldOffset(Offset = "0x70")]
	public Vector2 graphicalCursorPos;

	[Token(Token = "0x400016B")]
	[FieldOffset(Offset = "0x78")]
	private Vector2 lastCursorPos;

	[Token(Token = "0x400016C")]
	[FieldOffset(Offset = "0x80")]
	private Vector2 previousContentSize;

	[Token(Token = "0x400016D")]
	[FieldOffset(Offset = "0x88")]
	private string oldText;

	[Token(Token = "0x400016E")]
	[FieldOffset(Offset = "0x90")]
	private int oldPos;

	[Token(Token = "0x400016F")]
	[FieldOffset(Offset = "0x94")]
	private int oldSelectPos;

	[Token(Token = "0x1700009C")]
	public bool isMultiline
	{
		[Token(Token = "0x60002E7")]
		[Address(RVA = "0x69AD080", Offset = "0x69AC080", VA = "0x69AD080")]
		set
		{
		}
	}

	[Token(Token = "0x1700009D")]
	public bool showCursor
	{
		[Token(Token = "0x60002E8")]
		[Address(RVA = "0x69AD0A0", Offset = "0x69AC0A0", VA = "0x69AD0A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009E")]
	internal bool m_HasFocus
	{
		[Token(Token = "0x60002E9")]
		[Address(RVA = "0x69AD0C0", Offset = "0x69AC0C0", VA = "0x69AD0C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002EA")]
		[Address(RVA = "0x69AD0D0", Offset = "0x69AC0D0", VA = "0x69AD0D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009F")]
	public string text
	{
		[Token(Token = "0x60002EB")]
		[Address(RVA = "0x69AD0E0", Offset = "0x69AC0E0", VA = "0x69AD0E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002EC")]
		[Address(RVA = "0x69AD100", Offset = "0x69AC100", VA = "0x69AD100")]
		set
		{
		}
	}

	[Token(Token = "0x170000A0")]
	internal string textWithWhitespace
	{
		[Token(Token = "0x60002ED")]
		[Address(RVA = "0x69AD400", Offset = "0x69AC400", VA = "0x69AD400")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002EE")]
		[Address(RVA = "0x69AD210", Offset = "0x69AC210", VA = "0x69AD210")]
		set
		{
		}
	}

	[Token(Token = "0x170000A1")]
	public Rect position
	{
		[Token(Token = "0x60002EF")]
		[Address(RVA = "0x69AD470", Offset = "0x69AC470", VA = "0x69AD470")]
		[CompilerGenerated]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x60002F0")]
		[Address(RVA = "0x69AD480", Offset = "0x69AC480", VA = "0x69AD480")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A2")]
	public int cursorIndex
	{
		[Token(Token = "0x60002F1")]
		[Address(RVA = "0x69AD490", Offset = "0x69AC490", VA = "0x69AD490")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A3")]
	public int selectIndex
	{
		[Token(Token = "0x60002F2")]
		[Address(RVA = "0x69AD4F0", Offset = "0x69AC4F0", VA = "0x69AD4F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x69AD550", Offset = "0x69AC550", VA = "0x69AD550")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public TextEditor()
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x69ADAA0", Offset = "0x69ACAA0", VA = "0x69ADAA0")]
	private void OnTextChangedHandle()
	{
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x69ADB50", Offset = "0x69ACB50", VA = "0x69ADB50")]
	private void OnContentTextChangedHandle()
	{
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x69ADBF0", Offset = "0x69ACBF0", VA = "0x69ADBF0")]
	public void OnFocus()
	{
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x69ADD00", Offset = "0x69ACD00", VA = "0x69ADD00")]
	public void OnLostFocus()
	{
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x69ADD10", Offset = "0x69ACD10", VA = "0x69ADD10")]
	public bool HandleKeyEvent(Event e)
	{
		return default(bool);
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x69ADDE0", Offset = "0x69ACDE0", VA = "0x69ADDE0")]
	public void ReplaceSelection(string replace)
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x69ADE00", Offset = "0x69ACE00", VA = "0x69ADE00")]
	public void Insert(char c)
	{
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x69ADE20", Offset = "0x69ACE20", VA = "0x69ADE20")]
	public void MoveCursorToPosition(Vector2 cursorPosition)
	{
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x69ADE80", Offset = "0x69ACE80", VA = "0x69ADE80")]
	protected internal void MoveCursorToPosition_Internal(Vector2 cursorPosition, bool shift)
	{
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x69AE040", Offset = "0x69AD040", VA = "0x69AE040")]
	public void SelectToPosition(Vector2 cursorPosition)
	{
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x69ADEB0", Offset = "0x69ACEB0", VA = "0x69ADEB0")]
	private Vector2 GetLocalCursorPosition(Vector2 cursorPosition)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x69AE5C0", Offset = "0x69AD5C0", VA = "0x69AE5C0")]
	public void MouseDragSelectsWholeWords(bool on)
	{
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x69AE7B0", Offset = "0x69AD7B0", VA = "0x69AE7B0")]
	public void DblClickSnap(DblClickSnapping snapping)
	{
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x69AE7E0", Offset = "0x69AD7E0", VA = "0x69AE7E0")]
	public void SelectCurrentWord()
	{
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x69AEA80", Offset = "0x69ADA80", VA = "0x69AEA80")]
	public void SelectCurrentParagraph()
	{
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x69AED50", Offset = "0x69ADD50", VA = "0x69AED50")]
	public void UpdateScrollOffsetIfNeeded(Event evt)
	{
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x69AD280", Offset = "0x69AC280", VA = "0x69AD280")]
	internal void UpdateTextHandle()
	{
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x69AEDA0", Offset = "0x69ADDA0", VA = "0x69AEDA0")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal void UpdateScrollOffset()
	{
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x69AF4C0", Offset = "0x69AE4C0", VA = "0x69AF4C0")]
	public void DrawCursor(string newText)
	{
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x69AFAD0", Offset = "0x69AEAD0", VA = "0x69AFAD0")]
	public void SaveBackup()
	{
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x69AFBA0", Offset = "0x69AEBA0", VA = "0x69AFBA0")]
	public void DetectFocusChange()
	{
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x69AFBC0", Offset = "0x69AEBC0", VA = "0x69AFBC0", Slot = "4")]
	internal virtual void OnDetectFocusChange()
	{
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x69AFD00", Offset = "0x69AED00", VA = "0x69AFD00", Slot = "5")]
	internal virtual void OnCursorIndexChange()
	{
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x69AFD10", Offset = "0x69AED10", VA = "0x69AFD10", Slot = "6")]
	internal virtual void OnSelectIndexChange()
	{
	}
}
