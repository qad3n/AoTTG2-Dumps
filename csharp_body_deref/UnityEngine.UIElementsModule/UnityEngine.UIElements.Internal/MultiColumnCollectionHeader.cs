// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Internal.MultiColumnCollectionHeader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Internal;

[Token(Token = "0x200056D")]
internal class MultiColumnCollectionHeader : VisualElement, IDisposable
{
	[Serializable]
	[Token(Token = "0x200056E")]
	private class ViewState
	{
		[Serializable]
		[Token(Token = "0x200056F")]
		private struct ColumnState
		{
			[Token(Token = "0x40012D2")]
			[FieldOffset(Offset = "0x0")]
			public int index;

			[Token(Token = "0x40012D3")]
			[FieldOffset(Offset = "0x8")]
			public string name;

			[Token(Token = "0x40012D4")]
			[FieldOffset(Offset = "0x10")]
			public float actualWidth;

			[Token(Token = "0x40012D5")]
			[FieldOffset(Offset = "0x14")]
			public float width;

			[Token(Token = "0x40012D6")]
			[FieldOffset(Offset = "0x18")]
			public bool visible;
		}

		[Token(Token = "0x40012CF")]
		[FieldOffset(Offset = "0x10")]
		[SerializeField]
		private bool m_HasPersistedData;

		[Token(Token = "0x40012D0")]
		[FieldOffset(Offset = "0x18")]
		[SerializeField]
		private List<SortColumnDescription> m_SortDescriptions;

		[Token(Token = "0x40012D1")]
		[FieldOffset(Offset = "0x20")]
		[SerializeField]
		private List<ColumnState> m_OrderedColumnStates;

		[Token(Token = "0x6002191")]
		[Address(RVA = "0x4FDF7F0", Offset = "0x4FDF7F0", VA = "0x4FDF7F0")]
		internal void Save(MultiColumnCollectionHeader header)
		{
		}

		[Token(Token = "0x6002192")]
		[Address(RVA = "0x4FDF410", Offset = "0x4FDF410", VA = "0x4FDF410")]
		internal void Apply(MultiColumnCollectionHeader header)
		{
		}

		[Token(Token = "0x6002193")]
		[Address(RVA = "0x4FE06D0", Offset = "0x4FE06D0", VA = "0x4FE06D0")]
		public ViewState()
		{
		}
	}

	[Token(Token = "0x2000570")]
	internal class ColumnData
	{
		[Token(Token = "0x1700089D")]
		public MultiColumnHeaderColumn control
		{
			[Token(Token = "0x6002194")]
			[Address(RVA = "0x4FE0790", Offset = "0x4FE0790", VA = "0x4FE0790")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6002195")]
			[Address(RVA = "0x4FE07A0", Offset = "0x4FE07A0", VA = "0x4FE07A0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700089E")]
		public MultiColumnHeaderColumnResizeHandle resizeHandle
		{
			[Token(Token = "0x6002196")]
			[Address(RVA = "0x4FE07B0", Offset = "0x4FE07B0", VA = "0x4FE07B0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6002197")]
			[Address(RVA = "0x4FE07C0", Offset = "0x4FE07C0", VA = "0x4FE07C0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6002198")]
		[Address(RVA = "0x4FDCA80", Offset = "0x4FDCA80", VA = "0x4FDCA80")]
		public ColumnData()
		{
		}
	}

	[Token(Token = "0x2000571")]
	private struct SortedColumnState
	{
		[Token(Token = "0x40012D9")]
		[FieldOffset(Offset = "0x0")]
		public SortColumnDescription columnDesc;

		[Token(Token = "0x40012DA")]
		[FieldOffset(Offset = "0x8")]
		public SortDirection direction;

		[Token(Token = "0x6002199")]
		[Address(RVA = "0x4FDB6C0", Offset = "0x4FDB6C0", VA = "0x4FDB6C0")]
		public SortedColumnState(SortColumnDescription desc, SortDirection dir)
		{
		}
	}

	[Token(Token = "0x40012BA")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string ussClassName;

	[Token(Token = "0x40012BB")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string columnContainerUssClassName;

	[Token(Token = "0x40012BC")]
	[FieldOffset(Offset = "0x10")]
	public static readonly string handleContainerUssClassName;

	[Token(Token = "0x40012BD")]
	[FieldOffset(Offset = "0x18")]
	public static readonly string reorderableUssClassName;

	[Token(Token = "0x40012BE")]
	[FieldOffset(Offset = "0x3D8")]
	private bool m_SortingEnabled;

	[Token(Token = "0x40012BF")]
	[FieldOffset(Offset = "0x3E0")]
	private List<SortColumnDescription> m_SortedColumns;

	[Token(Token = "0x40012C0")]
	[FieldOffset(Offset = "0x3E8")]
	private SortColumnDescriptions m_SortDescriptions;

	[Token(Token = "0x40012C1")]
	[FieldOffset(Offset = "0x3F0")]
	private List<SortedColumnState> m_OldSortedColumnStates;

	[Token(Token = "0x40012C2")]
	[FieldOffset(Offset = "0x3F8")]
	private bool m_SortingUpdatesTemporarilyDisabled;

	[Token(Token = "0x40012C3")]
	[FieldOffset(Offset = "0x400")]
	private ViewState m_ViewState;

	[Token(Token = "0x40012C4")]
	[FieldOffset(Offset = "0x408")]
	private bool m_ApplyingViewState;

	[Token(Token = "0x40012C5")]
	[FieldOffset(Offset = "0x409")]
	private bool m_DoLayoutScheduled;

	[Token(Token = "0x17000894")]
	internal bool isApplyingViewState
	{
		[Token(Token = "0x6002162")]
		[Address(RVA = "0x4FD9180", Offset = "0x4FD9180", VA = "0x4FD9180")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000895")]
	public Dictionary<Column, ColumnData> columnDataMap
	{
		[Token(Token = "0x6002163")]
		[Address(RVA = "0x4FD9190", Offset = "0x4FD9190", VA = "0x4FD9190")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000896")]
	public ColumnLayout columnLayout
	{
		[Token(Token = "0x6002164")]
		[Address(RVA = "0x4FD91A0", Offset = "0x4FD91A0", VA = "0x4FD91A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000897")]
	public VisualElement columnContainer
	{
		[Token(Token = "0x6002165")]
		[Address(RVA = "0x4FD91B0", Offset = "0x4FD91B0", VA = "0x4FD91B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000898")]
	public VisualElement resizeHandleContainer
	{
		[Token(Token = "0x6002166")]
		[Address(RVA = "0x4FD91C0", Offset = "0x4FD91C0", VA = "0x4FD91C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000899")]
	public IEnumerable<SortColumnDescription> sortedColumns
	{
		[Token(Token = "0x6002167")]
		[Address(RVA = "0x4FD91D0", Offset = "0x4FD91D0", VA = "0x4FD91D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700089A")]
	public SortColumnDescriptions sortDescriptions
	{
		[Token(Token = "0x6002168")]
		[Address(RVA = "0x4FD91E0", Offset = "0x4FD91E0", VA = "0x4FD91E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002169")]
		[Address(RVA = "0x4FD91F0", Offset = "0x4FD91F0", VA = "0x4FD91F0")]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700089B")]
	public Columns columns
	{
		[Token(Token = "0x600216A")]
		[Address(RVA = "0x4FD9B30", Offset = "0x4FD9B30", VA = "0x4FD9B30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700089C")]
	public bool sortingEnabled
	{
		[Token(Token = "0x600216B")]
		[Address(RVA = "0x4FD9B40", Offset = "0x4FD9B40", VA = "0x4FD9B40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600216C")]
		[Address(RVA = "0x4FD9B50", Offset = "0x4FD9B50", VA = "0x4FD9B50")]
		set
		{
		}
	}

	[Token(Token = "0x1400002B")]
	public event Action<int, float> columnResized
	{
		[Token(Token = "0x600216D")]
		[Address(RVA = "0x4FDA3E0", Offset = "0x4FDA3E0", VA = "0x4FDA3E0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600216E")]
		[Address(RVA = "0x4FDA490", Offset = "0x4FDA490", VA = "0x4FDA490")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400002C")]
	public event Action columnSortingChanged
	{
		[Token(Token = "0x600216F")]
		[Address(RVA = "0x4FDA540", Offset = "0x4FDA540", VA = "0x4FDA540")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6002170")]
		[Address(RVA = "0x4FDA5E0", Offset = "0x4FDA5E0", VA = "0x4FDA5E0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400002D")]
	public event Action<ContextualMenuPopulateEvent, Column> contextMenuPopulateEvent
	{
		[Token(Token = "0x6002171")]
		[Address(RVA = "0x4FDA680", Offset = "0x4FDA680", VA = "0x4FDA680")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6002172")]
		[Address(RVA = "0x4FDA730", Offset = "0x4FDA730", VA = "0x4FDA730")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400002E")]
	internal event Action viewDataRestored
	{
		[Token(Token = "0x6002173")]
		[Address(RVA = "0x4FDA7E0", Offset = "0x4FDA7E0", VA = "0x4FDA7E0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6002174")]
		[Address(RVA = "0x4FDA880", Offset = "0x4FDA880", VA = "0x4FDA880")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6002175")]
	[Address(RVA = "0x4FDA920", Offset = "0x4FDA920", VA = "0x4FDA920")]
	public MultiColumnCollectionHeader(Columns columns, SortColumnDescriptions sortDescriptions, List<SortColumnDescription> sortedColumns)
	{
	}

	[Token(Token = "0x6002176")]
	[Address(RVA = "0x4FDB580", Offset = "0x4FDB580", VA = "0x4FDB580")]
	private void ScheduleDoLayout()
	{
	}

	[Token(Token = "0x6002177")]
	[Address(RVA = "0x4FDB690", Offset = "0x4FDB690", VA = "0x4FDB690")]
	private void ResizeToFit()
	{
	}

	[Token(Token = "0x6002178")]
	[Address(RVA = "0x4FD9290", Offset = "0x4FD9290", VA = "0x4FD9290")]
	private void UpdateSortedColumns()
	{
	}

	[Token(Token = "0x6002179")]
	[Address(RVA = "0x4FDB740", Offset = "0x4FDB740", VA = "0x4FDB740")]
	private void UpdateColumnControls()
	{
	}

	[Token(Token = "0x600217A")]
	[Address(RVA = "0x4FDC170", Offset = "0x4FDC170", VA = "0x4FDC170")]
	private void OnColumnAdded(Column column, int index)
	{
	}

	[Token(Token = "0x600217B")]
	[Address(RVA = "0x4FDB200", Offset = "0x4FDB200", VA = "0x4FDB200")]
	private void OnColumnAdded(Column column)
	{
	}

	[Token(Token = "0x600217C")]
	[Address(RVA = "0x4FDCA90", Offset = "0x4FDCA90", VA = "0x4FDCA90")]
	private void OnColumnRemoved(Column column)
	{
	}

	[Token(Token = "0x600217D")]
	[Address(RVA = "0x4FDCD00", Offset = "0x4FDCD00", VA = "0x4FDCD00")]
	private void OnColumnChanged(Column column, ColumnDataType type)
	{
	}

	[Token(Token = "0x600217E")]
	[Address(RVA = "0x4FDD960", Offset = "0x4FDD960", VA = "0x4FDD960")]
	private void OnColumnReordered(Column column, int from, int to)
	{
	}

	[Token(Token = "0x600217F")]
	[Address(RVA = "0x4FDDB30", Offset = "0x4FDDB30", VA = "0x4FDDB30")]
	private void OnColumnResized(Column column)
	{
	}

	[Token(Token = "0x6002180")]
	[Address(RVA = "0x4FDDB60", Offset = "0x4FDDB60", VA = "0x4FDDB60")]
	private void OnContextualMenuManipulator(ContextualMenuPopulateEvent evt)
	{
	}

	[Token(Token = "0x6002181")]
	[Address(RVA = "0x4FDE6C0", Offset = "0x4FDE6C0", VA = "0x4FDE6C0")]
	private void OnMoveManipulatorActivated(ColumnMover mover)
	{
	}

	[Token(Token = "0x6002182")]
	[Address(RVA = "0x4FDE7B0", Offset = "0x4FDE7B0", VA = "0x4FDE7B0")]
	private void OnGeometryChanged(GeometryChangedEvent e)
	{
	}

	[Token(Token = "0x6002183")]
	[Address(RVA = "0x4FDE860", Offset = "0x4FDE860", VA = "0x4FDE860")]
	private void DoLayout()
	{
	}

	[Token(Token = "0x6002184")]
	[Address(RVA = "0x4FDE8A0", Offset = "0x4FDE8A0", VA = "0x4FDE8A0")]
	private void OnColumnControlGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6002185")]
	[Address(RVA = "0x4FDEBC0", Offset = "0x4FDEBC0", VA = "0x4FDEBC0")]
	private void OnColumnClicked(EventBase evt)
	{
	}

	[Token(Token = "0x6002186")]
	[Address(RVA = "0x4FDEE20", Offset = "0x4FDEE20", VA = "0x4FDEE20")]
	private void UpdateSortColumnDescriptionsOnClick(Column column, EventModifiers modifiers)
	{
	}

	[Token(Token = "0x6002187")]
	[Address(RVA = "0x4FDF0C0", Offset = "0x4FDF0C0", VA = "0x4FDF0C0")]
	public void ScrollHorizontally(float horizontalOffset)
	{
	}

	[Token(Token = "0x6002188")]
	[Address(RVA = "0x4FDEAC0", Offset = "0x4FDEAC0", VA = "0x4FDEAC0")]
	private void RaiseColumnResized(int columnIndex)
	{
	}

	[Token(Token = "0x6002189")]
	[Address(RVA = "0x4FDB710", Offset = "0x4FDB710", VA = "0x4FDB710")]
	private void RaiseColumnSortingChanged()
	{
	}

	[Token(Token = "0x600218A")]
	[Address(RVA = "0x4FDCD70", Offset = "0x4FDCD70", VA = "0x4FDCD70")]
	private void ApplyColumnSorting()
	{
	}

	[Token(Token = "0x600218B")]
	[Address(RVA = "0x4FD9B80", Offset = "0x4FD9B80", VA = "0x4FD9B80")]
	private void UpdateSortingStatus()
	{
	}

	[Token(Token = "0x600218C")]
	[Address(RVA = "0x4FDF2F0", Offset = "0x4FDF2F0", VA = "0x4FDF2F0", Slot = "94")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x600218D")]
	[Address(RVA = "0x4FDB6E0", Offset = "0x4FDB6E0", VA = "0x4FDB6E0")]
	private void SaveViewState()
	{
	}

	[Token(Token = "0x600218E")]
	[Address(RVA = "0x4FE0040", Offset = "0x4FE0040", VA = "0x4FE0040", Slot = "98")]
	public void Dispose()
	{
	}
}
