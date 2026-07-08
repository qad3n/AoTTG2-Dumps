using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.TextCore.Text;

namespace UnityEngine;

[Token(Token = "0x200002C")]
internal class TextEditingUtilities
{
	[Token(Token = "0x4000149")]
	[FieldOffset(Offset = "0x10")]
	private TextSelectingUtilities m_TextSelectingUtility;

	[Token(Token = "0x400014A")]
	[FieldOffset(Offset = "0x18")]
	internal UnityEngine.TextCore.Text.TextHandle textHandle;

	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0x20")]
	private int m_CursorIndexSavedState;

	[Token(Token = "0x400014C")]
	[FieldOffset(Offset = "0x24")]
	internal bool isCompositionActive;

	[Token(Token = "0x400014D")]
	[FieldOffset(Offset = "0x25")]
	private bool m_UpdateImeWindowPosition;

	[Token(Token = "0x400014E")]
	[FieldOffset(Offset = "0x28")]
	internal Action OnTextChanged;

	[Token(Token = "0x400014F")]
	[FieldOffset(Offset = "0x30")]
	public bool multiline;

	[Token(Token = "0x4000150")]
	[FieldOffset(Offset = "0x38")]
	private string m_Text;

	[Token(Token = "0x4000151")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<Event, TextEditOp> s_KeyEditOps;

	[Token(Token = "0x1700008D")]
	private bool hasSelection
	{
		[Token(Token = "0x6000260")]
		[Address(RVA = "0x4B3BA30", Offset = "0x4B3BA30", VA = "0x4B3BA30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700008E")]
	internal bool revealCursor
	{
		[Token(Token = "0x6000261")]
		[Address(RVA = "0x4B3BB10", Offset = "0x4B3BB10", VA = "0x4B3BB10")]
		set
		{
		}
	}

	[Token(Token = "0x1700008F")]
	internal int stringCursorIndex
	{
		[Token(Token = "0x6000262")]
		[Address(RVA = "0x4B3BB80", Offset = "0x4B3BB80", VA = "0x4B3BB80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000090")]
	private int cursorIndex
	{
		[Token(Token = "0x6000263")]
		[Address(RVA = "0x4B3BC00", Offset = "0x4B3BC00", VA = "0x4B3BC00")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000264")]
		[Address(RVA = "0x4B3BCD0", Offset = "0x4B3BCD0", VA = "0x4B3BCD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000091")]
	internal int stringSelectIndex
	{
		[Token(Token = "0x6000265")]
		[Address(RVA = "0x4B3BD30", Offset = "0x4B3BD30", VA = "0x4B3BD30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000092")]
	private int selectIndex
	{
		[Token(Token = "0x6000266")]
		[Address(RVA = "0x4B3BDB0", Offset = "0x4B3BDB0", VA = "0x4B3BDB0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000267")]
		[Address(RVA = "0x4B3BE80", Offset = "0x4B3BE80", VA = "0x4B3BE80")]
		set
		{
		}
	}

	[Token(Token = "0x17000093")]
	public string text
	{
		[Token(Token = "0x6000268")]
		[Address(RVA = "0x4B3BEE0", Offset = "0x4B3BEE0", VA = "0x4B3BEE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000269")]
		[Address(RVA = "0x4B3BEF0", Offset = "0x4B3BEF0", VA = "0x4B3BEF0")]
		set
		{
		}
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x4B3BF60", Offset = "0x4B3BF60", VA = "0x4B3BF60")]
	internal void SetTextWithoutNotify(string value)
	{
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x4B3BF70", Offset = "0x4B3BF70", VA = "0x4B3BF70")]
	public TextEditingUtilities(TextSelectingUtilities selectingUtilities, UnityEngine.TextCore.Text.TextHandle textHandle, string text)
	{
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x4B3BFE0", Offset = "0x4B3BFE0", VA = "0x4B3BFE0")]
	public bool UpdateImeState()
	{
		return default(bool);
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x4B3C2A0", Offset = "0x4B3C2A0", VA = "0x4B3C2A0")]
	public bool ShouldUpdateImeWindowPosition()
	{
		return default(bool);
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x4B3C2B0", Offset = "0x4B3C2B0", VA = "0x4B3C2B0")]
	public void SetImeWindowPosition(Vector2 worldPosition)
	{
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x4B3C350", Offset = "0x4B3C350", VA = "0x4B3C350")]
	public string GeneratePreviewString(bool richText)
	{
		return null;
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x4B3C4E0", Offset = "0x4B3C4E0", VA = "0x4B3C4E0")]
	public void EnableCursorPreviewState()
	{
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x4B3C470", Offset = "0x4B3C470", VA = "0x4B3C470")]
	public void RestoreCursorState()
	{
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x4B3C5D0", Offset = "0x4B3C5D0", VA = "0x4B3C5D0")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal bool HandleKeyEvent(Event e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x4B3DBA0", Offset = "0x4B3DBA0", VA = "0x4B3DBA0")]
	private void PerformOperation(TextEditOp operation)
	{
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x4B40A30", Offset = "0x4B40A30", VA = "0x4B40A30")]
	private static void MapKey(string key, TextEditOp action)
	{
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x4B3C730", Offset = "0x4B3C730", VA = "0x4B3C730")]
	private void InitKeyActions()
	{
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x4B40590", Offset = "0x4B40590", VA = "0x4B40590")]
	public bool DeleteLineBack()
	{
		return default(bool);
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x4B40330", Offset = "0x4B40330", VA = "0x4B40330")]
	public bool DeleteWordBack()
	{
		return default(bool);
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x4B40810", Offset = "0x4B40810", VA = "0x4B40810")]
	public bool DeleteWordForward()
	{
		return default(bool);
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x4B3FD40", Offset = "0x4B3FD40", VA = "0x4B3FD40")]
	public bool Delete()
	{
		return default(bool);
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x4B3FF20", Offset = "0x4B3FF20", VA = "0x4B3FF20")]
	public bool Backspace()
	{
		return default(bool);
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x4B40AB0", Offset = "0x4B40AB0", VA = "0x4B40AB0")]
	public bool DeleteSelection()
	{
		return default(bool);
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x4B3C040", Offset = "0x4B3C040", VA = "0x4B3C040")]
	public void ReplaceSelection(string replace)
	{
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x4B41260", Offset = "0x4B41260", VA = "0x4B41260")]
	public void Insert(char c)
	{
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x4B412B0", Offset = "0x4B412B0", VA = "0x4B412B0")]
	public bool CanPaste()
	{
		return default(bool);
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x4B40230", Offset = "0x4B40230", VA = "0x4B40230")]
	public bool Cut()
	{
		return default(bool);
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x4B40250", Offset = "0x4B40250", VA = "0x4B40250")]
	public bool Paste()
	{
		return default(bool);
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x4B413A0", Offset = "0x4B413A0", VA = "0x4B413A0")]
	private static string ReplaceNewlinesWithSpaces(string value)
	{
		return null;
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x4B41430", Offset = "0x4B41430", VA = "0x4B41430")]
	internal void OnBlur()
	{
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x4B414F0", Offset = "0x4B414F0", VA = "0x4B414F0")]
	internal bool TouchScreenKeyboardShouldBeUsed()
	{
		return default(bool);
	}
}
