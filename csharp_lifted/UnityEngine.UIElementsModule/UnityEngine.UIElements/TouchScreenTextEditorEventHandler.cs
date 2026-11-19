// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TouchScreenTextEditorEventHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000F4")]
internal class TouchScreenTextEditorEventHandler : TextEditorEventHandler
{
	[Token(Token = "0x400043D")]
	[FieldOffset(Offset = "0x20")]
	private IVisualElementScheduledItem m_TouchKeyboardPoller;

	[Token(Token = "0x400043E")]
	[FieldOffset(Offset = "0x28")]
	private bool m_IsClicking;

	[Token(Token = "0x17000142")]
	internal static long Frame
	{
		[Token(Token = "0x600070E")]
		[Address(RVA = "0x6BEBBA0", Offset = "0x6BEABA0", VA = "0x6BEBBA0")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600070F")]
		[Address(RVA = "0x6BEBBE0", Offset = "0x6BEABE0", VA = "0x6BEBBE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000143")]
	private static TouchScreenKeyboard activeTouchScreenKeyboard
	{
		[Token(Token = "0x6000710")]
		[Address(RVA = "0x6BEBC20", Offset = "0x6BEAC20", VA = "0x6BEBC20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000711")]
	[Address(RVA = "0x6BEBC70", Offset = "0x6BEAC70", VA = "0x6BEBC70")]
	public TouchScreenTextEditorEventHandler(TextElement textElement, UnityEngine.TextEditingUtilities editingUtilities)
	{
	}

	[Token(Token = "0x6000712")]
	[Address(RVA = "0x6BEBCD0", Offset = "0x6BEACD0", VA = "0x6BEBCD0")]
	private void PollTouchScreenKeyboard()
	{
	}

	[Token(Token = "0x6000713")]
	[Address(RVA = "0x6BEBF40", Offset = "0x6BEAF40", VA = "0x6BEBF40")]
	private void DoPollTouchScreenKeyboard()
	{
	}

	[Token(Token = "0x6000714")]
	[Address(RVA = "0x6BECC70", Offset = "0x6BEBC70", VA = "0x6BECC70")]
	private void UpdateStringPositionFromKeyboard()
	{
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x6BECB40", Offset = "0x6BEBB40", VA = "0x6BECB40")]
	private void CloseTouchScreenKeyboard()
	{
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x6BECF20", Offset = "0x6BEBF20", VA = "0x6BECF20")]
	private void OpenTouchScreenKeyboard()
	{
	}

	[Token(Token = "0x6000717")]
	[Address(RVA = "0x6BED530", Offset = "0x6BEC530", VA = "0x6BED530", Slot = "6")]
	public override void HandleEventBubbleUp(EventBase evt)
	{
	}

	[Token(Token = "0x6000718")]
	[Address(RVA = "0x6BED7A0", Offset = "0x6BEC7A0", VA = "0x6BED7A0")]
	private void OnPointerDownEvent()
	{
	}

	[Token(Token = "0x6000719")]
	[Address(RVA = "0x6BED990", Offset = "0x6BEC990", VA = "0x6BED990")]
	private void OnPointerUpEvent(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x600071A")]
	[Address(RVA = "0x6BED9B0", Offset = "0x6BEC9B0", VA = "0x6BED9B0")]
	private void OnFocusInEvent()
	{
	}

	[Token(Token = "0x600071B")]
	[Address(RVA = "0x6BEDB50", Offset = "0x6BECB50", VA = "0x6BEDB50")]
	private void OnFocusOutEvent(FocusOutEvent evt)
	{
	}
}
