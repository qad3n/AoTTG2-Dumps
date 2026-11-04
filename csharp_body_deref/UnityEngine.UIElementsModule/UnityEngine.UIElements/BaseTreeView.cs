// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseTreeView
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000082")]
public abstract class BaseTreeView : BaseVerticalCollectionView
{
	[Token(Token = "0x2000083")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BaseVerticalCollectionView.UxmlTraits
	{
		[Token(Token = "0x400024F")]
		[FieldOffset(Offset = "0xC8")]
		private readonly UxmlBoolAttributeDescription m_AutoExpand;

		[Token(Token = "0x6000460")]
		[Address(RVA = "0x30B4A60", Offset = "0x30B3060", VA = "0x1830B4A60", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000461")]
		[Address(RVA = "0x30B5AA0", Offset = "0x30B40A0", VA = "0x1830B5AA0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000242")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId autoExpandProperty;

	[Token(Token = "0x4000243")]
	[FieldOffset(Offset = "0x98")]
	internal static CustomStyleProperty<float> s_TreeViewIndentProperty;

	[Token(Token = "0x4000244")]
	[FieldOffset(Offset = "0xA0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal static readonly int invalidId;

	[Token(Token = "0x4000245")]
	[FieldOffset(Offset = "0xA8")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000246")]
	[FieldOffset(Offset = "0xB0")]
	public new static readonly string itemUssClassName;

	[Token(Token = "0x4000247")]
	[FieldOffset(Offset = "0xB8")]
	public static readonly string itemToggleUssClassName;

	[Token(Token = "0x4000248")]
	[FieldOffset(Offset = "0xC0")]
	[Obsolete("Individual item indents are no longer used, see itemIndentUssClassName instead", false)]
	public static readonly string itemIndentsContainerUssClassName;

	[Token(Token = "0x4000249")]
	[FieldOffset(Offset = "0xC8")]
	public static readonly string itemIndentUssClassName;

	[Token(Token = "0x400024A")]
	[FieldOffset(Offset = "0xD0")]
	public static readonly string itemContentContainerUssClassName;

	[Token(Token = "0x400024B")]
	[FieldOffset(Offset = "0x3C8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<TreeViewExpansionChangedArgs> itemExpandedChanged;

	[Token(Token = "0x400024C")]
	[FieldOffset(Offset = "0x3D0")]
	private bool m_AutoExpand;

	[Token(Token = "0x400024D")]
	[FieldOffset(Offset = "0x3D8")]
	[SerializeField]
	[DontCreateProperty]
	private List<int> m_ExpandedItemIds;

	[Token(Token = "0x170000C4")]
	[CreateProperty(ReadOnly = true)]
	public new IList itemsSource
	{
		[Token(Token = "0x6000441")]
		[Address(RVA = "0x30A51A0", Offset = "0x30A37A0", VA = "0x1830A51A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000442")]
		[Address(RVA = "0x30A5310", Offset = "0x30A3910", VA = "0x1830A5310")]
		internal set
		{
		}
	}

	[Token(Token = "0x170000C5")]
	public new BaseTreeViewController viewController
	{
		[Token(Token = "0x6000443")]
		[Address(RVA = "0x30A51D0", Offset = "0x30A37D0", VA = "0x1830A51D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C6")]
	[CreateProperty]
	public bool autoExpand
	{
		[Token(Token = "0x6000449")]
		[Address(RVA = "0x30A5180", Offset = "0x30A3780", VA = "0x1830A5180")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600044A")]
		[Address(RVA = "0x30A5250", Offset = "0x30A3850", VA = "0x1830A5250")]
		set
		{
		}
	}

	[Token(Token = "0x170000C7")]
	internal List<int> expandedItemIds
	{
		[Token(Token = "0x600044B")]
		[Address(RVA = "0x30A5190", Offset = "0x30A3790", VA = "0x1830A5190")]
		get
		{
			return null;
		}
		[Token(Token = "0x600044C")]
		[Address(RVA = "0x30A52F0", Offset = "0x30A38F0", VA = "0x1830A52F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000C8")]
	internal float? customIdent
	{
		[Token(Token = "0x600044D")]
		[Address(RVA = "0x30A24E0", Offset = "0x30A0AE0", VA = "0x1830A24E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600044E")]
		[Address(RVA = "0x30A52E0", Offset = "0x30A38E0", VA = "0x1830A52E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x30A3A60", Offset = "0x30A2060", VA = "0x1830A3A60", Slot = "145")]
	private protected override void CreateVirtualizationController()
	{
	}

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x30A4860", Offset = "0x30A2E60", VA = "0x1830A4860", Slot = "147")]
	public override void SetViewController(CollectionViewController controller)
	{
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x30A4520", Offset = "0x30A2B20", VA = "0x1830A4520")]
	private void OnItemIndexChanged(int srcIndex, int dstIndex)
	{
	}

	[Token(Token = "0x6000447")]
	[Address(RVA = "0x30A4500", Offset = "0x30A2B00", VA = "0x1830A4500")]
	private void OnItemExpandedChanged(TreeViewExpansionChangedArgs arg)
	{
	}

	[Token(Token = "0x6000448")]
	[Address(RVA = "0x30A3A00", Offset = "0x30A2000", VA = "0x1830A3A00", Slot = "149")]
	internal override ICollectionDragAndDropController CreateDragAndDropController()
	{
		return null;
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x30A4FE0", Offset = "0x30A35E0", VA = "0x1830A4FE0")]
	public BaseTreeView()
	{
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x30A4E30", Offset = "0x30A3430", VA = "0x1830A4E30")]
	public BaseTreeView(int itemHeight)
	{
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x30A4350", Offset = "0x30A2950", VA = "0x1830A4350")]
	private void OnCustomStyleResolved(CustomStyleResolvedEvent evt)
	{
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x30A4530", Offset = "0x30A2B30", VA = "0x1830A4530", Slot = "135")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x30A3DA0", Offset = "0x30A23A0", VA = "0x1830A3DA0", Slot = "152")]
	private protected override bool HandleItemNavigation(bool moveIn, bool altPressed)
	{
		return default(bool);
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x30A4680", Offset = "0x30A2C80", VA = "0x1830A4680")]
	public void SetSelectionById(int id)
	{
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x30A45C0", Offset = "0x30A2BC0", VA = "0x1830A45C0")]
	public void SetSelectionById(IEnumerable<int> ids)
	{
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x30A4790", Offset = "0x30A2D90", VA = "0x1830A4790")]
	internal void SetSelectionInternalById(IEnumerable<int> ids, bool sendNotification)
	{
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x30A3B90", Offset = "0x30A2190", VA = "0x1830A3B90")]
	private int GetItemIndex(int id, bool expand = false)
	{
		return default(int);
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x30A4320", Offset = "0x30A2920", VA = "0x1830A4320")]
	public bool IsExpanded(int id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x30A39A0", Offset = "0x30A1FA0", VA = "0x1830A39A0")]
	public void CollapseItem(int id, bool collapseAllChildren = false, bool refresh = true)
	{
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x30A3B30", Offset = "0x30A2130", VA = "0x1830A3B30")]
	public void ExpandItem(int id, bool expandAllChildren = false, bool refresh = true)
	{
	}

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x30A42F0", Offset = "0x30A28F0", VA = "0x1830A42F0")]
	private bool IsExpandedByIndex(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x30A3910", Offset = "0x30A1F10", VA = "0x1830A3910")]
	private void CollapseItemByIndex(int index, bool collapseAll)
	{
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x30A3AA0", Offset = "0x30A20A0", VA = "0x1830A3AA0")]
	private void ExpandItemByIndex(int index, bool expandAll)
	{
	}
}
