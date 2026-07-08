using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200014B")]
internal interface IListDragAndDropArgs
{
	[Token(Token = "0x1700019F")]
	int insertAtIndex
	{
		[Token(Token = "0x600094A")]
		get;
	}

	[Token(Token = "0x170001A0")]
	int parentId
	{
		[Token(Token = "0x600094B")]
		get;
	}

	[Token(Token = "0x170001A1")]
	int childIndex
	{
		[Token(Token = "0x600094C")]
		get;
	}

	[Token(Token = "0x170001A2")]
	DragAndDropData dragAndDropData
	{
		[Token(Token = "0x600094D")]
		get;
	}

	[Token(Token = "0x170001A3")]
	DragAndDropPosition dragAndDropPosition
	{
		[Token(Token = "0x600094E")]
		get;
	}
}
