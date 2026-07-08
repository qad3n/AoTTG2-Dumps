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
		[Address(RVA = "0x4CC3120", Offset = "0x4CC3120", VA = "0x4CC3120")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000017")]
	public event Action columnSortingChanged
	{
		[Token(Token = "0x6000613")]
		[Address(RVA = "0x4CC2EA0", Offset = "0x4CC2EA0", VA = "0x4CC2EA0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000614")]
		[Address(RVA = "0x4CC2F30", Offset = "0x4CC2F30", VA = "0x4CC2F30")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000018")]
	public event Action<ContextualMenuPopulateEvent, Column> headerContextMenuPopulateEvent
	{
		[Token(Token = "0x6000615")]
		[Address(RVA = "0x4CC2FC0", Offset = "0x4CC2FC0", VA = "0x4CC2FC0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000616")]
		[Address(RVA = "0x4CC3070", Offset = "0x4CC3070", VA = "0x4CC3070")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000618")]
	[Address(RVA = "0x4CC3130", Offset = "0x4CC3130", VA = "0x4CC3130")]
	public MultiColumnController(Columns columns, SortColumnDescriptions sortDescriptions, List<SortColumnDescription> sortedColumns)
	{
	}

	[Token(Token = "0x6000619")]
	private static void BindCellItem<T>(VisualElement ve, int rowIndex, Column column, T item)
	{
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x4CC37F0", Offset = "0x4CC37F0", VA = "0x4CC37F0")]
	private static void UnbindCellItem(VisualElement ve, int rowIndex, Column column)
	{
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x4CC3830", Offset = "0x4CC3830", VA = "0x4CC3830")]
	private static VisualElement DefaultMakeCellItem()
	{
		return null;
	}

	[Token(Token = "0x600061C")]
	private static void DefaultBindCellItem<T>(VisualElement ve, Column column, T item)
	{
	}

	[Token(Token = "0x600061D")]
	[Address(RVA = "0x4CC38C0", Offset = "0x4CC38C0", VA = "0x4CC38C0")]
	public VisualElement MakeItem()
	{
		return null;
	}

	[Token(Token = "0x600061E")]
	public void BindItem<T>(VisualElement element, int index, T item)
	{
	}

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x4CC3E30", Offset = "0x4CC3E30", VA = "0x4CC3E30")]
	public void UnbindItem(VisualElement element, int index)
	{
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x4CC4330", Offset = "0x4CC4330", VA = "0x4CC4330")]
	public void DestroyItem(VisualElement element)
	{
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x4CC4830", Offset = "0x4CC4830", VA = "0x4CC4830")]
	public void PrepareView(BaseVerticalCollectionView collectionView)
	{
	}

	[Token(Token = "0x6000622")]
	[Address(RVA = "0x4CC4B50", Offset = "0x4CC4B50", VA = "0x4CC4B50", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x4CC5360", Offset = "0x4CC5360", VA = "0x4CC5360")]
	private void OnHorizontalScrollerValueChanged(float v)
	{
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x4CC5380", Offset = "0x4CC5380", VA = "0x4CC5380")]
	private void OnViewportGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x4CC5850", Offset = "0x4CC5850", VA = "0x4CC5850")]
	private void OnColumnContainerGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x4CC5650", Offset = "0x4CC5650", VA = "0x4CC5650")]
	private void UpdateContentContainer(BaseVerticalCollectionView collectionView)
	{
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x4CC5860", Offset = "0x4CC5860", VA = "0x4CC5860")]
	private void OnColumnSortingChanged()
	{
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x4CC5880", Offset = "0x4CC5880", VA = "0x4CC5880")]
	private void OnContextMenuPopulateEvent(ContextualMenuPopulateEvent evt, Column column)
	{
	}

	[Token(Token = "0x6000629")]
	[Address(RVA = "0x4CC58A0", Offset = "0x4CC58A0", VA = "0x4CC58A0")]
	private void OnColumnResized(int index, float width)
	{
	}

	[Token(Token = "0x600062A")]
	[Address(RVA = "0x4CC5D00", Offset = "0x4CC5D00", VA = "0x4CC5D00")]
	private void OnColumnAdded(Column column, int index)
	{
	}

	[Token(Token = "0x600062B")]
	[Address(RVA = "0x4CC5D20", Offset = "0x4CC5D20", VA = "0x4CC5D20")]
	private void OnColumnRemoved(Column column)
	{
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x4CC5D40", Offset = "0x4CC5D40", VA = "0x4CC5D40")]
	private void OnColumnReordered(Column column, int from, int to)
	{
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x4CC5D70", Offset = "0x4CC5D70", VA = "0x4CC5D70")]
	private void OnColumnsChanged(Column column, ColumnDataType type)
	{
	}

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x4CC5DA0", Offset = "0x4CC5DA0", VA = "0x4CC5DA0")]
	private void OnColumnChanged(ColumnsDataType type)
	{
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x4CC5DD0", Offset = "0x4CC5DD0", VA = "0x4CC5DD0")]
	private void OnViewDataRestored()
	{
	}
}
