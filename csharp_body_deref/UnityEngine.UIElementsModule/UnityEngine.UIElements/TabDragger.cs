// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TabDragger
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000156")]
internal class TabDragger : PointerManipulator
{
	[Token(Token = "0x400063B")]
	[FieldOffset(Offset = "0x28")]
	private float m_StartPos;

	[Token(Token = "0x400063C")]
	[FieldOffset(Offset = "0x2C")]
	private float m_LastPos;

	[Token(Token = "0x400063D")]
	[FieldOffset(Offset = "0x30")]
	private bool m_Moving;

	[Token(Token = "0x400063E")]
	[FieldOffset(Offset = "0x31")]
	private bool m_Cancelled;

	[Token(Token = "0x400063F")]
	[FieldOffset(Offset = "0x38")]
	private VisualElement m_Header;

	[Token(Token = "0x4000640")]
	[FieldOffset(Offset = "0x40")]
	private TabView m_TabView;

	[Token(Token = "0x4000641")]
	[FieldOffset(Offset = "0x48")]
	private VisualElement m_PreviewElement;

	[Token(Token = "0x4000642")]
	[FieldOffset(Offset = "0x50")]
	private TabDragLocationPreview m_LocationPreviewElement;

	[Token(Token = "0x4000643")]
	[FieldOffset(Offset = "0x58")]
	private VisualElement m_TabToMove;

	[Token(Token = "0x4000644")]
	[FieldOffset(Offset = "0x60")]
	private float m_TabToMovePos;

	[Token(Token = "0x4000645")]
	[FieldOffset(Offset = "0x68")]
	private VisualElement m_DestinationTab;

	[Token(Token = "0x4000646")]
	[FieldOffset(Offset = "0x70")]
	private bool m_MoveBeforeDestination;

	[Token(Token = "0x4000647")]
	[FieldOffset(Offset = "0x74")]
	private int m_DraggingPointerId;

	[Token(Token = "0x170001CF")]
	private TabLayout tabLayout
	{
		[Token(Token = "0x60009CC")]
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60009CD")]
		[Address(RVA = "0xCDB690", Offset = "0xCD9C90", VA = "0x180CDB690")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001D0")]
	internal bool active
	{
		[Token(Token = "0x60009CE")]
		[Address(RVA = "0x1720FF0", Offset = "0x171F5F0", VA = "0x181720FF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009CF")]
		[Address(RVA = "0x1721000", Offset = "0x171F600", VA = "0x181721000")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001D1")]
	internal bool isVertical
	{
		[Token(Token = "0x60009D0")]
		[Address(RVA = "0x1C44210", Offset = "0x1C42810", VA = "0x181C44210")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009D1")]
		[Address(RVA = "0x1C44400", Offset = "0x1C42A00", VA = "0x181C44400")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001D2")]
	internal bool moving
	{
		[Token(Token = "0x60009D2")]
		[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009D3")]
		[Address(RVA = "0x32352B0", Offset = "0x32338B0", VA = "0x1832352B0")]
		private set
		{
		}
	}

	[Token(Token = "0x60009D4")]
	[Address(RVA = "0x32351A0", Offset = "0x32337A0", VA = "0x1832351A0")]
	public TabDragger()
	{
	}

	[Token(Token = "0x60009D5")]
	[Address(RVA = "0x3234120", Offset = "0x3232720", VA = "0x183234120", Slot = "5")]
	protected override void RegisterCallbacksOnTarget()
	{
	}

	[Token(Token = "0x60009D6")]
	[Address(RVA = "0x3234410", Offset = "0x3232A10", VA = "0x183234410", Slot = "6")]
	protected override void UnregisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x60009D7")]
	[Address(RVA = "0x3233880", Offset = "0x3231E80", VA = "0x183233880")]
	private void OnPointerDown(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x60009D8")]
	[Address(RVA = "0x3233930", Offset = "0x3231F30", VA = "0x183233930")]
	private void OnPointerMove(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x60009D9")]
	[Address(RVA = "0x3233AC0", Offset = "0x32320C0", VA = "0x183233AC0")]
	private void OnPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x60009DA")]
	[Address(RVA = "0x32337A0", Offset = "0x3231DA0", VA = "0x1832337A0")]
	private void OnPointerCancel(PointerCancelEvent evt)
	{
	}

	[Token(Token = "0x60009DB")]
	[Address(RVA = "0x3233820", Offset = "0x3231E20", VA = "0x183233820")]
	private void OnPointerCaptureOut(PointerCaptureOutEvent evt)
	{
	}

	[Token(Token = "0x60009DC")]
	[Address(RVA = "0x3233BD0", Offset = "0x32321D0", VA = "0x183233BD0")]
	private void ProcessCancelEvent(EventBase evt, int pointerId)
	{
	}

	[Token(Token = "0x60009DD")]
	[Address(RVA = "0x32336D0", Offset = "0x3231CD0", VA = "0x1832336D0")]
	private void OnKeyDown(KeyDownEvent e)
	{
	}

	[Token(Token = "0x60009DE")]
	[Address(RVA = "0x3233C90", Offset = "0x3232290", VA = "0x183233C90")]
	private void ProcessDownEvent(EventBase evt, Vector2 localPosition, int pointerId)
	{
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x3233F10", Offset = "0x3232510", VA = "0x183233F10")]
	private void ProcessMoveEvent(EventBase e, Vector2 localPosition)
	{
	}

	[Token(Token = "0x60009E0")]
	[Address(RVA = "0x3234060", Offset = "0x3232660", VA = "0x183234060")]
	private void ProcessUpEvent(EventBase evt, Vector2 localPosition, int pointerId)
	{
	}

	[Token(Token = "0x60009E1")]
	[Address(RVA = "0x3232E90", Offset = "0x3231490", VA = "0x183232E90")]
	private void BeginDragMove(float pos)
	{
	}

	[Token(Token = "0x60009E2")]
	[Address(RVA = "0x3233490", Offset = "0x3231A90", VA = "0x183233490")]
	private void DragMove(float pos)
	{
	}

	[Token(Token = "0x60009E3")]
	[Address(RVA = "0x3234970", Offset = "0x3232F70", VA = "0x183234970")]
	private void UpdatePreviewPosition()
	{
	}

	[Token(Token = "0x60009E4")]
	[Address(RVA = "0x3234700", Offset = "0x3232D00", VA = "0x183234700")]
	private void UpdateMoveLocation()
	{
	}

	[Token(Token = "0x60009E5")]
	[Address(RVA = "0x32334A0", Offset = "0x3231AA0", VA = "0x1832334A0")]
	private void EndDragMove(bool cancelled)
	{
	}
}
