// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TouchScreenTextEditorEventHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000B6")]
internal class TouchScreenTextEditorEventHandler : TextEditorEventHandler
{
	[Token(Token = "0x4000301")]
	[FieldOffset(Offset = "0x20")]
	private IVisualElementScheduledItem m_TouchKeyboardPoller;

	[Token(Token = "0x4000302")]
	[FieldOffset(Offset = "0x28")]
	private bool m_TouchKeyboardAllowsInPlaceEditing;

	[Token(Token = "0x4000303")]
	[FieldOffset(Offset = "0x29")]
	private bool m_IsClicking;

	[Token(Token = "0x6000517")]
	[Address(RVA = "0x4F461A0", Offset = "0x4F461A0", VA = "0x4F461A0")]
	public TouchScreenTextEditorEventHandler(TextElement textElement, UnityEngine.TextEditingUtilities editingUtilities)
	{
	}

	[Token(Token = "0x6000518")]
	[Address(RVA = "0x4F46200", Offset = "0x4F46200", VA = "0x4F46200")]
	private void PollTouchScreenKeyboard()
	{
	}

	[Token(Token = "0x6000519")]
	[Address(RVA = "0x4F46480", Offset = "0x4F46480", VA = "0x4F46480")]
	private void DoPollTouchScreenKeyboard()
	{
	}

	[Token(Token = "0x600051A")]
	[Address(RVA = "0x4F46DB0", Offset = "0x4F46DB0", VA = "0x4F46DB0")]
	private void UpdateStringPositionFromKeyboard()
	{
	}

	[Token(Token = "0x600051B")]
	[Address(RVA = "0x4F46CB0", Offset = "0x4F46CB0", VA = "0x4F46CB0")]
	private void CloseTouchScreenKeyboard()
	{
	}

	[Token(Token = "0x600051C")]
	[Address(RVA = "0x4F47070", Offset = "0x4F47070", VA = "0x4F47070")]
	private void OpenTouchScreenKeyboard()
	{
	}

	[Token(Token = "0x600051D")]
	[Address(RVA = "0x4F47630", Offset = "0x4F47630", VA = "0x4F47630", Slot = "4")]
	public override void ExecuteDefaultActionAtTarget(EventBase evt)
	{
	}

	[Token(Token = "0x600051E")]
	[Address(RVA = "0x4F477F0", Offset = "0x4F477F0", VA = "0x4F477F0")]
	private void OnPointerDownEvent()
	{
	}

	[Token(Token = "0x600051F")]
	[Address(RVA = "0x4F479E0", Offset = "0x4F479E0", VA = "0x4F479E0")]
	private void OnPointerUpEvent(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x6000520")]
	[Address(RVA = "0x4F47A00", Offset = "0x4F47A00", VA = "0x4F47A00")]
	private void OnFocusInEvent()
	{
	}

	[Token(Token = "0x6000521")]
	[Address(RVA = "0x4F47BA0", Offset = "0x4F47BA0", VA = "0x4F47BA0")]
	private void OnFocusOutEvent(FocusOutEvent evt)
	{
	}
}
