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
	[Address(RVA = "0x4CF6210", Offset = "0x4CF6210", VA = "0x4CF6210")]
	internal CanStartDragArgs(VisualElement draggedElement, int id, IEnumerable<int> selectedIds)
	{
	}
}
