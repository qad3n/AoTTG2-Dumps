// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextEditingUtilities
// Update status: CHANGED in this game update
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
			[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
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
			[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0")]
			[CompilerGenerated]
			get
			{
				return default(EventModifiers);
			}
		}

		[Token(Token = "0x60002DE")]
		[Address(RVA = "0xACCA30", Offset = "0xACB030", VA = "0x180ACCA30")]
		public KeyEvent(KeyCode key, EventModifiers modifiers)
		{
		}

		[Token(Token = "0x60002E1")]
		[Address(RVA = "0x2FA9B90", Offset = "0x2FA8190", VA = "0x182FA9B90", Slot = "3")]
		[CompilerGenerated]
		public override readonly string ToString()
		{
			return null;
		}

		[Token(Token = "0x60002E2")]
		[Address(RVA = "0x2FA9A90", Offset = "0x2FA8090", VA = "0x182FA9A90")]
		[CompilerGenerated]
		private readonly bool PrintMembers(StringBuilder builder)
		{
			return default(bool);
		}

		[Token(Token = "0x60002E3")]
		[Address(RVA = "0x2FA9C70", Offset = "0x2FA8270", VA = "0x182FA9C70")]
		[CompilerGenerated]
		public static bool operator ==(KeyEvent left, KeyEvent right)
		{
			return default(bool);
		}

		[Token(Token = "0x60002E4")]
		[Address(RVA = "0x2FA99F0", Offset = "0x2FA7FF0", VA = "0x182FA99F0", Slot = "2")]
		[CompilerGenerated]
		public override readonly int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x60002E5")]
		[Address(RVA = "0x2FA9890", Offset = "0x2FA7E90", VA = "0x182FA9890", Slot = "0")]
		[CompilerGenerated]
		public override readonly bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x60002E6")]
		[Address(RVA = "0x2FA9920", Offset = "0x2FA7F20", VA = "0x182FA9920", Slot = "4")]
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
		[Address(RVA = "0x2FB0000", Offset = "0x2FAE600", VA = "0x182FB0000")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000092")]
	internal bool revealCursor
	{
		[Token(Token = "0x60002B6")]
		[Address(RVA = "0x2FB0290", Offset = "0x2FAE890", VA = "0x182FB0290")]
		set
		{
		}
	}

	[Token(Token = "0x17000093")]
	internal int stringCursorIndex
	{
		[Token(Token = "0x60002B7")]
		[Address(RVA = "0x2FB0130", Offset = "0x2FAE730", VA = "0x182FB0130")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000094")]
	private int cursorIndex
	{
		[Token(Token = "0x60002B8")]
		[Address(RVA = "0x2FAFF90", Offset = "0x2FAE590", VA = "0x182FAFF90")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002B9")]
		[Address(RVA = "0x2FB0250", Offset = "0x2FAE850", VA = "0x182FB0250")]
		set
		{
		}
	}

	[Token(Token = "0x17000095")]
	private int cursorIndexNoValidation
	{
		[Token(Token = "0x60002BA")]
		[Address(RVA = "0x2FAFF70", Offset = "0x2FAE570", VA = "0x182FAFF70")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002BB")]
		[Address(RVA = "0x2FB0250", Offset = "0x2FAE850", VA = "0x182FB0250")]
		set
		{
		}
	}

	[Token(Token = "0x17000096")]
	private int selectIndexNoValidation
	{
		[Token(Token = "0x60002BC")]
		[Address(RVA = "0x2FB02D0", Offset = "0x2FAE8D0", VA = "0x182FB02D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000097")]
	internal int stringSelectIndex
	{
		[Token(Token = "0x60002BD")]
		[Address(RVA = "0x2FB01C0", Offset = "0x2FAE7C0", VA = "0x182FB01C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000098")]
	private int selectIndex
	{
		[Token(Token = "0x60002BE")]
		[Address(RVA = "0x2FB00C0", Offset = "0x2FAE6C0", VA = "0x182FB00C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002BF")]
		[Address(RVA = "0x2FB02D0", Offset = "0x2FAE8D0", VA = "0x182FB02D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000099")]
	public string text
	{
		[Token(Token = "0x60002C0")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002C1")]
		[Address(RVA = "0x2FB0310", Offset = "0x2FAE910", VA = "0x182FB0310")]
		set
		{
		}
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
	internal void SetTextWithoutNotify(string value)
	{
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x2FAFF10", Offset = "0x2FAE510", VA = "0x182FAFF10")]
	public TextEditingUtilities(TextSelectingUtilities selectingUtilities, UnityEngine.TextCore.Text.TextHandle textHandle, string text)
	{
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x2FAE000", Offset = "0x2FAC600", VA = "0x182FAE000")]
	public bool UpdateImeState()
	{
		return default(bool);
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x2FADC60", Offset = "0x2FAC260", VA = "0x182FADC60")]
	public bool ShouldUpdateImeWindowPosition()
	{
		return default(bool);
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x2FADB30", Offset = "0x2FAC130", VA = "0x182FADB30")]
	public void SetImeWindowPosition(Vector2 worldPosition)
	{
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x2FACD30", Offset = "0x2FAB330", VA = "0x182FACD30")]
	public string GeneratePreviewString(bool richText)
	{
		return null;
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x2FACC60", Offset = "0x2FAB260", VA = "0x182FACC60")]
	public void EnableCursorPreviewState()
	{
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x2FADAB0", Offset = "0x2FAC0B0", VA = "0x182FADAB0")]
	public void RestoreCursorState()
	{
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x2FACEC0", Offset = "0x2FAB4C0", VA = "0x182FACEC0")]
	internal bool HandleKeyEvent(Event e)
	{
		return default(bool);
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x2FACE00", Offset = "0x2FAB400", VA = "0x182FACE00")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal bool HandleKeyEvent(KeyCode key, EventModifiers modifiers)
	{
		return default(bool);
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x2FADC70", Offset = "0x2FAC270", VA = "0x182FADC70")]
	internal static TextEditOp? TextEditOpFromEnum(KeyCode key, EventModifiers modifiers, bool IsMacOsFamily)
	{
		return null;
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x2FAD2B0", Offset = "0x2FAB8B0", VA = "0x182FAD2B0")]
	private void PerformOperation(TextEditOp operation)
	{
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x2FAC270", Offset = "0x2FAA870", VA = "0x182FAC270")]
	public bool DeleteLineBack()
	{
		return default(bool);
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x2FAC770", Offset = "0x2FAAD70", VA = "0x182FAC770")]
	public bool DeleteWordBack()
	{
		return default(bool);
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x2FAC8E0", Offset = "0x2FAAEE0", VA = "0x182FAC8E0")]
	public bool DeleteWordForward()
	{
		return default(bool);
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x2FACA10", Offset = "0x2FAB010", VA = "0x182FACA10")]
	public bool Delete()
	{
		return default(bool);
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x2FABD40", Offset = "0x2FAA340", VA = "0x182FABD40")]
	public bool Backspace()
	{
		return default(bool);
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x2FAC470", Offset = "0x2FAAA70", VA = "0x182FAC470")]
	public bool DeleteSelection()
	{
		return default(bool);
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x2FAD920", Offset = "0x2FABF20", VA = "0x182FAD920")]
	public void ReplaceSelection(string replace)
	{
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x2FACFC0", Offset = "0x2FAB5C0", VA = "0x182FACFC0")]
	public bool Insert(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x2FAC1E0", Offset = "0x2FAA7E0", VA = "0x182FAC1E0")]
	public bool CanPaste()
	{
		return default(bool);
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x2FAC240", Offset = "0x2FAA840", VA = "0x182FAC240")]
	public bool Cut()
	{
		return default(bool);
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x2FAD160", Offset = "0x2FAB760", VA = "0x182FAD160")]
	public bool Paste()
	{
		return default(bool);
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x2FAD890", Offset = "0x2FABE90", VA = "0x182FAD890")]
	private static string ReplaceNewlinesWithSpaces(string value)
	{
		return null;
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x2FAD100", Offset = "0x2FAB700", VA = "0x182FAD100")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal void OnBlur()
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x2FADF90", Offset = "0x2FAC590", VA = "0x182FADF90")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal bool TouchScreenKeyboardCanBeUsed()
	{
		return default(bool);
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x2FAD860", Offset = "0x2FABE60", VA = "0x182FAD860")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal bool PhysicalKeyboardCanBeUsed()
	{
		return default(bool);
	}
}
