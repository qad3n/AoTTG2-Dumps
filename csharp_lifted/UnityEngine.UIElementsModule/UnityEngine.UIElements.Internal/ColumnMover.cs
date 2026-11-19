// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Internal.ColumnMover
// Update status: unchanged since the previous dump
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
	[FieldOffset(Offset = "0x24")]
	private float m_StartPos;

	[Token(Token = "0x400185B")]
	[FieldOffset(Offset = "0x28")]
	private float m_LastPos;

	[Token(Token = "0x400185C")]
	[FieldOffset(Offset = "0x2C")]
	private bool m_Active;

	[Token(Token = "0x400185D")]
	[FieldOffset(Offset = "0x2D")]
	private bool m_Moving;

	[Token(Token = "0x400185E")]
	[FieldOffset(Offset = "0x2E")]
	private bool m_Cancelled;

	[Token(Token = "0x400185F")]
	[FieldOffset(Offset = "0x30")]
	private MultiColumnCollectionHeader m_Header;

	[Token(Token = "0x4001860")]
	[FieldOffset(Offset = "0x38")]
	private VisualElement m_PreviewElement;

	[Token(Token = "0x4001861")]
	[FieldOffset(Offset = "0x40")]
	private MultiColumnHeaderColumnMoveLocationPreview m_LocationPreviewElement;

	[Token(Token = "0x4001862")]
	[FieldOffset(Offset = "0x48")]
	private Column m_ColumnToMove;

	[Token(Token = "0x4001863")]
	[FieldOffset(Offset = "0x50")]
	private float m_ColumnToMovePos;

	[Token(Token = "0x4001864")]
	[FieldOffset(Offset = "0x54")]
	private float m_ColumnToMoveWidth;

	[Token(Token = "0x4001865")]
	[FieldOffset(Offset = "0x58")]
	private Column m_DestinationColumn;

	[Token(Token = "0x4001866")]
	[FieldOffset(Offset = "0x60")]
	private bool m_MoveBeforeDestination;

	[Token(Token = "0x4001868")]
	[FieldOffset(Offset = "0x70")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<ColumnMover> m_activeChanged;

	[Token(Token = "0x4001869")]
	[FieldOffset(Offset = "0x78")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<ColumnMover> m_movingChanged;

	[Token(Token = "0x17000BB4")]
	public ColumnLayout columnLayout
	{
		[Token(Token = "0x6002EC4")]
		[Address(RVA = "0x6C012E0", Offset = "0x6C002E0", VA = "0x6C012E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002EC5")]
		[Address(RVA = "0x6C012F0", Offset = "0x6C002F0", VA = "0x6C012F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000BB5")]
	public bool active
	{
		[Token(Token = "0x6002EC6")]
		[Address(RVA = "0x6C01300", Offset = "0x6C00300", VA = "0x6C01300")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002EC7")]
		[Address(RVA = "0x6C01310", Offset = "0x6C00310", VA = "0x6C01310")]
		set
		{
		}
	}

	[Token(Token = "0x17000BB6")]
	public bool moving
	{
		[Token(Token = "0x6002EC8")]
		[Address(RVA = "0x6C01340", Offset = "0x6C00340", VA = "0x6C01340")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002EC9")]
		[Address(RVA = "0x6C01350", Offset = "0x6C00350", VA = "0x6C01350")]
		set
		{
		}
	}

	[Token(Token = "0x14000032")]
	public event Action<ColumnMover> activeChanged
	{
		[Token(Token = "0x6002ECA")]
		[Address(RVA = "0x6C01380", Offset = "0x6C00380", VA = "0x6C01380")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6002ECB")]
		[Address(RVA = "0x6C01420", Offset = "0x6C00420", VA = "0x6C01420")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000033")]
	public event Action<ColumnMover> movingChanged
	{
		[Token(Token = "0x6002ECC")]
		[Address(RVA = "0x6C014C0", Offset = "0x6C004C0", VA = "0x6C014C0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6002ECD")]
		[Address(RVA = "0x6C01560", Offset = "0x6C00560", VA = "0x6C01560")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6002ECE")]
	[Address(RVA = "0x6C01600", Offset = "0x6C00600", VA = "0x6C01600")]
	public ColumnMover()
	{
	}

	[Token(Token = "0x6002ECF")]
	[Address(RVA = "0x6C01690", Offset = "0x6C00690", VA = "0x6C01690", Slot = "5")]
	protected override void RegisterCallbacksOnTarget()
	{
	}

	[Token(Token = "0x6002ED0")]
	[Address(RVA = "0x6C01990", Offset = "0x6C00990", VA = "0x6C01990", Slot = "6")]
	protected override void UnregisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x6002ED1")]
	[Address(RVA = "0x6C01C90", Offset = "0x6C00C90", VA = "0x6C01C90")]
	private void OnPointerDown(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x6002ED2")]
	[Address(RVA = "0x6C01EF0", Offset = "0x6C00EF0", VA = "0x6C01EF0")]
	private void OnPointerMove(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x6002ED3")]
	[Address(RVA = "0x6C02050", Offset = "0x6C01050", VA = "0x6C02050")]
	private void OnPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x6002ED4")]
	[Address(RVA = "0x6C021D0", Offset = "0x6C011D0", VA = "0x6C021D0")]
	private void OnPointerCancel(PointerCancelEvent evt)
	{
	}

	[Token(Token = "0x6002ED5")]
	[Address(RVA = "0x6C02310", Offset = "0x6C01310", VA = "0x6C02310")]
	private void OnPointerCaptureOut(PointerCaptureOutEvent evt)
	{
	}

	[Token(Token = "0x6002ED6")]
	[Address(RVA = "0x6C02240", Offset = "0x6C01240", VA = "0x6C02240")]
	protected void ProcessCancelEvent(EventBase evt, int pointerId)
	{
	}

	[Token(Token = "0x6002ED7")]
	[Address(RVA = "0x6C024C0", Offset = "0x6C014C0", VA = "0x6C024C0")]
	private void OnKeyDown(KeyDownEvent e)
	{
	}

	[Token(Token = "0x6002ED8")]
	[Address(RVA = "0x6C01D10", Offset = "0x6C00D10", VA = "0x6C01D10")]
	private void ProcessDownEvent(EventBase evt, Vector2 localPosition, int pointerId)
	{
	}

	[Token(Token = "0x6002ED9")]
	[Address(RVA = "0x6C01F50", Offset = "0x6C00F50", VA = "0x6C01F50")]
	private void ProcessMoveEvent(EventBase e, Vector2 localPosition)
	{
	}

	[Token(Token = "0x6002EDA")]
	[Address(RVA = "0x6C020D0", Offset = "0x6C010D0", VA = "0x6C020D0")]
	private void ProcessUpEvent(EventBase evt, Vector2 localPosition, int pointerId)
	{
	}

	[Token(Token = "0x6002EDB")]
	[Address(RVA = "0x6C02520", Offset = "0x6C01520", VA = "0x6C02520")]
	private void BeginDragMove(float pos)
	{
	}

	[Token(Token = "0x6002EDC")]
	[Address(RVA = "0x6C02A10", Offset = "0x6C01A10", VA = "0x6C02A10")]
	internal void DragMove(float pos)
	{
	}

	[Token(Token = "0x6002EDD")]
	[Address(RVA = "0x6C02DC0", Offset = "0x6C01DC0", VA = "0x6C02DC0")]
	private void UpdatePreviewPosition()
	{
	}

	[Token(Token = "0x6002EDE")]
	[Address(RVA = "0x6C02A20", Offset = "0x6C01A20", VA = "0x6C02A20")]
	private void UpdateMoveLocation()
	{
	}

	[Token(Token = "0x6002EDF")]
	[Address(RVA = "0x6C02370", Offset = "0x6C01370", VA = "0x6C02370")]
	private void EndDragMove(bool cancelled)
	{
	}
}
