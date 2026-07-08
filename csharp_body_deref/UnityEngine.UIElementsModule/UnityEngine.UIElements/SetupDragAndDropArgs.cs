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
	[Address(RVA = "0x4CF6240", Offset = "0x4CF6240", VA = "0x4CF6240")]
	internal SetupDragAndDropArgs(VisualElement draggedElement, IEnumerable<int> selectedIds, StartDragArgs startDragArgs)
	{
	}
}
