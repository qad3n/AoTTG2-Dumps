using System;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000BE")]
public class ListView : BaseListView
{
	[Token(Token = "0x20000BF")]
	public new class UxmlFactory : UxmlFactory<ListView, UxmlTraits>
	{
		[Token(Token = "0x6000543")]
		[Address(RVA = "0x4C21BB0", Offset = "0x4C21BB0", VA = "0x4C21BB0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000C0")]
	public new class UxmlTraits : BaseListView.UxmlTraits
	{
		[Token(Token = "0x6000544")]
		[Address(RVA = "0x4C21BF0", Offset = "0x4C21BF0", VA = "0x4C21BF0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000308")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty makeItemProperty;

	[Token(Token = "0x4000309")]
	[FieldOffset(Offset = "0xA0")]
	internal static readonly DataBindingProperty bindItemProperty;

	[Token(Token = "0x400030A")]
	[FieldOffset(Offset = "0x140")]
	internal static readonly DataBindingProperty unbindItemProperty;

	[Token(Token = "0x400030B")]
	[FieldOffset(Offset = "0x1E0")]
	internal static readonly DataBindingProperty destroyItemProperty;

	[Token(Token = "0x400030C")]
	[FieldOffset(Offset = "0x548")]
	private Func<VisualElement> m_MakeItem;

	[Token(Token = "0x400030D")]
	[FieldOffset(Offset = "0x550")]
	private Action<VisualElement, int> m_BindItem;

	[Token(Token = "0x400030E")]
	[FieldOffset(Offset = "0x558")]
	private Action<VisualElement, int> m_UnbindItem;

	[Token(Token = "0x400030F")]
	[FieldOffset(Offset = "0x560")]
	private Action<VisualElement> m_DestroyItem;

	[Token(Token = "0x170000D6")]
	[CreateProperty]
	public Func<VisualElement> makeItem
	{
		[Token(Token = "0x6000537")]
		[Address(RVA = "0x4C215D0", Offset = "0x4C215D0", VA = "0x4C215D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000538")]
		[Address(RVA = "0x4C215E0", Offset = "0x4C215E0", VA = "0x4C215E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D7")]
	[CreateProperty]
	public Action<VisualElement, int> bindItem
	{
		[Token(Token = "0x6000539")]
		[Address(RVA = "0x4C216A0", Offset = "0x4C216A0", VA = "0x4C216A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600053A")]
		[Address(RVA = "0x4C216B0", Offset = "0x4C216B0", VA = "0x4C216B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D8")]
	[CreateProperty]
	public Action<VisualElement, int> unbindItem
	{
		[Token(Token = "0x600053B")]
		[Address(RVA = "0x4C21760", Offset = "0x4C21760", VA = "0x4C21760")]
		get
		{
			return null;
		}
		[Token(Token = "0x600053C")]
		[Address(RVA = "0x4C21770", Offset = "0x4C21770", VA = "0x4C21770")]
		set
		{
		}
	}

	[Token(Token = "0x170000D9")]
	[CreateProperty]
	public Action<VisualElement> destroyItem
	{
		[Token(Token = "0x600053D")]
		[Address(RVA = "0x4C21810", Offset = "0x4C21810", VA = "0x4C21810")]
		get
		{
			return null;
		}
		[Token(Token = "0x600053E")]
		[Address(RVA = "0x4C21820", Offset = "0x4C21820", VA = "0x4C21820")]
		set
		{
		}
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x4C218C0", Offset = "0x4C218C0", VA = "0x4C218C0", Slot = "108")]
	internal override bool HasValidDataAndBindings()
	{
		return default(bool);
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x4C21900", Offset = "0x4C21900", VA = "0x4C21900", Slot = "104")]
	protected override CollectionViewController CreateViewController()
	{
		return null;
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x4C21940", Offset = "0x4C21940", VA = "0x4C21940")]
	public ListView()
	{
	}
}
