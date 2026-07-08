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
		[Address(RVA = "0x4CAE270", Offset = "0x4CAE270", VA = "0x4CAE270")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002131")]
		[Address(RVA = "0x4CAE280", Offset = "0x4CAE280", VA = "0x4CAE280")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000890")]
	public bool active
	{
		[Token(Token = "0x6002132")]
		[Address(RVA = "0x4CAE290", Offset = "0x4CAE290", VA = "0x4CAE290")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002133")]
		[Address(RVA = "0x4CAE2A0", Offset = "0x4CAE2A0", VA = "0x4CAE2A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000891")]
	public bool moving
	{
		[Token(Token = "0x6002134")]
		[Address(RVA = "0x4CAE2D0", Offset = "0x4CAE2D0", VA = "0x4CAE2D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002135")]
		[Address(RVA = "0x4CAE2E0", Offset = "0x4CAE2E0", VA = "0x4CAE2E0")]
		set
		{
		}
	}

	[Token(Token = "0x14000029")]
	public event Action<ColumnMover> activeChanged
	{
		[Token(Token = "0x6002136")]
		[Address(RVA = "0x4CAE310", Offset = "0x4CAE310", VA = "0x4CAE310")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6002137")]
		[Address(RVA = "0x4CAE3C0", Offset = "0x4CAE3C0", VA = "0x4CAE3C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400002A")]
	public event Action<ColumnMover> movingChanged
	{
		[Token(Token = "0x6002138")]
		[Address(RVA = "0x4CAE470", Offset = "0x4CAE470", VA = "0x4CAE470")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6002139")]
		[Address(RVA = "0x4CAE520", Offset = "0x4CAE520", VA = "0x4CAE520")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600213A")]
	[Address(RVA = "0x4CAE5D0", Offset = "0x4CAE5D0", VA = "0x4CAE5D0")]
	public ColumnMover()
	{
	}

	[Token(Token = "0x600213B")]
	[Address(RVA = "0x4CAE660", Offset = "0x4CAE660", VA = "0x4CAE660", Slot = "5")]
	protected override void RegisterCallbacksOnTarget()
	{
	}

	[Token(Token = "0x600213C")]
	[Address(RVA = "0x4CAEB50", Offset = "0x4CAEB50", VA = "0x4CAEB50", Slot = "6")]
	protected override void UnregisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x600213D")]
	[Address(RVA = "0x4CAF040", Offset = "0x4CAF040", VA = "0x4CAF040")]
	protected void OnMouseDown(MouseDownEvent evt)
	{
	}

	[Token(Token = "0x600213E")]
	[Address(RVA = "0x4CAF2D0", Offset = "0x4CAF2D0", VA = "0x4CAF2D0")]
	protected void OnMouseMove(MouseMoveEvent evt)
	{
	}

	[Token(Token = "0x600213F")]
	[Address(RVA = "0x4CAF430", Offset = "0x4CAF430", VA = "0x4CAF430")]
	protected void OnMouseUp(MouseUpEvent evt)
	{
	}

	[Token(Token = "0x6002140")]
	[Address(RVA = "0x4CAF5C0", Offset = "0x4CAF5C0", VA = "0x4CAF5C0")]
	private void OnMouseCaptureOut(MouseCaptureOutEvent evt)
	{
	}

	[Token(Token = "0x6002141")]
	[Address(RVA = "0x4CAF700", Offset = "0x4CAF700", VA = "0x4CAF700")]
	private void OnPointerDown(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x6002142")]
	[Address(RVA = "0x4CAF810", Offset = "0x4CAF810", VA = "0x4CAF810")]
	private void OnPointerMove(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x6002143")]
	[Address(RVA = "0x4CAF910", Offset = "0x4CAF910", VA = "0x4CAF910")]
	private void OnPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x6002144")]
	[Address(RVA = "0x4CAFA20", Offset = "0x4CAFA20", VA = "0x4CAFA20")]
	private void OnPointerCancel(PointerCancelEvent evt)
	{
	}

	[Token(Token = "0x6002145")]
	[Address(RVA = "0x4CAFB60", Offset = "0x4CAFB60", VA = "0x4CAFB60")]
	private void OnPointerCaptureOut(PointerCaptureOutEvent evt)
	{
	}

	[Token(Token = "0x6002146")]
	[Address(RVA = "0x4CAFB00", Offset = "0x4CAFB00", VA = "0x4CAFB00")]
	private static bool IsNotMouseEvent(int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x6002147")]
	[Address(RVA = "0x4CAF630", Offset = "0x4CAF630", VA = "0x4CAF630")]
	protected void ProcessCancelEvent(EventBase evt, int pointerId)
	{
	}

	[Token(Token = "0x6002148")]
	[Address(RVA = "0x4CAFD80", Offset = "0x4CAFD80", VA = "0x4CAFD80")]
	private void OnKeyDown(KeyDownEvent e)
	{
	}

	[Token(Token = "0x6002149")]
	[Address(RVA = "0x4CAF0E0", Offset = "0x4CAF0E0", VA = "0x4CAF0E0")]
	private void ProcessDownEvent(EventBase evt, Vector2 localPosition, int pointerId)
	{
	}

	[Token(Token = "0x600214A")]
	[Address(RVA = "0x4CAF330", Offset = "0x4CAF330", VA = "0x4CAF330")]
	private void ProcessMoveEvent(EventBase e, Vector2 localPosition)
	{
	}

	[Token(Token = "0x600214B")]
	[Address(RVA = "0x4CAF4C0", Offset = "0x4CAF4C0", VA = "0x4CAF4C0")]
	private void ProcessUpEvent(EventBase evt, Vector2 localPosition, int pointerId)
	{
	}

	[Token(Token = "0x600214C")]
	[Address(RVA = "0x4CAFDE0", Offset = "0x4CAFDE0", VA = "0x4CAFDE0")]
	private void BeginDragMove(float pos)
	{
	}

	[Token(Token = "0x600214D")]
	[Address(RVA = "0x4CB0350", Offset = "0x4CB0350", VA = "0x4CB0350")]
	internal void DragMove(float pos)
	{
	}

	[Token(Token = "0x600214E")]
	[Address(RVA = "0x4CB0770", Offset = "0x4CB0770", VA = "0x4CB0770")]
	private void UpdatePreviewPosition()
	{
	}

	[Token(Token = "0x600214F")]
	[Address(RVA = "0x4CB0360", Offset = "0x4CB0360", VA = "0x4CB0360")]
	private void UpdateMoveLocation()
	{
	}

	[Token(Token = "0x6002150")]
	[Address(RVA = "0x4CAFC30", Offset = "0x4CAFC30", VA = "0x4CAFC30")]
	private void EndDragMove(bool cancelled)
	{
	}
}
