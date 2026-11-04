// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RadeonRays.MeshBuildMemoryRequirements
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RadeonRays;

[Token(Token = "0x2000010")]
internal struct MeshBuildMemoryRequirements
{
	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x0")]
	public ulong buildScratchSizeInDwords;

	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x8")]
	public ulong bvhSizeInDwords;

	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0x10")]
	public ulong bvhLeavesSizeInDwords;
}
