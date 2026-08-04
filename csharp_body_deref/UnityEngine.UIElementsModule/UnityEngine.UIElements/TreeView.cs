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

[Token(Token = "0x200011B")]
public class TreeView : BaseTreeView
{
	[Token(Token = "0x200011C")]
	public new class UxmlFactory : UxmlFactory<TreeView, UxmlTraits>
	{
		[Token(Token = "0x6000790")]
		[Address(RVA = "0x5002670", Offset = "0x5002670", VA = "0x5002670")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200011D")]
	public new class UxmlTraits : BaseTreeView.UxmlTraits
	{
		[Token(Token = "0x6000791")]
		[Address(RVA = "0x50026B0", Offset = "0x50026B0", VA = "0x50026B0")]
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
		[Address(RVA = "0x5002010", Offset = "0x5002010", VA = "0x5002010")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000784")]
		[Address(RVA = "0x5002020", Offset = "0x5002020", VA = "0x5002020")]
		set
		{
		}
	}

	[Token(Token = "0x17000154")]
	[CreateProperty]
	public Action<VisualElement, int> bindItem
	{
		[Token(Token = "0x6000785")]
		[Address(RVA = "0x50020E0", Offset = "0x50020E0", VA = "0x50020E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000786")]
		[Address(RVA = "0x50020F0", Offset = "0x50020F0", VA = "0x50020F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000155")]
	[CreateProperty]
	public Action<VisualElement, int> unbindItem
	{
		[Token(Token = "0x6000787")]
		[Address(RVA = "0x50021A0", Offset = "0x50021A0", VA = "0x50021A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000788")]
		[Address(RVA = "0x50021B0", Offset = "0x50021B0", VA = "0x50021B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000156")]
	[CreateProperty]
	public Action<VisualElement> destroyItem
	{
		[Token(Token = "0x6000789")]
		[Address(RVA = "0x5002250", Offset = "0x5002250", VA = "0x5002250")]
		get
		{
			return null;
		}
		[Token(Token = "0x600078A")]
		[Address(RVA = "0x5002260", Offset = "0x5002260", VA = "0x5002260")]
		set
		{
		}
	}

	[Token(Token = "0x600078B")]
	[Address(RVA = "0x5002300", Offset = "0x5002300", VA = "0x5002300", Slot = "108")]
	internal override bool HasValidDataAndBindings()
	{
		return default(bool);
	}

	[Token(Token = "0x600078C")]
	[Address(RVA = "0x5002340", Offset = "0x5002340", VA = "0x5002340", Slot = "104")]
	protected override CollectionViewController CreateViewController()
	{
		return null;
	}

	[Token(Token = "0x600078D")]
	[Address(RVA = "0x50023A0", Offset = "0x50023A0", VA = "0x50023A0")]
	public TreeView()
	{
	}

	[Token(Token = "0x600078E")]
	[Address(RVA = "0x5002400", Offset = "0x5002400", VA = "0x5002400")]
	public TreeView(Func<VisualElement> makeItem, Action<VisualElement, int> bindItem)
	{
	}
}
