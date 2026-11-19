// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TreeView
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x200016A")]
public class TreeView : BaseTreeView
{
	[Token(Token = "0x200016B")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<TreeView, UxmlTraits>
	{
		[Token(Token = "0x6000A7A")]
		[Address(RVA = "0x6C44F80", Offset = "0x6C43F80", VA = "0x6C44F80")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200016C")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BaseTreeView.UxmlTraits
	{
		[Token(Token = "0x400069F")]
		[FieldOffset(Offset = "0xD0")]
		private UxmlAssetAttributeDescription<VisualTreeAsset> m_ItemTemplate;

		[Token(Token = "0x6000A7B")]
		[Address(RVA = "0x6C44FC0", Offset = "0x6C43FC0", VA = "0x6C44FC0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000A7C")]
		[Address(RVA = "0x6C45100", Offset = "0x6C44100", VA = "0x6C45100")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000694")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId itemTemplateProperty;

	[Token(Token = "0x4000695")]
	[FieldOffset(Offset = "0x98")]
	internal static readonly BindingId makeItemProperty;

	[Token(Token = "0x4000696")]
	[FieldOffset(Offset = "0x130")]
	internal static readonly BindingId bindItemProperty;

	[Token(Token = "0x4000697")]
	[FieldOffset(Offset = "0x1C8")]
	internal static readonly BindingId unbindItemProperty;

	[Token(Token = "0x4000698")]
	[FieldOffset(Offset = "0x260")]
	internal static readonly BindingId destroyItemProperty;

	[Token(Token = "0x4000699")]
	[FieldOffset(Offset = "0x3E8")]
	private Func<VisualElement> m_MakeItem;

	[Token(Token = "0x400069A")]
	[FieldOffset(Offset = "0x3F0")]
	private Func<VisualElement> m_TemplateMakeItem;

	[Token(Token = "0x400069B")]
	[FieldOffset(Offset = "0x3F8")]
	private VisualTreeAsset m_ItemTemplate;

	[Token(Token = "0x400069C")]
	[FieldOffset(Offset = "0x400")]
	private Action<VisualElement, int> m_BindItem;

	[Token(Token = "0x400069D")]
	[FieldOffset(Offset = "0x408")]
	private Action<VisualElement, int> m_UnbindItem;

	[Token(Token = "0x400069E")]
	[FieldOffset(Offset = "0x410")]
	private Action<VisualElement> m_DestroyItem;

	[Token(Token = "0x170001EB")]
	[CreateProperty]
	public Func<VisualElement> makeItem
	{
		[Token(Token = "0x6000A6A")]
		[Address(RVA = "0x6C44750", Offset = "0x6C43750", VA = "0x6C44750")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A6B")]
		[Address(RVA = "0x6C44760", Offset = "0x6C43760", VA = "0x6C44760")]
		set
		{
		}
	}

	[Token(Token = "0x170001EC")]
	[CreateProperty]
	public VisualTreeAsset itemTemplate
	{
		[Token(Token = "0x6000A6C")]
		[Address(RVA = "0x6C44800", Offset = "0x6C43800", VA = "0x6C44800")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A6D")]
		[Address(RVA = "0x6C44810", Offset = "0x6C43810", VA = "0x6C44810")]
		set
		{
		}
	}

	[Token(Token = "0x170001ED")]
	[CreateProperty]
	public Action<VisualElement, int> bindItem
	{
		[Token(Token = "0x6000A6F")]
		[Address(RVA = "0x6C449F0", Offset = "0x6C439F0", VA = "0x6C449F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A70")]
		[Address(RVA = "0x6C44A00", Offset = "0x6C43A00", VA = "0x6C44A00")]
		set
		{
		}
	}

	[Token(Token = "0x170001EE")]
	[CreateProperty]
	public Action<VisualElement, int> unbindItem
	{
		[Token(Token = "0x6000A71")]
		[Address(RVA = "0x6C44AA0", Offset = "0x6C43AA0", VA = "0x6C44AA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A72")]
		[Address(RVA = "0x6C44AB0", Offset = "0x6C43AB0", VA = "0x6C44AB0")]
		set
		{
		}
	}

	[Token(Token = "0x170001EF")]
	[CreateProperty]
	public Action<VisualElement> destroyItem
	{
		[Token(Token = "0x6000A73")]
		[Address(RVA = "0x6C44B40", Offset = "0x6C43B40", VA = "0x6C44B40")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A74")]
		[Address(RVA = "0x6C44B50", Offset = "0x6C43B50", VA = "0x6C44B50")]
		set
		{
		}
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x6C44910", Offset = "0x6C43910", VA = "0x6C44910")]
	private VisualElement TemplateMakeItem()
	{
		return null;
	}

	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x6C44BE0", Offset = "0x6C43BE0", VA = "0x6C44BE0", Slot = "150")]
	internal override bool HasValidDataAndBindings()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A76")]
	[Address(RVA = "0x6C44C20", Offset = "0x6C43C20", VA = "0x6C44C20", Slot = "146")]
	protected override CollectionViewController CreateViewController()
	{
		return null;
	}

	[Token(Token = "0x6000A77")]
	[Address(RVA = "0x6C44C80", Offset = "0x6C43C80", VA = "0x6C44C80")]
	public TreeView()
	{
	}

	[Token(Token = "0x6000A78")]
	[Address(RVA = "0x6C44C90", Offset = "0x6C43C90", VA = "0x6C44C90")]
	public TreeView(Func<VisualElement> makeItem, Action<VisualElement, int> bindItem)
	{
	}
}
