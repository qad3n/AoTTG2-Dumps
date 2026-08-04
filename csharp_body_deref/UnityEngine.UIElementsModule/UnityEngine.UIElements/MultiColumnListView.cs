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

namespace UnityEngine.UIElements;

[Token(Token = "0x20000DE")]
public class MultiColumnListView : BaseListView
{
	[Token(Token = "0x20000DF")]
	public new class UxmlFactory : UxmlFactory<MultiColumnListView, UxmlTraits>
	{
		[Token(Token = "0x600063E")]
		[Address(RVA = "0x4FEE930", Offset = "0x4FEE930", VA = "0x4FEE930")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000E0")]
	public new class UxmlTraits : BaseListView.UxmlTraits
	{
		[Token(Token = "0x40003BC")]
		[FieldOffset(Offset = "0xD8")]
		private readonly UxmlBoolAttributeDescription m_SortingEnabled;

		[Token(Token = "0x40003BD")]
		[FieldOffset(Offset = "0xE0")]
		private readonly UxmlObjectAttributeDescription<Columns> m_Columns;

		[Token(Token = "0x40003BE")]
		[FieldOffset(Offset = "0xE8")]
		private readonly UxmlObjectAttributeDescription<SortColumnDescriptions> m_SortColumnDescriptions;

		[Token(Token = "0x600063F")]
		[Address(RVA = "0x4FEE970", Offset = "0x4FEE970", VA = "0x4FEE970", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000640")]
		[Address(RVA = "0x4FEEB30", Offset = "0x4FEEB30", VA = "0x4FEEB30")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40003B6")]
	[FieldOffset(Offset = "0x548")]
	private Columns m_Columns;

	[Token(Token = "0x40003B7")]
	[FieldOffset(Offset = "0x550")]
	private bool m_SortingEnabled;

	[Token(Token = "0x40003B8")]
	[FieldOffset(Offset = "0x558")]
	private SortColumnDescriptions m_SortColumnDescriptions;

	[Token(Token = "0x40003B9")]
	[FieldOffset(Offset = "0x560")]
	private List<SortColumnDescription> m_SortedColumns;

	[Token(Token = "0x40003BA")]
	[FieldOffset(Offset = "0x568")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action columnSortingChanged;

	[Token(Token = "0x40003BB")]
	[FieldOffset(Offset = "0x570")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<ContextualMenuPopulateEvent, Column> headerContextMenuPopulateEvent;

	[Token(Token = "0x17000110")]
	public new MultiColumnListViewController viewController
	{
		[Token(Token = "0x6000631")]
		[Address(RVA = "0x4FED940", Offset = "0x4FED940", VA = "0x4FED940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000111")]
	public Columns columns
	{
		[Token(Token = "0x6000632")]
		[Address(RVA = "0x4FED9C0", Offset = "0x4FED9C0", VA = "0x4FED9C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000633")]
		[Address(RVA = "0x4FED9D0", Offset = "0x4FED9D0", VA = "0x4FED9D0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000112")]
	public SortColumnDescriptions sortColumnDescriptions
	{
		[Token(Token = "0x6000634")]
		[Address(RVA = "0x4FEDAC0", Offset = "0x4FEDAC0", VA = "0x4FEDAC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000635")]
		[Address(RVA = "0x4FEDAD0", Offset = "0x4FEDAD0", VA = "0x4FEDAD0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000113")]
	public bool sortingEnabled
	{
		[Token(Token = "0x6000636")]
		[Address(RVA = "0x4FEDD80", Offset = "0x4FEDD80", VA = "0x4FEDD80")]
		set
		{
		}
	}

	[Token(Token = "0x6000637")]
	[Address(RVA = "0x4FEDE60", Offset = "0x4FEDE60", VA = "0x4FEDE60")]
	public MultiColumnListView()
	{
	}

	[Token(Token = "0x6000638")]
	[Address(RVA = "0x4FEDF20", Offset = "0x4FEDF20", VA = "0x4FEDF20")]
	public MultiColumnListView(Columns columns)
	{
	}

	[Token(Token = "0x6000639")]
	[Address(RVA = "0x4FEE220", Offset = "0x4FEE220", VA = "0x4FEE220", Slot = "104")]
	protected override CollectionViewController CreateViewController()
	{
		return null;
	}

	[Token(Token = "0x600063A")]
	[Address(RVA = "0x4FEE2A0", Offset = "0x4FEE2A0", VA = "0x4FEE2A0", Slot = "105")]
	public override void SetViewController(CollectionViewController controller)
	{
	}

	[Token(Token = "0x600063B")]
	[Address(RVA = "0x4FEE8D0", Offset = "0x4FEE8D0", VA = "0x4FEE8D0", Slot = "103")]
	private protected override void CreateVirtualizationController()
	{
	}

	[Token(Token = "0x600063C")]
	[Address(RVA = "0x4FEDD60", Offset = "0x4FEDD60", VA = "0x4FEDD60")]
	private void RaiseColumnSortingChanged()
	{
	}

	[Token(Token = "0x600063D")]
	[Address(RVA = "0x4FEE910", Offset = "0x4FEE910", VA = "0x4FEE910")]
	private void RaiseHeaderContextMenuPopulate(ContextualMenuPopulateEvent evt, Column column)
	{
	}
}
