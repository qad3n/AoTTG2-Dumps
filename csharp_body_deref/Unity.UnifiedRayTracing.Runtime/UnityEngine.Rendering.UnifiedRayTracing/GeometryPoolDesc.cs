// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.GeometryPoolDesc
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x200002A")]
internal struct GeometryPoolDesc
{
	[Token(Token = "0x4000108")]
	[FieldOffset(Offset = "0x0")]
	public int vertexPoolByteSize;

	[Token(Token = "0x4000109")]
	[FieldOffset(Offset = "0x4")]
	public int indexPoolByteSize;

	[Token(Token = "0x400010A")]
	[FieldOffset(Offset = "0x8")]
	public int meshChunkTablesByteSize;

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x2D8B380", Offset = "0x2D89980", VA = "0x182D8B380")]
	public static GeometryPoolDesc NewDefault()
	{
		return default(GeometryPoolDesc);
	}
}
