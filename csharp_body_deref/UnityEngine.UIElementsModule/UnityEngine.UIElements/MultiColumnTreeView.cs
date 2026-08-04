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

namespace UnityEngine.UIElements;

[Token(Token = "0x20000E1")]
public class MultiColumnTreeView : BaseTreeView
{
	[Token(Token = "0x20000E2")]
	public new class UxmlFactory : UxmlFactory<MultiColumnTreeView, UxmlTraits>
	{
		[Token(Token = "0x600064E")]
		[Address(RVA = "0x4FEFA90", Offset = "0x4FEFA90", VA = "0x4FEFA90")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000E3")]
	public new class UxmlTraits : BaseTreeView.UxmlTraits
	{
		[Token(Token = "0x40003C5")]
		[FieldOffset(Offset = "0xB8")]
		private readonly UxmlBoolAttributeDescription m_SortingEnabled;

		[Token(Token = "0x40003C6")]
		[FieldOffset(Offset = "0xC0")]
		private readonly UxmlObjectAttributeDescription<Columns> m_Columns;

		[Token(Token = "0x40003C7")]
		[FieldOffset(Offset = "0xC8")]
		private readonly UxmlObjectAttributeDescription<SortColumnDescriptions> m_SortColumnDescriptions;

		[Token(Token = "0x600064F")]
		[Address(RVA = "0x4FEFAD0", Offset = "0x4FEFAD0", VA = "0x4FEFAD0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000650")]
		[Address(RVA = "0x4FEFC90", Offset = "0x4FEFC90", VA = "0x4FEFC90")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40003BF")]
	[FieldOffset(Offset = "0x4C8")]
	private Columns m_Columns;

	[Token(Token = "0x40003C0")]
	[FieldOffset(Offset = "0x4D0")]
	private bool m_SortingEnabled;

	[Token(Token = "0x40003C1")]
	[FieldOffset(Offset = "0x4D8")]
	private SortColumnDescriptions m_SortColumnDescriptions;

	[Token(Token = "0x40003C2")]
	[FieldOffset(Offset = "0x4E0")]
	private List<SortColumnDescription> m_SortedColumns;

	[Token(Token = "0x40003C3")]
	[FieldOffset(Offset = "0x4E8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action columnSortingChanged;

	[Token(Token = "0x40003C4")]
	[FieldOffset(Offset = "0x4F0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<ContextualMenuPopulateEvent, Column> headerContextMenuPopulateEvent;

	[Token(Token = "0x17000114")]
	public new MultiColumnTreeViewController viewController
	{
		[Token(Token = "0x6000641")]
		[Address(RVA = "0x4FEEC70", Offset = "0x4FEEC70", VA = "0x4FEEC70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000115")]
	public Columns columns
	{
		[Token(Token = "0x6000642")]
		[Address(RVA = "0x4FEECF0", Offset = "0x4FEECF0", VA = "0x4FEECF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000643")]
		[Address(RVA = "0x4FEED00", Offset = "0x4FEED00", VA = "0x4FEED00")]
		private set
		{
		}
	}

	[Token(Token = "0x17000116")]
	public SortColumnDescriptions sortColumnDescriptions
	{
		[Token(Token = "0x6000644")]
		[Address(RVA = "0x4FEEDF0", Offset = "0x4FEEDF0", VA = "0x4FEEDF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000645")]
		[Address(RVA = "0x4FEEE00", Offset = "0x4FEEE00", VA = "0x4FEEE00")]
		private set
		{
		}
	}

	[Token(Token = "0x17000117")]
	public bool sortingEnabled
	{
		[Token(Token = "0x6000646")]
		[Address(RVA = "0x4FEEF50", Offset = "0x4FEEF50", VA = "0x4FEEF50")]
		set
		{
		}
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x4FEF030", Offset = "0x4FEF030", VA = "0x4FEF030")]
	public MultiColumnTreeView()
	{
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x4FEF0F0", Offset = "0x4FEF0F0", VA = "0x4FEF0F0")]
	public MultiColumnTreeView(Columns columns)
	{
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x4FEF370", Offset = "0x4FEF370", VA = "0x4FEF370", Slot = "104")]
	protected override CollectionViewController CreateViewController()
	{
		return null;
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x4FEF400", Offset = "0x4FEF400", VA = "0x4FEF400", Slot = "105")]
	public override void SetViewController(CollectionViewController controller)
	{
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x4FEFA30", Offset = "0x4FEFA30", VA = "0x4FEFA30", Slot = "103")]
	private protected override void CreateVirtualizationController()
	{
	}

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x4FEEF30", Offset = "0x4FEEF30", VA = "0x4FEEF30")]
	private void RaiseColumnSortingChanged()
	{
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x4FEFA70", Offset = "0x4FEFA70", VA = "0x4FEFA70")]
	private void RaiseHeaderContextMenuPopulate(ContextualMenuPopulateEvent evt, Column column)
	{
	}
}
