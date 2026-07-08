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
		[Address(RVA = "0x4CC8160", Offset = "0x4CC8160", VA = "0x4CC8160")]
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
		[Address(RVA = "0x4CC81A0", Offset = "0x4CC81A0", VA = "0x4CC81A0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000650")]
		[Address(RVA = "0x4CC8360", Offset = "0x4CC8360", VA = "0x4CC8360")]
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
		[Address(RVA = "0x4CC7340", Offset = "0x4CC7340", VA = "0x4CC7340")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000115")]
	public Columns columns
	{
		[Token(Token = "0x6000642")]
		[Address(RVA = "0x4CC73C0", Offset = "0x4CC73C0", VA = "0x4CC73C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000643")]
		[Address(RVA = "0x4CC73D0", Offset = "0x4CC73D0", VA = "0x4CC73D0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000116")]
	public SortColumnDescriptions sortColumnDescriptions
	{
		[Token(Token = "0x6000644")]
		[Address(RVA = "0x4CC74C0", Offset = "0x4CC74C0", VA = "0x4CC74C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000645")]
		[Address(RVA = "0x4CC74D0", Offset = "0x4CC74D0", VA = "0x4CC74D0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000117")]
	public bool sortingEnabled
	{
		[Token(Token = "0x6000646")]
		[Address(RVA = "0x4CC7620", Offset = "0x4CC7620", VA = "0x4CC7620")]
		set
		{
		}
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x4CC7700", Offset = "0x4CC7700", VA = "0x4CC7700")]
	public MultiColumnTreeView()
	{
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x4CC77C0", Offset = "0x4CC77C0", VA = "0x4CC77C0")]
	public MultiColumnTreeView(Columns columns)
	{
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x4CC7A40", Offset = "0x4CC7A40", VA = "0x4CC7A40", Slot = "104")]
	protected override CollectionViewController CreateViewController()
	{
		return null;
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x4CC7AD0", Offset = "0x4CC7AD0", VA = "0x4CC7AD0", Slot = "105")]
	public override void SetViewController(CollectionViewController controller)
	{
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x4CC8100", Offset = "0x4CC8100", VA = "0x4CC8100", Slot = "103")]
	private protected override void CreateVirtualizationController()
	{
	}

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x4CC7600", Offset = "0x4CC7600", VA = "0x4CC7600")]
	private void RaiseColumnSortingChanged()
	{
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x4CC8140", Offset = "0x4CC8140", VA = "0x4CC8140")]
	private void RaiseHeaderContextMenuPopulate(ContextualMenuPopulateEvent evt, Column column)
	{
	}
}
