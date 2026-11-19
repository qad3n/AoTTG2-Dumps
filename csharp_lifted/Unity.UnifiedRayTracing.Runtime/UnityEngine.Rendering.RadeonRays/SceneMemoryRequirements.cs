// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RadeonRays.SceneMemoryRequirements
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RadeonRays;

[Token(Token = "0x2000012")]
internal class SceneMemoryRequirements
{
	[Token(Token = "0x4000050")]
	[FieldOffset(Offset = "0x10")]
	public ulong buildScratchSizeInDwords;

	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0x18")]
	public ulong[] bottomLevelBvhSizeInNodes;

	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x20")]
	public uint[] bottomLevelBvhOffsetInNodes;

	[Token(Token = "0x4000053")]
	[FieldOffset(Offset = "0x28")]
	public ulong[] bottomLevelBvhLeavesSizeInNodes;

	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x30")]
	public uint[] bottomLevelBvhLeavesOffsetInNodes;

	[Token(Token = "0x4000055")]
	[FieldOffset(Offset = "0x38")]
	public ulong totalBottomLevelBvhSizeInNodes;

	[Token(Token = "0x4000056")]
	[FieldOffset(Offset = "0x40")]
	public ulong totalBottomLevelBvhLeavesSizeInNodes;

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x6778390", Offset = "0x6777390", VA = "0x6778390")]
	public SceneMemoryRequirements()
	{
	}
}
