// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DragAndDropUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000189")]
internal static class DragAndDropUtility
{
	[Token(Token = "0x40006E5")]
	[FieldOffset(Offset = "0x0")]
	private static Func<IDragAndDrop> s_MakeDragAndDropClientFunc;

	[Token(Token = "0x40006E6")]
	[FieldOffset(Offset = "0x8")]
	private static IDragAndDrop s_DragAndDropEditor;

	[Token(Token = "0x40006E7")]
	[FieldOffset(Offset = "0x10")]
	private static IDragAndDrop s_DragAndDropPlayMode;

	[Token(Token = "0x6000B12")]
	[Address(RVA = "0x323FDC0", Offset = "0x323E3C0", VA = "0x18323FDC0")]
	internal static IDragAndDrop GetDragAndDrop(IPanel panel)
	{
		return null;
	}
}
