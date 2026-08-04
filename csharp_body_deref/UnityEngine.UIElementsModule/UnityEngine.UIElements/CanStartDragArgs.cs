// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.CanStartDragArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000150")]
internal readonly struct CanStartDragArgs
{
	[Token(Token = "0x40005DA")]
	[FieldOffset(Offset = "0x0")]
	public readonly VisualElement draggedElement;

	[Token(Token = "0x40005DB")]
	[FieldOffset(Offset = "0x8")]
	public readonly int id;

	[Token(Token = "0x40005DC")]
	[FieldOffset(Offset = "0x10")]
	public readonly IEnumerable<int> selectedIds;

	[Token(Token = "0x6000961")]
	[Address(RVA = "0x501DB40", Offset = "0x501DB40", VA = "0x501DB40")]
	internal CanStartDragArgs(VisualElement draggedElement, int id, IEnumerable<int> selectedIds)
	{
	}
}
