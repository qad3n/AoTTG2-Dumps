// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.TerrainDesc
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x2000025")]
internal struct TerrainDesc
{
	[Token(Token = "0x40000EE")]
	[FieldOffset(Offset = "0x0")]
	public Terrain terrain;

	[Token(Token = "0x40000EF")]
	[FieldOffset(Offset = "0x8")]
	public Matrix4x4 localToWorldMatrix;

	[Token(Token = "0x40000F0")]
	[FieldOffset(Offset = "0x48")]
	public uint mask;

	[Token(Token = "0x40000F1")]
	[FieldOffset(Offset = "0x4C")]
	public uint renderingLayerMask;

	[Token(Token = "0x40000F2")]
	[FieldOffset(Offset = "0x50")]
	public uint materialID;

	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0x54")]
	public bool enableTriangleCulling;

	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0x55")]
	public bool frontTriangleCounterClockwise;

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x2D94620", Offset = "0x2D92C20", VA = "0x182D94620")]
	public TerrainDesc(Terrain terrain)
	{
	}
}
