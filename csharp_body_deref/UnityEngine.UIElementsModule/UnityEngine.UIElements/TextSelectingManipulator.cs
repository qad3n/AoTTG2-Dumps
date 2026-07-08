using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20003EB")]
internal class TextSelectingManipulator
{
	[Token(Token = "0x4000BD1")]
	[FieldOffset(Offset = "0x10")]
	internal UnityEngine.TextSelectingUtilities m_SelectingUtilities;

	[Token(Token = "0x4000BD2")]
	[FieldOffset(Offset = "0x18")]
	private bool selectAllOnMouseUp;

	[Token(Token = "0x4000BD3")]
	[FieldOffset(Offset = "0x20")]
	private TextElement m_TextElement;

	[Token(Token = "0x4000BD4")]
	[FieldOffset(Offset = "0x28")]
	private Vector2 m_ClickStartPosition;

	[Token(Token = "0x4000BD5")]
	[FieldOffset(Offset = "0x30")]
	private bool m_Dragged;

	[Token(Token = "0x4000BD6")]
	[FieldOffset(Offset = "0x31")]
	private bool m_IsClicking;

	[Token(Token = "0x4000BD7")]
	private const int k_DragThresholdSqr = 16;

	[Token(Token = "0x4000BD8")]
	[FieldOffset(Offset = "0x34")]
	private int m_ConsecutiveMouseDownCount;

	[Token(Token = "0x4000BD9")]
	[FieldOffset(Offset = "0x38")]
	private long m_LastMouseDownTimeStamp;

	[Token(Token = "0x4000BDA")]
	[FieldOffset(Offset = "0x40")]
	private readonly Event m_ImguiEvent;

	[Token(Token = "0x17000697")]
	internal bool isClicking
	{
		[Token(Token = "0x60018B4")]
		[Address(RVA = "0x4C294E0", Offset = "0x4C294E0", VA = "0x4C294E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60018B5")]
		[Address(RVA = "0x4C294F0", Offset = "0x4C294F0", VA = "0x4C294F0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000698")]
	internal int cursorIndex
	{
		[Token(Token = "0x60018B7")]
		[Address(RVA = "0x4C29760", Offset = "0x4C29760", VA = "0x4C29760")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60018B8")]
		[Address(RVA = "0x4C29780", Offset = "0x4C29780", VA = "0x4C29780")]
		set
		{
		}
	}

	[Token(Token = "0x17000699")]
	internal int selectIndex
	{
		[Token(Token = "0x60018B9")]
		[Address(RVA = "0x4C297A0", Offset = "0x4C297A0", VA = "0x4C297A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60018BA")]
		[Address(RVA = "0x4C297C0", Offset = "0x4C297C0", VA = "0x4C297C0")]
		set
		{
		}
	}

	[Token(Token = "0x60018B6")]
	[Address(RVA = "0x4C29500", Offset = "0x4C29500", VA = "0x4C29500")]
	public TextSelectingManipulator(TextElement textElement)
	{
	}

	[Token(Token = "0x60018BB")]
	[Address(RVA = "0x4C297E0", Offset = "0x4C297E0", VA = "0x4C297E0")]
	private void OnRevealCursor()
	{
	}

	[Token(Token = "0x60018BC")]
	[Address(RVA = "0x4C29800", Offset = "0x4C29800", VA = "0x4C29800")]
	private void OnSelectIndexChange()
	{
	}

	[Token(Token = "0x60018BD")]
	[Address(RVA = "0x4C29980", Offset = "0x4C29980", VA = "0x4C29980")]
	private void OnCursorIndexChange()
	{
	}

	[Token(Token = "0x60018BE")]
	[Address(RVA = "0x4C29AE0", Offset = "0x4C29AE0", VA = "0x4C29AE0")]
	internal bool RevealCursor()
	{
		return default(bool);
	}

	[Token(Token = "0x60018BF")]
	[Address(RVA = "0x4C29960", Offset = "0x4C29960", VA = "0x4C29960")]
	internal bool HasSelection()
	{
		return default(bool);
	}

	[Token(Token = "0x60018C0")]
	[Address(RVA = "0x4C29B00", Offset = "0x4C29B00", VA = "0x4C29B00")]
	internal bool HasFocus()
	{
		return default(bool);
	}

	[Token(Token = "0x60018C1")]
	[Address(RVA = "0x4C29BA0", Offset = "0x4C29BA0", VA = "0x4C29BA0")]
	internal void ExecuteDefaultActionAtTarget(EventBase evt)
	{
	}

	[Token(Token = "0x60018C2")]
	[Address(RVA = "0x4C29F20", Offset = "0x4C29F20", VA = "0x4C29F20")]
	private void OnFocusEvent(FocusEvent evt)
	{
	}

	[Token(Token = "0x60018C3")]
	[Address(RVA = "0x4C2A190", Offset = "0x4C2A190", VA = "0x4C2A190")]
	private void OnBlurEvent(BlurEvent evt)
	{
	}

	[Token(Token = "0x60018C4")]
	[Address(RVA = "0x4C2A250", Offset = "0x4C2A250", VA = "0x4C2A250")]
	private void OnKeyDown(KeyDownEvent evt)
	{
	}

	[Token(Token = "0x60018C5")]
	[Address(RVA = "0x4C2A2E0", Offset = "0x4C2A2E0", VA = "0x4C2A2E0")]
	private void OnPointerDownEvent(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x60018C6")]
	[Address(RVA = "0x4C2A6C0", Offset = "0x4C2A6C0", VA = "0x4C2A6C0")]
	private void OnPointerMoveEvent(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x60018C7")]
	[Address(RVA = "0x4C2A8F0", Offset = "0x4C2A8F0", VA = "0x4C2A8F0")]
	private void OnPointerUpEvent(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x60018C8")]
	[Address(RVA = "0x4C2A9A0", Offset = "0x4C2A9A0", VA = "0x4C2A9A0")]
	private void OnValidateCommandEvent(ValidateCommandEvent evt)
	{
	}

	[Token(Token = "0x60018C9")]
	[Address(RVA = "0x4C2AB60", Offset = "0x4C2AB60", VA = "0x4C2AB60")]
	private void OnExecuteCommandEvent(ExecuteCommandEvent evt)
	{
	}

	[Token(Token = "0x60018CA")]
	[Address(RVA = "0x4C2ACC0", Offset = "0x4C2ACC0", VA = "0x4C2ACC0")]
	private bool MoveDistanceQualifiesForDrag(Vector2 start, Vector2 current)
	{
		return default(bool);
	}
}
