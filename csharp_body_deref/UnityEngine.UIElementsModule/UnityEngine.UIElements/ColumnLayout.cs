// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ColumnLayout
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000D0")]
internal class ColumnLayout
{
	[Token(Token = "0x4000367")]
	[FieldOffset(Offset = "0x10")]
	private List<Column> m_StretchableColumns;

	[Token(Token = "0x4000368")]
	[FieldOffset(Offset = "0x18")]
	private List<Column> m_FixedColumns;

	[Token(Token = "0x4000369")]
	[FieldOffset(Offset = "0x20")]
	private Columns m_Columns;

	[Token(Token = "0x400036A")]
	[FieldOffset(Offset = "0x28")]
	private float m_ColumnsWidth;

	[Token(Token = "0x400036B")]
	[FieldOffset(Offset = "0x2C")]
	private bool m_ColumnsWidthDirty;

	[Token(Token = "0x400036C")]
	[FieldOffset(Offset = "0x30")]
	private float m_MaxColumnsWidth;

	[Token(Token = "0x400036D")]
	[FieldOffset(Offset = "0x34")]
	private float m_MinColumnsWidth;

	[Token(Token = "0x400036E")]
	[FieldOffset(Offset = "0x38")]
	private bool m_IsDirty;

	[Token(Token = "0x400036F")]
	[FieldOffset(Offset = "0x3C")]
	private float m_PreviousWidth;

	[Token(Token = "0x4000370")]
	[FieldOffset(Offset = "0x40")]
	private bool m_DragResizeInPreviewMode;

	[Token(Token = "0x4000371")]
	[FieldOffset(Offset = "0x41")]
	private bool m_DragResizing;

	[Token(Token = "0x4000372")]
	[FieldOffset(Offset = "0x44")]
	private float m_DragStartPos;

	[Token(Token = "0x4000373")]
	[FieldOffset(Offset = "0x48")]
	private float m_DragLastPos;

	[Token(Token = "0x4000374")]
	[FieldOffset(Offset = "0x4C")]
	private float m_DragInitialColumnWidth;

	[Token(Token = "0x4000375")]
	[FieldOffset(Offset = "0x50")]
	private List<Column> m_DragStretchableColumns;

	[Token(Token = "0x4000376")]
	[FieldOffset(Offset = "0x58")]
	private List<Column> m_DragFixedColumns;

	[Token(Token = "0x4000377")]
	[FieldOffset(Offset = "0x60")]
	private Dictionary<Column, float> m_PreviewDesiredWidths;

	[Token(Token = "0x170000FF")]
	public Columns columns
	{
		[Token(Token = "0x60005B2")]
		[Address(RVA = "0x4FE3A30", Offset = "0x4FE3A30", VA = "0x4FE3A30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000100")]
	public float columnsWidth
	{
		[Token(Token = "0x60005B3")]
		[Address(RVA = "0x4FE3A40", Offset = "0x4FE3A40", VA = "0x4FE3A40")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000101")]
	public float minColumnsWidth
	{
		[Token(Token = "0x60005B4")]
		[Address(RVA = "0x4FE3DC0", Offset = "0x4FE3DC0", VA = "0x4FE3DC0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000102")]
	public float maxColumnsWidth
	{
		[Token(Token = "0x60005B5")]
		[Address(RVA = "0x4FE3DD0", Offset = "0x4FE3DD0", VA = "0x4FE3DD0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000103")]
	public bool hasStretchableColumns
	{
		[Token(Token = "0x60005B6")]
		[Address(RVA = "0x4FE3DE0", Offset = "0x4FE3DE0", VA = "0x4FE3DE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000010")]
	public event Action layoutRequested
	{
		[Token(Token = "0x60005B7")]
		[Address(RVA = "0x4FE3E20", Offset = "0x4FE3E20", VA = "0x4FE3E20")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60005B8")]
		[Address(RVA = "0x4FE3EB0", Offset = "0x4FE3EB0", VA = "0x4FE3EB0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x4FE3F40", Offset = "0x4FE3F40", VA = "0x4FE3F40")]
	public ColumnLayout(Columns columns)
	{
	}

	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x4FE49D0", Offset = "0x4FE49D0", VA = "0x4FE49D0")]
	public void Dirty()
	{
	}

	[Token(Token = "0x60005BB")]
	[Address(RVA = "0x4FE44F0", Offset = "0x4FE44F0", VA = "0x4FE44F0")]
	private void OnColumnAdded(Column column, int index)
	{
	}

	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x4FE4A90", Offset = "0x4FE4A90", VA = "0x4FE4A90")]
	private void OnColumnRemoved(Column column)
	{
	}

	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x4FE4CD0", Offset = "0x4FE4CD0", VA = "0x4FE4CD0")]
	private void OnColumnReordered(Column column, int from, int to)
	{
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x4FE4D00", Offset = "0x4FE4D00", VA = "0x4FE4D00")]
	private bool RequiresLayoutUpdate(ColumnDataType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x4FE4D20", Offset = "0x4FE4D20", VA = "0x4FE4D20")]
	private void OnColumnChanged(Column column, ColumnDataType type)
	{
	}

	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x4FE4D70", Offset = "0x4FE4D70", VA = "0x4FE4D70")]
	private void OnColumnResized(Column column)
	{
	}

	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x4FE4D80", Offset = "0x4FE4D80", VA = "0x4FE4D80")]
	private static bool IsClamped(float value, float min, float max)
	{
		return default(bool);
	}

	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x4FE4D90", Offset = "0x4FE4D90", VA = "0x4FE4D90")]
	public void DoLayout(float width)
	{
	}

	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x4FE6170", Offset = "0x4FE6170", VA = "0x4FE6170")]
	public void StretchResizeColumns(List<Column> stretchableColumns, List<Column> fixedColumns, ref float delta, bool resizeToFit)
	{
	}

	[Token(Token = "0x60005C4")]
	[Address(RVA = "0x4FE7670", Offset = "0x4FE7670", VA = "0x4FE7670")]
	public void ResizeToFit(float width)
	{
	}

	[Token(Token = "0x60005C5")]
	[Address(RVA = "0x4FE74F0", Offset = "0x4FE74F0", VA = "0x4FE74F0")]
	private void ResizeColumn(Column column, float width, bool setDesiredWidthOnly = false)
	{
	}

	[Token(Token = "0x60005C6")]
	[Address(RVA = "0x4FE7760", Offset = "0x4FE7760", VA = "0x4FE7760")]
	internal void BeginDragResize(Column column, float pos, bool previewMode)
	{
	}

	[Token(Token = "0x60005C7")]
	[Address(RVA = "0x4FE7B20", Offset = "0x4FE7B20", VA = "0x4FE7B20")]
	public float GetDesiredPosition(Column column)
	{
		return default(float);
	}

	[Token(Token = "0x60005C8")]
	[Address(RVA = "0x4FE60D0", Offset = "0x4FE60D0", VA = "0x4FE60D0")]
	public float GetDesiredWidth(Column c)
	{
		return default(float);
	}

	[Token(Token = "0x60005C9")]
	[Address(RVA = "0x4FE7D10", Offset = "0x4FE7D10", VA = "0x4FE7D10")]
	public void DragResize(Column column, float pos)
	{
	}

	[Token(Token = "0x60005CA")]
	[Address(RVA = "0x4FE7F20", Offset = "0x4FE7F20", VA = "0x4FE7F20")]
	internal void EndDragResize(Column column, bool cancelled)
	{
	}

	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x4FE5BA0", Offset = "0x4FE5BA0", VA = "0x4FE5BA0")]
	private void UpdateCache()
	{
	}

	[Token(Token = "0x60005CC")]
	[Address(RVA = "0x4FE4A00", Offset = "0x4FE4A00", VA = "0x4FE4A00")]
	private void ClearCache()
	{
	}
}
