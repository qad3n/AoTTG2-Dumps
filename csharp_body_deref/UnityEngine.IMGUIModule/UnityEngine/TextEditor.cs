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
		[Address(RVA = "0x2FB21F0", Offset = "0x2FB07F0", VA = "0x182FB21F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009D")]
	public bool showCursor
	{
		[Token(Token = "0x60002E8")]
		[Address(RVA = "0x2FB2160", Offset = "0x2FB0760", VA = "0x182FB2160")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009E")]
	internal bool m_HasFocus
	{
		[Token(Token = "0x60002E9")]
		[Address(RVA = "0x2FB20E0", Offset = "0x2FB06E0", VA = "0x182FB20E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002EA")]
		[Address(RVA = "0x2C00A70", Offset = "0x2BFF070", VA = "0x182C00A70")]
		set
		{
		}
	}

	[Token(Token = "0x1700009F")]
	public string text
	{
		[Token(Token = "0x60002EB")]
		[Address(RVA = "0x272BA30", Offset = "0x272A030", VA = "0x18272BA30")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002EC")]
		[Address(RVA = "0x2FB2290", Offset = "0x2FB0890", VA = "0x182FB2290")]
		set
		{
		}
	}

	[Token(Token = "0x170000A0")]
	internal string textWithWhitespace
	{
		[Token(Token = "0x60002ED")]
		[Address(RVA = "0x2FB2180", Offset = "0x2FB0780", VA = "0x182FB2180")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002EE")]
		[Address(RVA = "0x2FB2210", Offset = "0x2FB0810", VA = "0x182FB2210")]
		set
		{
		}
	}

	[Token(Token = "0x170000A1")]
	public Rect position
	{
		[Token(Token = "0x60002EF")]
		[Address(RVA = "0x1BD8500", Offset = "0x1BD6B00", VA = "0x181BD8500")]
		[CompilerGenerated]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x60002F0")]
		[Address(RVA = "0x1C613E0", Offset = "0x1C5F9E0", VA = "0x181C613E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A2")]
	public int cursorIndex
	{
		[Token(Token = "0x60002F1")]
		[Address(RVA = "0x2FB2070", Offset = "0x2FB0670", VA = "0x182FB2070")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A3")]
	public int selectIndex
	{
		[Token(Token = "0x60002F2")]
		[Address(RVA = "0x2FB20F0", Offset = "0x2FB06F0", VA = "0x182FB20F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x2FB1AC0", Offset = "0x2FB00C0", VA = "0x182FB1AC0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public TextEditor()
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x2FB1160", Offset = "0x2FAF760", VA = "0x182FB1160")]
	private void OnTextChangedHandle()
	{
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x2FB0EA0", Offset = "0x2FAF4A0", VA = "0x182FB0EA0")]
	private void OnContentTextChangedHandle()
	{
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x2FB10B0", Offset = "0x2FAF6B0", VA = "0x182FB10B0")]
	public void OnFocus()
	{
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x2FB1150", Offset = "0x2FAF750", VA = "0x182FB1150")]
	public void OnLostFocus()
	{
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x2FB0970", Offset = "0x2FAEF70", VA = "0x182FB0970")]
	public bool HandleKeyEvent(Event e)
	{
		return default(bool);
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x2FB11C0", Offset = "0x2FAF7C0", VA = "0x182FB11C0")]
	public void ReplaceSelection(string replace)
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x2FB0B50", Offset = "0x2FAF150", VA = "0x182FB0B50")]
	public void Insert(char c)
	{
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x2FB0D90", Offset = "0x2FAF390", VA = "0x182FB0D90")]
	public void MoveCursorToPosition(Vector2 cursorPosition)
	{
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x2FB0CC0", Offset = "0x2FAF2C0", VA = "0x182FB0CC0")]
	protected internal void MoveCursorToPosition_Internal(Vector2 cursorPosition, bool shift)
	{
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x2FB1310", Offset = "0x2FAF910", VA = "0x182FB1310")]
	public void SelectToPosition(Vector2 cursorPosition)
	{
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x2FB0820", Offset = "0x2FAEE20", VA = "0x182FB0820")]
	private Vector2 GetLocalCursorPosition(Vector2 cursorPosition)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x2FB0CA0", Offset = "0x2FAF2A0", VA = "0x182FB0CA0")]
	public void MouseDragSelectsWholeWords(bool on)
	{
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x2B00770", Offset = "0x2AFED70", VA = "0x182B00770")]
	public void DblClickSnap(DblClickSnapping snapping)
	{
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x2FB12F0", Offset = "0x2FAF8F0", VA = "0x182FB12F0")]
	public void SelectCurrentWord()
	{
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x2FB12D0", Offset = "0x2FAF8D0", VA = "0x182FB12D0")]
	public void SelectCurrentParagraph()
	{
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x2FB1340", Offset = "0x2FAF940", VA = "0x182FB1340")]
	public void UpdateScrollOffsetIfNeeded(Event evt)
	{
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x2FB1910", Offset = "0x2FAFF10", VA = "0x182FB1910")]
	internal void UpdateTextHandle()
	{
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x2FB1390", Offset = "0x2FAF990", VA = "0x182FB1390")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal void UpdateScrollOffset()
	{
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x2FB0380", Offset = "0x2FAE980", VA = "0x182FB0380")]
	public void DrawCursor(string newText)
	{
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x2FB11E0", Offset = "0x2FAF7E0", VA = "0x182FB11E0")]
	public void SaveBackup()
	{
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x1B47C10", Offset = "0x1B46210", VA = "0x181B47C10")]
	public void DetectFocusChange()
	{
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x2FB0FA0", Offset = "0x2FAF5A0", VA = "0x182FB0FA0", Slot = "4")]
	internal virtual void OnDetectFocusChange()
	{
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x2FB0F90", Offset = "0x2FAF590", VA = "0x182FB0F90", Slot = "5")]
	internal virtual void OnCursorIndexChange()
	{
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x2FB0F90", Offset = "0x2FAF590", VA = "0x182FB0F90", Slot = "6")]
	internal virtual void OnSelectIndexChange()
	{
	}
}
