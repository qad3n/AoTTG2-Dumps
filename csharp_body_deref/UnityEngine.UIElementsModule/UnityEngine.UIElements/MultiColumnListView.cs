// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MultiColumnListView
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

[Token(Token = "0x200011A")]
public class MultiColumnListView : BaseListView
{
	[Token(Token = "0x200011B")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<MultiColumnListView, UxmlTraits>
	{
		[Token(Token = "0x6000866")]
		[Address(RVA = "0x3224D20", Offset = "0x3223320", VA = "0x183224D20")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200011C")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BaseListView.UxmlTraits
	{
		[Token(Token = "0x4000517")]
		[FieldOffset(Offset = "0x108")]
		private readonly UxmlEnumAttributeDescription<ColumnSortingMode> m_SortingMode;

		[Token(Token = "0x4000518")]
		[FieldOffset(Offset = "0x110")]
		private readonly UxmlObjectAttributeDescription<Columns> m_Columns;

		[Token(Token = "0x4000519")]
		[FieldOffset(Offset = "0x118")]
		private readonly UxmlObjectAttributeDescription<SortColumnDescriptions> m_SortColumnDescriptions;

		[Token(Token = "0x6000867")]
		[Address(RVA = "0x3225510", Offset = "0x3223B10", VA = "0x183225510", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000868")]
		[Address(RVA = "0x3226280", Offset = "0x3224880", VA = "0x183226280")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x400050E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly BindingId columnsProperty;

	[Token(Token = "0x400050F")]
	[FieldOffset(Offset = "0x98")]
	private static readonly BindingId sortColumnDescriptionsProperty;

	[Token(Token = "0x4000510")]
	[FieldOffset(Offset = "0x130")]
	private static readonly BindingId sortingModeProperty;

	[Token(Token = "0x4000511")]
	[FieldOffset(Offset = "0x4D8")]
	private Columns m_Columns;

	[Token(Token = "0x4000512")]
	[FieldOffset(Offset = "0x4E0")]
	private ColumnSortingMode m_SortingMode;

	[Token(Token = "0x4000513")]
	[FieldOffset(Offset = "0x4E8")]
	private SortColumnDescriptions m_SortColumnDescriptions;

	[Token(Token = "0x4000514")]
	[FieldOffset(Offset = "0x4F0")]
	private List<SortColumnDescription> m_SortedColumns;

	[Token(Token = "0x4000515")]
	[FieldOffset(Offset = "0x4F8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action columnSortingChanged;

	[Token(Token = "0x4000516")]
	[FieldOffset(Offset = "0x500")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<ContextualMenuPopulateEvent, Column> headerContextMenuPopulateEvent;

	[Token(Token = "0x17000189")]
	public new MultiColumnListViewController viewController
	{
		[Token(Token = "0x6000856")]
		[Address(RVA = "0x321F910", Offset = "0x321DF10", VA = "0x18321F910")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700018A")]
	[CreateProperty]
	public Columns columns
	{
		[Token(Token = "0x6000857")]
		[Address(RVA = "0x3216B80", Offset = "0x3215180", VA = "0x183216B80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000858")]
		[Address(RVA = "0x321F990", Offset = "0x321DF90", VA = "0x18321F990")]
		private set
		{
		}
	}

	[Token(Token = "0x1700018B")]
	[CreateProperty]
	public SortColumnDescriptions sortColumnDescriptions
	{
		[Token(Token = "0x6000859")]
		[Address(RVA = "0x3216B70", Offset = "0x3215170", VA = "0x183216B70")]
		get
		{
			return null;
		}
		[Token(Token = "0x600085A")]
		[Address(RVA = "0x321FB40", Offset = "0x321E140", VA = "0x18321FB40")]
		private set
		{
		}
	}

	[Token(Token = "0x1700018C")]
	[CreateProperty]
	public ColumnSortingMode sortingMode
	{
		[Token(Token = "0x600085B")]
		[Address(RVA = "0x321F900", Offset = "0x321DF00", VA = "0x18321F900")]
		get
		{
			return default(ColumnSortingMode);
		}
		[Token(Token = "0x600085C")]
		[Address(RVA = "0x321FC50", Offset = "0x321E250", VA = "0x18321FC50")]
		set
		{
		}
	}

	[Token(Token = "0x600085D")]
	[Address(RVA = "0x321F780", Offset = "0x321DD80", VA = "0x18321F780")]
	public MultiColumnListView()
	{
	}

	[Token(Token = "0x600085E")]
	[Address(RVA = "0x321F630", Offset = "0x321DC30", VA = "0x18321F630")]
	public MultiColumnListView(Columns columns)
	{
	}

	[Token(Token = "0x600085F")]
	[Address(RVA = "0x321F050", Offset = "0x321D650", VA = "0x18321F050", Slot = "146")]
	protected override CollectionViewController CreateViewController()
	{
		return null;
	}

	[Token(Token = "0x6000860")]
	[Address(RVA = "0x321F150", Offset = "0x321D750", VA = "0x18321F150", Slot = "147")]
	public override void SetViewController(CollectionViewController controller)
	{
	}

	[Token(Token = "0x6000861")]
	[Address(RVA = "0x321F0D0", Offset = "0x321D6D0", VA = "0x18321F0D0", Slot = "145")]
	private protected override void CreateVirtualizationController()
	{
	}

	[Token(Token = "0x6000862")]
	[Address(RVA = "0x321F110", Offset = "0x321D710", VA = "0x18321F110")]
	private void RaiseColumnSortingChanged()
	{
	}

	[Token(Token = "0x6000863")]
	[Address(RVA = "0x321EFC0", Offset = "0x321D5C0", VA = "0x18321EFC0")]
	private void ColumnsChanged(object sender, BindablePropertyChangedEventArgs args)
	{
	}

	[Token(Token = "0x6000864")]
	[Address(RVA = "0x321F130", Offset = "0x321D730", VA = "0x18321F130")]
	private void RaiseHeaderContextMenuPopulate(ContextualMenuPopulateEvent evt, Column column)
	{
	}
}
