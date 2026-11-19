// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Internal.MultiColumnCollectionHeader
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
		[Address(RVA = "0x6C0A050", Offset = "0x6C09050", VA = "0x6C0A050")]
		internal void Save(MultiColumnCollectionHeader header)
		{
		}

		[Token(Token = "0x6002F23")]
		[Address(RVA = "0x6C09CA0", Offset = "0x6C08CA0", VA = "0x6C09CA0")]
		internal void Apply(MultiColumnCollectionHeader header)
		{
		}

		[Token(Token = "0x6002F24")]
		[Address(RVA = "0x6C0AF80", Offset = "0x6C09F80", VA = "0x6C0AF80")]
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
			[Address(RVA = "0x6C0B040", Offset = "0x6C0A040", VA = "0x6C0B040")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6002F26")]
			[Address(RVA = "0x6C0B050", Offset = "0x6C0A050", VA = "0x6C0B050")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000BC4")]
		public MultiColumnHeaderColumnResizeHandle resizeHandle
		{
			[Token(Token = "0x6002F27")]
			[Address(RVA = "0x6C0B060", Offset = "0x6C0A060", VA = "0x6C0B060")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6002F28")]
			[Address(RVA = "0x6C0B070", Offset = "0x6C0A070", VA = "0x6C0B070")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6002F29")]
		[Address(RVA = "0x6C074B0", Offset = "0x6C064B0", VA = "0x6C074B0")]
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
		[Address(RVA = "0x6C06250", Offset = "0x6C05250", VA = "0x6C06250")]
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
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
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
		[Address(RVA = "0x6C03EB0", Offset = "0x6C02EB0", VA = "0x6C03EB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BBA")]
	public Dictionary<Column, ColumnData> columnDataMap
	{
		[Token(Token = "0x6002EF2")]
		[Address(RVA = "0x6C03EC0", Offset = "0x6C02EC0", VA = "0x6C03EC0")]
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
		[Address(RVA = "0x6C03ED0", Offset = "0x6C02ED0", VA = "0x6C03ED0")]
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
		[Address(RVA = "0x6C03EE0", Offset = "0x6C02EE0", VA = "0x6C03EE0")]
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
		[Address(RVA = "0x6C03EF0", Offset = "0x6C02EF0", VA = "0x6C03EF0")]
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
		[Address(RVA = "0x6C03F00", Offset = "0x6C02F00", VA = "0x6C03F00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BBF")]
	internal IReadOnlyList<SortColumnDescription> sortedColumnReadonly
	{
		[Token(Token = "0x6002EF7")]
		[Address(RVA = "0x6C03F10", Offset = "0x6C02F10", VA = "0x6C03F10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BC0")]
	public SortColumnDescriptions sortDescriptions
	{
		[Token(Token = "0x6002EF8")]
		[Address(RVA = "0x6C03F20", Offset = "0x6C02F20", VA = "0x6C03F20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002EF9")]
		[Address(RVA = "0x6C03F30", Offset = "0x6C02F30", VA = "0x6C03F30")]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000BC1")]
	public Columns columns
	{
		[Token(Token = "0x6002EFA")]
		[Address(RVA = "0x6C047E0", Offset = "0x6C037E0", VA = "0x6C047E0")]
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
		[Address(RVA = "0x6C047F0", Offset = "0x6C037F0", VA = "0x6C047F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002EFC")]
		[Address(RVA = "0x6C04800", Offset = "0x6C03800", VA = "0x6C04800")]
		set
		{
		}
	}

	[Token(Token = "0x14000034")]
	public event Action<int, float> columnResized
	{
		[Token(Token = "0x6002EFD")]
		[Address(RVA = "0x6C04F20", Offset = "0x6C03F20", VA = "0x6C04F20")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6002EFE")]
		[Address(RVA = "0x6C04FD0", Offset = "0x6C03FD0", VA = "0x6C04FD0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000035")]
	public event Action columnSortingChanged
	{
		[Token(Token = "0x6002EFF")]
		[Address(RVA = "0x6C05080", Offset = "0x6C04080", VA = "0x6C05080")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6002F00")]
		[Address(RVA = "0x6C05120", Offset = "0x6C04120", VA = "0x6C05120")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000036")]
	public event Action<ContextualMenuPopulateEvent, Column> contextMenuPopulateEvent
	{
		[Token(Token = "0x6002F01")]
		[Address(RVA = "0x6C051C0", Offset = "0x6C041C0", VA = "0x6C051C0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6002F02")]
		[Address(RVA = "0x6C05270", Offset = "0x6C04270", VA = "0x6C05270")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000037")]
	internal event Action viewDataRestored
	{
		[Token(Token = "0x6002F03")]
		[Address(RVA = "0x6C05320", Offset = "0x6C04320", VA = "0x6C05320")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6002F04")]
		[Address(RVA = "0x6C053C0", Offset = "0x6C043C0", VA = "0x6C053C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6002F05")]
	[Address(RVA = "0x6C05460", Offset = "0x6C04460", VA = "0x6C05460")]
	public MultiColumnCollectionHeader(Columns columns, SortColumnDescriptions sortDescriptions, List<SortColumnDescription> sortedColumns)
	{
	}

	[Token(Token = "0x6002F06")]
	[Address(RVA = "0x6C060D0", Offset = "0x6C050D0", VA = "0x6C060D0")]
	private void ScheduleDoLayout()
	{
	}

	[Token(Token = "0x6002F07")]
	[Address(RVA = "0x6C061E0", Offset = "0x6C051E0", VA = "0x6C061E0")]
	private void ResizeToFit()
	{
	}

	[Token(Token = "0x6002F08")]
	[Address(RVA = "0x6C03FD0", Offset = "0x6C02FD0", VA = "0x6C03FD0")]
	private void UpdateSortedColumns()
	{
	}

	[Token(Token = "0x6002F09")]
	[Address(RVA = "0x6C062D0", Offset = "0x6C052D0", VA = "0x6C062D0")]
	private void UpdateColumnControls()
	{
	}

	[Token(Token = "0x6002F0A")]
	[Address(RVA = "0x6C06B60", Offset = "0x6C05B60", VA = "0x6C06B60")]
	private void OnColumnAdded(Column column, int index)
	{
	}

	[Token(Token = "0x6002F0B")]
	[Address(RVA = "0x6C05CE0", Offset = "0x6C04CE0", VA = "0x6C05CE0")]
	private void OnColumnAdded(Column column)
	{
	}

	[Token(Token = "0x6002F0C")]
	[Address(RVA = "0x6C074C0", Offset = "0x6C064C0", VA = "0x6C074C0")]
	private void OnColumnRemoved(Column column)
	{
	}

	[Token(Token = "0x6002F0D")]
	[Address(RVA = "0x6C077D0", Offset = "0x6C067D0", VA = "0x6C077D0")]
	private void OnColumnChanged(Column column, ColumnDataType type)
	{
	}

	[Token(Token = "0x6002F0E")]
	[Address(RVA = "0x6C081D0", Offset = "0x6C071D0", VA = "0x6C081D0")]
	private void OnColumnReordered(Column column, int from, int to)
	{
	}

	[Token(Token = "0x6002F0F")]
	[Address(RVA = "0x6C083A0", Offset = "0x6C073A0", VA = "0x6C083A0")]
	private void OnColumnResized(Column column)
	{
	}

	[Token(Token = "0x6002F10")]
	[Address(RVA = "0x6C083D0", Offset = "0x6C073D0", VA = "0x6C083D0")]
	private void OnContextualMenuManipulator(ContextualMenuPopulateEvent evt)
	{
	}

	[Token(Token = "0x6002F11")]
	[Address(RVA = "0x6C08E20", Offset = "0x6C07E20", VA = "0x6C08E20")]
	private void OnMoveManipulatorActivated(ColumnMover mover)
	{
	}

	[Token(Token = "0x6002F12")]
	[Address(RVA = "0x6C08F10", Offset = "0x6C07F10", VA = "0x6C08F10")]
	private void OnGeometryChanged(GeometryChangedEvent e)
	{
	}

	[Token(Token = "0x6002F13")]
	[Address(RVA = "0x6C09080", Offset = "0x6C08080", VA = "0x6C09080")]
	private void DoLayout()
	{
	}

	[Token(Token = "0x6002F14")]
	[Address(RVA = "0x6C09110", Offset = "0x6C08110", VA = "0x6C09110")]
	private void OnColumnControlGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6002F15")]
	[Address(RVA = "0x6C09450", Offset = "0x6C08450", VA = "0x6C09450")]
	private void OnColumnClicked(EventBase evt)
	{
	}

	[Token(Token = "0x6002F16")]
	[Address(RVA = "0x6C09680", Offset = "0x6C08680", VA = "0x6C09680")]
	private void UpdateSortColumnDescriptionsOnClick(Column column, EventModifiers modifiers)
	{
	}

	[Token(Token = "0x6002F17")]
	[Address(RVA = "0x6C09920", Offset = "0x6C08920", VA = "0x6C09920")]
	public void ScrollHorizontally(float horizontalOffset)
	{
	}

	[Token(Token = "0x6002F18")]
	[Address(RVA = "0x6C09350", Offset = "0x6C08350", VA = "0x6C09350")]
	private void RaiseColumnResized(int columnIndex)
	{
	}

	[Token(Token = "0x6002F19")]
	[Address(RVA = "0x6C062A0", Offset = "0x6C052A0", VA = "0x6C062A0")]
	private void RaiseColumnSortingChanged()
	{
	}

	[Token(Token = "0x6002F1A")]
	[Address(RVA = "0x6C07840", Offset = "0x6C06840", VA = "0x6C07840")]
	private void ApplyColumnSorting()
	{
	}

	[Token(Token = "0x6002F1B")]
	[Address(RVA = "0x6C04830", Offset = "0x6C03830", VA = "0x6C04830")]
	private void UpdateSortingStatus()
	{
	}

	[Token(Token = "0x6002F1C")]
	[Address(RVA = "0x6C09B90", Offset = "0x6C08B90", VA = "0x6C09B90", Slot = "135")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x6002F1D")]
	[Address(RVA = "0x6C06270", Offset = "0x6C05270", VA = "0x6C06270")]
	private void SaveViewState()
	{
	}

	[Token(Token = "0x6002F1E")]
	[Address(RVA = "0x6C075A0", Offset = "0x6C065A0", VA = "0x6C075A0")]
	private void CleanupColumnData(ColumnData data)
	{
	}

	[Token(Token = "0x6002F1F")]
	[Address(RVA = "0x6C0A9E0", Offset = "0x6C099E0", VA = "0x6C0A9E0", Slot = "141")]
	public void Dispose()
	{
	}
}
