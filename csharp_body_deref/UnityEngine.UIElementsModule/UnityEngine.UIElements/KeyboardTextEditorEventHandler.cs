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
	[Address(RVA = "0x4C1BCB0", Offset = "0x4C1BCB0", VA = "0x4C1BCB0")]
	public KeyboardTextEditorEventHandler(TextElement textElement, UnityEngine.TextEditingUtilities editingUtilities)
	{
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x4C1BE30", Offset = "0x4C1BE30", VA = "0x4C1BE30", Slot = "4")]
	public override void ExecuteDefaultActionAtTarget(EventBase evt)
	{
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x4C1C0C0", Offset = "0x4C1C0C0", VA = "0x4C1C0C0")]
	private void OnFocus(FocusEvent _)
	{
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x4C1C180", Offset = "0x4C1C180", VA = "0x4C1C180")]
	private void OnBlur(BlurEvent _)
	{
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x4C1C190", Offset = "0x4C1C190", VA = "0x4C1C190")]
	private void OnKeyDown(KeyDownEvent evt)
	{
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x4C1D0E0", Offset = "0x4C1D0E0", VA = "0x4C1D0E0")]
	private void UpdateLabel()
	{
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x4C1CC50", Offset = "0x4C1CC50", VA = "0x4C1CC50")]
	private void OnValidateCommandEvent(ValidateCommandEvent evt)
	{
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x4C1CE60", Offset = "0x4C1CE60", VA = "0x4C1CE60")]
	private void OnExecuteCommandEvent(ExecuteCommandEvent evt)
	{
	}

	[Token(Token = "0x60004A7")]
	private void OnNavigationEvent<TEvent>(NavigationEventBase<TEvent> evt) where TEvent : NavigationEventBase<TEvent>, new()
	{
	}
}
