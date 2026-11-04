// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DebugOccluderStats
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000028")]
internal struct DebugOccluderStats
{
	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0x0")]
	public int viewInstanceID;

	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x4")]
	public int subviewCount;

	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x8")]
	public Vector2Int occluderMipLayoutSize;
}
