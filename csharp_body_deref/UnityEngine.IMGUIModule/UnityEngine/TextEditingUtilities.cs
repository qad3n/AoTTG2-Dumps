// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextEditingUtilities
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
		[Address(RVA = "0x4E635F0", Offset = "0x4E635F0", VA = "0x4E635F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700008E")]
	internal bool revealCursor
	{
		[Token(Token = "0x6000261")]
		[Address(RVA = "0x4E636D0", Offset = "0x4E636D0", VA = "0x4E636D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700008F")]
	internal int stringCursorIndex
	{
		[Token(Token = "0x6000262")]
		[Address(RVA = "0x4E63740", Offset = "0x4E63740", VA = "0x4E63740")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000090")]
	private int cursorIndex
	{
		[Token(Token = "0x6000263")]
		[Address(RVA = "0x4E637C0", Offset = "0x4E637C0", VA = "0x4E637C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000264")]
		[Address(RVA = "0x4E63890", Offset = "0x4E63890", VA = "0x4E63890")]
		set
		{
		}
	}

	[Token(Token = "0x17000091")]
	internal int stringSelectIndex
	{
		[Token(Token = "0x6000265")]
		[Address(RVA = "0x4E638F0", Offset = "0x4E638F0", VA = "0x4E638F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000092")]
	private int selectIndex
	{
		[Token(Token = "0x6000266")]
		[Address(RVA = "0x4E63970", Offset = "0x4E63970", VA = "0x4E63970")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000267")]
		[Address(RVA = "0x4E63A40", Offset = "0x4E63A40", VA = "0x4E63A40")]
		set
		{
		}
	}

	[Token(Token = "0x17000093")]
	public string text
	{
		[Token(Token = "0x6000268")]
		[Address(RVA = "0x4E63AA0", Offset = "0x4E63AA0", VA = "0x4E63AA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000269")]
		[Address(RVA = "0x4E63AB0", Offset = "0x4E63AB0", VA = "0x4E63AB0")]
		set
		{
		}
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x4E63B20", Offset = "0x4E63B20", VA = "0x4E63B20")]
	internal void SetTextWithoutNotify(string value)
	{
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x4E63B30", Offset = "0x4E63B30", VA = "0x4E63B30")]
	public TextEditingUtilities(TextSelectingUtilities selectingUtilities, UnityEngine.TextCore.Text.TextHandle textHandle, string text)
	{
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x4E63BA0", Offset = "0x4E63BA0", VA = "0x4E63BA0")]
	public bool UpdateImeState()
	{
		return default(bool);
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x4E63E60", Offset = "0x4E63E60", VA = "0x4E63E60")]
	public bool ShouldUpdateImeWindowPosition()
	{
		return default(bool);
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x4E63E70", Offset = "0x4E63E70", VA = "0x4E63E70")]
	public void SetImeWindowPosition(Vector2 worldPosition)
	{
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x4E63F10", Offset = "0x4E63F10", VA = "0x4E63F10")]
	public string GeneratePreviewString(bool richText)
	{
		return null;
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x4E640A0", Offset = "0x4E640A0", VA = "0x4E640A0")]
	public void EnableCursorPreviewState()
	{
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x4E64030", Offset = "0x4E64030", VA = "0x4E64030")]
	public void RestoreCursorState()
	{
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x4E64190", Offset = "0x4E64190", VA = "0x4E64190")]
	[UnityEngine.Bindings.VisibleToOtherModules]
	internal bool HandleKeyEvent(Event e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x4E65760", Offset = "0x4E65760", VA = "0x4E65760")]
	private void PerformOperation(TextEditOp operation)
	{
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x4E685F0", Offset = "0x4E685F0", VA = "0x4E685F0")]
	private static void MapKey(string key, TextEditOp action)
	{
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x4E642F0", Offset = "0x4E642F0", VA = "0x4E642F0")]
	private void InitKeyActions()
	{
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x4E68150", Offset = "0x4E68150", VA = "0x4E68150")]
	public bool DeleteLineBack()
	{
		return default(bool);
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x4E67EF0", Offset = "0x4E67EF0", VA = "0x4E67EF0")]
	public bool DeleteWordBack()
	{
		return default(bool);
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x4E683D0", Offset = "0x4E683D0", VA = "0x4E683D0")]
	public bool DeleteWordForward()
	{
		return default(bool);
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x4E67900", Offset = "0x4E67900", VA = "0x4E67900")]
	public bool Delete()
	{
		return default(bool);
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x4E67AE0", Offset = "0x4E67AE0", VA = "0x4E67AE0")]
	public bool Backspace()
	{
		return default(bool);
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x4E68670", Offset = "0x4E68670", VA = "0x4E68670")]
	public bool DeleteSelection()
	{
		return default(bool);
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x4E63C00", Offset = "0x4E63C00", VA = "0x4E63C00")]
	public void ReplaceSelection(string replace)
	{
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x4E68E20", Offset = "0x4E68E20", VA = "0x4E68E20")]
	public void Insert(char c)
	{
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x4E68E70", Offset = "0x4E68E70", VA = "0x4E68E70")]
	public bool CanPaste()
	{
		return default(bool);
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x4E67DF0", Offset = "0x4E67DF0", VA = "0x4E67DF0")]
	public bool Cut()
	{
		return default(bool);
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x4E67E10", Offset = "0x4E67E10", VA = "0x4E67E10")]
	public bool Paste()
	{
		return default(bool);
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x4E68F60", Offset = "0x4E68F60", VA = "0x4E68F60")]
	private static string ReplaceNewlinesWithSpaces(string value)
	{
		return null;
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x4E68FF0", Offset = "0x4E68FF0", VA = "0x4E68FF0")]
	internal void OnBlur()
	{
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x4E690B0", Offset = "0x4E690B0", VA = "0x4E690B0")]
	internal bool TouchScreenKeyboardShouldBeUsed()
	{
		return default(bool);
	}
}
