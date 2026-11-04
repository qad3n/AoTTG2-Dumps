// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Internal.MultiColumnCollectionHeader
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

namespace UnityEngine.UIElements.Internal;

[Token(Token = "0x2000668")]
internal class MultiColumnCollectionHeader : VisualElement, IDisposable
{
	[Serializable]
	[Token(Token = "0x2000669")]
	private class ViewState
	{
		[Serializable]
		[Token(Token = "0x200066A")]
		private struct ColumnState
		{
			[Token(Token = "0x400188C")]
			[FieldOffset(Offset = "0x0")]
			public int index;

			[Token(Token = "0x400188D")]
			[FieldOffset(Offset = "0x8")]
			public string name;

			[Token(Token = "0x400188E")]
			[FieldOffset(Offset = "0x10")]
			public float actualWidth;

			[Token(Token = "0x400188F")]
			[FieldOffset(Offset = "0x14")]
			public Length width;

			[Token(Token = "0x4001890")]
			[FieldOffset(Offset = "0x1C")]
			public bool visible;
		}

		[Token(Token = "0x4001889")]
		[FieldOffset(Offset = "0x10")]
		[SerializeField]
		private bool m_HasPersistedData;

		[Token(Token = "0x400188A")]
		[FieldOffset(Offset = "0x18")]
		[SerializeField]
		private List<SortColumnDescription> m_SortDescriptions;

		[Token(Token = "0x400188B")]
		[FieldOffset(Offset = "0x20")]
		[SerializeField]
		private List<ColumnState> m_OrderedColumnStates;

		[Token(Token = "0x6002F22")]
		[Address(RVA = "0x3208D60", Offset = "0x3207360", VA = "0x183208D60")]
		internal void Save(MultiColumnCollectionHeader header)
		{
		}

		[Token(Token = "0x6002F23")]
		[Address(RVA = "0x3208A20", Offset = "0x3207020", VA = "0x183208A20")]
		internal void Apply(MultiColumnCollectionHeader header)
		{
		}

		[Token(Token = "0x6002F24")]
		[Address(RVA = "0x3209310", Offset = "0x3207910", VA = "0x183209310")]
		public ViewState()
		{
		}
	}

	[Token(Token = "0x200066B")]
	internal class ColumnData
	{
		[Token(Token = "0x17000BC3")]
		public MultiColumnHeaderColumn control
		{
			[Token(Token = "0x6002F25")]
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6002F26")]
			[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000BC4")]
		public MultiColumnHeaderColumnResizeHandle resizeHandle
		{
			[Token(Token = "0x6002F27")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6002F28")]
			[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6002F29")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public ColumnData()
		{
		}
	}

	[Token(Token = "0x200066C")]
	private struct SortedColumnState
	{
		[Token(Token = "0x4001893")]
		[FieldOffset(Offset = "0x0")]
		public SortColumnDescription columnDesc;

		[Token(Token = "0x4001894")]
		[FieldOffset(Offset = "0x8")]
		public SortDirection direction;

		[Token(Token = "0x6002F2A")]
		[Address(RVA = "0xCFB160", Offset = "0xCF9760", VA = "0x180CFB160")]
		public SortedColumnState(SortColumnDescription desc, SortDirection dir)
		{
		}
	}

	[Token(Token = "0x4001874")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string ussClassName;

	[Token(Token = "0x4001875")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string columnContainerUssClassName;

	[Token(Token = "0x4001876")]
	[FieldOffset(Offset = "0x10")]
	public static readonly string handleContainerUssClassName;

	[Token(Token = "0x4001877")]
	[FieldOffset(Offset = "0x18")]
	public static readonly string reorderableUssClassName;

	[Token(Token = "0x4001878")]
	[FieldOffset(Offset = "0x2C8")]
	private bool m_SortingEnabled;

	[Token(Token = "0x4001879")]
	[FieldOffset(Offset = "0x2D0")]
	private List<SortColumnDescription> m_SortedColumns;

	[Token(Token = "0x400187A")]
	[FieldOffset(Offset = "0x2D8")]
	private SortColumnDescriptions m_SortDescriptions;

	[Token(Token = "0x400187B")]
	[FieldOffset(Offset = "0x2E0")]
	private List<SortedColumnState> m_OldSortedColumnStates;

	[Token(Token = "0x400187C")]
	[FieldOffset(Offset = "0x2E8")]
	private bool m_SortingUpdatesTemporarilyDisabled;

	[Token(Token = "0x400187D")]
	[FieldOffset(Offset = "0x2F0")]
	private ViewState m_ViewState;

	[Token(Token = "0x400187E")]
	[FieldOffset(Offset = "0x2F8")]
	private bool m_ApplyingViewState;

	[Token(Token = "0x400187F")]
	[FieldOffset(Offset = "0x2F9")]
	private bool m_DoLayoutScheduled;

	[Token(Token = "0x4001885")]
	[FieldOffset(Offset = "0x328")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<int, float> m_columnResized;

	[Token(Token = "0x4001886")]
	[FieldOffset(Offset = "0x330")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action m_columnSortingChanged;

	[Token(Token = "0x4001887")]
	[FieldOffset(Offset = "0x338")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<ContextualMenuPopulateEvent, Column> m_contextMenuPopulateEvent;

	[Token(Token = "0x4001888")]
	[FieldOffset(Offset = "0x340")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action m_viewDataRestored;

	[Token(Token = "0x17000BB9")]
	internal bool isApplyingViewState
	{
		[Token(Token = "0x6002EF1")]
		[Address(RVA = "0x3203700", Offset = "0x3201D00", VA = "0x183203700")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BBA")]
	public Dictionary<Column, ColumnData> columnDataMap
	{
		[Token(Token = "0x6002EF2")]
		[Address(RVA = "0xE35940", Offset = "0xE33F40", VA = "0x180E35940")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BBB")]
	public ColumnLayout columnLayout
	{
		[Token(Token = "0x6002EF3")]
		[Address(RVA = "0x3136460", Offset = "0x3134A60", VA = "0x183136460")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BBC")]
	public VisualElement columnContainer
	{
		[Token(Token = "0x6002EF4")]
		[Address(RVA = "0x32036F0", Offset = "0x3201CF0", VA = "0x1832036F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BBD")]
	public VisualElement resizeHandleContainer
	{
		[Token(Token = "0x6002EF5")]
		[Address(RVA = "0x100AE90", Offset = "0x1009490", VA = "0x18100AE90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BBE")]
	public IEnumerable<SortColumnDescription> sortedColumns
	{
		[Token(Token = "0x6002EF6")]
		[Address(RVA = "0x31DC9F0", Offset = "0x31DAFF0", VA = "0x1831DC9F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BBF")]
	internal IReadOnlyList<SortColumnDescription> sortedColumnReadonly
	{
		[Token(Token = "0x6002EF7")]
		[Address(RVA = "0x31DC9F0", Offset = "0x31DAFF0", VA = "0x1831DC9F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BC0")]
	public SortColumnDescriptions sortDescriptions
	{
		[Token(Token = "0x6002EF8")]
		[Address(RVA = "0x312F010", Offset = "0x312D610", VA = "0x18312F010")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002EF9")]
		[Address(RVA = "0x32039C0", Offset = "0x3201FC0", VA = "0x1832039C0")]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000BC1")]
	public Columns columns
	{
		[Token(Token = "0x6002EFA")]
		[Address(RVA = "0x100AEB0", Offset = "0x10094B0", VA = "0x18100AEB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BC2")]
	public bool sortingEnabled
	{
		[Token(Token = "0x6002EFB")]
		[Address(RVA = "0x3203710", Offset = "0x3201D10", VA = "0x183203710")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002EFC")]
		[Address(RVA = "0x3203A70", Offset = "0x3202070", VA = "0x183203A70")]
		set
		{
		}
	}

	[Token(Token = "0x14000034")]
	public event Action<int, float> columnResized
	{
		[Token(Token = "0x6002EFD")]
		[Address(RVA = "0x3203450", Offset = "0x3201A50", VA = "0x183203450")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6002EFE")]
		[Address(RVA = "0x3203720", Offset = "0x3201D20", VA = "0x183203720")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000035")]
	public event Action columnSortingChanged
	{
		[Token(Token = "0x6002EFF")]
		[Address(RVA = "0x3203500", Offset = "0x3201B00", VA = "0x183203500")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6002F00")]
		[Address(RVA = "0x32037D0", Offset = "0x3201DD0", VA = "0x1832037D0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000036")]
	public event Action<ContextualMenuPopulateEvent, Column> contextMenuPopulateEvent
	{
		[Token(Token = "0x6002F01")]
		[Address(RVA = "0x32035A0", Offset = "0x3201BA0", VA = "0x1832035A0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6002F02")]
		[Address(RVA = "0x3203870", Offset = "0x3201E70", VA = "0x183203870")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000037")]
	internal event Action viewDataRestored
	{
		[Token(Token = "0x6002F03")]
		[Address(RVA = "0x3203650", Offset = "0x3201C50", VA = "0x183203650")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6002F04")]
		[Address(RVA = "0x3203920", Offset = "0x3201F20", VA = "0x183203920")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6002F05")]
	[Address(RVA = "0x3202C80", Offset = "0x3201280", VA = "0x183202C80")]
	public MultiColumnCollectionHeader(Columns columns, SortColumnDescriptions sortDescriptions, List<SortColumnDescription> sortedColumns)
	{
	}

	[Token(Token = "0x6002F06")]
	[Address(RVA = "0x3201510", Offset = "0x31FFB10", VA = "0x183201510")]
	private void ScheduleDoLayout()
	{
	}

	[Token(Token = "0x6002F07")]
	[Address(RVA = "0x32014A0", Offset = "0x31FFAA0", VA = "0x1832014A0")]
	private void ResizeToFit()
	{
	}

	[Token(Token = "0x6002F08")]
	[Address(RVA = "0x3201FD0", Offset = "0x32005D0", VA = "0x183201FD0")]
	private void UpdateSortedColumns()
	{
	}

	[Token(Token = "0x6002F09")]
	[Address(RVA = "0x3201880", Offset = "0x31FFE80", VA = "0x183201880")]
	private void UpdateColumnControls()
	{
	}

	[Token(Token = "0x6002F0A")]
	[Address(RVA = "0x31FF7A0", Offset = "0x31FDDA0", VA = "0x1831FF7A0")]
	private void OnColumnAdded(Column column, int index)
	{
	}

	[Token(Token = "0x6002F0B")]
	[Address(RVA = "0x31FF7B0", Offset = "0x31FDDB0", VA = "0x1831FF7B0")]
	private void OnColumnAdded(Column column)
	{
	}

	[Token(Token = "0x6002F0C")]
	[Address(RVA = "0x3200300", Offset = "0x31FE900", VA = "0x183200300")]
	private void OnColumnRemoved(Column column)
	{
	}

	[Token(Token = "0x6002F0D")]
	[Address(RVA = "0x31FFD70", Offset = "0x31FE370", VA = "0x1831FFD70")]
	private void OnColumnChanged(Column column, ColumnDataType type)
	{
	}

	[Token(Token = "0x6002F0E")]
	[Address(RVA = "0x3200610", Offset = "0x31FEC10", VA = "0x183200610")]
	private void OnColumnReordered(Column column, int from, int to)
	{
	}

	[Token(Token = "0x6002F0F")]
	[Address(RVA = "0x32007D0", Offset = "0x31FEDD0", VA = "0x1832007D0")]
	private void OnColumnResized(Column column)
	{
	}

	[Token(Token = "0x6002F10")]
	[Address(RVA = "0x3200810", Offset = "0x31FEE10", VA = "0x183200810")]
	private void OnContextualMenuManipulator(ContextualMenuPopulateEvent evt)
	{
	}

	[Token(Token = "0x6002F11")]
	[Address(RVA = "0x3201190", Offset = "0x31FF790", VA = "0x183201190")]
	private void OnMoveManipulatorActivated(ColumnMover mover)
	{
	}

	[Token(Token = "0x6002F12")]
	[Address(RVA = "0x3200FB0", Offset = "0x31FF5B0", VA = "0x183200FB0")]
	private void OnGeometryChanged(GeometryChangedEvent e)
	{
	}

	[Token(Token = "0x6002F13")]
	[Address(RVA = "0x31FF710", Offset = "0x31FDD10", VA = "0x1831FF710")]
	private void DoLayout()
	{
	}

	[Token(Token = "0x6002F14")]
	[Address(RVA = "0x31FFFB0", Offset = "0x31FE5B0", VA = "0x1831FFFB0")]
	private void OnColumnControlGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6002F15")]
	[Address(RVA = "0x31FFE00", Offset = "0x31FE400", VA = "0x1831FFE00")]
	private void OnColumnClicked(EventBase evt)
	{
	}

	[Token(Token = "0x6002F16")]
	[Address(RVA = "0x3201DA0", Offset = "0x32003A0", VA = "0x183201DA0")]
	private void UpdateSortColumnDescriptionsOnClick(Column column, EventModifiers modifiers)
	{
	}

	[Token(Token = "0x6002F17")]
	[Address(RVA = "0x32015D0", Offset = "0x31FFBD0", VA = "0x1832015D0")]
	public void ScrollHorizontally(float horizontalOffset)
	{
	}

	[Token(Token = "0x6002F18")]
	[Address(RVA = "0x3201340", Offset = "0x31FF940", VA = "0x183201340")]
	private void RaiseColumnResized(int columnIndex)
	{
	}

	[Token(Token = "0x6002F19")]
	[Address(RVA = "0x3201460", Offset = "0x31FFA60", VA = "0x183201460")]
	private void RaiseColumnSortingChanged()
	{
	}

	[Token(Token = "0x6002F1A")]
	[Address(RVA = "0x31FE9F0", Offset = "0x31FCFF0", VA = "0x1831FE9F0")]
	private void ApplyColumnSorting()
	{
	}

	[Token(Token = "0x6002F1B")]
	[Address(RVA = "0x32025E0", Offset = "0x3200BE0", VA = "0x1832025E0")]
	private void UpdateSortingStatus()
	{
	}

	[Token(Token = "0x6002F1C")]
	[Address(RVA = "0x3201230", Offset = "0x31FF830", VA = "0x183201230", Slot = "135")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x6002F1D")]
	[Address(RVA = "0x32007D0", Offset = "0x31FEDD0", VA = "0x1832007D0")]
	private void SaveViewState()
	{
	}

	[Token(Token = "0x6002F1E")]
	[Address(RVA = "0x31FF0F0", Offset = "0x31FD6F0", VA = "0x1831FF0F0")]
	private void CleanupColumnData(ColumnData data)
	{
	}

	[Token(Token = "0x6002F1F")]
	[Address(RVA = "0x31FF330", Offset = "0x31FD930", VA = "0x1831FF330", Slot = "141")]
	public void Dispose()
	{
	}
}
