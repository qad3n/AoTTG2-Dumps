// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MultiColumnListView
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

[Token(Token = "0x200011A")]
public class MultiColumnListView : BaseListView
{
	[Token(Token = "0x200011B")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<MultiColumnListView, UxmlTraits>
	{
		[Token(Token = "0x6000866")]
		[Address(RVA = "0x6C23650", Offset = "0x6C22650", VA = "0x6C23650")]
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
		[Address(RVA = "0x6C23690", Offset = "0x6C22690", VA = "0x6C23690", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000868")]
		[Address(RVA = "0x6C238F0", Offset = "0x6C228F0", VA = "0x6C238F0")]
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
	[FieldOffset(Offset = "0x4D0")]
	private Columns m_Columns;

	[Token(Token = "0x4000512")]
	[FieldOffset(Offset = "0x4D8")]
	private ColumnSortingMode m_SortingMode;

	[Token(Token = "0x4000513")]
	[FieldOffset(Offset = "0x4E0")]
	private SortColumnDescriptions m_SortColumnDescriptions;

	[Token(Token = "0x4000514")]
	[FieldOffset(Offset = "0x4E8")]
	private List<SortColumnDescription> m_SortedColumns;

	[Token(Token = "0x4000515")]
	[FieldOffset(Offset = "0x4F0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action columnSortingChanged;

	[Token(Token = "0x4000516")]
	[FieldOffset(Offset = "0x4F8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<ContextualMenuPopulateEvent, Column> headerContextMenuPopulateEvent;

	[Token(Token = "0x17000189")]
	public new MultiColumnListViewController viewController
	{
		[Token(Token = "0x6000856")]
		[Address(RVA = "0x6C22250", Offset = "0x6C21250", VA = "0x6C22250")]
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
		[Address(RVA = "0x6C222D0", Offset = "0x6C212D0", VA = "0x6C222D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000858")]
		[Address(RVA = "0x6C222E0", Offset = "0x6C212E0", VA = "0x6C222E0")]
		private set
		{
		}
	}

	[Token(Token = "0x1700018B")]
	[CreateProperty]
	public SortColumnDescriptions sortColumnDescriptions
	{
		[Token(Token = "0x6000859")]
		[Address(RVA = "0x6C225F0", Offset = "0x6C215F0", VA = "0x6C225F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600085A")]
		[Address(RVA = "0x6C22600", Offset = "0x6C21600", VA = "0x6C22600")]
		private set
		{
		}
	}

	[Token(Token = "0x1700018C")]
	[CreateProperty]
	public ColumnSortingMode sortingMode
	{
		[Token(Token = "0x600085B")]
		[Address(RVA = "0x6C22900", Offset = "0x6C21900", VA = "0x6C22900")]
		get
		{
			return default(ColumnSortingMode);
		}
		[Token(Token = "0x600085C")]
		[Address(RVA = "0x6C22910", Offset = "0x6C21910", VA = "0x6C22910")]
		set
		{
		}
	}

	[Token(Token = "0x600085D")]
	[Address(RVA = "0x6C22A60", Offset = "0x6C21A60", VA = "0x6C22A60")]
	public MultiColumnListView()
	{
	}

	[Token(Token = "0x600085E")]
	[Address(RVA = "0x6C22B20", Offset = "0x6C21B20", VA = "0x6C22B20")]
	public MultiColumnListView(Columns columns)
	{
	}

	[Token(Token = "0x600085F")]
	[Address(RVA = "0x6C22DD0", Offset = "0x6C21DD0", VA = "0x6C22DD0", Slot = "146")]
	protected override CollectionViewController CreateViewController()
	{
		return null;
	}

	[Token(Token = "0x6000860")]
	[Address(RVA = "0x6C22E50", Offset = "0x6C21E50", VA = "0x6C22E50", Slot = "147")]
	public override void SetViewController(CollectionViewController controller)
	{
	}

	[Token(Token = "0x6000861")]
	[Address(RVA = "0x6C23440", Offset = "0x6C22440", VA = "0x6C23440", Slot = "145")]
	private protected override void CreateVirtualizationController()
	{
	}

	[Token(Token = "0x6000862")]
	[Address(RVA = "0x6C228E0", Offset = "0x6C218E0", VA = "0x6C228E0")]
	private void RaiseColumnSortingChanged()
	{
	}

	[Token(Token = "0x6000863")]
	[Address(RVA = "0x6C23480", Offset = "0x6C22480", VA = "0x6C23480")]
	private void ColumnsChanged(object sender, BindablePropertyChangedEventArgs args)
	{
	}

	[Token(Token = "0x6000864")]
	[Address(RVA = "0x6C234C0", Offset = "0x6C224C0", VA = "0x6C234C0")]
	private void RaiseHeaderContextMenuPopulate(ContextualMenuPopulateEvent evt, Column column)
	{
	}
}
