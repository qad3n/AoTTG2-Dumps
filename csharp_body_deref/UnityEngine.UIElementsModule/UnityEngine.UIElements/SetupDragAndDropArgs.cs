// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.SetupDragAndDropArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000151")]
internal readonly struct SetupDragAndDropArgs
{
	[Token(Token = "0x40005DD")]
	[FieldOffset(Offset = "0x0")]
	public readonly VisualElement draggedElement;

	[Token(Token = "0x40005DE")]
	[FieldOffset(Offset = "0x8")]
	public readonly IEnumerable<int> selectedIds;

	[Token(Token = "0x40005DF")]
	[FieldOffset(Offset = "0x10")]
	public readonly StartDragArgs startDragArgs;

	[Token(Token = "0x6000962")]
	[Address(RVA = "0x501DB70", Offset = "0x501DB70", VA = "0x501DB70")]
	internal SetupDragAndDropArgs(VisualElement draggedElement, IEnumerable<int> selectedIds, StartDragArgs startDragArgs)
	{
	}
}
