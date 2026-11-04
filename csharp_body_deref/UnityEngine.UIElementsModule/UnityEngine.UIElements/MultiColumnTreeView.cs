// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MultiColumnTreeView
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
		[Address(RVA = "0x3224E20", Offset = "0x3223420", VA = "0x183224E20")]
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
		[Address(RVA = "0x3225990", Offset = "0x3223F90", VA = "0x183225990", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x600087B")]
		[Address(RVA = "0x3226440", Offset = "0x3224A40", VA = "0x183226440")]
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
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<ContextualMenuPopulateEvent, Column> headerContextMenuPopulateEvent;

	[Token(Token = "0x1700018D")]
	public new MultiColumnTreeViewController viewController
	{
		[Token(Token = "0x6000869")]
		[Address(RVA = "0x3220600", Offset = "0x321EC00", VA = "0x183220600")]
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
		[Address(RVA = "0x2D242E0", Offset = "0x2D228E0", VA = "0x182D242E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600086B")]
		[Address(RVA = "0x3220680", Offset = "0x321EC80", VA = "0x183220680")]
		private set
		{
		}
	}

	[Token(Token = "0x1700018F")]
	[CreateProperty]
	public SortColumnDescriptions sortColumnDescriptions
	{
		[Token(Token = "0x600086C")]
		[Address(RVA = "0x32205E0", Offset = "0x321EBE0", VA = "0x1832205E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600086D")]
		[Address(RVA = "0x3220830", Offset = "0x321EE30", VA = "0x183220830")]
		private set
		{
		}
	}

	[Token(Token = "0x17000190")]
	[CreateProperty]
	public ColumnSortingMode sortingMode
	{
		[Token(Token = "0x600086E")]
		[Address(RVA = "0x32205F0", Offset = "0x321EBF0", VA = "0x1832205F0")]
		get
		{
			return default(ColumnSortingMode);
		}
		[Token(Token = "0x600086F")]
		[Address(RVA = "0x3220940", Offset = "0x321EF40", VA = "0x183220940")]
		set
		{
		}
	}

	[Token(Token = "0x6000870")]
	[Address(RVA = "0x3220460", Offset = "0x321EA60", VA = "0x183220460")]
	public MultiColumnTreeView()
	{
	}

	[Token(Token = "0x6000871")]
	[Address(RVA = "0x3220310", Offset = "0x321E910", VA = "0x183220310")]
	public MultiColumnTreeView(Columns columns)
	{
	}

	[Token(Token = "0x6000872")]
	[Address(RVA = "0x321FD20", Offset = "0x321E320", VA = "0x18321FD20", Slot = "146")]
	protected override CollectionViewController CreateViewController()
	{
		return null;
	}

	[Token(Token = "0x6000873")]
	[Address(RVA = "0x321FE30", Offset = "0x321E430", VA = "0x18321FE30", Slot = "147")]
	public override void SetViewController(CollectionViewController controller)
	{
	}

	[Token(Token = "0x6000874")]
	[Address(RVA = "0x321FDB0", Offset = "0x321E3B0", VA = "0x18321FDB0", Slot = "145")]
	private protected override void CreateVirtualizationController()
	{
	}

	[Token(Token = "0x6000875")]
	[Address(RVA = "0x321FDF0", Offset = "0x321E3F0", VA = "0x18321FDF0")]
	private void RaiseColumnSortingChanged()
	{
	}

	[Token(Token = "0x6000876")]
	[Address(RVA = "0x321EFC0", Offset = "0x321D5C0", VA = "0x18321EFC0")]
	private void ColumnsChanged(object sender, BindablePropertyChangedEventArgs args)
	{
	}

	[Token(Token = "0x6000877")]
	[Address(RVA = "0x321FE10", Offset = "0x321E410", VA = "0x18321FE10")]
	private void RaiseHeaderContextMenuPopulate(ContextualMenuPopulateEvent evt, Column column)
	{
	}
}
