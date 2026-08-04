// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.RectangularVertexClipper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x2000010")]
internal class RectangularVertexClipper
{
	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x10")]
	private readonly Vector3[] m_WorldCorners;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x18")]
	private readonly Vector3[] m_CanvasCorners;

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x4EF3430", Offset = "0x4EF3430", VA = "0x4EF3430")]
	public Rect GetCanvasRect(RectTransform t, Canvas c)
	{
		return default(Rect);
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x4EF3640", Offset = "0x4EF3640", VA = "0x4EF3640")]
	public RectangularVertexClipper()
	{
	}
}
