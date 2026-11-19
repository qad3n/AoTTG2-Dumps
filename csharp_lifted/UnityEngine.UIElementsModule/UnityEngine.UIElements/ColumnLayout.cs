// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ColumnLayout
// Update status: unchanged since the previous dump
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
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action m_layoutRequested;

	[Token(Token = "0x17000175")]
	public Columns columns
	{
		[Token(Token = "0x60007C5")]
		[Address(RVA = "0x6C15400", Offset = "0x6C14400", VA = "0x6C15400")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000176")]
	public float columnsWidth
	{
		[Token(Token = "0x60007C6")]
		[Address(RVA = "0x6C15410", Offset = "0x6C14410", VA = "0x6C15410")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000177")]
	public float layoutWidth
	{
		[Token(Token = "0x60007C7")]
		[Address(RVA = "0x6C15770", Offset = "0x6C14770", VA = "0x6C15770")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000178")]
	public float minColumnsWidth
	{
		[Token(Token = "0x60007C8")]
		[Address(RVA = "0x6C15780", Offset = "0x6C14780", VA = "0x6C15780")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000179")]
	public float maxColumnsWidth
	{
		[Token(Token = "0x60007C9")]
		[Address(RVA = "0x6C15790", Offset = "0x6C14790", VA = "0x6C15790")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700017A")]
	public bool hasStretchableColumns
	{
		[Token(Token = "0x60007CA")]
		[Address(RVA = "0x6C157A0", Offset = "0x6C147A0", VA = "0x6C157A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700017B")]
	public bool hasRelativeWidthColumns
	{
		[Token(Token = "0x60007CB")]
		[Address(RVA = "0x6C157E0", Offset = "0x6C147E0", VA = "0x6C157E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000017")]
	public event Action layoutRequested
	{
		[Token(Token = "0x60007CC")]
		[Address(RVA = "0x6C15830", Offset = "0x6C14830", VA = "0x6C15830")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60007CD")]
		[Address(RVA = "0x6C158D0", Offset = "0x6C148D0", VA = "0x6C158D0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60007CE")]
	[Address(RVA = "0x6C15970", Offset = "0x6C14970", VA = "0x6C15970")]
	public ColumnLayout(Columns columns)
	{
	}

	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x6C16420", Offset = "0x6C15420", VA = "0x6C16420")]
	public void Dirty()
	{
	}

	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x6C15F90", Offset = "0x6C14F90", VA = "0x6C15F90")]
	private void OnColumnAdded(Column column, int index)
	{
	}

	[Token(Token = "0x60007D1")]
	[Address(RVA = "0x6C16500", Offset = "0x6C15500", VA = "0x6C16500")]
	private void OnColumnRemoved(Column column)
	{
	}

	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x6C16720", Offset = "0x6C15720", VA = "0x6C16720")]
	private void OnColumnReordered(Column column, int from, int to)
	{
	}

	[Token(Token = "0x60007D3")]
	[Address(RVA = "0x6C16750", Offset = "0x6C15750", VA = "0x6C16750")]
	private bool RequiresLayoutUpdate(ColumnDataType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D4")]
	[Address(RVA = "0x6C16770", Offset = "0x6C15770", VA = "0x6C16770")]
	private void OnColumnChanged(Column column, ColumnDataType type)
	{
	}

	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x6C169F0", Offset = "0x6C159F0", VA = "0x6C169F0")]
	private void MakeRoomForColumn(Column column)
	{
	}

	[Token(Token = "0x60007D6")]
	[Address(RVA = "0x6C17380", Offset = "0x6C16380", VA = "0x6C17380")]
	private void OnColumnResized(Column column)
	{
	}

	[Token(Token = "0x60007D7")]
	[Address(RVA = "0x6C17390", Offset = "0x6C16390", VA = "0x6C17390")]
	private static bool IsClamped(float value, float min, float max)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x6C173B0", Offset = "0x6C163B0", VA = "0x6C173B0")]
	public void DoLayout(float width)
	{
	}

	[Token(Token = "0x60007D9")]
	[Address(RVA = "0x6C172B0", Offset = "0x6C162B0", VA = "0x6C172B0")]
	public void StretchResizeColumns(List<Column> stretchableColumns, List<Column> fixedColumns, List<Column> relativeWidthColumns, ref float delta, bool resizeToFit, bool dragResize)
	{
	}

	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x6C18AA0", Offset = "0x6C17AA0", VA = "0x6C18AA0")]
	private void DistributeOverflow(List<Column> stretchableColumns, List<Column> fixedColumns, List<Column> relativeWidthColumns, ref float delta, bool resizeToFit, bool dragResize)
	{
	}

	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x6C18D20", Offset = "0x6C17D20", VA = "0x6C18D20")]
	private void DistributeExcess(List<Column> stretchableColumns, List<Column> fixedColumns, List<Column> relativeWidthColumns, ref float delta, bool resizeToFit, bool dragResize)
	{
	}

	[Token(Token = "0x60007DC")]
	[Address(RVA = "0x6C19660", Offset = "0x6C18660", VA = "0x6C19660")]
	private float RecomputeToMaxWidthProportionally(List<Column> columns, float distributedDelta, bool setDesiredWidthOnly = false)
	{
		return default(float);
	}

	[Token(Token = "0x60007DD")]
	[Address(RVA = "0x6C191A0", Offset = "0x6C181A0", VA = "0x6C191A0")]
	private float RecomputeToMinWidthProportionally(List<Column> columns, float distributedDelta, bool setDesiredWidthOnly = false)
	{
		return default(float);
	}

	[Token(Token = "0x60007DE")]
	[Address(RVA = "0x6C19080", Offset = "0x6C18080", VA = "0x6C19080")]
	private float RecomputeToDesiredWidth(List<Column> columns, float distributedDelta, bool setDesiredWidthOnly, bool distributeOverflow)
	{
		return default(float);
	}

	[Token(Token = "0x60007DF")]
	[Address(RVA = "0x6C19C20", Offset = "0x6C18C20", VA = "0x6C19C20")]
	private float RecomputeToDesiredWidth(Column column, float distributedDelta, bool setDesiredWidthOnly, bool distributeOverflow)
	{
		return default(float);
	}

	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x6C194B0", Offset = "0x6C184B0", VA = "0x6C194B0")]
	private float RecomputeToMinWidth(List<Column> columns, float distributedDelta, bool setDesiredWidthOnly = false)
	{
		return default(float);
	}

	[Token(Token = "0x60007E1")]
	[Address(RVA = "0x6C19950", Offset = "0x6C18950", VA = "0x6C19950")]
	private float RecomputeToMaxWidth(List<Column> columns, float distributedDelta, bool setDesiredWidthOnly = false)
	{
		return default(float);
	}

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x6C19E00", Offset = "0x6C18E00", VA = "0x6C19E00")]
	public void ResizeToFit(float width)
	{
	}

	[Token(Token = "0x60007E3")]
	[Address(RVA = "0x6C19B00", Offset = "0x6C18B00", VA = "0x6C19B00")]
	private void ResizeColumn(Column column, float width, bool setDesiredWidthOnly = false)
	{
	}

	[Token(Token = "0x60007E4")]
	[Address(RVA = "0x6C1A170", Offset = "0x6C19170", VA = "0x6C1A170")]
	internal void BeginDragResize(Column column, float pos, bool previewMode)
	{
	}

	[Token(Token = "0x60007E5")]
	[Address(RVA = "0x6C1A550", Offset = "0x6C19550", VA = "0x6C1A550")]
	public float GetDesiredPosition(Column column)
	{
		return default(float);
	}

	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x6C18A00", Offset = "0x6C17A00", VA = "0x6C18A00")]
	public float GetDesiredWidth(Column c)
	{
		return default(float);
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x6C1A6D0", Offset = "0x6C196D0", VA = "0x6C1A6D0")]
	public void DragResize(Column column, float pos)
	{
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x6C1A9E0", Offset = "0x6C199E0", VA = "0x6C1A9E0")]
	internal void EndDragResize(Column column, bool cancelled)
	{
	}

	[Token(Token = "0x60007E9")]
	[Address(RVA = "0x6C16D30", Offset = "0x6C15D30", VA = "0x6C16D30")]
	private void UpdateCache()
	{
	}

	[Token(Token = "0x60007EA")]
	[Address(RVA = "0x6C18620", Offset = "0x6C17620", VA = "0x6C18620")]
	private void UpdateMinAndMaxColumnsWidth()
	{
	}

	[Token(Token = "0x60007EB")]
	[Address(RVA = "0x6C16450", Offset = "0x6C15450", VA = "0x6C16450")]
	private void ClearCache()
	{
	}
}
