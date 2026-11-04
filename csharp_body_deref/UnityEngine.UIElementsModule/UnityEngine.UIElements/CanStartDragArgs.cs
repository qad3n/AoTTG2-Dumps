// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.CanStartDragArgs
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000195")]
public readonly struct CanStartDragArgs
{
	[Token(Token = "0x4000706")]
	[FieldOffset(Offset = "0x0")]
	public readonly VisualElement draggedElement;

	[Token(Token = "0x4000707")]
	[FieldOffset(Offset = "0x8")]
	public readonly int id;

	[Token(Token = "0x4000708")]
	[FieldOffset(Offset = "0x10")]
	public readonly IEnumerable<int> selectedIds;

	[Token(Token = "0x4000709")]
	[FieldOffset(Offset = "0x18")]
	internal readonly EventModifiers modifiers;

	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x323EB30", Offset = "0x323D130", VA = "0x18323EB30")]
	internal CanStartDragArgs(VisualElement draggedElement, int id, IEnumerable<int> selectedIds, EventModifiers modifiers)
	{
	}
}
