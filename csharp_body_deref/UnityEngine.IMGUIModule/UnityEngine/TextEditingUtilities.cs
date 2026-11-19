// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextEditingUtilities
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Text;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.TextCore.Text;

namespace UnityEngine;

[Token(Token = "0x2000030")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
internal class TextEditingUtilities
{
	[Token(Token = "0x2000031")]
	internal struct KeyEvent : IEquatable<KeyEvent>
	{
		[Token(Token = "0x1700009A")]
		public readonly KeyCode key
		{
			[Token(Token = "0x60002DF")]
			[Address(RVA = "0x69ACCE0", Offset = "0x69ABCE0", VA = "0x69ACCE0")]
			[CompilerGenerated]
			get
			{
				return default(KeyCode);
			}
		}

		[Token(Token = "0x1700009B")]
		public readonly EventModifiers modifiers
		{
			[Token(Token = "0x60002E0")]
			[Address(RVA = "0x69ACCF0", Offset = "0x69ABCF0", VA = "0x69ACCF0")]
			[CompilerGenerated]
			get
			{
				return default(EventModifiers);
			}
		}

		[Token(Token = "0x60002DE")]
		[Address(RVA = "0x69A6A70", Offset = "0x69A5A70", VA = "0x69A6A70")]
		public KeyEvent(KeyCode key, EventModifiers modifiers)
		{
		}

		[Token(Token = "0x60002E1")]
		[Address(RVA = "0x69ACD00", Offset = "0x69ABD00", VA = "0x69ACD00", Slot = "3")]
		[CompilerGenerated]
		public override readonly string ToString()
		{
			return null;
		}

		[Token(Token = "0x60002E2")]
		[Address(RVA = "0x69ACDD0", Offset = "0x69ABDD0", VA = "0x69ACDD0")]
		[CompilerGenerated]
		private readonly bool PrintMembers(StringBuilder builder)
		{
			return default(bool);
		}

		[Token(Token = "0x60002E3")]
		[Address(RVA = "0x69A6A80", Offset = "0x69A5A80", VA = "0x69A6A80")]
		[CompilerGenerated]
		public static bool operator ==(KeyEvent left, KeyEvent right)
		{
			return default(bool);
		}

		[Token(Token = "0x60002E4")]
		[Address(RVA = "0x69ACF80", Offset = "0x69ABF80", VA = "0x69ACF80", Slot = "2")]
		[CompilerGenerated]
		public override readonly int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x60002E5")]
		[Address(RVA = "0x69AD020", Offset = "0x69AC020", VA = "0x69AD020", Slot = "0")]
		[CompilerGenerated]
		public override readonly bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x60002E6")]
		[Address(RVA = "0x69ACED0", Offset = "0x69ABED0", VA = "0x69ACED0", Slot = "4")]
		[CompilerGenerated]
		public readonly bool Equals(KeyEvent other)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x400014F")]
	[FieldOffset(Offset = "0x10")]
	private TextSelectingUtilities m_TextSelectingUtility;

	[Token(Token = "0x4000150")]
	[FieldOffset(Offset = "0x18")]
	internal UnityEngine.TextCore.Text.TextHandle textHandle;

	[Token(Token = "0x4000151")]
	[FieldOffset(Offset = "0x20")]
	private int m_CursorIndexSavedState;

	[Token(Token = "0x4000152")]
	[FieldOffset(Offset = "0x24")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal bool isCompositionActive;

	[Token(Token = "0x4000153")]
	[FieldOffset(Offset = "0x25")]
	private bool m_UpdateImeWindowPosition;

	[Token(Token = "0x4000154")]
	[FieldOffset(Offset = "0x28")]
	internal Action OnTextChanged;

	[Token(Token = "0x4000155")]
	[FieldOffset(Offset = "0x30")]
	public bool multiline;

	[Token(Token = "0x4000156")]
	[FieldOffset(Offset = "0x38")]
	private string m_Text;

	[Token(Token = "0x4000157")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly List<(KeyEvent keyEvent, TextEditOp operation)> s_GlobalKeyMappings;

	[Token(Token = "0x4000158")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly List<(KeyEvent keyEvent, TextEditOp operation)> s_MacKeyMappings;

	[Token(Token = "0x4000159")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly List<(KeyEvent keyEvent, TextEditOp operation)> s_WindowsLinuxKeyMappings;

	[Token(Token = "0x400015A")]
	[FieldOffset(Offset = "0x40")]
	private char m_HighSurrogate;

	[Token(Token = "0x17000091")]
	private bool hasSelection
	{
		[Token(Token = "0x60002B5")]
		[Address(RVA = "0x69A5550", Offset = "0x69A4550", VA = "0x69A5550")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000092")]
	internal bool revealCursor
	{
		[Token(Token = "0x60002B6")]
		[Address(RVA = "0x69A5670", Offset = "0x69A4670", VA = "0x69A5670")]
		set
		{
		}
	}

	[Token(Token = "0x17000093")]
	internal int stringCursorIndex
	{
		[Token(Token = "0x60002B7")]
		[Address(RVA = "0x69A56E0", Offset = "0x69A46E0", VA = "0x69A56E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000094")]
	private int cursorIndex
	{
		[Token(Token = "0x60002B8")]
		[Address(RVA = "0x69A5750", Offset = "0x69A4750", VA = "0x69A5750")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002B9")]
		[Address(RVA = "0x69A5800", Offset = "0x69A4800", VA = "0x69A5800")]
		set
		{
		}
	}

	[Token(Token = "0x17000095")]
	private int cursorIndexNoValidation
	{
		[Token(Token = "0x60002BA")]
		[Address(RVA = "0x69A5860", Offset = "0x69A4860", VA = "0x69A5860")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002BB")]
		[Address(RVA = "0x69A5890", Offset = "0x69A4890", VA = "0x69A5890")]
		set
		{
		}
	}

	[Token(Token = "0x17000096")]
	private int selectIndexNoValidation
	{
		[Token(Token = "0x60002BC")]
		[Address(RVA = "0x69A58F0", Offset = "0x69A48F0", VA = "0x69A58F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000097")]
	internal int stringSelectIndex
	{
		[Token(Token = "0x60002BD")]
		[Address(RVA = "0x69A5950", Offset = "0x69A4950", VA = "0x69A5950")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000098")]
	private int selectIndex
	{
		[Token(Token = "0x60002BE")]
		[Address(RVA = "0x69A59C0", Offset = "0x69A49C0", VA = "0x69A59C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002BF")]
		[Address(RVA = "0x69A5A70", Offset = "0x69A4A70", VA = "0x69A5A70")]
		set
		{
		}
	}

	[Token(Token = "0x17000099")]
	public string text
	{
		[Token(Token = "0x60002C0")]
		[Address(RVA = "0x69A5AD0", Offset = "0x69A4AD0", VA = "0x69A5AD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002C1")]
		[Address(RVA = "0x69A5AE0", Offset = "0x69A4AE0", VA = "0x69A5AE0")]
		set
		{
		}
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x69A5B50", Offset = "0x69A4B50", VA = "0x69A5B50")]
	internal void SetTextWithoutNotify(string value)
	{
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x69A5B60", Offset = "0x69A4B60", VA = "0x69A5B60")]
	public TextEditingUtilities(TextSelectingUtilities selectingUtilities, UnityEngine.TextCore.Text.TextHandle textHandle, string text)
	{
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x69A5BD0", Offset = "0x69A4BD0", VA = "0x69A5BD0")]
	public bool UpdateImeState()
	{
		return default(bool);
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x69A5ED0", Offset = "0x69A4ED0", VA = "0x69A5ED0")]
	public bool ShouldUpdateImeWindowPosition()
	{
		return default(bool);
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x69A5EE0", Offset = "0x69A4EE0", VA = "0x69A5EE0")]
	public void SetImeWindowPosition(Vector2 worldPosition)
	{
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x69A5FB0", Offset = "0x69A4FB0", VA = "0x69A5FB0")]
	public string GeneratePreviewString(bool richText)
	{
		return null;
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x69A6220", Offset = "0x69A5220", VA = "0x69A6220")]
	public void EnableCursorPreviewState()
	{
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x69A61B0", Offset = "0x69A51B0", VA = "0x69A61B0")]
	public void RestoreCursorState()
	{
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x69A62F0", Offset = "0x69A52F0", VA = "0x69A62F0")]
	internal bool HandleKeyEvent(Event e)
	{
		return default(bool);
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x69A6330", Offset = "0x69A5330", VA = "0x69A6330")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal bool HandleKeyEvent(KeyCode key, EventModifiers modifiers)
	{
		return default(bool);
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x69A63E0", Offset = "0x69A53E0", VA = "0x69A63E0")]
	internal static TextEditOp? TextEditOpFromEnum(KeyCode key, EventModifiers modifiers, bool IsMacOsFamily)
	{
		return null;
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x69A6720", Offset = "0x69A5720", VA = "0x69A6720")]
	private void PerformOperation(TextEditOp operation)
	{
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x69A99E0", Offset = "0x69A89E0", VA = "0x69A99E0")]
	public bool DeleteLineBack()
	{
		return default(bool);
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x69A9750", Offset = "0x69A8750", VA = "0x69A9750")]
	public bool DeleteWordBack()
	{
		return default(bool);
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x69A9EA0", Offset = "0x69A8EA0", VA = "0x69A9EA0")]
	public bool DeleteWordForward()
	{
		return default(bool);
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x69A8830", Offset = "0x69A7830", VA = "0x69A8830")]
	public bool Delete()
	{
		return default(bool);
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x69A8DD0", Offset = "0x69A7DD0", VA = "0x69A8DD0")]
	public bool Backspace()
	{
		return default(bool);
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x69AA150", Offset = "0x69A9150", VA = "0x69AA150")]
	public bool DeleteSelection()
	{
		return default(bool);
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x69A5C90", Offset = "0x69A4C90", VA = "0x69A5C90")]
	public void ReplaceSelection(string replace)
	{
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x69AAD10", Offset = "0x69A9D10", VA = "0x69AAD10")]
	public bool Insert(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x69AAE50", Offset = "0x69A9E50", VA = "0x69AAE50")]
	public bool CanPaste()
	{
		return default(bool);
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x69A9610", Offset = "0x69A8610", VA = "0x69A9610")]
	public bool Cut()
	{
		return default(bool);
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x69A9630", Offset = "0x69A8630", VA = "0x69A9630")]
	public bool Paste()
	{
		return default(bool);
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x69AAFA0", Offset = "0x69A9FA0", VA = "0x69AAFA0")]
	private static string ReplaceNewlinesWithSpaces(string value)
	{
		return null;
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x69AB030", Offset = "0x69AA030", VA = "0x69AB030")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal void OnBlur()
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x69AB1B0", Offset = "0x69AA1B0", VA = "0x69AB1B0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal bool TouchScreenKeyboardCanBeUsed()
	{
		return default(bool);
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x69AB210", Offset = "0x69AA210", VA = "0x69AB210")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal bool PhysicalKeyboardCanBeUsed()
	{
		return default(bool);
	}
}
