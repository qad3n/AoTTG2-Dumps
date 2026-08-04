// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IListDragAndDropArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
