// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.KeyboardTextEditorEventHandler
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x6BE9030", Offset = "0x6BE8030", VA = "0x6BE9030")]
	public KeyboardTextEditorEventHandler(TextElement textElement, UnityEngine.TextEditingUtilities editingUtilities)
	{
	}

	[Token(Token = "0x6000689")]
	[Address(RVA = "0x6BE9160", Offset = "0x6BE8160", VA = "0x6BE9160", Slot = "6")]
	public override void HandleEventBubbleUp(EventBase evt)
	{
	}

	[Token(Token = "0x600068A")]
	[Address(RVA = "0x6BE9F80", Offset = "0x6BE8F80", VA = "0x6BE9F80")]
	private void OnFocus(FocusEvent _)
	{
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x6BEA060", Offset = "0x6BE9060", VA = "0x6BEA060")]
	private void OnBlur(BlurEvent _)
	{
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x6BEA0C0", Offset = "0x6BE90C0", VA = "0x6BEA0C0")]
	private void OnIMEInput(IMEEvent _)
	{
	}

	[Token(Token = "0x600068D")]
	[Address(RVA = "0x6BE9430", Offset = "0x6BE8430", VA = "0x6BE9430")]
	private void OnKeyDown(KeyDownEvent evt)
	{
	}

	[Token(Token = "0x600068E")]
	[Address(RVA = "0x6BEA440", Offset = "0x6BE9440", VA = "0x6BEA440")]
	private void ApplyTextIfNeeded()
	{
	}

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x6BEA110", Offset = "0x6BE9110", VA = "0x6BEA110")]
	private void UpdateLabel(bool generatePreview)
	{
	}

	[Token(Token = "0x6000690")]
	[Address(RVA = "0x6BE9B00", Offset = "0x6BE8B00", VA = "0x6BE9B00")]
	private void OnValidateCommandEvent(ValidateCommandEvent evt)
	{
	}

	[Token(Token = "0x6000691")]
	[Address(RVA = "0x6BE9D10", Offset = "0x6BE8D10", VA = "0x6BE9D10")]
	private void OnExecuteCommandEvent(ExecuteCommandEvent evt)
	{
	}

	[Token(Token = "0x6000692")]
	private void OnNavigationEvent<TEvent>(NavigationEventBase<TEvent> evt) where TEvent : NavigationEventBase<TEvent>, new()
	{
	}
}
