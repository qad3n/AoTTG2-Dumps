// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TextEditingManipulator
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6B34BC0", Offset = "0x6B33BC0", VA = "0x6B34BC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60023AE")]
		[Address(RVA = "0x6B34BD0", Offset = "0x6B33BD0", VA = "0x6B34BD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700094B")]
	internal TextEditorEventHandler keyboardEditingEventHandler
	{
		[Token(Token = "0x60023AF")]
		[Address(RVA = "0x6B34C40", Offset = "0x6B33C40", VA = "0x6B34C40")]
		get
		{
			return null;
		}
		[Token(Token = "0x60023B0")]
		[Address(RVA = "0x6B34C50", Offset = "0x6B33C50", VA = "0x6B34C50")]
		set
		{
		}
	}

	[Token(Token = "0x1700094C")]
	private bool touchScreenTextFieldChanged
	{
		[Token(Token = "0x60023B3")]
		[Address(RVA = "0x6B35120", Offset = "0x6B34120", VA = "0x6B35120")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700094D")]
	private bool touchScreenCanBeUsed
	{
		[Token(Token = "0x60023B4")]
		[Address(RVA = "0x6B35160", Offset = "0x6B34160", VA = "0x6B35160")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700094E")]
	private bool keyboardCanBeUsed
	{
		[Token(Token = "0x60023B5")]
		[Address(RVA = "0x6B35230", Offset = "0x6B34230", VA = "0x6B35230")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60023B1")]
	[Address(RVA = "0x6B34CC0", Offset = "0x6B33CC0", VA = "0x6B34CC0")]
	public TextEditingManipulator(TextElement textElement)
	{
	}

	[Token(Token = "0x60023B2")]
	[Address(RVA = "0x6B35060", Offset = "0x6B34060", VA = "0x6B35060")]
	public void Reset()
	{
	}

	[Token(Token = "0x60023B6")]
	[Address(RVA = "0x6B34E80", Offset = "0x6B33E80", VA = "0x6B34E80")]
	private void UpdateTextEditorEventHandler()
	{
	}

	[Token(Token = "0x60023B7")]
	[Address(RVA = "0x6B35300", Offset = "0x6B34300", VA = "0x6B35300")]
	internal void HandleEventBubbleUp(EventBase evt)
	{
	}

	[Token(Token = "0x60023B8")]
	[Address(RVA = "0x6B355F0", Offset = "0x6B345F0", VA = "0x6B355F0")]
	private void OnFocusInEvent()
	{
	}

	[Token(Token = "0x60023B9")]
	[Address(RVA = "0x6B35920", Offset = "0x6B34920", VA = "0x6B35920")]
	private void OnFocusOutEvent()
	{
	}
}
