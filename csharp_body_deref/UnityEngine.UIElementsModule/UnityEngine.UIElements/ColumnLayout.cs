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
		[Address(RVA = "0x4CBC100", Offset = "0x4CBC100", VA = "0x4CBC100")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000100")]
	public float columnsWidth
	{
		[Token(Token = "0x60005B3")]
		[Address(RVA = "0x4CBC110", Offset = "0x4CBC110", VA = "0x4CBC110")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000101")]
	public float minColumnsWidth
	{
		[Token(Token = "0x60005B4")]
		[Address(RVA = "0x4CBC490", Offset = "0x4CBC490", VA = "0x4CBC490")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000102")]
	public float maxColumnsWidth
	{
		[Token(Token = "0x60005B5")]
		[Address(RVA = "0x4CBC4A0", Offset = "0x4CBC4A0", VA = "0x4CBC4A0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000103")]
	public bool hasStretchableColumns
	{
		[Token(Token = "0x60005B6")]
		[Address(RVA = "0x4CBC4B0", Offset = "0x4CBC4B0", VA = "0x4CBC4B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000010")]
	public event Action layoutRequested
	{
		[Token(Token = "0x60005B7")]
		[Address(RVA = "0x4CBC4F0", Offset = "0x4CBC4F0", VA = "0x4CBC4F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60005B8")]
		[Address(RVA = "0x4CBC580", Offset = "0x4CBC580", VA = "0x4CBC580")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x4CBC610", Offset = "0x4CBC610", VA = "0x4CBC610")]
	public ColumnLayout(Columns columns)
	{
	}

	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x4CBD0A0", Offset = "0x4CBD0A0", VA = "0x4CBD0A0")]
	public void Dirty()
	{
	}

	[Token(Token = "0x60005BB")]
	[Address(RVA = "0x4CBCBC0", Offset = "0x4CBCBC0", VA = "0x4CBCBC0")]
	private void OnColumnAdded(Column column, int index)
	{
	}

	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x4CBD160", Offset = "0x4CBD160", VA = "0x4CBD160")]
	private void OnColumnRemoved(Column column)
	{
	}

	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x4CBD3A0", Offset = "0x4CBD3A0", VA = "0x4CBD3A0")]
	private void OnColumnReordered(Column column, int from, int to)
	{
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x4CBD3D0", Offset = "0x4CBD3D0", VA = "0x4CBD3D0")]
	private bool RequiresLayoutUpdate(ColumnDataType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x4CBD3F0", Offset = "0x4CBD3F0", VA = "0x4CBD3F0")]
	private void OnColumnChanged(Column column, ColumnDataType type)
	{
	}

	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x4CBD440", Offset = "0x4CBD440", VA = "0x4CBD440")]
	private void OnColumnResized(Column column)
	{
	}

	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x4CBD450", Offset = "0x4CBD450", VA = "0x4CBD450")]
	private static bool IsClamped(float value, float min, float max)
	{
		return default(bool);
	}

	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x4CBD460", Offset = "0x4CBD460", VA = "0x4CBD460")]
	public void DoLayout(float width)
	{
	}

	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x4CBE840", Offset = "0x4CBE840", VA = "0x4CBE840")]
	public void StretchResizeColumns(List<Column> stretchableColumns, List<Column> fixedColumns, ref float delta, bool resizeToFit)
	{
	}

	[Token(Token = "0x60005C4")]
	[Address(RVA = "0x4CBFD40", Offset = "0x4CBFD40", VA = "0x4CBFD40")]
	public void ResizeToFit(float width)
	{
	}

	[Token(Token = "0x60005C5")]
	[Address(RVA = "0x4CBFBC0", Offset = "0x4CBFBC0", VA = "0x4CBFBC0")]
	private void ResizeColumn(Column column, float width, bool setDesiredWidthOnly = false)
	{
	}

	[Token(Token = "0x60005C6")]
	[Address(RVA = "0x4CBFE30", Offset = "0x4CBFE30", VA = "0x4CBFE30")]
	internal void BeginDragResize(Column column, float pos, bool previewMode)
	{
	}

	[Token(Token = "0x60005C7")]
	[Address(RVA = "0x4CC01F0", Offset = "0x4CC01F0", VA = "0x4CC01F0")]
	public float GetDesiredPosition(Column column)
	{
		return default(float);
	}

	[Token(Token = "0x60005C8")]
	[Address(RVA = "0x4CBE7A0", Offset = "0x4CBE7A0", VA = "0x4CBE7A0")]
	public float GetDesiredWidth(Column c)
	{
		return default(float);
	}

	[Token(Token = "0x60005C9")]
	[Address(RVA = "0x4CC03E0", Offset = "0x4CC03E0", VA = "0x4CC03E0")]
	public void DragResize(Column column, float pos)
	{
	}

	[Token(Token = "0x60005CA")]
	[Address(RVA = "0x4CC05F0", Offset = "0x4CC05F0", VA = "0x4CC05F0")]
	internal void EndDragResize(Column column, bool cancelled)
	{
	}

	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x4CBE270", Offset = "0x4CBE270", VA = "0x4CBE270")]
	private void UpdateCache()
	{
	}

	[Token(Token = "0x60005CC")]
	[Address(RVA = "0x4CBD0D0", Offset = "0x4CBD0D0", VA = "0x4CBD0D0")]
	private void ClearCache()
	{
	}
}
