// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MultiColumnTreeView
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
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x200011D")]
public class MultiColumnTreeView : BaseTreeView
{
	[Token(Token = "0x200011E")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<MultiColumnTreeView, UxmlTraits>
	{
		[Token(Token = "0x6000879")]
		[Address(RVA = "0x6C24CE0", Offset = "0x6C23CE0", VA = "0x6C24CE0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200011F")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BaseTreeView.UxmlTraits
	{
		[Token(Token = "0x4000523")]
		[FieldOffset(Offset = "0xD0")]
		private readonly UxmlEnumAttributeDescription<ColumnSortingMode> m_SortingMode;

		[Token(Token = "0x4000524")]
		[FieldOffset(Offset = "0xD8")]
		private readonly UxmlObjectAttributeDescription<Columns> m_Columns;

		[Token(Token = "0x4000525")]
		[FieldOffset(Offset = "0xE0")]
		private readonly UxmlObjectAttributeDescription<SortColumnDescriptions> m_SortColumnDescriptions;

		[Token(Token = "0x600087A")]
		[Address(RVA = "0x6C24D20", Offset = "0x6C23D20", VA = "0x6C24D20", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x600087B")]
		[Address(RVA = "0x6C24F80", Offset = "0x6C23F80", VA = "0x6C24F80")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x400051A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly BindingId columnsProperty;

	[Token(Token = "0x400051B")]
	[FieldOffset(Offset = "0x98")]
	private static readonly BindingId sortColumnDescriptionsProperty;

	[Token(Token = "0x400051C")]
	[FieldOffset(Offset = "0x130")]
	private static readonly BindingId sortingModeProperty;

	[Token(Token = "0x400051D")]
	[FieldOffset(Offset = "0x3E8")]
	private Columns m_Columns;

	[Token(Token = "0x400051E")]
	[FieldOffset(Offset = "0x3F0")]
	private ColumnSortingMode m_SortingMode;

	[Token(Token = "0x400051F")]
	[FieldOffset(Offset = "0x3F8")]
	private SortColumnDescriptions m_SortColumnDescriptions;

	[Token(Token = "0x4000520")]
	[FieldOffset(Offset = "0x400")]
	private List<SortColumnDescription> m_SortedColumns;

	[Token(Token = "0x4000521")]
	[FieldOffset(Offset = "0x408")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action columnSortingChanged;

	[Token(Token = "0x4000522")]
	[FieldOffset(Offset = "0x410")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<ContextualMenuPopulateEvent, Column> headerContextMenuPopulateEvent;

	[Token(Token = "0x1700018D")]
	public new MultiColumnTreeViewController viewController
	{
		[Token(Token = "0x6000869")]
		[Address(RVA = "0x6C23AB0", Offset = "0x6C22AB0", VA = "0x6C23AB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700018E")]
	[CreateProperty]
	public Columns columns
	{
		[Token(Token = "0x600086A")]
		[Address(RVA = "0x6C23B30", Offset = "0x6C22B30", VA = "0x6C23B30")]
		get
		{
			return null;
		}
		[Token(Token = "0x600086B")]
		[Address(RVA = "0x6C23B40", Offset = "0x6C22B40", VA = "0x6C23B40")]
		private set
		{
		}
	}

	[Token(Token = "0x1700018F")]
	[CreateProperty]
	public SortColumnDescriptions sortColumnDescriptions
	{
		[Token(Token = "0x600086C")]
		[Address(RVA = "0x6C23E50", Offset = "0x6C22E50", VA = "0x6C23E50")]
		get
		{
			return null;
		}
		[Token(Token = "0x600086D")]
		[Address(RVA = "0x6C23E60", Offset = "0x6C22E60", VA = "0x6C23E60")]
		private set
		{
		}
	}

	[Token(Token = "0x17000190")]
	[CreateProperty]
	public ColumnSortingMode sortingMode
	{
		[Token(Token = "0x600086E")]
		[Address(RVA = "0x6C24000", Offset = "0x6C23000", VA = "0x6C24000")]
		get
		{
			return default(ColumnSortingMode);
		}
		[Token(Token = "0x600086F")]
		[Address(RVA = "0x6C24010", Offset = "0x6C23010", VA = "0x6C24010")]
		set
		{
		}
	}

	[Token(Token = "0x6000870")]
	[Address(RVA = "0x6C24160", Offset = "0x6C23160", VA = "0x6C24160")]
	public MultiColumnTreeView()
	{
	}

	[Token(Token = "0x6000871")]
	[Address(RVA = "0x6C24220", Offset = "0x6C23220", VA = "0x6C24220")]
	public MultiColumnTreeView(Columns columns)
	{
	}

	[Token(Token = "0x6000872")]
	[Address(RVA = "0x6C24450", Offset = "0x6C23450", VA = "0x6C24450", Slot = "146")]
	protected override CollectionViewController CreateViewController()
	{
		return null;
	}

	[Token(Token = "0x6000873")]
	[Address(RVA = "0x6C244E0", Offset = "0x6C234E0", VA = "0x6C244E0", Slot = "147")]
	public override void SetViewController(CollectionViewController controller)
	{
	}

	[Token(Token = "0x6000874")]
	[Address(RVA = "0x6C24AD0", Offset = "0x6C23AD0", VA = "0x6C24AD0", Slot = "145")]
	private protected override void CreateVirtualizationController()
	{
	}

	[Token(Token = "0x6000875")]
	[Address(RVA = "0x6C23FE0", Offset = "0x6C22FE0", VA = "0x6C23FE0")]
	private void RaiseColumnSortingChanged()
	{
	}

	[Token(Token = "0x6000876")]
	[Address(RVA = "0x6C24B10", Offset = "0x6C23B10", VA = "0x6C24B10")]
	private void ColumnsChanged(object sender, BindablePropertyChangedEventArgs args)
	{
	}

	[Token(Token = "0x6000877")]
	[Address(RVA = "0x6C24B50", Offset = "0x6C23B50", VA = "0x6C24B50")]
	private void RaiseHeaderContextMenuPopulate(ContextualMenuPopulateEvent evt, Column column)
	{
	}
}
