using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000028")]
public class ListViewController : BaseListViewController
{
	[Token(Token = "0x17000028")]
	protected ListView listView
	{
		[Token(Token = "0x6000125")]
		[Address(RVA = "0x4BF3DC0", Offset = "0x4BF3DC0", VA = "0x4BF3DC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x4BF3E20", Offset = "0x4BF3E20", VA = "0x4BF3E20", Slot = "18")]
	protected override VisualElement MakeItem()
	{
		return null;
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x4BF3F70", Offset = "0x4BF3F70", VA = "0x4BF3F70", Slot = "19")]
	protected override void BindItem(VisualElement element, int index)
	{
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x4BF4270", Offset = "0x4BF4270", VA = "0x4BF4270", Slot = "20")]
	protected override void UnbindItem(VisualElement element, int index)
	{
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x4BF4300", Offset = "0x4BF4300", VA = "0x4BF4300", Slot = "21")]
	protected override void DestroyItem(VisualElement element)
	{
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x4BF4390", Offset = "0x4BF4390", VA = "0x4BF4390")]
	public ListViewController()
	{
	}
}
