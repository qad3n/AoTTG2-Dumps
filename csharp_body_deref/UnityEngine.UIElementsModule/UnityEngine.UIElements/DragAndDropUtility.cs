using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000144")]
internal static class DragAndDropUtility
{
	[Token(Token = "0x40005BC")]
	[FieldOffset(Offset = "0x0")]
	private static Func<IDragAndDrop> s_MakeDragAndDropClientFunc;

	[Token(Token = "0x40005BD")]
	[FieldOffset(Offset = "0x8")]
	private static IDragAndDrop s_DragAndDropEditor;

	[Token(Token = "0x40005BE")]
	[FieldOffset(Offset = "0x10")]
	private static IDragAndDrop s_DragAndDropPlayMode;

	[Token(Token = "0x6000922")]
	[Address(RVA = "0x4CF3E80", Offset = "0x4CF3E80", VA = "0x4CF3E80")]
	internal static IDragAndDrop GetDragAndDrop(IPanel panel)
	{
		return null;
	}
}
