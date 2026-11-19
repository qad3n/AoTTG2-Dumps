// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TabDragger
// Update status: unchanged since the previous dump
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
	[FieldOffset(Offset = "0x24")]
	private float m_StartPos;

	[Token(Token = "0x400063C")]
	[FieldOffset(Offset = "0x28")]
	private float m_LastPos;

	[Token(Token = "0x400063D")]
	[FieldOffset(Offset = "0x2C")]
	private bool m_Moving;

	[Token(Token = "0x400063E")]
	[FieldOffset(Offset = "0x2D")]
	private bool m_Cancelled;

	[Token(Token = "0x400063F")]
	[FieldOffset(Offset = "0x30")]
	private VisualElement m_Header;

	[Token(Token = "0x4000640")]
	[FieldOffset(Offset = "0x38")]
	private TabView m_TabView;

	[Token(Token = "0x4000641")]
	[FieldOffset(Offset = "0x40")]
	private VisualElement m_PreviewElement;

	[Token(Token = "0x4000642")]
	[FieldOffset(Offset = "0x48")]
	private TabDragLocationPreview m_LocationPreviewElement;

	[Token(Token = "0x4000643")]
	[FieldOffset(Offset = "0x50")]
	private VisualElement m_TabToMove;

	[Token(Token = "0x4000644")]
	[FieldOffset(Offset = "0x58")]
	private float m_TabToMovePos;

	[Token(Token = "0x4000645")]
	[FieldOffset(Offset = "0x60")]
	private VisualElement m_DestinationTab;

	[Token(Token = "0x4000646")]
	[FieldOffset(Offset = "0x68")]
	private bool m_MoveBeforeDestination;

	[Token(Token = "0x4000647")]
	[FieldOffset(Offset = "0x6C")]
	private int m_DraggingPointerId;

	[Token(Token = "0x170001CF")]
	private TabLayout tabLayout
	{
		[Token(Token = "0x60009CC")]
		[Address(RVA = "0x6C3C7B0", Offset = "0x6C3B7B0", VA = "0x6C3C7B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60009CD")]
		[Address(RVA = "0x6C3C7C0", Offset = "0x6C3B7C0", VA = "0x6C3C7C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001D0")]
	internal bool active
	{
		[Token(Token = "0x60009CE")]
		[Address(RVA = "0x6C3C7D0", Offset = "0x6C3B7D0", VA = "0x6C3C7D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009CF")]
		[Address(RVA = "0x6C3C7E0", Offset = "0x6C3B7E0", VA = "0x6C3C7E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001D1")]
	internal bool isVertical
	{
		[Token(Token = "0x60009D0")]
		[Address(RVA = "0x6C3C7F0", Offset = "0x6C3B7F0", VA = "0x6C3C7F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009D1")]
		[Address(RVA = "0x6C3C800", Offset = "0x6C3B800", VA = "0x6C3C800")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001D2")]
	internal bool moving
	{
		[Token(Token = "0x60009D2")]
		[Address(RVA = "0x6C3C810", Offset = "0x6C3B810", VA = "0x6C3C810")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009D3")]
		[Address(RVA = "0x6C3C820", Offset = "0x6C3B820", VA = "0x6C3C820")]
		private set
		{
		}
	}

	[Token(Token = "0x60009D4")]
	[Address(RVA = "0x6C3AEF0", Offset = "0x6C39EF0", VA = "0x6C3AEF0")]
	public TabDragger()
	{
	}

	[Token(Token = "0x60009D5")]
	[Address(RVA = "0x6C3C8A0", Offset = "0x6C3B8A0", VA = "0x6C3C8A0", Slot = "5")]
	protected override void RegisterCallbacksOnTarget()
	{
	}

	[Token(Token = "0x60009D6")]
	[Address(RVA = "0x6C3CBA0", Offset = "0x6C3BBA0", VA = "0x6C3CBA0", Slot = "6")]
	protected override void UnregisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x60009D7")]
	[Address(RVA = "0x6C3CEA0", Offset = "0x6C3BEA0", VA = "0x6C3CEA0")]
	private void OnPointerDown(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x60009D8")]
	[Address(RVA = "0x6C3D1E0", Offset = "0x6C3C1E0", VA = "0x6C3D1E0")]
	private void OnPointerMove(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x60009D9")]
	[Address(RVA = "0x6C3D350", Offset = "0x6C3C350", VA = "0x6C3D350")]
	private void OnPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x60009DA")]
	[Address(RVA = "0x6C3D470", Offset = "0x6C3C470", VA = "0x6C3D470")]
	private void OnPointerCancel(PointerCancelEvent evt)
	{
	}

	[Token(Token = "0x60009DB")]
	[Address(RVA = "0x6C3D590", Offset = "0x6C3C590", VA = "0x6C3D590")]
	private void OnPointerCaptureOut(PointerCaptureOutEvent evt)
	{
	}

	[Token(Token = "0x60009DC")]
	[Address(RVA = "0x6C3D4E0", Offset = "0x6C3C4E0", VA = "0x6C3D4E0")]
	private void ProcessCancelEvent(EventBase evt, int pointerId)
	{
	}

	[Token(Token = "0x60009DD")]
	[Address(RVA = "0x6C3D790", Offset = "0x6C3C790", VA = "0x6C3D790")]
	private void OnKeyDown(KeyDownEvent e)
	{
	}

	[Token(Token = "0x60009DE")]
	[Address(RVA = "0x6C3CF30", Offset = "0x6C3BF30", VA = "0x6C3CF30")]
	private void ProcessDownEvent(EventBase evt, Vector2 localPosition, int pointerId)
	{
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x6C3D240", Offset = "0x6C3C240", VA = "0x6C3D240")]
	private void ProcessMoveEvent(EventBase e, Vector2 localPosition)
	{
	}

	[Token(Token = "0x60009E0")]
	[Address(RVA = "0x6C3D3D0", Offset = "0x6C3C3D0", VA = "0x6C3D3D0")]
	private void ProcessUpEvent(EventBase evt, Vector2 localPosition, int pointerId)
	{
	}

	[Token(Token = "0x60009E1")]
	[Address(RVA = "0x6C3D860", Offset = "0x6C3C860", VA = "0x6C3D860")]
	private void BeginDragMove(float pos)
	{
	}

	[Token(Token = "0x60009E2")]
	[Address(RVA = "0x6C3DDC0", Offset = "0x6C3CDC0", VA = "0x6C3DDC0")]
	private void DragMove(float pos)
	{
	}

	[Token(Token = "0x60009E3")]
	[Address(RVA = "0x6C3E260", Offset = "0x6C3D260", VA = "0x6C3E260")]
	private void UpdatePreviewPosition()
	{
	}

	[Token(Token = "0x60009E4")]
	[Address(RVA = "0x6C3DFC0", Offset = "0x6C3CFC0", VA = "0x6C3DFC0")]
	private void UpdateMoveLocation()
	{
	}

	[Token(Token = "0x60009E5")]
	[Address(RVA = "0x6C3D5F0", Offset = "0x6C3C5F0", VA = "0x6C3D5F0")]
	private void EndDragMove(bool cancelled)
	{
	}
}
