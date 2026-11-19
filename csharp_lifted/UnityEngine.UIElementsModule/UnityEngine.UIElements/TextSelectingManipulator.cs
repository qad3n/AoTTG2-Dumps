// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TextSelectingManipulator
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6B411E0", Offset = "0x6B401E0", VA = "0x6B411E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600247E")]
		[Address(RVA = "0x6B411F0", Offset = "0x6B401F0", VA = "0x6B411F0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000998")]
	internal int cursorIndex
	{
		[Token(Token = "0x6002480")]
		[Address(RVA = "0x6B41440", Offset = "0x6B40440", VA = "0x6B41440")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002481")]
		[Address(RVA = "0x6B41460", Offset = "0x6B40460", VA = "0x6B41460")]
		set
		{
		}
	}

	[Token(Token = "0x17000999")]
	internal int selectIndex
	{
		[Token(Token = "0x6002482")]
		[Address(RVA = "0x6B41480", Offset = "0x6B40480", VA = "0x6B41480")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002483")]
		[Address(RVA = "0x6B414A0", Offset = "0x6B404A0", VA = "0x6B414A0")]
		set
		{
		}
	}

	[Token(Token = "0x600247F")]
	[Address(RVA = "0x6B41200", Offset = "0x6B40200", VA = "0x6B41200")]
	public TextSelectingManipulator(TextElement textElement)
	{
	}

	[Token(Token = "0x6002484")]
	[Address(RVA = "0x6B414C0", Offset = "0x6B404C0", VA = "0x6B414C0")]
	private void OnRevealCursor()
	{
	}

	[Token(Token = "0x6002485")]
	[Address(RVA = "0x6B414E0", Offset = "0x6B404E0", VA = "0x6B414E0")]
	private void OnSelectIndexChange()
	{
	}

	[Token(Token = "0x6002486")]
	[Address(RVA = "0x6B41670", Offset = "0x6B40670", VA = "0x6B41670")]
	private void OnCursorIndexChange()
	{
	}

	[Token(Token = "0x6002487")]
	[Address(RVA = "0x6B417E0", Offset = "0x6B407E0", VA = "0x6B417E0")]
	internal bool RevealCursor()
	{
		return default(bool);
	}

	[Token(Token = "0x6002488")]
	[Address(RVA = "0x6B41650", Offset = "0x6B40650", VA = "0x6B41650")]
	internal bool HasSelection()
	{
		return default(bool);
	}

	[Token(Token = "0x6002489")]
	[Address(RVA = "0x6B41800", Offset = "0x6B40800", VA = "0x6B41800")]
	internal bool HasFocus()
	{
		return default(bool);
	}

	[Token(Token = "0x600248A")]
	[Address(RVA = "0x6B41820", Offset = "0x6B40820", VA = "0x6B41820")]
	internal void HandleEventBubbleUp(EventBase evt)
	{
	}

	[Token(Token = "0x600248B")]
	[Address(RVA = "0x6B41AF0", Offset = "0x6B40AF0", VA = "0x6B41AF0")]
	private void OnFocusEvent()
	{
	}

	[Token(Token = "0x600248C")]
	[Address(RVA = "0x6B41C70", Offset = "0x6B40C70", VA = "0x6B41C70")]
	private void OnBlurEvent()
	{
	}

	[Token(Token = "0x600248D")]
	[Address(RVA = "0x6B41FC0", Offset = "0x6B40FC0", VA = "0x6B41FC0")]
	private void OnKeyDown(KeyDownEvent evt)
	{
	}

	[Token(Token = "0x600248E")]
	[Address(RVA = "0x6B42050", Offset = "0x6B41050", VA = "0x6B42050")]
	private void OnPointerDownEvent(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x600248F")]
	[Address(RVA = "0x6B42500", Offset = "0x6B41500", VA = "0x6B42500")]
	private void OnPointerMoveEvent(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x6002490")]
	[Address(RVA = "0x6B42780", Offset = "0x6B41780", VA = "0x6B42780")]
	private void OnPointerUpEvent(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x6002491")]
	[Address(RVA = "0x6B41D40", Offset = "0x6B40D40", VA = "0x6B41D40")]
	private void OnValidateCommandEvent(ValidateCommandEvent evt)
	{
	}

	[Token(Token = "0x6002492")]
	[Address(RVA = "0x6B41EB0", Offset = "0x6B40EB0", VA = "0x6B41EB0")]
	private void OnExecuteCommandEvent(ExecuteCommandEvent evt)
	{
	}

	[Token(Token = "0x6002493")]
	[Address(RVA = "0x6B42830", Offset = "0x6B41830", VA = "0x6B42830")]
	private bool MoveDistanceQualifiesForDrag(Vector2 start, Vector2 current)
	{
		return default(bool);
	}
}
