// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.WorldSpaceData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000565")]
internal struct WorldSpaceData
{
	[Token(Token = "0x4001252")]
	[FieldOffset(Offset = "0x0")]
	public static readonly Bounds k_Empty3DBounds;

	[Token(Token = "0x4001253")]
	[FieldOffset(Offset = "0x0")]
	public Bounds localBounds3D;

	[Token(Token = "0x4001254")]
	[FieldOffset(Offset = "0x18")]
	public Bounds localBoundsPicking3D;

	[Token(Token = "0x4001255")]
	[FieldOffset(Offset = "0x30")]
	public Bounds localBoundsWithoutNested3D;

	[Token(Token = "0x4001256")]
	[FieldOffset(Offset = "0x48")]
	public Rect boundingBoxWithoutNested;
}
