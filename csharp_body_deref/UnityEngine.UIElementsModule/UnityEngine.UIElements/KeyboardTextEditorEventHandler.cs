// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.KeyboardTextEditorEventHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000AD")]
internal class KeyboardTextEditorEventHandler : TextEditorEventHandler
{
	[Token(Token = "0x40002B6")]
	[FieldOffset(Offset = "0x20")]
	private readonly Event m_ImguiEvent;

	[Token(Token = "0x40002B7")]
	[FieldOffset(Offset = "0x28")]
	internal bool m_Changed;

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x4F435E0", Offset = "0x4F435E0", VA = "0x4F435E0")]
	public KeyboardTextEditorEventHandler(TextElement textElement, UnityEngine.TextEditingUtilities editingUtilities)
	{
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x4F43760", Offset = "0x4F43760", VA = "0x4F43760", Slot = "4")]
	public override void ExecuteDefaultActionAtTarget(EventBase evt)
	{
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x4F439F0", Offset = "0x4F439F0", VA = "0x4F439F0")]
	private void OnFocus(FocusEvent _)
	{
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x4F43AB0", Offset = "0x4F43AB0", VA = "0x4F43AB0")]
	private void OnBlur(BlurEvent _)
	{
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x4F43AC0", Offset = "0x4F43AC0", VA = "0x4F43AC0")]
	private void OnKeyDown(KeyDownEvent evt)
	{
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x4F44A10", Offset = "0x4F44A10", VA = "0x4F44A10")]
	private void UpdateLabel()
	{
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x4F44580", Offset = "0x4F44580", VA = "0x4F44580")]
	private void OnValidateCommandEvent(ValidateCommandEvent evt)
	{
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x4F44790", Offset = "0x4F44790", VA = "0x4F44790")]
	private void OnExecuteCommandEvent(ExecuteCommandEvent evt)
	{
	}

	[Token(Token = "0x60004A7")]
	private void OnNavigationEvent<TEvent>(NavigationEventBase<TEvent> evt) where TEvent : NavigationEventBase<TEvent>, new()
	{
	}
}
