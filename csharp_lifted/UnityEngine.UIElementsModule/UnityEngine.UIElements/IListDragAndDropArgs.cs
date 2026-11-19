// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IListDragAndDropArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000190")]
internal interface IListDragAndDropArgs
{
	[Token(Token = "0x1700021D")]
	int insertAtIndex
	{
		[Token(Token = "0x6000B3E")]
		get;
	}

	[Token(Token = "0x1700021E")]
	int parentId
	{
		[Token(Token = "0x6000B3F")]
		get;
	}

	[Token(Token = "0x1700021F")]
	int childIndex
	{
		[Token(Token = "0x6000B40")]
		get;
	}

	[Token(Token = "0x17000220")]
	DragAndDropData dragAndDropData
	{
		[Token(Token = "0x6000B41")]
		get;
	}

	[Token(Token = "0x17000221")]
	DragAndDropPosition dragAndDropPosition
	{
		[Token(Token = "0x6000B42")]
		get;
	}
}
