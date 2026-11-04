// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Columns
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x3224F60", Offset = "0x3223560", VA = "0x183224F60")]
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
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<Column, ColumnDataType> m_columnChanged;

	[Token(Token = "0x40004EC")]
	[FieldOffset(Offset = "0x68")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
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
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007F7")]
		[Address(RVA = "0x3215C40", Offset = "0x3214240", VA = "0x183215C40")]
		set
		{
		}
	}

	[Token(Token = "0x1700017D")]
	[CreateProperty]
	public bool reorderable
	{
		[Token(Token = "0x60007F8")]
		[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60007F9")]
		[Address(RVA = "0x3215CF0", Offset = "0x32142F0", VA = "0x183215CF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700017E")]
	[CreateProperty]
	public bool resizable
	{
		[Token(Token = "0x60007FA")]
		[Address(RVA = "0x1D6A540", Offset = "0x1D68B40", VA = "0x181D6A540")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60007FB")]
		[Address(RVA = "0x3215D90", Offset = "0x3214390", VA = "0x183215D90")]
		set
		{
		}
	}

	[Token(Token = "0x1700017F")]
	[CreateProperty]
	public bool resizePreview
	{
		[Token(Token = "0x60007FC")]
		[Address(RVA = "0x1D6A550", Offset = "0x1D68B50", VA = "0x181D6A550")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60007FD")]
		[Address(RVA = "0x3215E30", Offset = "0x3214430", VA = "0x183215E30")]
		set
		{
		}
	}

	[Token(Token = "0x17000180")]
	internal IEnumerable<Column> displayList
	{
		[Token(Token = "0x60007FE")]
		[Address(RVA = "0x3215560", Offset = "0x3213B60", VA = "0x183215560")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000181")]
	internal IEnumerable<Column> visibleList
	{
		[Token(Token = "0x60007FF")]
		[Address(RVA = "0x3215580", Offset = "0x3213B80", VA = "0x183215580")]
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
		[Address(RVA = "0xB3E080", Offset = "0xB3C680", VA = "0x180B3E080")]
		get
		{
			return default(StretchMode);
		}
		[Token(Token = "0x6000803")]
		[Address(RVA = "0x3215ED0", Offset = "0x32144D0", VA = "0x183215ED0")]
		set
		{
		}
	}

	[Token(Token = "0x17000183")]
	public int Count
	{
		[Token(Token = "0x600081A")]
		[Address(RVA = "0x32152E0", Offset = "0x32138E0", VA = "0x1832152E0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000184")]
	public bool IsReadOnly
	{
		[Token(Token = "0x600081B")]
		[Address(RVA = "0x3215330", Offset = "0x3213930", VA = "0x183215330", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000185")]
	public Column this[int index]
	{
		[Token(Token = "0x600081E")]
		[Address(RVA = "0x3215380", Offset = "0x3213980", VA = "0x183215380")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000186")]
	public Column this[string name]
	{
		[Token(Token = "0x600081F")]
		[Address(RVA = "0x32153E0", Offset = "0x32139E0", VA = "0x1832153E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000018")]
	public event EventHandler<BindablePropertyChangedEventArgs> propertyChanged
	{
		[Token(Token = "0x60007F4")]
		[Address(RVA = "0x3215230", Offset = "0x3213830", VA = "0x183215230", Slot = "13")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60007F5")]
		[Address(RVA = "0x3215B90", Offset = "0x3214190", VA = "0x183215B90", Slot = "14")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000019")]
	internal event Action<ColumnsDataType> changed
	{
		[Token(Token = "0x6000800")]
		[Address(RVA = "0x3214E10", Offset = "0x3213410", VA = "0x183214E10")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000801")]
		[Address(RVA = "0x3215770", Offset = "0x3213D70", VA = "0x183215770")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400001A")]
	internal event Action<Column, int> columnAdded
	{
		[Token(Token = "0x6000804")]
		[Address(RVA = "0x3214EC0", Offset = "0x32134C0", VA = "0x183214EC0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000805")]
		[Address(RVA = "0x3215820", Offset = "0x3213E20", VA = "0x183215820")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400001B")]
	internal event Action<Column> columnRemoved
	{
		[Token(Token = "0x6000806")]
		[Address(RVA = "0x3215020", Offset = "0x3213620", VA = "0x183215020")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000807")]
		[Address(RVA = "0x3215980", Offset = "0x3213F80", VA = "0x183215980")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400001C")]
	internal event Action<Column, ColumnDataType> columnChanged
	{
		[Token(Token = "0x6000808")]
		[Address(RVA = "0x3214F70", Offset = "0x3213570", VA = "0x183214F70")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000809")]
		[Address(RVA = "0x32158D0", Offset = "0x3213ED0", VA = "0x1832158D0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400001D")]
	internal event Action<Column> columnResized
	{
		[Token(Token = "0x600080A")]
		[Address(RVA = "0x3215180", Offset = "0x3213780", VA = "0x183215180")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600080B")]
		[Address(RVA = "0x3215AE0", Offset = "0x32140E0", VA = "0x183215AE0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400001E")]
	internal event Action<Column, int, int> columnReordered
	{
		[Token(Token = "0x600080C")]
		[Address(RVA = "0x32150D0", Offset = "0x32136D0", VA = "0x1832150D0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600080D")]
		[Address(RVA = "0x3215A30", Offset = "0x3214030", VA = "0x183215A30")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600080E")]
	[Address(RVA = "0x3213EA0", Offset = "0x32124A0", VA = "0x183213EA0")]
	public bool IsPrimary(Column column)
	{
		return default(bool);
	}

	[Token(Token = "0x600080F")]
	[Address(RVA = "0x32139F0", Offset = "0x3211FF0", VA = "0x1832139F0", Slot = "11")]
	public IEnumerator<Column> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000810")]
	[Address(RVA = "0x32139F0", Offset = "0x3211FF0", VA = "0x1832139F0", Slot = "12")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000811")]
	[Address(RVA = "0x3213480", Offset = "0x3211A80", VA = "0x183213480", Slot = "6")]
	public void Add(Column item)
	{
	}

	[Token(Token = "0x6000812")]
	[Address(RVA = "0x32134F0", Offset = "0x3211AF0", VA = "0x1832134F0", Slot = "7")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000813")]
	[Address(RVA = "0x3213860", Offset = "0x3211E60", VA = "0x183213860", Slot = "8")]
	public bool Contains(Column item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000814")]
	[Address(RVA = "0x32136F0", Offset = "0x3211CF0", VA = "0x1832136F0")]
	public bool Contains(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000815")]
	[Address(RVA = "0x32138C0", Offset = "0x3211EC0", VA = "0x1832138C0", Slot = "9")]
	public void CopyTo(Column[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6000816")]
	[Address(RVA = "0x3214370", Offset = "0x3212970", VA = "0x183214370", Slot = "10")]
	public bool Remove(Column column)
	{
		return default(bool);
	}

	[Token(Token = "0x6000817")]
	[Address(RVA = "0x3214130", Offset = "0x3212730", VA = "0x183214130")]
	private void OnColumnsPropertyChanged(object sender, BindablePropertyChangedEventArgs args)
	{
	}

	[Token(Token = "0x6000818")]
	[Address(RVA = "0x3214070", Offset = "0x3212670", VA = "0x183214070")]
	private void OnColumnChanged(Column column, ColumnDataType type)
	{
	}

	[Token(Token = "0x6000819")]
	[Address(RVA = "0x3214110", Offset = "0x3212710", VA = "0x183214110")]
	private void OnColumnResized(Column column)
	{
	}

	[Token(Token = "0x600081C")]
	[Address(RVA = "0x3213A40", Offset = "0x3212040", VA = "0x183213A40")]
	public int IndexOf(Column column)
	{
		return default(int);
	}

	[Token(Token = "0x600081D")]
	[Address(RVA = "0x3213B20", Offset = "0x3212120", VA = "0x183213B20")]
	public void Insert(int index, Column column)
	{
	}

	[Token(Token = "0x6000820")]
	[Address(RVA = "0x3214620", Offset = "0x3212C20", VA = "0x183214620")]
	public void ReorderDisplay(int from, int to)
	{
	}

	[Token(Token = "0x6000821")]
	[Address(RVA = "0x3213AA0", Offset = "0x32120A0", VA = "0x183213AA0")]
	private void InitOrderColumns()
	{
	}

	[Token(Token = "0x6000822")]
	[Address(RVA = "0x3213990", Offset = "0x3211F90", VA = "0x183213990")]
	private void DirtyVisibleColumns()
	{
	}

	[Token(Token = "0x6000823")]
	[Address(RVA = "0x3214760", Offset = "0x3212D60", VA = "0x183214760")]
	private void UpdateVisibleColumns()
	{
	}

	[Token(Token = "0x6000824")]
	[Address(RVA = "0x3213F20", Offset = "0x3212520", VA = "0x183213F20")]
	private void NotifyChange(ColumnsDataType type)
	{
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x3213F40", Offset = "0x3212540", VA = "0x183213F40")]
	private void NotifyPropertyChanged(in BindingId property)
	{
	}

	[Token(Token = "0x6000826")]
	[Address(RVA = "0x3214D80", Offset = "0x3213380", VA = "0x183214D80")]
	public Columns()
	{
	}
}
