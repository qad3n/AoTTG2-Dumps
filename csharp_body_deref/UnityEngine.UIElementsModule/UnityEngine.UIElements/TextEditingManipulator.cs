// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TextEditingManipulator
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20004A1")]
internal class TextEditingManipulator
{
	[Token(Token = "0x4000F88")]
	[FieldOffset(Offset = "0x10")]
	private readonly TextElement m_TextElement;

	[Token(Token = "0x4000F89")]
	[FieldOffset(Offset = "0x18")]
	private TextEditorEventHandler m_TouchScreenEditingEventHandler;

	[Token(Token = "0x4000F8A")]
	[FieldOffset(Offset = "0x20")]
	private TextEditorEventHandler m_KeyboardEditingEventHandler;

	[Token(Token = "0x4000F8B")]
	[FieldOffset(Offset = "0x28")]
	internal UnityEngine.TextEditingUtilities editingUtilities;

	[Token(Token = "0x4000F8C")]
	[FieldOffset(Offset = "0x30")]
	private IVisualElementScheduledItem m_HardwareKeyboardPoller;

	[Token(Token = "0x1700094A")]
	internal TextEditorEventHandler touchScreenEditingEventHandler
	{
		[Token(Token = "0x60023AD")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x60023AE")]
		[Address(RVA = "0x312FC10", Offset = "0x312E210", VA = "0x18312FC10")]
		set
		{
		}
	}

	[Token(Token = "0x1700094B")]
	internal TextEditorEventHandler keyboardEditingEventHandler
	{
		[Token(Token = "0x60023AF")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60023B0")]
		[Address(RVA = "0x312FBA0", Offset = "0x312E1A0", VA = "0x18312FBA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700094C")]
	private bool touchScreenTextFieldChanged
	{
		[Token(Token = "0x60023B3")]
		[Address(RVA = "0x312FAB0", Offset = "0x312E0B0", VA = "0x18312FAB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700094D")]
	private bool touchScreenCanBeUsed
	{
		[Token(Token = "0x60023B4")]
		[Address(RVA = "0x312FA40", Offset = "0x312E040", VA = "0x18312FA40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700094E")]
	private bool keyboardCanBeUsed
	{
		[Token(Token = "0x60023B5")]
		[Address(RVA = "0x312F9D0", Offset = "0x312DFD0", VA = "0x18312F9D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60023B1")]
	[Address(RVA = "0x312F8C0", Offset = "0x312DEC0", VA = "0x18312F8C0")]
	public TextEditingManipulator(TextElement textElement)
	{
	}

	[Token(Token = "0x60023B2")]
	[Address(RVA = "0x312F5A0", Offset = "0x312DBA0", VA = "0x18312F5A0")]
	public void Reset()
	{
	}

	[Token(Token = "0x60023B6")]
	[Address(RVA = "0x312F6B0", Offset = "0x312DCB0", VA = "0x18312F6B0")]
	private void UpdateTextEditorEventHandler()
	{
	}

	[Token(Token = "0x60023B7")]
	[Address(RVA = "0x312F070", Offset = "0x312D670", VA = "0x18312F070")]
	internal void HandleEventBubbleUp(EventBase evt)
	{
	}

	[Token(Token = "0x60023B8")]
	[Address(RVA = "0x312F2E0", Offset = "0x312D8E0", VA = "0x18312F2E0")]
	private void OnFocusInEvent()
	{
	}

	[Token(Token = "0x60023B9")]
	[Address(RVA = "0x312F540", Offset = "0x312DB40", VA = "0x18312F540")]
	private void OnFocusOutEvent()
	{
	}
}
