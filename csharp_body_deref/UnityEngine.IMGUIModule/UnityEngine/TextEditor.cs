using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200002D")]
public class TextEditor
{
	[Token(Token = "0x200002E")]
	public enum DblClickSnapping : byte
	{
		[Token(Token = "0x4000166")]
		WORDS,
		[Token(Token = "0x4000167")]
		PARAGRAPHS
	}

	[Token(Token = "0x4000152")]
	[FieldOffset(Offset = "0x10")]
	private readonly GUIContent m_Content;

	[Token(Token = "0x4000153")]
	[FieldOffset(Offset = "0x18")]
	private TextSelectingUtilities m_TextSelecting;

	[Token(Token = "0x4000154")]
	[FieldOffset(Offset = "0x20")]
	internal TextEditingUtilities m_TextEditing;

	[Token(Token = "0x4000155")]
	[FieldOffset(Offset = "0x28")]
	internal IMGUITextHandle m_TextHandle;

	[Token(Token = "0x4000156")]
	[FieldOffset(Offset = "0x30")]
	public TouchScreenKeyboard keyboardOnScreen;

	[Token(Token = "0x4000157")]
	[FieldOffset(Offset = "0x38")]
	public int controlID;

	[Token(Token = "0x4000158")]
	[FieldOffset(Offset = "0x40")]
	public GUIStyle style;

	[Token(Token = "0x4000159")]
	[FieldOffset(Offset = "0x48")]
	[Obsolete("'hasHorizontalCursorPos' has been deprecated. Changes to this member will not be observed. Use 'hasHorizontalCursor' instead.", true)]
	public bool hasHorizontalCursorPos;

	[Token(Token = "0x400015A")]
	[FieldOffset(Offset = "0x49")]
	public bool isPasswordField;

	[Token(Token = "0x400015B")]
	[FieldOffset(Offset = "0x4C")]
	public Vector2 scrollOffset;

	[Token(Token = "0x400015C")]
	[FieldOffset(Offset = "0x54")]
	private bool focus;

	[Token(Token = "0x400015D")]
	[FieldOffset(Offset = "0x58")]
	private string m_TextWithWhitespace;

	[Token(Token = "0x400015F")]
	[FieldOffset(Offset = "0x70")]
	public Vector2 graphicalCursorPos;

	[Token(Token = "0x4000160")]
	[FieldOffset(Offset = "0x78")]
	private Vector2 lastCursorPos;

	[Token(Token = "0x4000161")]
	[FieldOffset(Offset = "0x80")]
	private Vector2 previousContentSize;

	[Token(Token = "0x4000162")]
	[FieldOffset(Offset = "0x88")]
	private string oldText;

	[Token(Token = "0x4000163")]
	[FieldOffset(Offset = "0x90")]
	private int oldPos;

	[Token(Token = "0x4000164")]
	[FieldOffset(Offset = "0x94")]
	private int oldSelectPos;

	[Token(Token = "0x17000094")]
	public bool isMultiline
	{
		[Token(Token = "0x6000284")]
		[Address(RVA = "0x4B41570", Offset = "0x4B41570", VA = "0x4B41570")]
		set
		{
		}
	}

	[Token(Token = "0x17000095")]
	public bool showCursor
	{
		[Token(Token = "0x6000285")]
		[Address(RVA = "0x4B41590", Offset = "0x4B41590", VA = "0x4B41590")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000096")]
	internal bool m_HasFocus
	{
		[Token(Token = "0x6000286")]
		[Address(RVA = "0x4B415B0", Offset = "0x4B415B0", VA = "0x4B415B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000287")]
		[Address(RVA = "0x4B415C0", Offset = "0x4B415C0", VA = "0x4B415C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000097")]
	public string text
	{
		[Token(Token = "0x6000288")]
		[Address(RVA = "0x4B415D0", Offset = "0x4B415D0", VA = "0x4B415D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000289")]
		[Address(RVA = "0x4B415F0", Offset = "0x4B415F0", VA = "0x4B415F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000098")]
	internal string textWithWhitespace
	{
		[Token(Token = "0x600028A")]
		[Address(RVA = "0x4B418F0", Offset = "0x4B418F0", VA = "0x4B418F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600028B")]
		[Address(RVA = "0x4B41700", Offset = "0x4B41700", VA = "0x4B41700")]
		set
		{
		}
	}

	[Token(Token = "0x17000099")]
	public Rect position
	{
		[Token(Token = "0x600028C")]
		[Address(RVA = "0x4B41960", Offset = "0x4B41960", VA = "0x4B41960")]
		[CompilerGenerated]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x600028D")]
		[Address(RVA = "0x4B41970", Offset = "0x4B41970", VA = "0x4B41970")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700009A")]
	public int cursorIndex
	{
		[Token(Token = "0x600028E")]
		[Address(RVA = "0x4B41980", Offset = "0x4B41980", VA = "0x4B41980")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700009B")]
	public int selectIndex
	{
		[Token(Token = "0x600028F")]
		[Address(RVA = "0x4B419F0", Offset = "0x4B419F0", VA = "0x4B419F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x4B41A60", Offset = "0x4B41A60", VA = "0x4B41A60")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public TextEditor()
	{
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x4B41FA0", Offset = "0x4B41FA0", VA = "0x4B41FA0")]
	private void OnTextChangedHandle()
	{
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x4B42040", Offset = "0x4B42040", VA = "0x4B42040")]
	private void OnContentTextChangedHandle()
	{
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x4B420E0", Offset = "0x4B420E0", VA = "0x4B420E0")]
	public void OnFocus()
	{
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x4B421F0", Offset = "0x4B421F0", VA = "0x4B421F0")]
	public void OnLostFocus()
	{
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x4B42200", Offset = "0x4B42200", VA = "0x4B42200")]
	public bool HandleKeyEvent(Event e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x4B42340", Offset = "0x4B42340", VA = "0x4B42340")]
	public void ReplaceSelection(string replace)
	{
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x4B42360", Offset = "0x4B42360", VA = "0x4B42360")]
	public void Insert(char c)
	{
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x4B423C0", Offset = "0x4B423C0", VA = "0x4B423C0")]
	public void MoveCursorToPosition(Vector2 cursorPosition)
	{
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x4B424B0", Offset = "0x4B424B0", VA = "0x4B424B0")]
	protected internal void MoveCursorToPosition_Internal(Vector2 cursorPosition, bool shift)
	{
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x4B426F0", Offset = "0x4B426F0", VA = "0x4B426F0")]
	public void SelectToPosition(Vector2 cursorPosition)
	{
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x4B42580", Offset = "0x4B42580", VA = "0x4B42580")]
	private Vector2 GetLocalCursorPosition(Vector2 cursorPosition)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x4B42A80", Offset = "0x4B42A80", VA = "0x4B42A80")]
	public void MouseDragSelectsWholeWords(bool on)
	{
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x4B42B50", Offset = "0x4B42B50", VA = "0x4B42B50")]
	public void DblClickSnap(DblClickSnapping snapping)
	{
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x4B42B80", Offset = "0x4B42B80", VA = "0x4B42B80")]
	public void SelectCurrentWord()
	{
	}

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x4B42D40", Offset = "0x4B42D40", VA = "0x4B42D40")]
	public void SelectCurrentParagraph()
	{
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x4B42F60", Offset = "0x4B42F60", VA = "0x4B42F60")]
	public void UpdateScrollOffsetIfNeeded(Event evt)
	{
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x4B41770", Offset = "0x4B41770", VA = "0x4B41770")]
	internal void UpdateTextHandle()
	{
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x4B42FB0", Offset = "0x4B42FB0", VA = "0x4B42FB0")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal void UpdateScrollOffset()
	{
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x4B43520", Offset = "0x4B43520", VA = "0x4B43520")]
	public void DrawCursor(string newText)
	{
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x4B43AA0", Offset = "0x4B43AA0", VA = "0x4B43AA0")]
	public void SaveBackup()
	{
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x4B43BA0", Offset = "0x4B43BA0", VA = "0x4B43BA0")]
	public void DetectFocusChange()
	{
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x4B43BC0", Offset = "0x4B43BC0", VA = "0x4B43BC0", Slot = "4")]
	internal virtual void OnDetectFocusChange()
	{
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x4B43C90", Offset = "0x4B43C90", VA = "0x4B43C90", Slot = "5")]
	internal virtual void OnCursorIndexChange()
	{
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x4B43CA0", Offset = "0x4B43CA0", VA = "0x4B43CA0", Slot = "6")]
	internal virtual void OnSelectIndexChange()
	{
	}
}
