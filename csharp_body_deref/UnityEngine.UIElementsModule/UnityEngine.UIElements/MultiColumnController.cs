// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MultiColumnController
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements.Internal;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000DD")]
public class MultiColumnController : IDisposable
{
	[Token(Token = "0x40003A8")]
	[FieldOffset(Offset = "0x0")]
	private static readonly PropertyName k_BoundColumnVePropertyName;

	[Token(Token = "0x40003A9")]
	[FieldOffset(Offset = "0x4")]
	internal static readonly PropertyName bindableElementPropertyName;

	[Token(Token = "0x40003AA")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly string baseUssClassName;

	[Token(Token = "0x40003AB")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string k_HeaderContainerViewDataKey;

	[Token(Token = "0x40003AC")]
	[FieldOffset(Offset = "0x18")]
	public static readonly string headerContainerUssClassName;

	[Token(Token = "0x40003AD")]
	[FieldOffset(Offset = "0x20")]
	public static readonly string rowContainerUssClassName;

	[Token(Token = "0x40003AE")]
	[FieldOffset(Offset = "0x28")]
	public static readonly string cellUssClassName;

	[Token(Token = "0x40003AF")]
	[FieldOffset(Offset = "0x30")]
	public static readonly string cellLabelUssClassName;

	[Token(Token = "0x40003B0")]
	[FieldOffset(Offset = "0x38")]
	private static readonly string k_HeaderViewDataKey;

	[Token(Token = "0x40003B3")]
	[FieldOffset(Offset = "0x20")]
	private BaseVerticalCollectionView m_View;

	[Token(Token = "0x40003B4")]
	[FieldOffset(Offset = "0x28")]
	private VisualElement m_HeaderContainer;

	[Token(Token = "0x40003B5")]
	[FieldOffset(Offset = "0x30")]
	private MultiColumnCollectionHeader m_MultiColumnHeader;

	[Token(Token = "0x1700010F")]
	internal MultiColumnCollectionHeader header
	{
		[Token(Token = "0x6000617")]
		[Address(RVA = "0x4FEAA50", Offset = "0x4FEAA50", VA = "0x4FEAA50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000017")]
	public event Action columnSortingChanged
	{
		[Token(Token = "0x6000613")]
		[Address(RVA = "0x4FEA7D0", Offset = "0x4FEA7D0", VA = "0x4FEA7D0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000614")]
		[Address(RVA = "0x4FEA860", Offset = "0x4FEA860", VA = "0x4FEA860")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000018")]
	public event Action<ContextualMenuPopulateEvent, Column> headerContextMenuPopulateEvent
	{
		[Token(Token = "0x6000615")]
		[Address(RVA = "0x4FEA8F0", Offset = "0x4FEA8F0", VA = "0x4FEA8F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000616")]
		[Address(RVA = "0x4FEA9A0", Offset = "0x4FEA9A0", VA = "0x4FEA9A0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000618")]
	[Address(RVA = "0x4FEAA60", Offset = "0x4FEAA60", VA = "0x4FEAA60")]
	public MultiColumnController(Columns columns, SortColumnDescriptions sortDescriptions, List<SortColumnDescription> sortedColumns)
	{
	}

	[Token(Token = "0x6000619")]
	private static void BindCellItem<T>(VisualElement ve, int rowIndex, Column column, T item)
	{
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x4FEB120", Offset = "0x4FEB120", VA = "0x4FEB120")]
	private static void UnbindCellItem(VisualElement ve, int rowIndex, Column column)
	{
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x4FEB160", Offset = "0x4FEB160", VA = "0x4FEB160")]
	private static VisualElement DefaultMakeCellItem()
	{
		return null;
	}

	[Token(Token = "0x600061C")]
	private static void DefaultBindCellItem<T>(VisualElement ve, Column column, T item)
	{
	}

	[Token(Token = "0x600061D")]
	[Address(RVA = "0x4FEB1F0", Offset = "0x4FEB1F0", VA = "0x4FEB1F0")]
	public VisualElement MakeItem()
	{
		return null;
	}

	[Token(Token = "0x600061E")]
	public void BindItem<T>(VisualElement element, int index, T item)
	{
	}

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x4FEB760", Offset = "0x4FEB760", VA = "0x4FEB760")]
	public void UnbindItem(VisualElement element, int index)
	{
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x4FEBC60", Offset = "0x4FEBC60", VA = "0x4FEBC60")]
	public void DestroyItem(VisualElement element)
	{
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x4FEC160", Offset = "0x4FEC160", VA = "0x4FEC160")]
	public void PrepareView(BaseVerticalCollectionView collectionView)
	{
	}

	[Token(Token = "0x6000622")]
	[Address(RVA = "0x4FEC480", Offset = "0x4FEC480", VA = "0x4FEC480", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x4FECC90", Offset = "0x4FECC90", VA = "0x4FECC90")]
	private void OnHorizontalScrollerValueChanged(float v)
	{
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x4FECCB0", Offset = "0x4FECCB0", VA = "0x4FECCB0")]
	private void OnViewportGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x4FED180", Offset = "0x4FED180", VA = "0x4FED180")]
	private void OnColumnContainerGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x4FECF80", Offset = "0x4FECF80", VA = "0x4FECF80")]
	private void UpdateContentContainer(BaseVerticalCollectionView collectionView)
	{
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x4FED190", Offset = "0x4FED190", VA = "0x4FED190")]
	private void OnColumnSortingChanged()
	{
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x4FED1B0", Offset = "0x4FED1B0", VA = "0x4FED1B0")]
	private void OnContextMenuPopulateEvent(ContextualMenuPopulateEvent evt, Column column)
	{
	}

	[Token(Token = "0x6000629")]
	[Address(RVA = "0x4FED1D0", Offset = "0x4FED1D0", VA = "0x4FED1D0")]
	private void OnColumnResized(int index, float width)
	{
	}

	[Token(Token = "0x600062A")]
	[Address(RVA = "0x4FED630", Offset = "0x4FED630", VA = "0x4FED630")]
	private void OnColumnAdded(Column column, int index)
	{
	}

	[Token(Token = "0x600062B")]
	[Address(RVA = "0x4FED650", Offset = "0x4FED650", VA = "0x4FED650")]
	private void OnColumnRemoved(Column column)
	{
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x4FED670", Offset = "0x4FED670", VA = "0x4FED670")]
	private void OnColumnReordered(Column column, int from, int to)
	{
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x4FED6A0", Offset = "0x4FED6A0", VA = "0x4FED6A0")]
	private void OnColumnsChanged(Column column, ColumnDataType type)
	{
	}

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x4FED6D0", Offset = "0x4FED6D0", VA = "0x4FED6D0")]
	private void OnColumnChanged(ColumnsDataType type)
	{
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x4FED700", Offset = "0x4FED700", VA = "0x4FED700")]
	private void OnViewDataRestored()
	{
	}
}
