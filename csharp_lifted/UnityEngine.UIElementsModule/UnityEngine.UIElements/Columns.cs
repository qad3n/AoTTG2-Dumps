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
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000112")]
[UxmlObject]
public class Columns : ICollection<Column>, IEnumerable<Column>, IEnumerable, INotifyBindablePropertyChanged
{
	[Token(Token = "0x2000113")]
	public enum StretchMode
	{
		[Token(Token = "0x40004EF")]
		Grow,
		[Token(Token = "0x40004F0")]
		GrowAndFill
	}

	[Token(Token = "0x2000114")]
	[Obsolete("UxmlObjectFactory<T> is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	internal class UxmlObjectFactory<T> : UxmlObjectFactory<T, UxmlObjectTraits<T>> where T : Columns, new()
	{
		[Token(Token = "0x6000828")]
		public UxmlObjectFactory()
		{
		}
	}

	[Token(Token = "0x2000115")]
	[Obsolete("UxmlObjectFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	internal class UxmlObjectFactory : UxmlObjectFactory<Columns>
	{
		[Token(Token = "0x6000829")]
		[Address(RVA = "0x6C1DC10", Offset = "0x6C1CC10", VA = "0x6C1DC10")]
		public UxmlObjectFactory()
		{
		}
	}

	[Token(Token = "0x2000116")]
	[Obsolete("UxmlObjectTraits<T> is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	internal class UxmlObjectTraits<T> : UnityEngine.UIElements.UxmlObjectTraits<T> where T : Columns
	{
		[Token(Token = "0x40004F1")]
		[FieldOffset(Offset = "0x0")]
		private readonly UxmlStringAttributeDescription m_PrimaryColumnName;

		[Token(Token = "0x40004F2")]
		[FieldOffset(Offset = "0x0")]
		private readonly UxmlEnumAttributeDescription<StretchMode> m_StretchMode;

		[Token(Token = "0x40004F3")]
		[FieldOffset(Offset = "0x0")]
		private readonly UxmlBoolAttributeDescription m_Reorderable;

		[Token(Token = "0x40004F4")]
		[FieldOffset(Offset = "0x0")]
		private readonly UxmlBoolAttributeDescription m_Resizable;

		[Token(Token = "0x40004F5")]
		[FieldOffset(Offset = "0x0")]
		private readonly UxmlBoolAttributeDescription m_ResizePreview;

		[Token(Token = "0x40004F6")]
		[FieldOffset(Offset = "0x0")]
		private readonly UxmlObjectListAttributeDescription<Column> m_Columns;

		[Token(Token = "0x600082A")]
		public override void Init(ref T obj, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x600082B")]
		public UxmlObjectTraits()
		{
		}
	}

	[Token(Token = "0x40004D9")]
	[FieldOffset(Offset = "0x0")]
	private static readonly BindingId primaryColumnNameProperty;

	[Token(Token = "0x40004DA")]
	[FieldOffset(Offset = "0x98")]
	private static readonly BindingId reorderableProperty;

	[Token(Token = "0x40004DB")]
	[FieldOffset(Offset = "0x130")]
	private static readonly BindingId resizableProperty;

	[Token(Token = "0x40004DC")]
	[FieldOffset(Offset = "0x1C8")]
	private static readonly BindingId resizePreviewProperty;

	[Token(Token = "0x40004DD")]
	[FieldOffset(Offset = "0x260")]
	private static readonly BindingId stretchModeProperty;

	[Token(Token = "0x40004DE")]
	[FieldOffset(Offset = "0x10")]
	private IList<Column> m_Columns;

	[Token(Token = "0x40004DF")]
	[FieldOffset(Offset = "0x18")]
	private List<Column> m_DisplayColumns;

	[Token(Token = "0x40004E0")]
	[FieldOffset(Offset = "0x20")]
	private List<Column> m_VisibleColumns;

	[Token(Token = "0x40004E1")]
	[FieldOffset(Offset = "0x28")]
	private bool m_VisibleColumnsDirty;

	[Token(Token = "0x40004E2")]
	[FieldOffset(Offset = "0x2C")]
	private StretchMode m_StretchMode;

	[Token(Token = "0x40004E3")]
	[FieldOffset(Offset = "0x30")]
	private bool m_Reorderable;

	[Token(Token = "0x40004E4")]
	[FieldOffset(Offset = "0x31")]
	private bool m_Resizable;

	[Token(Token = "0x40004E5")]
	[FieldOffset(Offset = "0x32")]
	private bool m_ResizePreview;

	[Token(Token = "0x40004E6")]
	[FieldOffset(Offset = "0x38")]
	private string m_PrimaryColumnName;

	[Token(Token = "0x40004E7")]
	[FieldOffset(Offset = "0x40")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private EventHandler<BindablePropertyChangedEventArgs> m_propertyChanged;

	[Token(Token = "0x40004E8")]
	[FieldOffset(Offset = "0x48")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<ColumnsDataType> m_changed;

	[Token(Token = "0x40004E9")]
	[FieldOffset(Offset = "0x50")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<Column, int> m_columnAdded;

	[Token(Token = "0x40004EA")]
	[FieldOffset(Offset = "0x58")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<Column> m_columnRemoved;

	[Token(Token = "0x40004EB")]
	[FieldOffset(Offset = "0x60")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<Column, ColumnDataType> m_columnChanged;

	[Token(Token = "0x40004EC")]
	[FieldOffset(Offset = "0x68")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<Column> m_columnResized;

	[Token(Token = "0x40004ED")]
	[FieldOffset(Offset = "0x70")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<Column, int, int> m_columnReordered;

	[Token(Token = "0x1700017C")]
	[CreateProperty]
	public string primaryColumnName
	{
		[Token(Token = "0x60007F6")]
		[Address(RVA = "0x6C1AF60", Offset = "0x6C19F60", VA = "0x6C1AF60")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007F7")]
		[Address(RVA = "0x6C1AF70", Offset = "0x6C19F70", VA = "0x6C1AF70")]
		set
		{
		}
	}

	[Token(Token = "0x1700017D")]
	[CreateProperty]
	public bool reorderable
	{
		[Token(Token = "0x60007F8")]
		[Address(RVA = "0x6C1B1A0", Offset = "0x6C1A1A0", VA = "0x6C1B1A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60007F9")]
		[Address(RVA = "0x6C1B1B0", Offset = "0x6C1A1B0", VA = "0x6C1B1B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700017E")]
	[CreateProperty]
	public bool resizable
	{
		[Token(Token = "0x60007FA")]
		[Address(RVA = "0x6C1B2E0", Offset = "0x6C1A2E0", VA = "0x6C1B2E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60007FB")]
		[Address(RVA = "0x6C1B2F0", Offset = "0x6C1A2F0", VA = "0x6C1B2F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700017F")]
	[CreateProperty]
	public bool resizePreview
	{
		[Token(Token = "0x60007FC")]
		[Address(RVA = "0x6C1B420", Offset = "0x6C1A420", VA = "0x6C1B420")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60007FD")]
		[Address(RVA = "0x6C1B430", Offset = "0x6C1A430", VA = "0x6C1B430")]
		set
		{
		}
	}

	[Token(Token = "0x17000180")]
	internal IEnumerable<Column> displayList
	{
		[Token(Token = "0x60007FE")]
		[Address(RVA = "0x6C13A60", Offset = "0x6C12A60", VA = "0x6C13A60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000181")]
	internal IEnumerable<Column> visibleList
	{
		[Token(Token = "0x60007FF")]
		[Address(RVA = "0x6C13B90", Offset = "0x6C12B90", VA = "0x6C13B90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000182")]
	[CreateProperty]
	public StretchMode stretchMode
	{
		[Token(Token = "0x6000802")]
		[Address(RVA = "0x6C1B9E0", Offset = "0x6C1A9E0", VA = "0x6C1B9E0")]
		get
		{
			return default(StretchMode);
		}
		[Token(Token = "0x6000803")]
		[Address(RVA = "0x6C1B9F0", Offset = "0x6C1A9F0", VA = "0x6C1B9F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000183")]
	public int Count
	{
		[Token(Token = "0x600081A")]
		[Address(RVA = "0x6C161B0", Offset = "0x6C151B0", VA = "0x6C161B0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000184")]
	public bool IsReadOnly
	{
		[Token(Token = "0x600081B")]
		[Address(RVA = "0x6C1D3E0", Offset = "0x6C1C3E0", VA = "0x6C1D3E0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000185")]
	public Column this[int index]
	{
		[Token(Token = "0x600081E")]
		[Address(RVA = "0x6C15EE0", Offset = "0x6C14EE0", VA = "0x6C15EE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000186")]
	public Column this[string name]
	{
		[Token(Token = "0x600081F")]
		[Address(RVA = "0x6C1D480", Offset = "0x6C1C480", VA = "0x6C1D480")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000018")]
	public event EventHandler<BindablePropertyChangedEventArgs> propertyChanged
	{
		[Token(Token = "0x60007F4")]
		[Address(RVA = "0x6C1AE20", Offset = "0x6C19E20", VA = "0x6C1AE20", Slot = "13")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60007F5")]
		[Address(RVA = "0x6C1AEC0", Offset = "0x6C19EC0", VA = "0x6C1AEC0", Slot = "14")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000019")]
	internal event Action<ColumnsDataType> changed
	{
		[Token(Token = "0x6000800")]
		[Address(RVA = "0x6C1B8A0", Offset = "0x6C1A8A0", VA = "0x6C1B8A0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000801")]
		[Address(RVA = "0x6C1B940", Offset = "0x6C1A940", VA = "0x6C1B940")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400001A")]
	internal event Action<Column, int> columnAdded
	{
		[Token(Token = "0x6000804")]
		[Address(RVA = "0x6C16240", Offset = "0x6C15240", VA = "0x6C16240")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000805")]
		[Address(RVA = "0x6C1BB20", Offset = "0x6C1AB20", VA = "0x6C1BB20")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400001B")]
	internal event Action<Column> columnRemoved
	{
		[Token(Token = "0x6000806")]
		[Address(RVA = "0x6C162E0", Offset = "0x6C152E0", VA = "0x6C162E0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000807")]
		[Address(RVA = "0x6C1BBC0", Offset = "0x6C1ABC0", VA = "0x6C1BBC0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400001C")]
	internal event Action<Column, ColumnDataType> columnChanged
	{
		[Token(Token = "0x6000808")]
		[Address(RVA = "0x6C1BC60", Offset = "0x6C1AC60", VA = "0x6C1BC60")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000809")]
		[Address(RVA = "0x6C1BD00", Offset = "0x6C1AD00", VA = "0x6C1BD00")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400001D")]
	internal event Action<Column> columnResized
	{
		[Token(Token = "0x600080A")]
		[Address(RVA = "0x6C1BDA0", Offset = "0x6C1ADA0", VA = "0x6C1BDA0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600080B")]
		[Address(RVA = "0x6C1BE40", Offset = "0x6C1AE40", VA = "0x6C1BE40")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400001E")]
	internal event Action<Column, int, int> columnReordered
	{
		[Token(Token = "0x600080C")]
		[Address(RVA = "0x6C16380", Offset = "0x6C15380", VA = "0x6C16380")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600080D")]
		[Address(RVA = "0x6C1BEE0", Offset = "0x6C1AEE0", VA = "0x6C1BEE0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600080E")]
	[Address(RVA = "0x6C1BF80", Offset = "0x6C1AF80", VA = "0x6C1BF80")]
	public bool IsPrimary(Column column)
	{
		return default(bool);
	}

	[Token(Token = "0x600080F")]
	[Address(RVA = "0x6C18970", Offset = "0x6C17970", VA = "0x6C18970", Slot = "11")]
	public IEnumerator<Column> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000810")]
	[Address(RVA = "0x6C1C060", Offset = "0x6C1B060", VA = "0x6C1C060", Slot = "12")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000811")]
	[Address(RVA = "0x6C1C0F0", Offset = "0x6C1B0F0", VA = "0x6C1C0F0", Slot = "6")]
	public void Add(Column item)
	{
	}

	[Token(Token = "0x6000812")]
	[Address(RVA = "0x6C1C620", Offset = "0x6C1B620", VA = "0x6C1C620", Slot = "7")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000813")]
	[Address(RVA = "0x6C1CC00", Offset = "0x6C1BC00", VA = "0x6C1CC00", Slot = "8")]
	public bool Contains(Column item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000814")]
	[Address(RVA = "0x6C1CCB0", Offset = "0x6C1BCB0", VA = "0x6C1CCB0")]
	public bool Contains(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000815")]
	[Address(RVA = "0x6C1CFC0", Offset = "0x6C1BFC0", VA = "0x6C1CFC0", Slot = "9")]
	public void CopyTo(Column[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000816")]
	[Address(RVA = "0x6C1C7F0", Offset = "0x6C1B7F0", VA = "0x6C1C7F0", Slot = "10")]
	public bool Remove(Column column)
	{
		return default(bool);
	}

	[Token(Token = "0x6000817")]
	[Address(RVA = "0x6C1D080", Offset = "0x6C1C080", VA = "0x6C1D080")]
	private void OnColumnsPropertyChanged(object sender, BindablePropertyChangedEventArgs args)
	{
	}

	[Token(Token = "0x6000818")]
	[Address(RVA = "0x6C1D2F0", Offset = "0x6C1C2F0", VA = "0x6C1D2F0")]
	private void OnColumnChanged(Column column, ColumnDataType type)
	{
	}

	[Token(Token = "0x6000819")]
	[Address(RVA = "0x6C1D3C0", Offset = "0x6C1C3C0", VA = "0x6C1D3C0")]
	private void OnColumnResized(Column column)
	{
	}

	[Token(Token = "0x600081C")]
	[Address(RVA = "0x6C138A0", Offset = "0x6C128A0", VA = "0x6C138A0")]
	public int IndexOf(Column column)
	{
		return default(int);
	}

	[Token(Token = "0x600081D")]
	[Address(RVA = "0x6C1C1B0", Offset = "0x6C1B1B0", VA = "0x6C1C1B0")]
	public void Insert(int index, Column column)
	{
	}

	[Token(Token = "0x6000820")]
	[Address(RVA = "0x6C1D7B0", Offset = "0x6C1C7B0", VA = "0x6C1D7B0")]
	public void ReorderDisplay(int from, int to)
	{
	}

	[Token(Token = "0x6000821")]
	[Address(RVA = "0x6C1B560", Offset = "0x6C1A560", VA = "0x6C1B560")]
	private void InitOrderColumns()
	{
	}

	[Token(Token = "0x6000822")]
	[Address(RVA = "0x6C1D370", Offset = "0x6C1C370", VA = "0x6C1D370")]
	private void DirtyVisibleColumns()
	{
	}

	[Token(Token = "0x6000823")]
	[Address(RVA = "0x6C1B5E0", Offset = "0x6C1A5E0", VA = "0x6C1B5E0")]
	private void UpdateVisibleColumns()
	{
	}

	[Token(Token = "0x6000824")]
	[Address(RVA = "0x6C1B0C0", Offset = "0x6C1A0C0", VA = "0x6C1B0C0")]
	private void NotifyChange(ColumnsDataType type)
	{
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x6C1B0E0", Offset = "0x6C1A0E0", VA = "0x6C1B0E0")]
	private void NotifyPropertyChanged(in BindingId property)
	{
	}

	[Token(Token = "0x6000826")]
	[Address(RVA = "0x6C1D960", Offset = "0x6C1C960", VA = "0x6C1D960")]
	public Columns()
	{
	}
}
