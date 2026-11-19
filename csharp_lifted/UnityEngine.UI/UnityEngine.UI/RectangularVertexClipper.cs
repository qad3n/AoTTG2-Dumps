// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.RectangularVertexClipper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x200000E")]
internal class RectangularVertexClipper
{
	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x10")]
	private readonly Vector3[] m_WorldCorners;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x18")]
	private readonly Vector3[] m_CanvasCorners;

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x6A60790", Offset = "0x6A5F790", VA = "0x6A60790")]
	public Rect GetCanvasRect(RectTransform t, Canvas c)
	{
		return default(Rect);
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x6A609A0", Offset = "0x6A5F9A0", VA = "0x6A609A0")]
	public RectangularVertexClipper()
	{
	}
}
