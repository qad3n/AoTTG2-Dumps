// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Internal.ColumnMover
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Internal;

[Token(Token = "0x2000665")]
internal class ColumnMover : PointerManipulator
{
	[Token(Token = "0x400185A")]
	[FieldOffset(Offset = "0x28")]
	private float m_StartPos;

	[Token(Token = "0x400185B")]
	[FieldOffset(Offset = "0x2C")]
	private float m_LastPos;

	[Token(Token = "0x400185C")]
	[FieldOffset(Offset = "0x30")]
	private bool m_Active;

	[Token(Token = "0x400185D")]
	[FieldOffset(Offset = "0x31")]
	private bool m_Moving;

	[Token(Token = "0x400185E")]
	[FieldOffset(Offset = "0x32")]
	private bool m_Cancelled;

	[Token(Token = "0x400185F")]
	[FieldOffset(Offset = "0x38")]
	private MultiColumnCollectionHeader m_Header;

	[Token(Token = "0x4001860")]
	[FieldOffset(Offset = "0x40")]
	private VisualElement m_PreviewElement;

	[Token(Token = "0x4001861")]
	[FieldOffset(Offset = "0x48")]
	private MultiColumnHeaderColumnMoveLocationPreview m_LocationPreviewElement;

	[Token(Token = "0x4001862")]
	[FieldOffset(Offset = "0x50")]
	private Column m_ColumnToMove;

	[Token(Token = "0x4001863")]
	[FieldOffset(Offset = "0x58")]
	private float m_ColumnToMovePos;

	[Token(Token = "0x4001864")]
	[FieldOffset(Offset = "0x5C")]
	private float m_ColumnToMoveWidth;

	[Token(Token = "0x4001865")]
	[FieldOffset(Offset = "0x60")]
	private Column m_DestinationColumn;

	[Token(Token = "0x4001866")]
	[FieldOffset(Offset = "0x68")]
	private bool m_MoveBeforeDestination;

	[Token(Token = "0x4001868")]
	[FieldOffset(Offset = "0x78")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<ColumnMover> m_activeChanged;

	[Token(Token = "0x4001869")]
	[FieldOffset(Offset = "0x80")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<ColumnMover> m_movingChanged;

	[Token(Token = "0x17000BB4")]
	public ColumnLayout columnLayout
	{
		[Token(Token = "0x6002EC4")]
		[Address(RVA = "0xB48770", Offset = "0xB46D70", VA = "0x180B48770")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002EC5")]
		[Address(RVA = "0xB48780", Offset = "0xB46D80", VA = "0x180B48780")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000BB5")]
	public bool active
	{
		[Token(Token = "0x6002EC6")]
		[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002EC7")]
		[Address(RVA = "0x31FD4B0", Offset = "0x31FBAB0", VA = "0x1831FD4B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000BB6")]
	public bool moving
	{
		[Token(Token = "0x6002EC8")]
		[Address(RVA = "0x1D6A540", Offset = "0x1D68B40", VA = "0x181D6A540")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002EC9")]
		[Address(RVA = "0x31FD4E0", Offset = "0x31FBAE0", VA = "0x1831FD4E0")]
		set
		{
		}
	}

	[Token(Token = "0x14000032")]
	public event Action<ColumnMover> activeChanged
	{
		[Token(Token = "0x6002ECA")]
		[Address(RVA = "0x31FD1F0", Offset = "0x31FB7F0", VA = "0x1831FD1F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6002ECB")]
		[Address(RVA = "0x31FD350", Offset = "0x31FB950", VA = "0x1831FD350")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000033")]
	public event Action<ColumnMover> movingChanged
	{
		[Token(Token = "0x6002ECC")]
		[Address(RVA = "0x31FD2A0", Offset = "0x31FB8A0", VA = "0x1831FD2A0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6002ECD")]
		[Address(RVA = "0x31FD400", Offset = "0x31FBA00", VA = "0x1831FD400")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6002ECE")]
	[Address(RVA = "0x31FD120", Offset = "0x31FB720", VA = "0x1831FD120")]
	public ColumnMover()
	{
	}

	[Token(Token = "0x6002ECF")]
	[Address(RVA = "0x31FC660", Offset = "0x31FAC60", VA = "0x1831FC660", Slot = "5")]
	protected override void RegisterCallbacksOnTarget()
	{
	}

	[Token(Token = "0x6002ED0")]
	[Address(RVA = "0x31FC950", Offset = "0x31FAF50", VA = "0x1831FC950", Slot = "6")]
	protected override void UnregisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x6002ED1")]
	[Address(RVA = "0x31FBD60", Offset = "0x31FA360", VA = "0x1831FBD60")]
	private void OnPointerDown(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x6002ED2")]
	[Address(RVA = "0x31FBE00", Offset = "0x31FA400", VA = "0x1831FBE00")]
	private void OnPointerMove(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x6002ED3")]
	[Address(RVA = "0x31FBF70", Offset = "0x31FA570", VA = "0x1831FBF70")]
	private void OnPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x6002ED4")]
	[Address(RVA = "0x31FBC90", Offset = "0x31FA290", VA = "0x1831FBC90")]
	private void OnPointerCancel(PointerCancelEvent evt)
	{
	}

	[Token(Token = "0x6002ED5")]
	[Address(RVA = "0x31FBD00", Offset = "0x31FA300", VA = "0x1831FBD00")]
	private void OnPointerCaptureOut(PointerCaptureOutEvent evt)
	{
	}

	[Token(Token = "0x6002ED6")]
	[Address(RVA = "0x31FC0D0", Offset = "0x31FA6D0", VA = "0x1831FC0D0")]
	protected void ProcessCancelEvent(EventBase evt, int pointerId)
	{
	}

	[Token(Token = "0x6002ED7")]
	[Address(RVA = "0x31FBBB0", Offset = "0x31FA1B0", VA = "0x1831FBBB0")]
	private void OnKeyDown(KeyDownEvent e)
	{
	}

	[Token(Token = "0x6002ED8")]
	[Address(RVA = "0x31FC230", Offset = "0x31FA830", VA = "0x1831FC230")]
	private void ProcessDownEvent(EventBase evt, Vector2 localPosition, int pointerId)
	{
	}

	[Token(Token = "0x6002ED9")]
	[Address(RVA = "0x31FC420", Offset = "0x31FAA20", VA = "0x1831FC420")]
	private void ProcessMoveEvent(EventBase e, Vector2 localPosition)
	{
	}

	[Token(Token = "0x6002EDA")]
	[Address(RVA = "0x31FC550", Offset = "0x31FAB50", VA = "0x1831FC550")]
	private void ProcessUpEvent(EventBase evt, Vector2 localPosition, int pointerId)
	{
	}

	[Token(Token = "0x6002EDB")]
	[Address(RVA = "0x31FB540", Offset = "0x31F9B40", VA = "0x1831FB540")]
	private void BeginDragMove(float pos)
	{
	}

	[Token(Token = "0x6002EDC")]
	[Address(RVA = "0x31FBA50", Offset = "0x31FA050", VA = "0x1831FBA50")]
	internal void DragMove(float pos)
	{
	}

	[Token(Token = "0x6002EDD")]
	[Address(RVA = "0x31FCE30", Offset = "0x31FB430", VA = "0x1831FCE30")]
	private void UpdatePreviewPosition()
	{
	}

	[Token(Token = "0x6002EDE")]
	[Address(RVA = "0x31FCC40", Offset = "0x31FB240", VA = "0x1831FCC40")]
	private void UpdateMoveLocation()
	{
	}

	[Token(Token = "0x6002EDF")]
	[Address(RVA = "0x31FBA60", Offset = "0x31FA060", VA = "0x1831FBA60")]
	private void EndDragMove(bool cancelled)
	{
	}
}
