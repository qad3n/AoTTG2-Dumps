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

[Token(Token = "0x2000196")]
public readonly struct SetupDragAndDropArgs
{
	[Token(Token = "0x400070A")]
	[FieldOffset(Offset = "0x0")]
	public readonly VisualElement draggedElement;

	[Token(Token = "0x400070B")]
	[FieldOffset(Offset = "0x8")]
	public readonly IEnumerable<int> selectedIds;

	[Token(Token = "0x400070C")]
	[FieldOffset(Offset = "0x10")]
	public readonly StartDragArgs startDragArgs;

	[Token(Token = "0x6000B57")]
	[Address(RVA = "0x3248990", Offset = "0x3246F90", VA = "0x183248990")]
	internal SetupDragAndDropArgs(VisualElement draggedElement, IEnumerable<int> selectedIds, StartDragArgs startDragArgs)
	{
	}
}
