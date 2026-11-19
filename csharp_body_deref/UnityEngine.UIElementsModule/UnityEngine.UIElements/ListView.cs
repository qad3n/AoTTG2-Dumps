// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ListView
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6C0E280", Offset = "0x6C0D280", VA = "0x6C0E280")]
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
		[Address(RVA = "0x6C0E2C0", Offset = "0x6C0D2C0", VA = "0x6C0E2C0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000742")]
		[Address(RVA = "0x6C0E400", Offset = "0x6C0D400", VA = "0x6C0E400")]
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
	[FieldOffset(Offset = "0x4D0")]
	private Func<VisualElement> m_MakeItem;

	[Token(Token = "0x400044B")]
	[FieldOffset(Offset = "0x4D8")]
	private Func<VisualElement> m_TemplateMakeItem;

	[Token(Token = "0x400044C")]
	[FieldOffset(Offset = "0x4E0")]
	private VisualTreeAsset m_ItemTemplate;

	[Token(Token = "0x400044D")]
	[FieldOffset(Offset = "0x4E8")]
	private Action<VisualElement, int> m_BindItem;

	[Token(Token = "0x400044E")]
	[FieldOffset(Offset = "0x4F0")]
	private Action<VisualElement, int> m_UnbindItem;

	[Token(Token = "0x400044F")]
	[FieldOffset(Offset = "0x4F8")]
	private Action<VisualElement> m_DestroyItem;

	[Token(Token = "0x17000147")]
	[CreateProperty]
	public Func<VisualElement> makeItem
	{
		[Token(Token = "0x6000731")]
		[Address(RVA = "0x6C0DA70", Offset = "0x6C0CA70", VA = "0x6C0DA70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000732")]
		[Address(RVA = "0x6C0DA80", Offset = "0x6C0CA80", VA = "0x6C0DA80")]
		set
		{
		}
	}

	[Token(Token = "0x17000148")]
	[CreateProperty]
	public VisualTreeAsset itemTemplate
	{
		[Token(Token = "0x6000733")]
		[Address(RVA = "0x6C0DB20", Offset = "0x6C0CB20", VA = "0x6C0DB20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000734")]
		[Address(RVA = "0x6C0DB30", Offset = "0x6C0CB30", VA = "0x6C0DB30")]
		set
		{
		}
	}

	[Token(Token = "0x17000149")]
	[CreateProperty]
	public Action<VisualElement, int> bindItem
	{
		[Token(Token = "0x6000736")]
		[Address(RVA = "0x6C0DD10", Offset = "0x6C0CD10", VA = "0x6C0DD10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000737")]
		[Address(RVA = "0x6C0DD20", Offset = "0x6C0CD20", VA = "0x6C0DD20")]
		set
		{
		}
	}

	[Token(Token = "0x1700014A")]
	[CreateProperty]
	public Action<VisualElement, int> unbindItem
	{
		[Token(Token = "0x6000738")]
		[Address(RVA = "0x6C0DDC0", Offset = "0x6C0CDC0", VA = "0x6C0DDC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000739")]
		[Address(RVA = "0x6C0DDD0", Offset = "0x6C0CDD0", VA = "0x6C0DDD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700014B")]
	[CreateProperty]
	public Action<VisualElement> destroyItem
	{
		[Token(Token = "0x600073A")]
		[Address(RVA = "0x6C0DE60", Offset = "0x6C0CE60", VA = "0x6C0DE60")]
		get
		{
			return null;
		}
		[Token(Token = "0x600073B")]
		[Address(RVA = "0x6C0DE70", Offset = "0x6C0CE70", VA = "0x6C0DE70")]
		set
		{
		}
	}

	[Token(Token = "0x6000735")]
	[Address(RVA = "0x6C0DC30", Offset = "0x6C0CC30", VA = "0x6C0DC30")]
	private VisualElement TemplateMakeItem()
	{
		return null;
	}

	[Token(Token = "0x600073C")]
	[Address(RVA = "0x6C0DF00", Offset = "0x6C0CF00", VA = "0x6C0DF00", Slot = "150")]
	internal override bool HasValidDataAndBindings()
	{
		return default(bool);
	}

	[Token(Token = "0x600073D")]
	[Address(RVA = "0x6C0DF50", Offset = "0x6C0CF50", VA = "0x6C0DF50", Slot = "146")]
	protected override CollectionViewController CreateViewController()
	{
		return null;
	}

	[Token(Token = "0x600073E")]
	[Address(RVA = "0x6C0DF90", Offset = "0x6C0CF90", VA = "0x6C0DF90")]
	public ListView()
	{
	}
}
