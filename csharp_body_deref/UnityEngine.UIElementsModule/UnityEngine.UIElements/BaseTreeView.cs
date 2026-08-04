// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseTreeView
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4F27710", Offset = "0x4F27710", VA = "0x4F27710", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60002BF")]
		[Address(RVA = "0x4F27810", Offset = "0x4F27810", VA = "0x4F27810")]
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
		[Address(RVA = "0x4F255B0", Offset = "0x4F255B0", VA = "0x4F255B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002A3")]
		[Address(RVA = "0x4F256A0", Offset = "0x4F256A0", VA = "0x4F256A0")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700006D")]
	public new BaseTreeViewController viewController
	{
		[Token(Token = "0x60002A4")]
		[Address(RVA = "0x4F25630", Offset = "0x4F25630", VA = "0x4F25630")]
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
		[Address(RVA = "0x4F25AC0", Offset = "0x4F25AC0", VA = "0x4F25AC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002AA")]
		[Address(RVA = "0x4F25AD0", Offset = "0x4F25AD0", VA = "0x4F25AD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	internal List<int> expandedItemIds
	{
		[Token(Token = "0x60002AB")]
		[Address(RVA = "0x4F25BF0", Offset = "0x4F25BF0", VA = "0x4F25BF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002AC")]
		[Address(RVA = "0x4F25C00", Offset = "0x4F25C00", VA = "0x4F25C00")]
		set
		{
		}
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x4F25760", Offset = "0x4F25760", VA = "0x4F25760", Slot = "103")]
	private protected override void CreateVirtualizationController()
	{
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x4F257A0", Offset = "0x4F257A0", VA = "0x4F257A0", Slot = "105")]
	public override void SetViewController(CollectionViewController controller)
	{
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x4F25A60", Offset = "0x4F25A60", VA = "0x4F25A60")]
	private void OnItemIndexChanged(int srcIndex, int dstIndex)
	{
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x4F25A70", Offset = "0x4F25A70", VA = "0x4F25A70", Slot = "107")]
	internal override ICollectionDragAndDropController CreateDragAndDropController()
	{
		return null;
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x4F25C20", Offset = "0x4F25C20", VA = "0x4F25C20")]
	public BaseTreeView()
	{
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x4F25C30", Offset = "0x4F25C30", VA = "0x4F25C30")]
	public BaseTreeView(int itemHeight)
	{
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x4F25EC0", Offset = "0x4F25EC0", VA = "0x4F25EC0", Slot = "94")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x4F25FA0", Offset = "0x4F25FA0", VA = "0x4F25FA0", Slot = "110")]
	private protected override bool HandleItemNavigation(bool moveIn, bool altPressed)
	{
		return default(bool);
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x4F26AE0", Offset = "0x4F26AE0", VA = "0x4F26AE0")]
	public void SetSelectionById(int id)
	{
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x4F26BE0", Offset = "0x4F26BE0", VA = "0x4F26BE0")]
	public void SetSelectionById(IEnumerable<int> ids)
	{
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x4F26BF0", Offset = "0x4F26BF0", VA = "0x4F26BF0")]
	internal void SetSelectionInternalById(IEnumerable<int> ids, bool sendNotification)
	{
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x4F270C0", Offset = "0x4F270C0", VA = "0x4F270C0")]
	private int GetItemIndex(int id, bool expand = false)
	{
		return default(int);
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x4F272F0", Offset = "0x4F272F0", VA = "0x4F272F0")]
	public bool IsExpanded(int id)
	{
		return default(bool);
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x4F27360", Offset = "0x4F27360", VA = "0x4F27360")]
	public void CollapseItem(int id, bool collapseAllChildren = false)
	{
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x4F273E0", Offset = "0x4F273E0", VA = "0x4F273E0")]
	public void ExpandItem(int id, bool expandAllChildren = false)
	{
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x4F27460", Offset = "0x4F27460", VA = "0x4F27460")]
	private void OnTreeViewPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x4F26750", Offset = "0x4F26750", VA = "0x4F26750")]
	private bool IsExpandedByIndex(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x4F26950", Offset = "0x4F26950", VA = "0x4F26950")]
	private void CollapseItemByIndex(int index, bool collapseAll)
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x4F267C0", Offset = "0x4F267C0", VA = "0x4F267C0")]
	private void ExpandItemByIndex(int index, bool expandAll)
	{
	}
}
