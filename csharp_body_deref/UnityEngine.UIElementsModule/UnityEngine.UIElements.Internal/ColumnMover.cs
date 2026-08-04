// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Internal.ColumnMover
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Internal;

[Token(Token = "0x200056A")]
internal class ColumnMover : PointerManipulator
{
	[Token(Token = "0x40012A0")]
	[FieldOffset(Offset = "0x30")]
	private float m_StartPos;

	[Token(Token = "0x40012A1")]
	[FieldOffset(Offset = "0x34")]
	private float m_LastPos;

	[Token(Token = "0x40012A2")]
	[FieldOffset(Offset = "0x38")]
	private bool m_Active;

	[Token(Token = "0x40012A3")]
	[FieldOffset(Offset = "0x39")]
	private bool m_Moving;

	[Token(Token = "0x40012A4")]
	[FieldOffset(Offset = "0x3A")]
	private bool m_Cancelled;

	[Token(Token = "0x40012A5")]
	[FieldOffset(Offset = "0x40")]
	private MultiColumnCollectionHeader m_Header;

	[Token(Token = "0x40012A6")]
	[FieldOffset(Offset = "0x48")]
	private VisualElement m_PreviewElement;

	[Token(Token = "0x40012A7")]
	[FieldOffset(Offset = "0x50")]
	private MultiColumnHeaderColumnMoveLocationPreview m_LocationPreviewElement;

	[Token(Token = "0x40012A8")]
	[FieldOffset(Offset = "0x58")]
	private Column m_ColumnToMove;

	[Token(Token = "0x40012A9")]
	[FieldOffset(Offset = "0x60")]
	private float m_ColumnToMovePos;

	[Token(Token = "0x40012AA")]
	[FieldOffset(Offset = "0x64")]
	private float m_ColumnToMoveWidth;

	[Token(Token = "0x40012AB")]
	[FieldOffset(Offset = "0x68")]
	private Column m_DestinationColumn;

	[Token(Token = "0x40012AC")]
	[FieldOffset(Offset = "0x70")]
	private bool m_MoveBeforeDestination;

	[Token(Token = "0x1700088F")]
	public ColumnLayout columnLayout
	{
		[Token(Token = "0x6002130")]
		[Address(RVA = "0x4FD5BA0", Offset = "0x4FD5BA0", VA = "0x4FD5BA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002131")]
		[Address(RVA = "0x4FD5BB0", Offset = "0x4FD5BB0", VA = "0x4FD5BB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000890")]
	public bool active
	{
		[Token(Token = "0x6002132")]
		[Address(RVA = "0x4FD5BC0", Offset = "0x4FD5BC0", VA = "0x4FD5BC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002133")]
		[Address(RVA = "0x4FD5BD0", Offset = "0x4FD5BD0", VA = "0x4FD5BD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000891")]
	public bool moving
	{
		[Token(Token = "0x6002134")]
		[Address(RVA = "0x4FD5C00", Offset = "0x4FD5C00", VA = "0x4FD5C00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002135")]
		[Address(RVA = "0x4FD5C10", Offset = "0x4FD5C10", VA = "0x4FD5C10")]
		set
		{
		}
	}

	[Token(Token = "0x14000029")]
	public event Action<ColumnMover> activeChanged
	{
		[Token(Token = "0x6002136")]
		[Address(RVA = "0x4FD5C40", Offset = "0x4FD5C40", VA = "0x4FD5C40")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6002137")]
		[Address(RVA = "0x4FD5CF0", Offset = "0x4FD5CF0", VA = "0x4FD5CF0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400002A")]
	public event Action<ColumnMover> movingChanged
	{
		[Token(Token = "0x6002138")]
		[Address(RVA = "0x4FD5DA0", Offset = "0x4FD5DA0", VA = "0x4FD5DA0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6002139")]
		[Address(RVA = "0x4FD5E50", Offset = "0x4FD5E50", VA = "0x4FD5E50")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600213A")]
	[Address(RVA = "0x4FD5F00", Offset = "0x4FD5F00", VA = "0x4FD5F00")]
	public ColumnMover()
	{
	}

	[Token(Token = "0x600213B")]
	[Address(RVA = "0x4FD5F90", Offset = "0x4FD5F90", VA = "0x4FD5F90", Slot = "5")]
	protected override void RegisterCallbacksOnTarget()
	{
	}

	[Token(Token = "0x600213C")]
	[Address(RVA = "0x4FD6480", Offset = "0x4FD6480", VA = "0x4FD6480", Slot = "6")]
	protected override void UnregisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x600213D")]
	[Address(RVA = "0x4FD6970", Offset = "0x4FD6970", VA = "0x4FD6970")]
	protected void OnMouseDown(MouseDownEvent evt)
	{
	}

	[Token(Token = "0x600213E")]
	[Address(RVA = "0x4FD6C00", Offset = "0x4FD6C00", VA = "0x4FD6C00")]
	protected void OnMouseMove(MouseMoveEvent evt)
	{
	}

	[Token(Token = "0x600213F")]
	[Address(RVA = "0x4FD6D60", Offset = "0x4FD6D60", VA = "0x4FD6D60")]
	protected void OnMouseUp(MouseUpEvent evt)
	{
	}

	[Token(Token = "0x6002140")]
	[Address(RVA = "0x4FD6EF0", Offset = "0x4FD6EF0", VA = "0x4FD6EF0")]
	private void OnMouseCaptureOut(MouseCaptureOutEvent evt)
	{
	}

	[Token(Token = "0x6002141")]
	[Address(RVA = "0x4FD7030", Offset = "0x4FD7030", VA = "0x4FD7030")]
	private void OnPointerDown(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x6002142")]
	[Address(RVA = "0x4FD7140", Offset = "0x4FD7140", VA = "0x4FD7140")]
	private void OnPointerMove(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x6002143")]
	[Address(RVA = "0x4FD7240", Offset = "0x4FD7240", VA = "0x4FD7240")]
	private void OnPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x6002144")]
	[Address(RVA = "0x4FD7350", Offset = "0x4FD7350", VA = "0x4FD7350")]
	private void OnPointerCancel(PointerCancelEvent evt)
	{
	}

	[Token(Token = "0x6002145")]
	[Address(RVA = "0x4FD7490", Offset = "0x4FD7490", VA = "0x4FD7490")]
	private void OnPointerCaptureOut(PointerCaptureOutEvent evt)
	{
	}

	[Token(Token = "0x6002146")]
	[Address(RVA = "0x4FD7430", Offset = "0x4FD7430", VA = "0x4FD7430")]
	private static bool IsNotMouseEvent(int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x6002147")]
	[Address(RVA = "0x4FD6F60", Offset = "0x4FD6F60", VA = "0x4FD6F60")]
	protected void ProcessCancelEvent(EventBase evt, int pointerId)
	{
	}

	[Token(Token = "0x6002148")]
	[Address(RVA = "0x4FD76B0", Offset = "0x4FD76B0", VA = "0x4FD76B0")]
	private void OnKeyDown(KeyDownEvent e)
	{
	}

	[Token(Token = "0x6002149")]
	[Address(RVA = "0x4FD6A10", Offset = "0x4FD6A10", VA = "0x4FD6A10")]
	private void ProcessDownEvent(EventBase evt, Vector2 localPosition, int pointerId)
	{
	}

	[Token(Token = "0x600214A")]
	[Address(RVA = "0x4FD6C60", Offset = "0x4FD6C60", VA = "0x4FD6C60")]
	private void ProcessMoveEvent(EventBase e, Vector2 localPosition)
	{
	}

	[Token(Token = "0x600214B")]
	[Address(RVA = "0x4FD6DF0", Offset = "0x4FD6DF0", VA = "0x4FD6DF0")]
	private void ProcessUpEvent(EventBase evt, Vector2 localPosition, int pointerId)
	{
	}

	[Token(Token = "0x600214C")]
	[Address(RVA = "0x4FD7710", Offset = "0x4FD7710", VA = "0x4FD7710")]
	private void BeginDragMove(float pos)
	{
	}

	[Token(Token = "0x600214D")]
	[Address(RVA = "0x4FD7C80", Offset = "0x4FD7C80", VA = "0x4FD7C80")]
	internal void DragMove(float pos)
	{
	}

	[Token(Token = "0x600214E")]
	[Address(RVA = "0x4FD80A0", Offset = "0x4FD80A0", VA = "0x4FD80A0")]
	private void UpdatePreviewPosition()
	{
	}

	[Token(Token = "0x600214F")]
	[Address(RVA = "0x4FD7C90", Offset = "0x4FD7C90", VA = "0x4FD7C90")]
	private void UpdateMoveLocation()
	{
	}

	[Token(Token = "0x6002150")]
	[Address(RVA = "0x4FD7560", Offset = "0x4FD7560", VA = "0x4FD7560")]
	private void EndDragMove(bool cancelled)
	{
	}
}
