// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseTreeView
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6AA9860", Offset = "0x6AA8860", VA = "0x6AA9860", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000461")]
		[Address(RVA = "0x6AA99E0", Offset = "0x6AA89E0", VA = "0x6AA99E0")]
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
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
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
		[Address(RVA = "0x6AA6DD0", Offset = "0x6AA5DD0", VA = "0x6AA6DD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000442")]
		[Address(RVA = "0x6AA6EB0", Offset = "0x6AA5EB0", VA = "0x6AA6EB0")]
		internal set
		{
		}
	}

	[Token(Token = "0x170000C5")]
	public new BaseTreeViewController viewController
	{
		[Token(Token = "0x6000443")]
		[Address(RVA = "0x6AA6E40", Offset = "0x6AA5E40", VA = "0x6AA6E40")]
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
		[Address(RVA = "0x6AA73C0", Offset = "0x6AA63C0", VA = "0x6AA73C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600044A")]
		[Address(RVA = "0x6AA73D0", Offset = "0x6AA63D0", VA = "0x6AA73D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000C7")]
	internal List<int> expandedItemIds
	{
		[Token(Token = "0x600044B")]
		[Address(RVA = "0x6AA7450", Offset = "0x6AA6450", VA = "0x6AA7450")]
		get
		{
			return null;
		}
		[Token(Token = "0x600044C")]
		[Address(RVA = "0x6AA7460", Offset = "0x6AA6460", VA = "0x6AA7460")]
		set
		{
		}
	}

	[Token(Token = "0x170000C8")]
	internal float? customIdent
	{
		[Token(Token = "0x600044D")]
		[Address(RVA = "0x6AA7480", Offset = "0x6AA6480", VA = "0x6AA7480")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600044E")]
		[Address(RVA = "0x6AA7490", Offset = "0x6AA6490", VA = "0x6AA7490")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x6AA6F20", Offset = "0x6AA5F20", VA = "0x6AA6F20", Slot = "145")]
	private protected override void CreateVirtualizationController()
	{
	}

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x6AA6F60", Offset = "0x6AA5F60", VA = "0x6AA6F60", Slot = "147")]
	public override void SetViewController(CollectionViewController controller)
	{
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x6AA7340", Offset = "0x6AA6340", VA = "0x6AA7340")]
	private void OnItemIndexChanged(int srcIndex, int dstIndex)
	{
	}

	[Token(Token = "0x6000447")]
	[Address(RVA = "0x6AA7350", Offset = "0x6AA6350", VA = "0x6AA7350")]
	private void OnItemExpandedChanged(TreeViewExpansionChangedArgs arg)
	{
	}

	[Token(Token = "0x6000448")]
	[Address(RVA = "0x6AA7370", Offset = "0x6AA6370", VA = "0x6AA7370", Slot = "149")]
	internal override ICollectionDragAndDropController CreateDragAndDropController()
	{
		return null;
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x6AA74A0", Offset = "0x6AA64A0", VA = "0x6AA74A0")]
	public BaseTreeView()
	{
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x6AA74B0", Offset = "0x6AA64B0", VA = "0x6AA74B0")]
	public BaseTreeView(int itemHeight)
	{
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x6AA76A0", Offset = "0x6AA66A0", VA = "0x6AA76A0")]
	private void OnCustomStyleResolved(CustomStyleResolvedEvent evt)
	{
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x6AA7870", Offset = "0x6AA6870", VA = "0x6AA7870", Slot = "135")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x6AA7960", Offset = "0x6AA6960", VA = "0x6AA7960", Slot = "152")]
	private protected override bool HandleItemNavigation(bool moveIn, bool altPressed)
	{
		return default(bool);
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x6AA85E0", Offset = "0x6AA75E0", VA = "0x6AA85E0")]
	public void SetSelectionById(int id)
	{
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x6AA86E0", Offset = "0x6AA76E0", VA = "0x6AA86E0")]
	public void SetSelectionById(IEnumerable<int> ids)
	{
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x6AA86F0", Offset = "0x6AA76F0", VA = "0x6AA86F0")]
	internal void SetSelectionInternalById(IEnumerable<int> ids, bool sendNotification)
	{
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x6AA90D0", Offset = "0x6AA80D0", VA = "0x6AA90D0")]
	private int GetItemIndex(int id, bool expand = false)
	{
		return default(int);
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x6AA93E0", Offset = "0x6AA83E0", VA = "0x6AA93E0")]
	public bool IsExpanded(int id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x6AA9450", Offset = "0x6AA8450", VA = "0x6AA9450")]
	public void CollapseItem(int id, bool collapseAllChildren = false, bool refresh = true)
	{
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x6AA94E0", Offset = "0x6AA84E0", VA = "0x6AA94E0")]
	public void ExpandItem(int id, bool expandAllChildren = false, bool refresh = true)
	{
	}

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x6AA82A0", Offset = "0x6AA72A0", VA = "0x6AA82A0")]
	private bool IsExpandedByIndex(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x6AA8420", Offset = "0x6AA7420", VA = "0x6AA8420")]
	private void CollapseItemByIndex(int index, bool collapseAll)
	{
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x6AA8310", Offset = "0x6AA7310", VA = "0x6AA8310")]
	private void ExpandItemByIndex(int index, bool expandAll)
	{
	}
}
