// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Columns
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4FEA700", Offset = "0x4FEA700", VA = "0x4FEA700")]
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
		[Address(RVA = "0x4FE8480", Offset = "0x4FE8480", VA = "0x4FE8480")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005DE")]
		[Address(RVA = "0x4FE8490", Offset = "0x4FE8490", VA = "0x4FE8490")]
		set
		{
		}
	}

	[Token(Token = "0x17000105")]
	public bool reorderable
	{
		[Token(Token = "0x60005DF")]
		[Address(RVA = "0x4FE8510", Offset = "0x4FE8510", VA = "0x4FE8510")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005E0")]
		[Address(RVA = "0x4FE8520", Offset = "0x4FE8520", VA = "0x4FE8520")]
		set
		{
		}
	}

	[Token(Token = "0x17000106")]
	public bool resizable
	{
		[Token(Token = "0x60005E1")]
		[Address(RVA = "0x4FE8550", Offset = "0x4FE8550", VA = "0x4FE8550")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005E2")]
		[Address(RVA = "0x4FE8560", Offset = "0x4FE8560", VA = "0x4FE8560")]
		set
		{
		}
	}

	[Token(Token = "0x17000107")]
	public bool resizePreview
	{
		[Token(Token = "0x60005E3")]
		[Address(RVA = "0x4FE8590", Offset = "0x4FE8590", VA = "0x4FE8590")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005E4")]
		[Address(RVA = "0x4FE85A0", Offset = "0x4FE85A0", VA = "0x4FE85A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000108")]
	internal IEnumerable<Column> displayList
	{
		[Token(Token = "0x60005E5")]
		[Address(RVA = "0x4FE30A0", Offset = "0x4FE30A0", VA = "0x4FE30A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000109")]
	internal IEnumerable<Column> visibleList
	{
		[Token(Token = "0x60005E6")]
		[Address(RVA = "0x4FE31D0", Offset = "0x4FE31D0", VA = "0x4FE31D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010A")]
	public StretchMode stretchMode
	{
		[Token(Token = "0x60005E9")]
		[Address(RVA = "0x4FE8A90", Offset = "0x4FE8A90", VA = "0x4FE8A90")]
		get
		{
			return default(StretchMode);
		}
		[Token(Token = "0x60005EA")]
		[Address(RVA = "0x4FE8AA0", Offset = "0x4FE8AA0", VA = "0x4FE8AA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700010B")]
	public int Count
	{
		[Token(Token = "0x6000600")]
		[Address(RVA = "0x4FE4730", Offset = "0x4FE4730", VA = "0x4FE4730", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700010C")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000601")]
		[Address(RVA = "0x4FEA090", Offset = "0x4FEA090", VA = "0x4FEA090", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010D")]
	public Column this[int index]
	{
		[Token(Token = "0x6000604")]
		[Address(RVA = "0x4FE4440", Offset = "0x4FE4440", VA = "0x4FE4440")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010E")]
	public Column this[string name]
	{
		[Token(Token = "0x6000605")]
		[Address(RVA = "0x4FEA130", Offset = "0x4FEA130", VA = "0x4FEA130")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000011")]
	internal event Action<ColumnsDataType> changed
	{
		[Token(Token = "0x60005E7")]
		[Address(RVA = "0x4FE8930", Offset = "0x4FE8930", VA = "0x4FE8930")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60005E8")]
		[Address(RVA = "0x4FE89E0", Offset = "0x4FE89E0", VA = "0x4FE89E0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000012")]
	internal event Action<Column, int> columnAdded
	{
		[Token(Token = "0x60005EB")]
		[Address(RVA = "0x4FE47C0", Offset = "0x4FE47C0", VA = "0x4FE47C0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60005EC")]
		[Address(RVA = "0x4FE8AD0", Offset = "0x4FE8AD0", VA = "0x4FE8AD0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000013")]
	internal event Action<Column> columnRemoved
	{
		[Token(Token = "0x60005ED")]
		[Address(RVA = "0x4FE4870", Offset = "0x4FE4870", VA = "0x4FE4870")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60005EE")]
		[Address(RVA = "0x4FE8B80", Offset = "0x4FE8B80", VA = "0x4FE8B80")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000014")]
	internal event Action<Column, ColumnDataType> columnChanged
	{
		[Token(Token = "0x60005EF")]
		[Address(RVA = "0x4FE8C30", Offset = "0x4FE8C30", VA = "0x4FE8C30")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60005F0")]
		[Address(RVA = "0x4FE8CE0", Offset = "0x4FE8CE0", VA = "0x4FE8CE0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000015")]
	internal event Action<Column> columnResized
	{
		[Token(Token = "0x60005F1")]
		[Address(RVA = "0x4FE8D90", Offset = "0x4FE8D90", VA = "0x4FE8D90")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60005F2")]
		[Address(RVA = "0x4FE8E40", Offset = "0x4FE8E40", VA = "0x4FE8E40")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000016")]
	internal event Action<Column, int, int> columnReordered
	{
		[Token(Token = "0x60005F3")]
		[Address(RVA = "0x4FE4920", Offset = "0x4FE4920", VA = "0x4FE4920")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60005F4")]
		[Address(RVA = "0x4FE8EF0", Offset = "0x4FE8EF0", VA = "0x4FE8EF0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x4FE8FA0", Offset = "0x4FE8FA0", VA = "0x4FE8FA0")]
	public bool IsPrimary(Column column)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x4FE6040", Offset = "0x4FE6040", VA = "0x4FE6040", Slot = "11")]
	public IEnumerator<Column> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x4FE9080", Offset = "0x4FE9080", VA = "0x4FE9080", Slot = "12")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x4FE9110", Offset = "0x4FE9110", VA = "0x4FE9110", Slot = "6")]
	public void Add(Column item)
	{
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x4FE9590", Offset = "0x4FE9590", VA = "0x4FE9590", Slot = "7")]
	public void Clear()
	{
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x4FE9AB0", Offset = "0x4FE9AB0", VA = "0x4FE9AB0", Slot = "8")]
	public bool Contains(Column item)
	{
		return default(bool);
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x4FE9B60", Offset = "0x4FE9B60", VA = "0x4FE9B60")]
	public bool Contains(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x4FE9EE0", Offset = "0x4FE9EE0", VA = "0x4FE9EE0", Slot = "9")]
	public void CopyTo(Column[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x4FE9760", Offset = "0x4FE9760", VA = "0x4FE9760", Slot = "10")]
	public bool Remove(Column column)
	{
		return default(bool);
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x4FE9FA0", Offset = "0x4FE9FA0", VA = "0x4FE9FA0")]
	private void OnColumnChanged(Column column, ColumnDataType type)
	{
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x4FEA070", Offset = "0x4FEA070", VA = "0x4FEA070")]
	private void OnColumnResized(Column column)
	{
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x4FE2ED0", Offset = "0x4FE2ED0", VA = "0x4FE2ED0")]
	public int IndexOf(Column column)
	{
		return default(int);
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x4FE91C0", Offset = "0x4FE91C0", VA = "0x4FE91C0")]
	public void Insert(int index, Column column)
	{
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x4FEA4B0", Offset = "0x4FEA4B0", VA = "0x4FEA4B0")]
	public void ReorderDisplay(int from, int to)
	{
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x4FE85D0", Offset = "0x4FE85D0", VA = "0x4FE85D0")]
	private void InitOrderColumns()
	{
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x4FEA020", Offset = "0x4FEA020", VA = "0x4FEA020")]
	private void DirtyVisibleColumns()
	{
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x4FE8650", Offset = "0x4FE8650", VA = "0x4FE8650")]
	private void UpdateVisibleColumns()
	{
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x4FE84F0", Offset = "0x4FE84F0", VA = "0x4FE84F0")]
	private void NotifyChange(ColumnsDataType type)
	{
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x4FEA670", Offset = "0x4FEA670", VA = "0x4FEA670")]
	public Columns()
	{
	}
}
