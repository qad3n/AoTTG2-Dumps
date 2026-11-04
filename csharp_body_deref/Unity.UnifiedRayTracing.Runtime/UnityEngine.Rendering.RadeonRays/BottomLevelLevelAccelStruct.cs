// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RadeonRays.BottomLevelLevelAccelStruct
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RadeonRays;

[Token(Token = "0x2000008")]
internal struct BottomLevelLevelAccelStruct
{
	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x0")]
	public GraphicsBuffer bvh;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x8")]
	public uint bvhOffset;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x10")]
	public GraphicsBuffer bvhLeaves;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x18")]
	public uint bvhLeavesOffset;
}
