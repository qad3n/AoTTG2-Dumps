// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MultiColumnController
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
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action m_columnSortingChanged;

	[Token(Token = "0x4000507")]
	[FieldOffset(Offset = "0x18")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
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
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000188")]
	internal ColumnSortingMode sortingMode
	{
		[Token(Token = "0x6000834")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		get
		{
			return default(ColumnSortingMode);
		}
		[Token(Token = "0x6000835")]
		[Address(RVA = "0x321EF90", Offset = "0x321D590", VA = "0x18321EF90")]
		set
		{
		}
	}

	[Token(Token = "0x1400001F")]
	public event Action columnSortingChanged
	{
		[Token(Token = "0x600082F")]
		[Address(RVA = "0x321ECF0", Offset = "0x321D2F0", VA = "0x18321ECF0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000830")]
		[Address(RVA = "0x321EE40", Offset = "0x321D440", VA = "0x18321EE40")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000020")]
	public event Action<ContextualMenuPopulateEvent, Column> headerContextMenuPopulateEvent
	{
		[Token(Token = "0x6000831")]
		[Address(RVA = "0x321ED90", Offset = "0x321D390", VA = "0x18321ED90")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000832")]
		[Address(RVA = "0x321EEE0", Offset = "0x321D4E0", VA = "0x18321EEE0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000836")]
	[Address(RVA = "0x321E7D0", Offset = "0x321CDD0", VA = "0x18321E7D0")]
	public MultiColumnController(Columns columns, SortColumnDescriptions sortDescriptions, List<SortColumnDescription> sortedColumns)
	{
	}

	[Token(Token = "0x6000837")]
	private static void BindCellItem<T>(VisualElement ve, int rowIndex, Column column, T item)
	{
	}

	[Token(Token = "0x6000838")]
	[Address(RVA = "0x321DED0", Offset = "0x321C4D0", VA = "0x18321DED0")]
	private static void UnbindCellItem(VisualElement ve, int rowIndex, Column column)
	{
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x321BBD0", Offset = "0x321A1D0", VA = "0x18321BBD0")]
	private static VisualElement DefaultMakeCellItem()
	{
		return null;
	}

	[Token(Token = "0x600083A")]
	private static void DefaultBindCellItem<T>(VisualElement ve, T item)
	{
	}

	[Token(Token = "0x600083B")]
	[Address(RVA = "0x321C910", Offset = "0x321AF10", VA = "0x18321C910")]
	public VisualElement MakeItem()
	{
		return null;
	}

	[Token(Token = "0x600083C")]
	public void BindItem<T>(VisualElement element, int index, T item)
	{
	}

	[Token(Token = "0x600083D")]
	[Address(RVA = "0x321DF10", Offset = "0x321C510", VA = "0x18321DF10")]
	public void UnbindItem(VisualElement element, int index)
	{
	}

	[Token(Token = "0x600083E")]
	[Address(RVA = "0x321BC80", Offset = "0x321A280", VA = "0x18321BC80")]
	public void DestroyItem(VisualElement element)
	{
	}

	[Token(Token = "0x600083F")]
	[Address(RVA = "0x321D3A0", Offset = "0x321B9A0", VA = "0x18321D3A0")]
	public void PrepareView(BaseVerticalCollectionView collectionView)
	{
	}

	[Token(Token = "0x6000840")]
	[Address(RVA = "0x321BFC0", Offset = "0x321A5C0", VA = "0x18321BFC0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000841")]
	[Address(RVA = "0x321D0D0", Offset = "0x321B6D0", VA = "0x18321D0D0")]
	private void OnHorizontalScrollerValueChanged(float v)
	{
	}

	[Token(Token = "0x6000842")]
	[Address(RVA = "0x321D0F0", Offset = "0x321B6F0", VA = "0x18321D0F0")]
	private void OnViewportGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000843")]
	[Address(RVA = "0x321CCD0", Offset = "0x321B2D0", VA = "0x18321CCD0")]
	private void OnColumnContainerGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000844")]
	[Address(RVA = "0x321E2A0", Offset = "0x321C8A0", VA = "0x18321E2A0")]
	private void UpdateContentContainer(BaseVerticalCollectionView collectionView)
	{
	}

	[Token(Token = "0x6000845")]
	[Address(RVA = "0x321D020", Offset = "0x321B620", VA = "0x18321D020")]
	private void OnColumnSortingChanged()
	{
	}

	[Token(Token = "0x6000846")]
	[Address(RVA = "0x321E480", Offset = "0x321CA80", VA = "0x18321E480")]
	internal void UpdateDragger()
	{
	}

	[Token(Token = "0x6000847")]
	[Address(RVA = "0x321D6D0", Offset = "0x321BCD0", VA = "0x18321D6D0")]
	internal void SortIfNeeded()
	{
	}

	[Token(Token = "0x6000848")]
	[Address(RVA = "0x321B530", Offset = "0x3219B30", VA = "0x18321B530")]
	private int CombinedComparisonById(int idA, int idB)
	{
		return default(int);
	}

	[Token(Token = "0x6000849")]
	[Address(RVA = "0x321B9F0", Offset = "0x3219FF0", VA = "0x18321B9F0")]
	private int CombinedComparisonByIndex(int a, int b)
	{
		return default(int);
	}

	[Token(Token = "0x600084A")]
	[Address(RVA = "0x321C870", Offset = "0x321AE70", VA = "0x18321C870")]
	internal int GetSourceIndex(int sortedIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600084B")]
	[Address(RVA = "0x321C7D0", Offset = "0x321ADD0", VA = "0x18321C7D0")]
	internal int GetSortedIndex(int sourceIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600084C")]
	[Address(RVA = "0x321C760", Offset = "0x321AD60", VA = "0x18321C760")]
	private static int GetIndexFromList(int index, List<int> indices)
	{
		return default(int);
	}

	[Token(Token = "0x600084D")]
	[Address(RVA = "0x321D0B0", Offset = "0x321B6B0", VA = "0x18321D0B0")]
	private void OnContextMenuPopulateEvent(ContextualMenuPopulateEvent evt, Column column)
	{
	}

	[Token(Token = "0x600084E")]
	[Address(RVA = "0x321CD20", Offset = "0x321B320", VA = "0x18321CD20")]
	private void OnColumnResized(int index, float width)
	{
	}

	[Token(Token = "0x600084F")]
	[Address(RVA = "0x321CC70", Offset = "0x321B270", VA = "0x18321CC70")]
	private void OnColumnAdded(Column column, int index)
	{
	}

	[Token(Token = "0x6000850")]
	[Address(RVA = "0x321CC70", Offset = "0x321B270", VA = "0x18321CC70")]
	private void OnColumnRemoved(Column column)
	{
	}

	[Token(Token = "0x6000851")]
	[Address(RVA = "0x321CCE0", Offset = "0x321B2E0", VA = "0x18321CCE0")]
	private void OnColumnReordered(Column column, int from, int to)
	{
	}

	[Token(Token = "0x6000852")]
	[Address(RVA = "0x321D070", Offset = "0x321B670", VA = "0x18321D070")]
	private void OnColumnsChanged(Column column, ColumnDataType type)
	{
	}

	[Token(Token = "0x6000853")]
	[Address(RVA = "0x321CC90", Offset = "0x321B290", VA = "0x18321CC90")]
	private void OnColumnChanged(ColumnsDataType type)
	{
	}

	[Token(Token = "0x6000854")]
	[Address(RVA = "0x321CC70", Offset = "0x321B270", VA = "0x18321CC70")]
	private void OnViewDataRestored()
	{
	}
}
