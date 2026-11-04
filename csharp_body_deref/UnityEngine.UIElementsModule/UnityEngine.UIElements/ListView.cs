// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ListView
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000FC")]
public class ListView : BaseListView
{
	[Token(Token = "0x20000FD")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<ListView, UxmlTraits>
	{
		[Token(Token = "0x6000740")]
		[Address(RVA = "0x3224EA0", Offset = "0x32234A0", VA = "0x183224EA0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000FE")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BaseListView.UxmlTraits
	{
		[Token(Token = "0x4000450")]
		[FieldOffset(Offset = "0x108")]
		private UxmlAssetAttributeDescription<VisualTreeAsset> m_ItemTemplate;

		[Token(Token = "0x6000741")]
		[Address(RVA = "0x3225020", Offset = "0x3223620", VA = "0x183225020", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000742")]
		[Address(RVA = "0x32261D0", Offset = "0x32247D0", VA = "0x1832261D0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000445")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId itemTemplateProperty;

	[Token(Token = "0x4000446")]
	[FieldOffset(Offset = "0x98")]
	internal static readonly BindingId makeItemProperty;

	[Token(Token = "0x4000447")]
	[FieldOffset(Offset = "0x130")]
	internal static readonly BindingId bindItemProperty;

	[Token(Token = "0x4000448")]
	[FieldOffset(Offset = "0x1C8")]
	internal static readonly BindingId unbindItemProperty;

	[Token(Token = "0x4000449")]
	[FieldOffset(Offset = "0x260")]
	internal static readonly BindingId destroyItemProperty;

	[Token(Token = "0x400044A")]
	[FieldOffset(Offset = "0x4D8")]
	private Func<VisualElement> m_MakeItem;

	[Token(Token = "0x400044B")]
	[FieldOffset(Offset = "0x4E0")]
	private Func<VisualElement> m_TemplateMakeItem;

	[Token(Token = "0x400044C")]
	[FieldOffset(Offset = "0x4E8")]
	private VisualTreeAsset m_ItemTemplate;

	[Token(Token = "0x400044D")]
	[FieldOffset(Offset = "0x4F0")]
	private Action<VisualElement, int> m_BindItem;

	[Token(Token = "0x400044E")]
	[FieldOffset(Offset = "0x4F8")]
	private Action<VisualElement, int> m_UnbindItem;

	[Token(Token = "0x400044F")]
	[FieldOffset(Offset = "0x500")]
	private Action<VisualElement> m_DestroyItem;

	[Token(Token = "0x17000147")]
	[CreateProperty]
	public Func<VisualElement> makeItem
	{
		[Token(Token = "0x6000731")]
		[Address(RVA = "0x3216B80", Offset = "0x3215180", VA = "0x183216B80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000732")]
		[Address(RVA = "0x3216E70", Offset = "0x3215470", VA = "0x183216E70")]
		set
		{
		}
	}

	[Token(Token = "0x17000148")]
	[CreateProperty]
	public VisualTreeAsset itemTemplate
	{
		[Token(Token = "0x6000733")]
		[Address(RVA = "0x3216B70", Offset = "0x3215170", VA = "0x183216B70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000734")]
		[Address(RVA = "0x3216CF0", Offset = "0x32152F0", VA = "0x183216CF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000149")]
	[CreateProperty]
	public Action<VisualElement, int> bindItem
	{
		[Token(Token = "0x6000736")]
		[Address(RVA = "0x3216B50", Offset = "0x3215150", VA = "0x183216B50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000737")]
		[Address(RVA = "0x3216BA0", Offset = "0x32151A0", VA = "0x183216BA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700014A")]
	[CreateProperty]
	public Action<VisualElement, int> unbindItem
	{
		[Token(Token = "0x6000738")]
		[Address(RVA = "0x3216B90", Offset = "0x3215190", VA = "0x183216B90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000739")]
		[Address(RVA = "0x3216F20", Offset = "0x3215520", VA = "0x183216F20")]
		set
		{
		}
	}

	[Token(Token = "0x1700014B")]
	[CreateProperty]
	public Action<VisualElement> destroyItem
	{
		[Token(Token = "0x600073A")]
		[Address(RVA = "0x3216B60", Offset = "0x3215160", VA = "0x183216B60")]
		get
		{
			return null;
		}
		[Token(Token = "0x600073B")]
		[Address(RVA = "0x3216C50", Offset = "0x3215250", VA = "0x183216C50")]
		set
		{
		}
	}

	[Token(Token = "0x6000735")]
	[Address(RVA = "0x3216560", Offset = "0x3214B60", VA = "0x183216560")]
	private VisualElement TemplateMakeItem()
	{
		return null;
	}

	[Token(Token = "0x600073C")]
	[Address(RVA = "0x32164F0", Offset = "0x3214AF0", VA = "0x1832164F0", Slot = "150")]
	internal override bool HasValidDataAndBindings()
	{
		return default(bool);
	}

	[Token(Token = "0x600073D")]
	[Address(RVA = "0x32164A0", Offset = "0x3214AA0", VA = "0x1832164A0", Slot = "146")]
	protected override CollectionViewController CreateViewController()
	{
		return null;
	}

	[Token(Token = "0x600073E")]
	[Address(RVA = "0x3216A80", Offset = "0x3215080", VA = "0x183216A80")]
	public ListView()
	{
	}
}
