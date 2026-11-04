// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeSamplingDebugData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200011A")]
internal class ProbeSamplingDebugData
{
	[Token(Token = "0x40004F9")]
	[FieldOffset(Offset = "0x10")]
	public ProbeSamplingDebugUpdate update;

	[Token(Token = "0x40004FA")]
	[FieldOffset(Offset = "0x14")]
	public Vector2 coordinates;

	[Token(Token = "0x40004FB")]
	[FieldOffset(Offset = "0x1C")]
	public bool forceScreenCenterCoordinates;

	[Token(Token = "0x40004FC")]
	[FieldOffset(Offset = "0x20")]
	public Camera camera;

	[Token(Token = "0x40004FD")]
	[FieldOffset(Offset = "0x28")]
	public bool shortcutPressed;

	[Token(Token = "0x40004FE")]
	[FieldOffset(Offset = "0x30")]
	public GraphicsBuffer positionNormalBuffer;

	[Token(Token = "0x6000A43")]
	[Address(RVA = "0x2B13980", Offset = "0x2B11F80", VA = "0x182B13980")]
	public ProbeSamplingDebugData()
	{
	}
}
