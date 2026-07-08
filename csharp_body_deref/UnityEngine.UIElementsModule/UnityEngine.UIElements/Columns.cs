using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000D7")]
public class Columns : ICollection<Column>, IEnumerable<Column>, IEnumerable
{
	[Token(Token = "0x20000D8")]
	public enum StretchMode
	{
		[Token(Token = "0x400039E")]
		Grow,
		[Token(Token = "0x400039F")]
		GrowAndFill
	}

	[Token(Token = "0x20000D9")]
	internal class UxmlObjectFactory<T> : UxmlObjectFactory<T, UxmlObjectTraits<T>> where T : Columns, new()
	{
		[Token(Token = "0x600060C")]
		public UxmlObjectFactory()
		{
		}
	}

	[Token(Token = "0x20000DA")]
	internal class UxmlObjectFactory : UxmlObjectFactory<Columns>
	{
		[Token(Token = "0x600060D")]
		[Address(RVA = "0x4CC2DD0", Offset = "0x4CC2DD0", VA = "0x4CC2DD0")]
		public UxmlObjectFactory()
		{
		}
	}

	[Token(Token = "0x20000DB")]
	internal class UxmlObjectTraits<T> : UnityEngine.UIElements.UxmlObjectTraits<T> where T : Columns
	{
		[Token(Token = "0x40003A0")]
		[FieldOffset(Offset = "0x0")]
		private readonly UxmlStringAttributeDescription m_PrimaryColumnName;

		[Token(Token = "0x40003A1")]
		[FieldOffset(Offset = "0x0")]
		private readonly UxmlEnumAttributeDescription<StretchMode> m_StretchMode;

		[Token(Token = "0x40003A2")]
		[FieldOffset(Offset = "0x0")]
		private readonly UxmlBoolAttributeDescription m_Reorderable;

		[Token(Token = "0x40003A3")]
		[FieldOffset(Offset = "0x0")]
		private readonly UxmlBoolAttributeDescription m_Resizable;

		[Token(Token = "0x40003A4")]
		[FieldOffset(Offset = "0x0")]
		private readonly UxmlBoolAttributeDescription m_ResizePreview;

		[Token(Token = "0x40003A5")]
		[FieldOffset(Offset = "0x0")]
		private readonly UxmlObjectListAttributeDescription<Column> m_Columns;

		[Token(Token = "0x600060E")]
		public override void Init(ref T obj, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x600060F")]
		public UxmlObjectTraits()
		{
		}
	}

	[Token(Token = "0x400038E")]
	[FieldOffset(Offset = "0x10")]
	private IList<Column> m_Columns;

	[Token(Token = "0x400038F")]
	[FieldOffset(Offset = "0x18")]
	private List<Column> m_DisplayColumns;

	[Token(Token = "0x4000390")]
	[FieldOffset(Offset = "0x20")]
	private List<Column> m_VisibleColumns;

	[Token(Token = "0x4000391")]
	[FieldOffset(Offset = "0x28")]
	private bool m_VisibleColumnsDirty;

	[Token(Token = "0x4000392")]
	[FieldOffset(Offset = "0x2C")]
	private StretchMode m_StretchMode;

	[Token(Token = "0x4000393")]
	[FieldOffset(Offset = "0x30")]
	private bool m_Reorderable;

	[Token(Token = "0x4000394")]
	[FieldOffset(Offset = "0x31")]
	private bool m_Resizable;

	[Token(Token = "0x4000395")]
	[FieldOffset(Offset = "0x32")]
	private bool m_ResizePreview;

	[Token(Token = "0x4000396")]
	[FieldOffset(Offset = "0x38")]
	private string m_PrimaryColumnName;

	[Token(Token = "0x17000104")]
	public string primaryColumnName
	{
		[Token(Token = "0x60005DD")]
		[Address(RVA = "0x4CC0B50", Offset = "0x4CC0B50", VA = "0x4CC0B50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005DE")]
		[Address(RVA = "0x4CC0B60", Offset = "0x4CC0B60", VA = "0x4CC0B60")]
		set
		{
		}
	}

	[Token(Token = "0x17000105")]
	public bool reorderable
	{
		[Token(Token = "0x60005DF")]
		[Address(RVA = "0x4CC0BE0", Offset = "0x4CC0BE0", VA = "0x4CC0BE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005E0")]
		[Address(RVA = "0x4CC0BF0", Offset = "0x4CC0BF0", VA = "0x4CC0BF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000106")]
	public bool resizable
	{
		[Token(Token = "0x60005E1")]
		[Address(RVA = "0x4CC0C20", Offset = "0x4CC0C20", VA = "0x4CC0C20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005E2")]
		[Address(RVA = "0x4CC0C30", Offset = "0x4CC0C30", VA = "0x4CC0C30")]
		set
		{
		}
	}

	[Token(Token = "0x17000107")]
	public bool resizePreview
	{
		[Token(Token = "0x60005E3")]
		[Address(RVA = "0x4CC0C60", Offset = "0x4CC0C60", VA = "0x4CC0C60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005E4")]
		[Address(RVA = "0x4CC0C70", Offset = "0x4CC0C70", VA = "0x4CC0C70")]
		set
		{
		}
	}

	[Token(Token = "0x17000108")]
	internal IEnumerable<Column> displayList
	{
		[Token(Token = "0x60005E5")]
		[Address(RVA = "0x4CBB770", Offset = "0x4CBB770", VA = "0x4CBB770")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000109")]
	internal IEnumerable<Column> visibleList
	{
		[Token(Token = "0x60005E6")]
		[Address(RVA = "0x4CBB8A0", Offset = "0x4CBB8A0", VA = "0x4CBB8A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010A")]
	public StretchMode stretchMode
	{
		[Token(Token = "0x60005E9")]
		[Address(RVA = "0x4CC1160", Offset = "0x4CC1160", VA = "0x4CC1160")]
		get
		{
			return default(StretchMode);
		}
		[Token(Token = "0x60005EA")]
		[Address(RVA = "0x4CC1170", Offset = "0x4CC1170", VA = "0x4CC1170")]
		set
		{
		}
	}

	[Token(Token = "0x1700010B")]
	public int Count
	{
		[Token(Token = "0x6000600")]
		[Address(RVA = "0x4CBCE00", Offset = "0x4CBCE00", VA = "0x4CBCE00", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700010C")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000601")]
		[Address(RVA = "0x4CC2760", Offset = "0x4CC2760", VA = "0x4CC2760", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010D")]
	public Column this[int index]
	{
		[Token(Token = "0x6000604")]
		[Address(RVA = "0x4CBCB10", Offset = "0x4CBCB10", VA = "0x4CBCB10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010E")]
	public Column this[string name]
	{
		[Token(Token = "0x6000605")]
		[Address(RVA = "0x4CC2800", Offset = "0x4CC2800", VA = "0x4CC2800")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000011")]
	internal event Action<ColumnsDataType> changed
	{
		[Token(Token = "0x60005E7")]
		[Address(RVA = "0x4CC1000", Offset = "0x4CC1000", VA = "0x4CC1000")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60005E8")]
		[Address(RVA = "0x4CC10B0", Offset = "0x4CC10B0", VA = "0x4CC10B0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000012")]
	internal event Action<Column, int> columnAdded
	{
		[Token(Token = "0x60005EB")]
		[Address(RVA = "0x4CBCE90", Offset = "0x4CBCE90", VA = "0x4CBCE90")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60005EC")]
		[Address(RVA = "0x4CC11A0", Offset = "0x4CC11A0", VA = "0x4CC11A0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000013")]
	internal event Action<Column> columnRemoved
	{
		[Token(Token = "0x60005ED")]
		[Address(RVA = "0x4CBCF40", Offset = "0x4CBCF40", VA = "0x4CBCF40")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60005EE")]
		[Address(RVA = "0x4CC1250", Offset = "0x4CC1250", VA = "0x4CC1250")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000014")]
	internal event Action<Column, ColumnDataType> columnChanged
	{
		[Token(Token = "0x60005EF")]
		[Address(RVA = "0x4CC1300", Offset = "0x4CC1300", VA = "0x4CC1300")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60005F0")]
		[Address(RVA = "0x4CC13B0", Offset = "0x4CC13B0", VA = "0x4CC13B0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000015")]
	internal event Action<Column> columnResized
	{
		[Token(Token = "0x60005F1")]
		[Address(RVA = "0x4CC1460", Offset = "0x4CC1460", VA = "0x4CC1460")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60005F2")]
		[Address(RVA = "0x4CC1510", Offset = "0x4CC1510", VA = "0x4CC1510")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000016")]
	internal event Action<Column, int, int> columnReordered
	{
		[Token(Token = "0x60005F3")]
		[Address(RVA = "0x4CBCFF0", Offset = "0x4CBCFF0", VA = "0x4CBCFF0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60005F4")]
		[Address(RVA = "0x4CC15C0", Offset = "0x4CC15C0", VA = "0x4CC15C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x4CC1670", Offset = "0x4CC1670", VA = "0x4CC1670")]
	public bool IsPrimary(Column column)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x4CBE710", Offset = "0x4CBE710", VA = "0x4CBE710", Slot = "11")]
	public IEnumerator<Column> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x4CC1750", Offset = "0x4CC1750", VA = "0x4CC1750", Slot = "12")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x4CC17E0", Offset = "0x4CC17E0", VA = "0x4CC17E0", Slot = "6")]
	public void Add(Column item)
	{
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x4CC1C60", Offset = "0x4CC1C60", VA = "0x4CC1C60", Slot = "7")]
	public void Clear()
	{
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x4CC2180", Offset = "0x4CC2180", VA = "0x4CC2180", Slot = "8")]
	public bool Contains(Column item)
	{
		return default(bool);
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x4CC2230", Offset = "0x4CC2230", VA = "0x4CC2230")]
	public bool Contains(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x4CC25B0", Offset = "0x4CC25B0", VA = "0x4CC25B0", Slot = "9")]
	public void CopyTo(Column[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x4CC1E30", Offset = "0x4CC1E30", VA = "0x4CC1E30", Slot = "10")]
	public bool Remove(Column column)
	{
		return default(bool);
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x4CC2670", Offset = "0x4CC2670", VA = "0x4CC2670")]
	private void OnColumnChanged(Column column, ColumnDataType type)
	{
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x4CC2740", Offset = "0x4CC2740", VA = "0x4CC2740")]
	private void OnColumnResized(Column column)
	{
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x4CBB5A0", Offset = "0x4CBB5A0", VA = "0x4CBB5A0")]
	public int IndexOf(Column column)
	{
		return default(int);
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x4CC1890", Offset = "0x4CC1890", VA = "0x4CC1890")]
	public void Insert(int index, Column column)
	{
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x4CC2B80", Offset = "0x4CC2B80", VA = "0x4CC2B80")]
	public void ReorderDisplay(int from, int to)
	{
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x4CC0CA0", Offset = "0x4CC0CA0", VA = "0x4CC0CA0")]
	private void InitOrderColumns()
	{
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x4CC26F0", Offset = "0x4CC26F0", VA = "0x4CC26F0")]
	private void DirtyVisibleColumns()
	{
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x4CC0D20", Offset = "0x4CC0D20", VA = "0x4CC0D20")]
	private void UpdateVisibleColumns()
	{
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x4CC0BC0", Offset = "0x4CC0BC0", VA = "0x4CC0BC0")]
	private void NotifyChange(ColumnsDataType type)
	{
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x4CC2D40", Offset = "0x4CC2D40", VA = "0x4CC2D40")]
	public Columns()
	{
	}
}
