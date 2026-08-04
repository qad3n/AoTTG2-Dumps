// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TextSelectingManipulator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4F50E10", Offset = "0x4F50E10", VA = "0x4F50E10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60018B5")]
		[Address(RVA = "0x4F50E20", Offset = "0x4F50E20", VA = "0x4F50E20")]
		private set
		{
		}
	}

	[Token(Token = "0x17000698")]
	internal int cursorIndex
	{
		[Token(Token = "0x60018B7")]
		[Address(RVA = "0x4F51090", Offset = "0x4F51090", VA = "0x4F51090")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60018B8")]
		[Address(RVA = "0x4F510B0", Offset = "0x4F510B0", VA = "0x4F510B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000699")]
	internal int selectIndex
	{
		[Token(Token = "0x60018B9")]
		[Address(RVA = "0x4F510D0", Offset = "0x4F510D0", VA = "0x4F510D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60018BA")]
		[Address(RVA = "0x4F510F0", Offset = "0x4F510F0", VA = "0x4F510F0")]
		set
		{
		}
	}

	[Token(Token = "0x60018B6")]
	[Address(RVA = "0x4F50E30", Offset = "0x4F50E30", VA = "0x4F50E30")]
	public TextSelectingManipulator(TextElement textElement)
	{
	}

	[Token(Token = "0x60018BB")]
	[Address(RVA = "0x4F51110", Offset = "0x4F51110", VA = "0x4F51110")]
	private void OnRevealCursor()
	{
	}

	[Token(Token = "0x60018BC")]
	[Address(RVA = "0x4F51130", Offset = "0x4F51130", VA = "0x4F51130")]
	private void OnSelectIndexChange()
	{
	}

	[Token(Token = "0x60018BD")]
	[Address(RVA = "0x4F512B0", Offset = "0x4F512B0", VA = "0x4F512B0")]
	private void OnCursorIndexChange()
	{
	}

	[Token(Token = "0x60018BE")]
	[Address(RVA = "0x4F51410", Offset = "0x4F51410", VA = "0x4F51410")]
	internal bool RevealCursor()
	{
		return default(bool);
	}

	[Token(Token = "0x60018BF")]
	[Address(RVA = "0x4F51290", Offset = "0x4F51290", VA = "0x4F51290")]
	internal bool HasSelection()
	{
		return default(bool);
	}

	[Token(Token = "0x60018C0")]
	[Address(RVA = "0x4F51430", Offset = "0x4F51430", VA = "0x4F51430")]
	internal bool HasFocus()
	{
		return default(bool);
	}

	[Token(Token = "0x60018C1")]
	[Address(RVA = "0x4F514D0", Offset = "0x4F514D0", VA = "0x4F514D0")]
	internal void ExecuteDefaultActionAtTarget(EventBase evt)
	{
	}

	[Token(Token = "0x60018C2")]
	[Address(RVA = "0x4F51850", Offset = "0x4F51850", VA = "0x4F51850")]
	private void OnFocusEvent(FocusEvent evt)
	{
	}

	[Token(Token = "0x60018C3")]
	[Address(RVA = "0x4F51AC0", Offset = "0x4F51AC0", VA = "0x4F51AC0")]
	private void OnBlurEvent(BlurEvent evt)
	{
	}

	[Token(Token = "0x60018C4")]
	[Address(RVA = "0x4F51B80", Offset = "0x4F51B80", VA = "0x4F51B80")]
	private void OnKeyDown(KeyDownEvent evt)
	{
	}

	[Token(Token = "0x60018C5")]
	[Address(RVA = "0x4F51C10", Offset = "0x4F51C10", VA = "0x4F51C10")]
	private void OnPointerDownEvent(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x60018C6")]
	[Address(RVA = "0x4F51FF0", Offset = "0x4F51FF0", VA = "0x4F51FF0")]
	private void OnPointerMoveEvent(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x60018C7")]
	[Address(RVA = "0x4F52220", Offset = "0x4F52220", VA = "0x4F52220")]
	private void OnPointerUpEvent(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x60018C8")]
	[Address(RVA = "0x4F522D0", Offset = "0x4F522D0", VA = "0x4F522D0")]
	private void OnValidateCommandEvent(ValidateCommandEvent evt)
	{
	}

	[Token(Token = "0x60018C9")]
	[Address(RVA = "0x4F52490", Offset = "0x4F52490", VA = "0x4F52490")]
	private void OnExecuteCommandEvent(ExecuteCommandEvent evt)
	{
	}

	[Token(Token = "0x60018CA")]
	[Address(RVA = "0x4F525F0", Offset = "0x4F525F0", VA = "0x4F525F0")]
	private bool MoveDistanceQualifiesForDrag(Vector2 start, Vector2 current)
	{
		return default(bool);
	}
}
