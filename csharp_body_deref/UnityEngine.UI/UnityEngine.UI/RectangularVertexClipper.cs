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
	[Address(RVA = "0x4BCBB00", Offset = "0x4BCBB00", VA = "0x4BCBB00")]
	public Rect GetCanvasRect(RectTransform t, Canvas c)
	{
		return default(Rect);
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x4BCBD10", Offset = "0x4BCBD10", VA = "0x4BCBD10")]
	public RectangularVertexClipper()
	{
	}
}
