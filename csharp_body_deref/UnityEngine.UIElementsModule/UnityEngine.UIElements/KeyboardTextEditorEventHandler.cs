// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.KeyboardTextEditorEventHandler
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000EB")]
internal class KeyboardTextEditorEventHandler : TextEditorEventHandler
{
	[Token(Token = "0x40003EF")]
	[FieldOffset(Offset = "0x20")]
	internal bool m_Changed;

	[Token(Token = "0x40003F0")]
	[FieldOffset(Offset = "0x21")]
	internal bool m_ShouldInvokeUpdateValue;

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x31DEEF0", Offset = "0x31DD4F0", VA = "0x1831DEEF0")]
	public KeyboardTextEditorEventHandler(TextElement textElement, UnityEngine.TextEditingUtilities editingUtilities)
	{
	}

	[Token(Token = "0x6000689")]
	[Address(RVA = "0x31DDB40", Offset = "0x31DC140", VA = "0x1831DDB40", Slot = "6")]
	public override void HandleEventBubbleUp(EventBase evt)
	{
	}

	[Token(Token = "0x600068A")]
	[Address(RVA = "0x31DE300", Offset = "0x31DC900", VA = "0x1831DE300")]
	private void OnFocus(FocusEvent _)
	{
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x31DE0C0", Offset = "0x31DC6C0", VA = "0x1831DE0C0")]
	private void OnBlur(BlurEvent _)
	{
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x31DE390", Offset = "0x31DC990", VA = "0x1831DE390")]
	private void OnIMEInput(IMEEvent _)
	{
	}

	[Token(Token = "0x600068D")]
	[Address(RVA = "0x31DE3F0", Offset = "0x31DC9F0", VA = "0x1831DE3F0")]
	private void OnKeyDown(KeyDownEvent evt)
	{
	}

	[Token(Token = "0x600068E")]
	[Address(RVA = "0x31DDAC0", Offset = "0x31DC0C0", VA = "0x1831DDAC0")]
	private void ApplyTextIfNeeded()
	{
	}

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x31DEC90", Offset = "0x31DD290", VA = "0x1831DEC90")]
	private void UpdateLabel(bool generatePreview)
	{
	}

	[Token(Token = "0x6000690")]
	[Address(RVA = "0x31DEAD0", Offset = "0x31DD0D0", VA = "0x1831DEAD0")]
	private void OnValidateCommandEvent(ValidateCommandEvent evt)
	{
	}

	[Token(Token = "0x6000691")]
	[Address(RVA = "0x31DE110", Offset = "0x31DC710", VA = "0x1831DE110")]
	private void OnExecuteCommandEvent(ExecuteCommandEvent evt)
	{
	}

	[Token(Token = "0x6000692")]
	private void OnNavigationEvent<TEvent>(NavigationEventBase<TEvent> evt) where TEvent : NavigationEventBase<TEvent>, new()
	{
	}
}
