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
		[Address(RVA = "0x4CB7EC0", Offset = "0x4CB7EC0", VA = "0x4CB7EC0")]
		internal void Save(MultiColumnCollectionHeader header)
		{
		}

		[Token(Token = "0x6002192")]
		[Address(RVA = "0x4CB7AE0", Offset = "0x4CB7AE0", VA = "0x4CB7AE0")]
		internal void Apply(MultiColumnCollectionHeader header)
		{
		}

		[Token(Token = "0x6002193")]
		[Address(RVA = "0x4CB8DA0", Offset = "0x4CB8DA0", VA = "0x4CB8DA0")]
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
			[Address(RVA = "0x4CB8E60", Offset = "0x4CB8E60", VA = "0x4CB8E60")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6002195")]
			[Address(RVA = "0x4CB8E70", Offset = "0x4CB8E70", VA = "0x4CB8E70")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700089E")]
		public MultiColumnHeaderColumnResizeHandle resizeHandle
		{
			[Token(Token = "0x6002196")]
			[Address(RVA = "0x4CB8E80", Offset = "0x4CB8E80", VA = "0x4CB8E80")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6002197")]
			[Address(RVA = "0x4CB8E90", Offset = "0x4CB8E90", VA = "0x4CB8E90")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6002198")]
		[Address(RVA = "0x4CB5150", Offset = "0x4CB5150", VA = "0x4CB5150")]
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
		[Address(RVA = "0x4CB3D90", Offset = "0x4CB3D90", VA = "0x4CB3D90")]
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
		[Address(RVA = "0x4CB1850", Offset = "0x4CB1850", VA = "0x4CB1850")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000895")]
	public Dictionary<Column, ColumnData> columnDataMap
	{
		[Token(Token = "0x6002163")]
		[Address(RVA = "0x4CB1860", Offset = "0x4CB1860", VA = "0x4CB1860")]
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
		[Address(RVA = "0x4CB1870", Offset = "0x4CB1870", VA = "0x4CB1870")]
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
		[Address(RVA = "0x4CB1880", Offset = "0x4CB1880", VA = "0x4CB1880")]
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
		[Address(RVA = "0x4CB1890", Offset = "0x4CB1890", VA = "0x4CB1890")]
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
		[Address(RVA = "0x4CB18A0", Offset = "0x4CB18A0", VA = "0x4CB18A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700089A")]
	public SortColumnDescriptions sortDescriptions
	{
		[Token(Token = "0x6002168")]
		[Address(RVA = "0x4CB18B0", Offset = "0x4CB18B0", VA = "0x4CB18B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002169")]
		[Address(RVA = "0x4CB18C0", Offset = "0x4CB18C0", VA = "0x4CB18C0")]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700089B")]
	public Columns columns
	{
		[Token(Token = "0x600216A")]
		[Address(RVA = "0x4CB2200", Offset = "0x4CB2200", VA = "0x4CB2200")]
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
		[Address(RVA = "0x4CB2210", Offset = "0x4CB2210", VA = "0x4CB2210")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600216C")]
		[Address(RVA = "0x4CB2220", Offset = "0x4CB2220", VA = "0x4CB2220")]
		set
		{
		}
	}

	[Token(Token = "0x1400002B")]
	public event Action<int, float> columnResized
	{
		[Token(Token = "0x600216D")]
		[Address(RVA = "0x4CB2AB0", Offset = "0x4CB2AB0", VA = "0x4CB2AB0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600216E")]
		[Address(RVA = "0x4CB2B60", Offset = "0x4CB2B60", VA = "0x4CB2B60")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400002C")]
	public event Action columnSortingChanged
	{
		[Token(Token = "0x600216F")]
		[Address(RVA = "0x4CB2C10", Offset = "0x4CB2C10", VA = "0x4CB2C10")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6002170")]
		[Address(RVA = "0x4CB2CB0", Offset = "0x4CB2CB0", VA = "0x4CB2CB0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400002D")]
	public event Action<ContextualMenuPopulateEvent, Column> contextMenuPopulateEvent
	{
		[Token(Token = "0x6002171")]
		[Address(RVA = "0x4CB2D50", Offset = "0x4CB2D50", VA = "0x4CB2D50")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6002172")]
		[Address(RVA = "0x4CB2E00", Offset = "0x4CB2E00", VA = "0x4CB2E00")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400002E")]
	internal event Action viewDataRestored
	{
		[Token(Token = "0x6002173")]
		[Address(RVA = "0x4CB2EB0", Offset = "0x4CB2EB0", VA = "0x4CB2EB0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6002174")]
		[Address(RVA = "0x4CB2F50", Offset = "0x4CB2F50", VA = "0x4CB2F50")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6002175")]
	[Address(RVA = "0x4CB2FF0", Offset = "0x4CB2FF0", VA = "0x4CB2FF0")]
	public MultiColumnCollectionHeader(Columns columns, SortColumnDescriptions sortDescriptions, List<SortColumnDescription> sortedColumns)
	{
	}

	[Token(Token = "0x6002176")]
	[Address(RVA = "0x4CB3C50", Offset = "0x4CB3C50", VA = "0x4CB3C50")]
	private void ScheduleDoLayout()
	{
	}

	[Token(Token = "0x6002177")]
	[Address(RVA = "0x4CB3D60", Offset = "0x4CB3D60", VA = "0x4CB3D60")]
	private void ResizeToFit()
	{
	}

	[Token(Token = "0x6002178")]
	[Address(RVA = "0x4CB1960", Offset = "0x4CB1960", VA = "0x4CB1960")]
	private void UpdateSortedColumns()
	{
	}

	[Token(Token = "0x6002179")]
	[Address(RVA = "0x4CB3E10", Offset = "0x4CB3E10", VA = "0x4CB3E10")]
	private void UpdateColumnControls()
	{
	}

	[Token(Token = "0x600217A")]
	[Address(RVA = "0x4CB4840", Offset = "0x4CB4840", VA = "0x4CB4840")]
	private void OnColumnAdded(Column column, int index)
	{
	}

	[Token(Token = "0x600217B")]
	[Address(RVA = "0x4CB38D0", Offset = "0x4CB38D0", VA = "0x4CB38D0")]
	private void OnColumnAdded(Column column)
	{
	}

	[Token(Token = "0x600217C")]
	[Address(RVA = "0x4CB5160", Offset = "0x4CB5160", VA = "0x4CB5160")]
	private void OnColumnRemoved(Column column)
	{
	}

	[Token(Token = "0x600217D")]
	[Address(RVA = "0x4CB53D0", Offset = "0x4CB53D0", VA = "0x4CB53D0")]
	private void OnColumnChanged(Column column, ColumnDataType type)
	{
	}

	[Token(Token = "0x600217E")]
	[Address(RVA = "0x4CB6030", Offset = "0x4CB6030", VA = "0x4CB6030")]
	private void OnColumnReordered(Column column, int from, int to)
	{
	}

	[Token(Token = "0x600217F")]
	[Address(RVA = "0x4CB6200", Offset = "0x4CB6200", VA = "0x4CB6200")]
	private void OnColumnResized(Column column)
	{
	}

	[Token(Token = "0x6002180")]
	[Address(RVA = "0x4CB6230", Offset = "0x4CB6230", VA = "0x4CB6230")]
	private void OnContextualMenuManipulator(ContextualMenuPopulateEvent evt)
	{
	}

	[Token(Token = "0x6002181")]
	[Address(RVA = "0x4CB6D90", Offset = "0x4CB6D90", VA = "0x4CB6D90")]
	private void OnMoveManipulatorActivated(ColumnMover mover)
	{
	}

	[Token(Token = "0x6002182")]
	[Address(RVA = "0x4CB6E80", Offset = "0x4CB6E80", VA = "0x4CB6E80")]
	private void OnGeometryChanged(GeometryChangedEvent e)
	{
	}

	[Token(Token = "0x6002183")]
	[Address(RVA = "0x4CB6F30", Offset = "0x4CB6F30", VA = "0x4CB6F30")]
	private void DoLayout()
	{
	}

	[Token(Token = "0x6002184")]
	[Address(RVA = "0x4CB6F70", Offset = "0x4CB6F70", VA = "0x4CB6F70")]
	private void OnColumnControlGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6002185")]
	[Address(RVA = "0x4CB7290", Offset = "0x4CB7290", VA = "0x4CB7290")]
	private void OnColumnClicked(EventBase evt)
	{
	}

	[Token(Token = "0x6002186")]
	[Address(RVA = "0x4CB74F0", Offset = "0x4CB74F0", VA = "0x4CB74F0")]
	private void UpdateSortColumnDescriptionsOnClick(Column column, EventModifiers modifiers)
	{
	}

	[Token(Token = "0x6002187")]
	[Address(RVA = "0x4CB7790", Offset = "0x4CB7790", VA = "0x4CB7790")]
	public void ScrollHorizontally(float horizontalOffset)
	{
	}

	[Token(Token = "0x6002188")]
	[Address(RVA = "0x4CB7190", Offset = "0x4CB7190", VA = "0x4CB7190")]
	private void RaiseColumnResized(int columnIndex)
	{
	}

	[Token(Token = "0x6002189")]
	[Address(RVA = "0x4CB3DE0", Offset = "0x4CB3DE0", VA = "0x4CB3DE0")]
	private void RaiseColumnSortingChanged()
	{
	}

	[Token(Token = "0x600218A")]
	[Address(RVA = "0x4CB5440", Offset = "0x4CB5440", VA = "0x4CB5440")]
	private void ApplyColumnSorting()
	{
	}

	[Token(Token = "0x600218B")]
	[Address(RVA = "0x4CB2250", Offset = "0x4CB2250", VA = "0x4CB2250")]
	private void UpdateSortingStatus()
	{
	}

	[Token(Token = "0x600218C")]
	[Address(RVA = "0x4CB79C0", Offset = "0x4CB79C0", VA = "0x4CB79C0", Slot = "94")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x600218D")]
	[Address(RVA = "0x4CB3DB0", Offset = "0x4CB3DB0", VA = "0x4CB3DB0")]
	private void SaveViewState()
	{
	}

	[Token(Token = "0x600218E")]
	[Address(RVA = "0x4CB8710", Offset = "0x4CB8710", VA = "0x4CB8710", Slot = "98")]
	public void Dispose()
	{
	}
}
