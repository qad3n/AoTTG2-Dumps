// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TextSelectingManipulator
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x20004AA")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal class TextSelectingManipulator
{
	[Token(Token = "0x4000FF3")]
	[FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal UnityEngine.TextSelectingUtilities m_SelectingUtilities;

	[Token(Token = "0x4000FF4")]
	[FieldOffset(Offset = "0x18")]
	private bool selectAllOnMouseUp;

	[Token(Token = "0x4000FF5")]
	[FieldOffset(Offset = "0x20")]
	private TextElement m_TextElement;

	[Token(Token = "0x4000FF6")]
	[FieldOffset(Offset = "0x28")]
	private Vector2 m_ClickStartPosition;

	[Token(Token = "0x4000FF7")]
	[FieldOffset(Offset = "0x30")]
	private bool m_Dragged;

	[Token(Token = "0x4000FF8")]
	[FieldOffset(Offset = "0x31")]
	private bool m_IsClicking;

	[Token(Token = "0x4000FF9")]
	private const int k_DragThresholdSqr = 16;

	[Token(Token = "0x4000FFA")]
	[FieldOffset(Offset = "0x34")]
	private int m_ConsecutiveMouseDownCount;

	[Token(Token = "0x4000FFB")]
	[FieldOffset(Offset = "0x38")]
	private long m_LastMouseDownTimeStamp;

	[Token(Token = "0x17000997")]
	internal bool isClicking
	{
		[Token(Token = "0x600247D")]
		[Address(RVA = "0x1D6A540", Offset = "0x1D68B40", VA = "0x181D6A540")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600247E")]
		[Address(RVA = "0x3141910", Offset = "0x313FF10", VA = "0x183141910")]
		private set
		{
		}
	}

	[Token(Token = "0x17000998")]
	internal int cursorIndex
	{
		[Token(Token = "0x6002480")]
		[Address(RVA = "0x31418B0", Offset = "0x313FEB0", VA = "0x1831418B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002481")]
		[Address(RVA = "0x31418F0", Offset = "0x313FEF0", VA = "0x1831418F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000999")]
	internal int selectIndex
	{
		[Token(Token = "0x6002482")]
		[Address(RVA = "0x31418D0", Offset = "0x313FED0", VA = "0x1831418D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002483")]
		[Address(RVA = "0x3141920", Offset = "0x313FF20", VA = "0x183141920")]
		set
		{
		}
	}

	[Token(Token = "0x600247F")]
	[Address(RVA = "0x31415D0", Offset = "0x313FBD0", VA = "0x1831415D0")]
	public TextSelectingManipulator(TextElement textElement)
	{
	}

	[Token(Token = "0x6002484")]
	[Address(RVA = "0x31412F0", Offset = "0x313F8F0", VA = "0x1831412F0")]
	private void OnRevealCursor()
	{
	}

	[Token(Token = "0x6002485")]
	[Address(RVA = "0x3141320", Offset = "0x313F920", VA = "0x183141320")]
	private void OnSelectIndexChange()
	{
	}

	[Token(Token = "0x6002486")]
	[Address(RVA = "0x31409A0", Offset = "0x313EFA0", VA = "0x1831409A0")]
	private void OnCursorIndexChange()
	{
	}

	[Token(Token = "0x6002487")]
	[Address(RVA = "0x31415B0", Offset = "0x313FBB0", VA = "0x1831415B0")]
	internal bool RevealCursor()
	{
		return default(bool);
	}

	[Token(Token = "0x6002488")]
	[Address(RVA = "0x31408D0", Offset = "0x313EED0", VA = "0x1831408D0")]
	internal bool HasSelection()
	{
		return default(bool);
	}

	[Token(Token = "0x6002489")]
	[Address(RVA = "0x31408B0", Offset = "0x313EEB0", VA = "0x1831408B0")]
	internal bool HasFocus()
	{
		return default(bool);
	}

	[Token(Token = "0x600248A")]
	[Address(RVA = "0x31401A0", Offset = "0x313E7A0", VA = "0x1831401A0")]
	internal void HandleEventBubbleUp(EventBase evt)
	{
	}

	[Token(Token = "0x600248B")]
	[Address(RVA = "0x3140BC0", Offset = "0x313F1C0", VA = "0x183140BC0")]
	private void OnFocusEvent()
	{
	}

	[Token(Token = "0x600248C")]
	[Address(RVA = "0x3140940", Offset = "0x313EF40", VA = "0x183140940")]
	private void OnBlurEvent()
	{
	}

	[Token(Token = "0x600248D")]
	[Address(RVA = "0x3140C80", Offset = "0x313F280", VA = "0x183140C80")]
	private void OnKeyDown(KeyDownEvent evt)
	{
	}

	[Token(Token = "0x600248E")]
	[Address(RVA = "0x3140D10", Offset = "0x313F310", VA = "0x183140D10")]
	private void OnPointerDownEvent(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x600248F")]
	[Address(RVA = "0x3141080", Offset = "0x313F680", VA = "0x183141080")]
	private void OnPointerMoveEvent(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x6002490")]
	[Address(RVA = "0x3141240", Offset = "0x313F840", VA = "0x183141240")]
	private void OnPointerUpEvent(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x6002491")]
	[Address(RVA = "0x3141430", Offset = "0x313FA30", VA = "0x183141430")]
	private void OnValidateCommandEvent(ValidateCommandEvent evt)
	{
	}

	[Token(Token = "0x6002492")]
	[Address(RVA = "0x3140AB0", Offset = "0x313F0B0", VA = "0x183140AB0")]
	private void OnExecuteCommandEvent(ExecuteCommandEvent evt)
	{
	}

	[Token(Token = "0x6002493")]
	[Address(RVA = "0x31408F0", Offset = "0x313EEF0", VA = "0x1831408F0")]
	private bool MoveDistanceQualifiesForDrag(Vector2 start, Vector2 current)
	{
		return default(bool);
	}
}
