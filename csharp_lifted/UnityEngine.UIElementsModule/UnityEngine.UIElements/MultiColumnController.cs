// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MultiColumnController
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
using UnityEngine.UIElements.Internal;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000119")]
public class MultiColumnController : IDisposable
{
	[Token(Token = "0x40004FD")]
	[FieldOffset(Offset = "0x0")]
	private static readonly PropertyName k_BoundColumnVePropertyName;

	[Token(Token = "0x40004FE")]
	[FieldOffset(Offset = "0x4")]
	internal static readonly PropertyName bindableElementPropertyName;

	[Token(Token = "0x40004FF")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly string baseUssClassName;

	[Token(Token = "0x4000500")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string k_HeaderContainerViewDataKey;

	[Token(Token = "0x4000501")]
	[FieldOffset(Offset = "0x18")]
	public static readonly string headerContainerUssClassName;

	[Token(Token = "0x4000502")]
	[FieldOffset(Offset = "0x20")]
	public static readonly string rowContainerUssClassName;

	[Token(Token = "0x4000503")]
	[FieldOffset(Offset = "0x28")]
	public static readonly string cellUssClassName;

	[Token(Token = "0x4000504")]
	[FieldOffset(Offset = "0x30")]
	public static readonly string cellLabelUssClassName;

	[Token(Token = "0x4000505")]
	[FieldOffset(Offset = "0x38")]
	private static readonly string k_HeaderViewDataKey;

	[Token(Token = "0x4000506")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action m_columnSortingChanged;

	[Token(Token = "0x4000507")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<ContextualMenuPopulateEvent, Column> m_headerContextMenuPopulateEvent;

	[Token(Token = "0x4000508")]
	[FieldOffset(Offset = "0x20")]
	private List<int> m_SortedToSourceIndex;

	[Token(Token = "0x4000509")]
	[FieldOffset(Offset = "0x28")]
	private List<int> m_SourceToSortedIndex;

	[Token(Token = "0x400050A")]
	[FieldOffset(Offset = "0x30")]
	private ColumnSortingMode m_SortingMode;

	[Token(Token = "0x400050B")]
	[FieldOffset(Offset = "0x38")]
	private BaseVerticalCollectionView m_View;

	[Token(Token = "0x400050C")]
	[FieldOffset(Offset = "0x40")]
	private VisualElement m_HeaderContainer;

	[Token(Token = "0x400050D")]
	[FieldOffset(Offset = "0x48")]
	private MultiColumnCollectionHeader m_MultiColumnHeader;

	[Token(Token = "0x17000187")]
	internal MultiColumnCollectionHeader header
	{
		[Token(Token = "0x6000833")]
		[Address(RVA = "0x6C1DF50", Offset = "0x6C1CF50", VA = "0x6C1DF50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000188")]
	internal ColumnSortingMode sortingMode
	{
		[Token(Token = "0x6000834")]
		[Address(RVA = "0x6C1DF60", Offset = "0x6C1CF60", VA = "0x6C1DF60")]
		get
		{
			return default(ColumnSortingMode);
		}
		[Token(Token = "0x6000835")]
		[Address(RVA = "0x6C1DF70", Offset = "0x6C1CF70", VA = "0x6C1DF70")]
		set
		{
		}
	}

	[Token(Token = "0x1400001F")]
	public event Action columnSortingChanged
	{
		[Token(Token = "0x600082F")]
		[Address(RVA = "0x6C1DCF0", Offset = "0x6C1CCF0", VA = "0x6C1DCF0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000830")]
		[Address(RVA = "0x6C1DD80", Offset = "0x6C1CD80", VA = "0x6C1DD80")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000020")]
	public event Action<ContextualMenuPopulateEvent, Column> headerContextMenuPopulateEvent
	{
		[Token(Token = "0x6000831")]
		[Address(RVA = "0x6C1DE10", Offset = "0x6C1CE10", VA = "0x6C1DE10")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000832")]
		[Address(RVA = "0x6C1DEB0", Offset = "0x6C1CEB0", VA = "0x6C1DEB0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000836")]
	[Address(RVA = "0x6C1DFA0", Offset = "0x6C1CFA0", VA = "0x6C1DFA0")]
	public MultiColumnController(Columns columns, SortColumnDescriptions sortDescriptions, List<SortColumnDescription> sortedColumns)
	{
	}

	[Token(Token = "0x6000837")]
	private static void BindCellItem<T>(VisualElement ve, int rowIndex, Column column, T item)
	{
	}

	[Token(Token = "0x6000838")]
	[Address(RVA = "0x6C1E640", Offset = "0x6C1D640", VA = "0x6C1E640")]
	private static void UnbindCellItem(VisualElement ve, int rowIndex, Column column)
	{
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x6C1E680", Offset = "0x6C1D680", VA = "0x6C1E680")]
	private static VisualElement DefaultMakeCellItem()
	{
		return null;
	}

	[Token(Token = "0x600083A")]
	private static void DefaultBindCellItem<T>(VisualElement ve, T item)
	{
	}

	[Token(Token = "0x600083B")]
	[Address(RVA = "0x6C1E730", Offset = "0x6C1D730", VA = "0x6C1E730")]
	public VisualElement MakeItem()
	{
		return null;
	}

	[Token(Token = "0x600083C")]
	public void BindItem<T>(VisualElement element, int index, T item)
	{
	}

	[Token(Token = "0x600083D")]
	[Address(RVA = "0x6C1EBE0", Offset = "0x6C1DBE0", VA = "0x6C1EBE0")]
	public void UnbindItem(VisualElement element, int index)
	{
	}

	[Token(Token = "0x600083E")]
	[Address(RVA = "0x6C1F170", Offset = "0x6C1E170", VA = "0x6C1F170")]
	public void DestroyItem(VisualElement element)
	{
	}

	[Token(Token = "0x600083F")]
	[Address(RVA = "0x6C1F5E0", Offset = "0x6C1E5E0", VA = "0x6C1F5E0")]
	public void PrepareView(BaseVerticalCollectionView collectionView)
	{
	}

	[Token(Token = "0x6000840")]
	[Address(RVA = "0x6C1F900", Offset = "0x6C1E900", VA = "0x6C1F900", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000841")]
	[Address(RVA = "0x6C200D0", Offset = "0x6C1F0D0", VA = "0x6C200D0")]
	private void OnHorizontalScrollerValueChanged(float v)
	{
	}

	[Token(Token = "0x6000842")]
	[Address(RVA = "0x6C200F0", Offset = "0x6C1F0F0", VA = "0x6C200F0")]
	private void OnViewportGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000843")]
	[Address(RVA = "0x6C20640", Offset = "0x6C1F640", VA = "0x6C20640")]
	private void OnColumnContainerGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000844")]
	[Address(RVA = "0x6C20410", Offset = "0x6C1F410", VA = "0x6C20410")]
	private void UpdateContentContainer(BaseVerticalCollectionView collectionView)
	{
	}

	[Token(Token = "0x6000845")]
	[Address(RVA = "0x6C20650", Offset = "0x6C1F650", VA = "0x6C20650")]
	private void OnColumnSortingChanged()
	{
	}

	[Token(Token = "0x6000846")]
	[Address(RVA = "0x6C20690", Offset = "0x6C1F690", VA = "0x6C20690")]
	internal void UpdateDragger()
	{
	}

	[Token(Token = "0x6000847")]
	[Address(RVA = "0x6C20790", Offset = "0x6C1F790", VA = "0x6C20790")]
	internal void SortIfNeeded()
	{
	}

	[Token(Token = "0x6000848")]
	[Address(RVA = "0x6C21080", Offset = "0x6C20080", VA = "0x6C21080")]
	private int CombinedComparisonById(int idA, int idB)
	{
		return default(int);
	}

	[Token(Token = "0x6000849")]
	[Address(RVA = "0x6C21620", Offset = "0x6C20620", VA = "0x6C21620")]
	private int CombinedComparisonByIndex(int a, int b)
	{
		return default(int);
	}

	[Token(Token = "0x600084A")]
	[Address(RVA = "0x6C1F0C0", Offset = "0x6C1E0C0", VA = "0x6C1F0C0")]
	internal int GetSourceIndex(int sortedIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600084B")]
	[Address(RVA = "0x6C21A40", Offset = "0x6C20A40", VA = "0x6C21A40")]
	internal int GetSortedIndex(int sourceIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600084C")]
	[Address(RVA = "0x6C219D0", Offset = "0x6C209D0", VA = "0x6C219D0")]
	private static int GetIndexFromList(int index, List<int> indices)
	{
		return default(int);
	}

	[Token(Token = "0x600084D")]
	[Address(RVA = "0x6C21AF0", Offset = "0x6C20AF0", VA = "0x6C21AF0")]
	private void OnContextMenuPopulateEvent(ContextualMenuPopulateEvent evt, Column column)
	{
	}

	[Token(Token = "0x600084E")]
	[Address(RVA = "0x6C21B10", Offset = "0x6C20B10", VA = "0x6C21B10")]
	private void OnColumnResized(int index, float width)
	{
	}

	[Token(Token = "0x600084F")]
	[Address(RVA = "0x6C21F40", Offset = "0x6C20F40", VA = "0x6C21F40")]
	private void OnColumnAdded(Column column, int index)
	{
	}

	[Token(Token = "0x6000850")]
	[Address(RVA = "0x6C21F60", Offset = "0x6C20F60", VA = "0x6C21F60")]
	private void OnColumnRemoved(Column column)
	{
	}

	[Token(Token = "0x6000851")]
	[Address(RVA = "0x6C21F80", Offset = "0x6C20F80", VA = "0x6C21F80")]
	private void OnColumnReordered(Column column, int from, int to)
	{
	}

	[Token(Token = "0x6000852")]
	[Address(RVA = "0x6C21FB0", Offset = "0x6C20FB0", VA = "0x6C21FB0")]
	private void OnColumnsChanged(Column column, ColumnDataType type)
	{
	}

	[Token(Token = "0x6000853")]
	[Address(RVA = "0x6C21FE0", Offset = "0x6C20FE0", VA = "0x6C21FE0")]
	private void OnColumnChanged(ColumnsDataType type)
	{
	}

	[Token(Token = "0x6000854")]
	[Address(RVA = "0x6C22010", Offset = "0x6C21010", VA = "0x6C22010")]
	private void OnViewDataRestored()
	{
	}
}
