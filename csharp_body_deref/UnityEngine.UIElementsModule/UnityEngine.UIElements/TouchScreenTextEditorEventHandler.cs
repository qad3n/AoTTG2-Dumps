// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TouchScreenTextEditorEventHandler
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x31E2E20", Offset = "0x31E1420", VA = "0x1831E2E20")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600070F")]
		[Address(RVA = "0x31E2E60", Offset = "0x31E1460", VA = "0x1831E2E60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000143")]
	private static TouchScreenKeyboard activeTouchScreenKeyboard
	{
		[Token(Token = "0x6000710")]
		[Address(RVA = "0x31E2EA0", Offset = "0x31E14A0", VA = "0x1831E2EA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000711")]
	[Address(RVA = "0x31E2DB0", Offset = "0x31E13B0", VA = "0x1831E2DB0")]
	public TouchScreenTextEditorEventHandler(TextElement textElement, UnityEngine.TextEditingUtilities editingUtilities)
	{
	}

	[Token(Token = "0x6000712")]
	[Address(RVA = "0x31E2AD0", Offset = "0x31E10D0", VA = "0x1831E2AD0")]
	private void PollTouchScreenKeyboard()
	{
	}

	[Token(Token = "0x6000713")]
	[Address(RVA = "0x31E1840", Offset = "0x31DFE40", VA = "0x1831E1840")]
	private void DoPollTouchScreenKeyboard()
	{
	}

	[Token(Token = "0x6000714")]
	[Address(RVA = "0x31E2C60", Offset = "0x31E1260", VA = "0x1831E2C60")]
	private void UpdateStringPositionFromKeyboard()
	{
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x31E1750", Offset = "0x31DFD50", VA = "0x1831E1750")]
	private void CloseTouchScreenKeyboard()
	{
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x31E27D0", Offset = "0x31E0DD0", VA = "0x1831E27D0")]
	private void OpenTouchScreenKeyboard()
	{
	}

	[Token(Token = "0x6000717")]
	[Address(RVA = "0x31E1E20", Offset = "0x31E0420", VA = "0x1831E1E20", Slot = "6")]
	public override void HandleEventBubbleUp(EventBase evt)
	{
	}

	[Token(Token = "0x6000718")]
	[Address(RVA = "0x31E2660", Offset = "0x31E0C60", VA = "0x1831E2660")]
	private void OnPointerDownEvent()
	{
	}

	[Token(Token = "0x6000719")]
	[Address(RVA = "0x31E27A0", Offset = "0x31E0DA0", VA = "0x1831E27A0")]
	private void OnPointerUpEvent(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x600071A")]
	[Address(RVA = "0x31E2120", Offset = "0x31E0720", VA = "0x1831E2120")]
	private void OnFocusInEvent()
	{
	}

	[Token(Token = "0x600071B")]
	[Address(RVA = "0x31E2380", Offset = "0x31E0980", VA = "0x1831E2380")]
	private void OnFocusOutEvent(FocusOutEvent evt)
	{
	}
}
