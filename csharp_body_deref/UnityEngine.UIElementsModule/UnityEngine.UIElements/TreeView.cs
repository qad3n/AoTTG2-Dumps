// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TreeView
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x3254C00", Offset = "0x3253200", VA = "0x183254C00")]
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
		[Address(RVA = "0x3255200", Offset = "0x3253800", VA = "0x183255200", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000A7C")]
		[Address(RVA = "0x3255750", Offset = "0x3253D50", VA = "0x183255750")]
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
		[Address(RVA = "0x2D242E0", Offset = "0x2D228E0", VA = "0x182D242E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A6B")]
		[Address(RVA = "0x324E0A0", Offset = "0x324C6A0", VA = "0x18324E0A0")]
		set
		{
		}
	}

	[Token(Token = "0x170001EC")]
	[CreateProperty]
	public VisualTreeAsset itemTemplate
	{
		[Token(Token = "0x6000A6C")]
		[Address(RVA = "0x32205E0", Offset = "0x321EBE0", VA = "0x1832205E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A6D")]
		[Address(RVA = "0x324DFA0", Offset = "0x324C5A0", VA = "0x18324DFA0")]
		set
		{
		}
	}

	[Token(Token = "0x170001ED")]
	[CreateProperty]
	public Action<VisualElement, int> bindItem
	{
		[Token(Token = "0x6000A6F")]
		[Address(RVA = "0x324DE20", Offset = "0x324C420", VA = "0x18324DE20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A70")]
		[Address(RVA = "0x324DE50", Offset = "0x324C450", VA = "0x18324DE50")]
		set
		{
		}
	}

	[Token(Token = "0x170001EE")]
	[CreateProperty]
	public Action<VisualElement, int> unbindItem
	{
		[Token(Token = "0x6000A71")]
		[Address(RVA = "0x324DE40", Offset = "0x324C440", VA = "0x18324DE40")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A72")]
		[Address(RVA = "0x324E150", Offset = "0x324C750", VA = "0x18324E150")]
		set
		{
		}
	}

	[Token(Token = "0x170001EF")]
	[CreateProperty]
	public Action<VisualElement> destroyItem
	{
		[Token(Token = "0x6000A73")]
		[Address(RVA = "0x324DE30", Offset = "0x324C430", VA = "0x18324DE30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A74")]
		[Address(RVA = "0x324DF00", Offset = "0x324C500", VA = "0x18324DF00")]
		set
		{
		}
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x324D650", Offset = "0x324BC50", VA = "0x18324D650")]
	private VisualElement TemplateMakeItem()
	{
		return null;
	}

	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x324D610", Offset = "0x324BC10", VA = "0x18324D610", Slot = "150")]
	internal override bool HasValidDataAndBindings()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A76")]
	[Address(RVA = "0x324D5B0", Offset = "0x324BBB0", VA = "0x18324D5B0", Slot = "146")]
	protected override CollectionViewController CreateViewController()
	{
		return null;
	}

	[Token(Token = "0x6000A77")]
	[Address(RVA = "0x324DB70", Offset = "0x324C170", VA = "0x18324DB70")]
	public TreeView()
	{
	}

	[Token(Token = "0x6000A78")]
	[Address(RVA = "0x324DCC0", Offset = "0x324C2C0", VA = "0x18324DCC0")]
	public TreeView(Func<VisualElement> makeItem, Action<VisualElement, int> bindItem)
	{
	}
}
