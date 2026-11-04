// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ColumnLayout
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200010E")]
internal class ColumnLayout
{
	[Token(Token = "0x40004B9")]
	[FieldOffset(Offset = "0x10")]
	private List<Column> m_StretchableColumns;

	[Token(Token = "0x40004BA")]
	[FieldOffset(Offset = "0x18")]
	private List<Column> m_FixedColumns;

	[Token(Token = "0x40004BB")]
	[FieldOffset(Offset = "0x20")]
	private List<Column> m_RelativeWidthColumns;

	[Token(Token = "0x40004BC")]
	[FieldOffset(Offset = "0x28")]
	private List<Column> m_MixedWidthColumns;

	[Token(Token = "0x40004BD")]
	[FieldOffset(Offset = "0x30")]
	private Columns m_Columns;

	[Token(Token = "0x40004BE")]
	[FieldOffset(Offset = "0x38")]
	private float m_ColumnsWidth;

	[Token(Token = "0x40004BF")]
	[FieldOffset(Offset = "0x3C")]
	private bool m_ColumnsWidthDirty;

	[Token(Token = "0x40004C0")]
	[FieldOffset(Offset = "0x40")]
	private float m_MaxColumnsWidth;

	[Token(Token = "0x40004C1")]
	[FieldOffset(Offset = "0x44")]
	private float m_MinColumnsWidth;

	[Token(Token = "0x40004C2")]
	[FieldOffset(Offset = "0x48")]
	private bool m_IsDirty;

	[Token(Token = "0x40004C3")]
	[FieldOffset(Offset = "0x4C")]
	private float m_PreviousWidth;

	[Token(Token = "0x40004C4")]
	[FieldOffset(Offset = "0x50")]
	private float m_LayoutWidth;

	[Token(Token = "0x40004C5")]
	[FieldOffset(Offset = "0x54")]
	private bool m_DragResizeInPreviewMode;

	[Token(Token = "0x40004C6")]
	[FieldOffset(Offset = "0x55")]
	private bool m_DragResizing;

	[Token(Token = "0x40004C7")]
	[FieldOffset(Offset = "0x58")]
	private float m_DragStartPos;

	[Token(Token = "0x40004C8")]
	[FieldOffset(Offset = "0x5C")]
	private float m_DragLastPos;

	[Token(Token = "0x40004C9")]
	[FieldOffset(Offset = "0x60")]
	private float m_DragInitialColumnWidth;

	[Token(Token = "0x40004CA")]
	[FieldOffset(Offset = "0x68")]
	private List<Column> m_DragStretchableColumns;

	[Token(Token = "0x40004CB")]
	[FieldOffset(Offset = "0x70")]
	private List<Column> m_DragRelativeColumns;

	[Token(Token = "0x40004CC")]
	[FieldOffset(Offset = "0x78")]
	private List<Column> m_DragFixedColumns;

	[Token(Token = "0x40004CD")]
	[FieldOffset(Offset = "0x80")]
	private Dictionary<Column, float> m_PreviewDesiredWidths;

	[Token(Token = "0x40004CE")]
	[FieldOffset(Offset = "0x88")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action m_layoutRequested;

	[Token(Token = "0x17000175")]
	public Columns columns
	{
		[Token(Token = "0x60007C5")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000176")]
	public float columnsWidth
	{
		[Token(Token = "0x60007C6")]
		[Address(RVA = "0x32113D0", Offset = "0x320F9D0", VA = "0x1832113D0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000177")]
	public float layoutWidth
	{
		[Token(Token = "0x60007C7")]
		[Address(RVA = "0xDA5AC0", Offset = "0xDA40C0", VA = "0x180DA5AC0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000178")]
	public float minColumnsWidth
	{
		[Token(Token = "0x60007C8")]
		[Address(RVA = "0x2AC3BA0", Offset = "0x2AC21A0", VA = "0x182AC3BA0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000179")]
	public float maxColumnsWidth
	{
		[Token(Token = "0x60007C9")]
		[Address(RVA = "0xE8F6E0", Offset = "0xE8DCE0", VA = "0x180E8F6E0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700017A")]
	public bool hasStretchableColumns
	{
		[Token(Token = "0x60007CA")]
		[Address(RVA = "0x3211640", Offset = "0x320FC40", VA = "0x183211640")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700017B")]
	public bool hasRelativeWidthColumns
	{
		[Token(Token = "0x60007CB")]
		[Address(RVA = "0x32115E0", Offset = "0x320FBE0", VA = "0x1832115E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000017")]
	public event Action layoutRequested
	{
		[Token(Token = "0x60007CC")]
		[Address(RVA = "0x3211330", Offset = "0x320F930", VA = "0x183211330")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60007CD")]
		[Address(RVA = "0x3211690", Offset = "0x320FC90", VA = "0x183211690")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60007CE")]
	[Address(RVA = "0x3210F10", Offset = "0x320F510", VA = "0x183210F10")]
	public ColumnLayout(Columns columns)
	{
	}

	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x320B420", Offset = "0x3209A20", VA = "0x18320B420")]
	public void Dirty()
	{
	}

	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x320E630", Offset = "0x320CC30", VA = "0x18320E630")]
	private void OnColumnAdded(Column column, int index)
	{
	}

	[Token(Token = "0x60007D1")]
	[Address(RVA = "0x320E910", Offset = "0x320CF10", VA = "0x18320E910")]
	private void OnColumnRemoved(Column column)
	{
	}

	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x320B420", Offset = "0x3209A20", VA = "0x18320B420")]
	private void OnColumnReordered(Column column, int from, int to)
	{
	}

	[Token(Token = "0x60007D3")]
	[Address(RVA = "0x320FD90", Offset = "0x320E390", VA = "0x18320FD90")]
	private bool RequiresLayoutUpdate(ColumnDataType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D4")]
	[Address(RVA = "0x320E730", Offset = "0x320CD30", VA = "0x18320E730")]
	private void OnColumnChanged(Column column, ColumnDataType type)
	{
	}

	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x320DBE0", Offset = "0x320C1E0", VA = "0x18320DBE0")]
	private void MakeRoomForColumn(Column column)
	{
	}

	[Token(Token = "0x60007D6")]
	[Address(RVA = "0x320EA10", Offset = "0x320D010", VA = "0x18320EA10")]
	private void OnColumnResized(Column column)
	{
	}

	[Token(Token = "0x60007D7")]
	[Address(RVA = "0x320DBD0", Offset = "0x320C1D0", VA = "0x18320DBD0")]
	private static bool IsClamped(float value, float min, float max)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x320BB10", Offset = "0x320A110", VA = "0x18320BB10")]
	public void DoLayout(float width)
	{
	}

	[Token(Token = "0x60007D9")]
	[Address(RVA = "0x32107F0", Offset = "0x320EDF0", VA = "0x1832107F0")]
	public void StretchResizeColumns(List<Column> stretchableColumns, List<Column> fixedColumns, List<Column> relativeWidthColumns, ref float delta, bool resizeToFit, bool dragResize)
	{
	}

	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x320B800", Offset = "0x3209E00", VA = "0x18320B800")]
	private void DistributeOverflow(List<Column> stretchableColumns, List<Column> fixedColumns, List<Column> relativeWidthColumns, ref float delta, bool resizeToFit, bool dragResize)
	{
	}

	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x320B460", Offset = "0x3209A60", VA = "0x18320B460")]
	private void DistributeExcess(List<Column> stretchableColumns, List<Column> fixedColumns, List<Column> relativeWidthColumns, ref float delta, bool resizeToFit, bool dragResize)
	{
	}

	[Token(Token = "0x60007DC")]
	[Address(RVA = "0x320EE90", Offset = "0x320D490", VA = "0x18320EE90")]
	private float RecomputeToMaxWidthProportionally(List<Column> columns, float distributedDelta, bool setDesiredWidthOnly = false)
	{
		return default(float);
	}

	[Token(Token = "0x60007DD")]
	[Address(RVA = "0x320F640", Offset = "0x320DC40", VA = "0x18320F640")]
	private float RecomputeToMinWidthProportionally(List<Column> columns, float distributedDelta, bool setDesiredWidthOnly = false)
	{
		return default(float);
	}

	[Token(Token = "0x60007DE")]
	[Address(RVA = "0x320ED40", Offset = "0x320D340", VA = "0x18320ED40")]
	private float RecomputeToDesiredWidth(List<Column> columns, float distributedDelta, bool setDesiredWidthOnly, bool distributeOverflow)
	{
		return default(float);
	}

	[Token(Token = "0x60007DF")]
	[Address(RVA = "0x320EA20", Offset = "0x320D020", VA = "0x18320EA20")]
	private float RecomputeToDesiredWidth(Column column, float distributedDelta, bool setDesiredWidthOnly, bool distributeOverflow)
	{
		return default(float);
	}

	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x320FB10", Offset = "0x320E110", VA = "0x18320FB10")]
	private float RecomputeToMinWidth(List<Column> columns, float distributedDelta, bool setDesiredWidthOnly = false)
	{
		return default(float);
	}

	[Token(Token = "0x60007E1")]
	[Address(RVA = "0x320F3A0", Offset = "0x320D9A0", VA = "0x18320F3A0")]
	private float RecomputeToMaxWidth(List<Column> columns, float distributedDelta, bool setDesiredWidthOnly = false)
	{
		return default(float);
	}

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x320FF80", Offset = "0x320E580", VA = "0x18320FF80")]
	public void ResizeToFit(float width)
	{
	}

	[Token(Token = "0x60007E3")]
	[Address(RVA = "0x320FDB0", Offset = "0x320E3B0", VA = "0x18320FDB0")]
	private void ResizeColumn(Column column, float width, bool setDesiredWidthOnly = false)
	{
	}

	[Token(Token = "0x60007E4")]
	[Address(RVA = "0x320B070", Offset = "0x3209670", VA = "0x18320B070")]
	internal void BeginDragResize(Column column, float pos, bool previewMode)
	{
	}

	[Token(Token = "0x60007E5")]
	[Address(RVA = "0x320D9E0", Offset = "0x320BFE0", VA = "0x18320D9E0")]
	public float GetDesiredPosition(Column column)
	{
		return default(float);
	}

	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x320DB30", Offset = "0x320C130", VA = "0x18320DB30")]
	public float GetDesiredWidth(Column c)
	{
		return default(float);
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x320D090", Offset = "0x320B690", VA = "0x18320D090")]
	public void DragResize(Column column, float pos)
	{
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x320D7B0", Offset = "0x320BDB0", VA = "0x18320D7B0")]
	internal void EndDragResize(Column column, bool cancelled)
	{
	}

	[Token(Token = "0x60007E9")]
	[Address(RVA = "0x32109B0", Offset = "0x320EFB0", VA = "0x1832109B0")]
	private void UpdateCache()
	{
	}

	[Token(Token = "0x60007EA")]
	[Address(RVA = "0x3210CD0", Offset = "0x320F2D0", VA = "0x183210CD0")]
	private void UpdateMinAndMaxColumnsWidth()
	{
	}

	[Token(Token = "0x60007EB")]
	[Address(RVA = "0x320B360", Offset = "0x3209960", VA = "0x18320B360")]
	private void ClearCache()
	{
	}
}
