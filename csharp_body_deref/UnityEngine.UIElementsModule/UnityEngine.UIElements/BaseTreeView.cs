using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x200004D")]
public abstract class BaseTreeView : BaseVerticalCollectionView
{
	[Token(Token = "0x200004E")]
	public new class UxmlTraits : BaseVerticalCollectionView.UxmlTraits
	{
		[Token(Token = "0x400014F")]
		[FieldOffset(Offset = "0xB0")]
		private readonly UxmlBoolAttributeDescription m_AutoExpand;

		[Token(Token = "0x60002BE")]
		[Address(RVA = "0x4BFFDE0", Offset = "0x4BFFDE0", VA = "0x4BFFDE0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60002BF")]
		[Address(RVA = "0x4BFFEE0", Offset = "0x4BFFEE0", VA = "0x4BFFEE0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000146")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty autoExpandProperty;

	[Token(Token = "0x4000147")]
	[FieldOffset(Offset = "0xA0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000148")]
	[FieldOffset(Offset = "0xA8")]
	public new static readonly string itemUssClassName;

	[Token(Token = "0x4000149")]
	[FieldOffset(Offset = "0xB0")]
	public static readonly string itemToggleUssClassName;

	[Token(Token = "0x400014A")]
	[FieldOffset(Offset = "0xB8")]
	public static readonly string itemIndentsContainerUssClassName;

	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0xC0")]
	public static readonly string itemIndentUssClassName;

	[Token(Token = "0x400014C")]
	[FieldOffset(Offset = "0xC8")]
	public static readonly string itemContentContainerUssClassName;

	[Token(Token = "0x400014D")]
	[FieldOffset(Offset = "0x4BC")]
	private bool m_AutoExpand;

	[Token(Token = "0x400014E")]
	[FieldOffset(Offset = "0x4C0")]
	[SerializeField]
	[DontCreateProperty]
	private List<int> m_ExpandedItemIds;

	[Token(Token = "0x1700006C")]
	[CreateProperty(ReadOnly = true)]
	public new IList itemsSource
	{
		[Token(Token = "0x60002A2")]
		[Address(RVA = "0x4BFDC80", Offset = "0x4BFDC80", VA = "0x4BFDC80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002A3")]
		[Address(RVA = "0x4BFDD70", Offset = "0x4BFDD70", VA = "0x4BFDD70")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700006D")]
	public new BaseTreeViewController viewController
	{
		[Token(Token = "0x60002A4")]
		[Address(RVA = "0x4BFDD00", Offset = "0x4BFDD00", VA = "0x4BFDD00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006E")]
	[CreateProperty]
	public bool autoExpand
	{
		[Token(Token = "0x60002A9")]
		[Address(RVA = "0x4BFE190", Offset = "0x4BFE190", VA = "0x4BFE190")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002AA")]
		[Address(RVA = "0x4BFE1A0", Offset = "0x4BFE1A0", VA = "0x4BFE1A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	internal List<int> expandedItemIds
	{
		[Token(Token = "0x60002AB")]
		[Address(RVA = "0x4BFE2C0", Offset = "0x4BFE2C0", VA = "0x4BFE2C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002AC")]
		[Address(RVA = "0x4BFE2D0", Offset = "0x4BFE2D0", VA = "0x4BFE2D0")]
		set
		{
		}
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x4BFDE30", Offset = "0x4BFDE30", VA = "0x4BFDE30", Slot = "103")]
	private protected override void CreateVirtualizationController()
	{
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x4BFDE70", Offset = "0x4BFDE70", VA = "0x4BFDE70", Slot = "105")]
	public override void SetViewController(CollectionViewController controller)
	{
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x4BFE130", Offset = "0x4BFE130", VA = "0x4BFE130")]
	private void OnItemIndexChanged(int srcIndex, int dstIndex)
	{
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x4BFE140", Offset = "0x4BFE140", VA = "0x4BFE140", Slot = "107")]
	internal override ICollectionDragAndDropController CreateDragAndDropController()
	{
		return null;
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x4BFE2F0", Offset = "0x4BFE2F0", VA = "0x4BFE2F0")]
	public BaseTreeView()
	{
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x4BFE300", Offset = "0x4BFE300", VA = "0x4BFE300")]
	public BaseTreeView(int itemHeight)
	{
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x4BFE590", Offset = "0x4BFE590", VA = "0x4BFE590", Slot = "94")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x4BFE670", Offset = "0x4BFE670", VA = "0x4BFE670", Slot = "110")]
	private protected override bool HandleItemNavigation(bool moveIn, bool altPressed)
	{
		return default(bool);
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x4BFF1B0", Offset = "0x4BFF1B0", VA = "0x4BFF1B0")]
	public void SetSelectionById(int id)
	{
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x4BFF2B0", Offset = "0x4BFF2B0", VA = "0x4BFF2B0")]
	public void SetSelectionById(IEnumerable<int> ids)
	{
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x4BFF2C0", Offset = "0x4BFF2C0", VA = "0x4BFF2C0")]
	internal void SetSelectionInternalById(IEnumerable<int> ids, bool sendNotification)
	{
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x4BFF790", Offset = "0x4BFF790", VA = "0x4BFF790")]
	private int GetItemIndex(int id, bool expand = false)
	{
		return default(int);
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x4BFF9C0", Offset = "0x4BFF9C0", VA = "0x4BFF9C0")]
	public bool IsExpanded(int id)
	{
		return default(bool);
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x4BFFA30", Offset = "0x4BFFA30", VA = "0x4BFFA30")]
	public void CollapseItem(int id, bool collapseAllChildren = false)
	{
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x4BFFAB0", Offset = "0x4BFFAB0", VA = "0x4BFFAB0")]
	public void ExpandItem(int id, bool expandAllChildren = false)
	{
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x4BFFB30", Offset = "0x4BFFB30", VA = "0x4BFFB30")]
	private void OnTreeViewPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x4BFEE20", Offset = "0x4BFEE20", VA = "0x4BFEE20")]
	private bool IsExpandedByIndex(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x4BFF020", Offset = "0x4BFF020", VA = "0x4BFF020")]
	private void CollapseItemByIndex(int index, bool collapseAll)
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x4BFEE90", Offset = "0x4BFEE90", VA = "0x4BFEE90")]
	private void ExpandItemByIndex(int index, bool expandAll)
	{
	}
}
