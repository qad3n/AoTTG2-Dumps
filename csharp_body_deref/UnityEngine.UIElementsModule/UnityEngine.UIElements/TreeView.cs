using System;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x200011B")]
public class TreeView : BaseTreeView
{
	[Token(Token = "0x200011C")]
	public new class UxmlFactory : UxmlFactory<TreeView, UxmlTraits>
	{
		[Token(Token = "0x6000790")]
		[Address(RVA = "0x4CDAD40", Offset = "0x4CDAD40", VA = "0x4CDAD40")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200011D")]
	public new class UxmlTraits : BaseTreeView.UxmlTraits
	{
		[Token(Token = "0x6000791")]
		[Address(RVA = "0x4CDAD80", Offset = "0x4CDAD80", VA = "0x4CDAD80")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40004AC")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty makeItemProperty;

	[Token(Token = "0x40004AD")]
	[FieldOffset(Offset = "0xA0")]
	internal static readonly DataBindingProperty bindItemProperty;

	[Token(Token = "0x40004AE")]
	[FieldOffset(Offset = "0x140")]
	internal static readonly DataBindingProperty unbindItemProperty;

	[Token(Token = "0x40004AF")]
	[FieldOffset(Offset = "0x1E0")]
	internal static readonly DataBindingProperty destroyItemProperty;

	[Token(Token = "0x40004B0")]
	[FieldOffset(Offset = "0x4C8")]
	private Func<VisualElement> m_MakeItem;

	[Token(Token = "0x40004B1")]
	[FieldOffset(Offset = "0x4D0")]
	private Action<VisualElement, int> m_BindItem;

	[Token(Token = "0x40004B2")]
	[FieldOffset(Offset = "0x4D8")]
	private Action<VisualElement, int> m_UnbindItem;

	[Token(Token = "0x40004B3")]
	[FieldOffset(Offset = "0x4E0")]
	private Action<VisualElement> m_DestroyItem;

	[Token(Token = "0x17000153")]
	[CreateProperty]
	public Func<VisualElement> makeItem
	{
		[Token(Token = "0x6000783")]
		[Address(RVA = "0x4CDA6E0", Offset = "0x4CDA6E0", VA = "0x4CDA6E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000784")]
		[Address(RVA = "0x4CDA6F0", Offset = "0x4CDA6F0", VA = "0x4CDA6F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000154")]
	[CreateProperty]
	public Action<VisualElement, int> bindItem
	{
		[Token(Token = "0x6000785")]
		[Address(RVA = "0x4CDA7B0", Offset = "0x4CDA7B0", VA = "0x4CDA7B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000786")]
		[Address(RVA = "0x4CDA7C0", Offset = "0x4CDA7C0", VA = "0x4CDA7C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000155")]
	[CreateProperty]
	public Action<VisualElement, int> unbindItem
	{
		[Token(Token = "0x6000787")]
		[Address(RVA = "0x4CDA870", Offset = "0x4CDA870", VA = "0x4CDA870")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000788")]
		[Address(RVA = "0x4CDA880", Offset = "0x4CDA880", VA = "0x4CDA880")]
		set
		{
		}
	}

	[Token(Token = "0x17000156")]
	[CreateProperty]
	public Action<VisualElement> destroyItem
	{
		[Token(Token = "0x6000789")]
		[Address(RVA = "0x4CDA920", Offset = "0x4CDA920", VA = "0x4CDA920")]
		get
		{
			return null;
		}
		[Token(Token = "0x600078A")]
		[Address(RVA = "0x4CDA930", Offset = "0x4CDA930", VA = "0x4CDA930")]
		set
		{
		}
	}

	[Token(Token = "0x600078B")]
	[Address(RVA = "0x4CDA9D0", Offset = "0x4CDA9D0", VA = "0x4CDA9D0", Slot = "108")]
	internal override bool HasValidDataAndBindings()
	{
		return default(bool);
	}

	[Token(Token = "0x600078C")]
	[Address(RVA = "0x4CDAA10", Offset = "0x4CDAA10", VA = "0x4CDAA10", Slot = "104")]
	protected override CollectionViewController CreateViewController()
	{
		return null;
	}

	[Token(Token = "0x600078D")]
	[Address(RVA = "0x4CDAA70", Offset = "0x4CDAA70", VA = "0x4CDAA70")]
	public TreeView()
	{
	}

	[Token(Token = "0x600078E")]
	[Address(RVA = "0x4CDAAD0", Offset = "0x4CDAAD0", VA = "0x4CDAAD0")]
	public TreeView(Func<VisualElement> makeItem, Action<VisualElement, int> bindItem)
	{
	}
}
