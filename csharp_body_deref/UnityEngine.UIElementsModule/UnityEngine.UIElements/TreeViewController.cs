using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200002E")]
public abstract class TreeViewController : BaseTreeViewController
{
	[Token(Token = "0x17000031")]
	protected TreeView treeView
	{
		[Token(Token = "0x600015B")]
		[Address(RVA = "0x4BF58D0", Offset = "0x4BF58D0", VA = "0x4BF58D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x4BF5930", Offset = "0x4BF5930", VA = "0x4BF5930", Slot = "18")]
	protected override VisualElement MakeItem()
	{
		return null;
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x4BF5A80", Offset = "0x4BF5A80", VA = "0x4BF5A80", Slot = "19")]
	protected override void BindItem(VisualElement element, int index)
	{
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x4BF5C80", Offset = "0x4BF5C80", VA = "0x4BF5C80", Slot = "20")]
	protected override void UnbindItem(VisualElement element, int index)
	{
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x4BF5D10", Offset = "0x4BF5D10", VA = "0x4BF5D10", Slot = "21")]
	protected override void DestroyItem(VisualElement element)
	{
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x4BF5DA0", Offset = "0x4BF5DA0", VA = "0x4BF5DA0")]
	protected TreeViewController()
	{
	}
}
