using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200011E")]
public class ProbeSamplingDebugData
{
	[Token(Token = "0x4000424")]
	[FieldOffset(Offset = "0x10")]
	public ProbeSamplingDebugUpdate update;

	[Token(Token = "0x4000425")]
	[FieldOffset(Offset = "0x14")]
	public Vector2 coordinates;

	[Token(Token = "0x4000426")]
	[FieldOffset(Offset = "0x1C")]
	public bool forceScreenCenterCoordinates;

	[Token(Token = "0x4000427")]
	[FieldOffset(Offset = "0x20")]
	public Camera camera;

	[Token(Token = "0x4000428")]
	[FieldOffset(Offset = "0x28")]
	public bool shortcutPressed;

	[Token(Token = "0x4000429")]
	[FieldOffset(Offset = "0x30")]
	public GraphicsBuffer positionNormalBuffer;

	[Token(Token = "0x600091A")]
	[Address(RVA = "0x4893CE0", Offset = "0x4893CE0", VA = "0x4893CE0")]
	public ProbeSamplingDebugData()
	{
	}
}
