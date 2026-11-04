// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchCullingOutputDrawCommands
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200037D")]
public struct BatchCullingOutputDrawCommands
{
	[Token(Token = "0x4000A5A")]
	[FieldOffset(Offset = "0x0")]
	public unsafe BatchDrawCommand* drawCommands;

	[Token(Token = "0x4000A5B")]
	[FieldOffset(Offset = "0x8")]
	public unsafe BatchDrawCommandIndirect* indirectDrawCommands;

	[Token(Token = "0x4000A5C")]
	[FieldOffset(Offset = "0x10")]
	public unsafe BatchDrawCommandProcedural* proceduralDrawCommands;

	[Token(Token = "0x4000A5D")]
	[FieldOffset(Offset = "0x18")]
	public unsafe BatchDrawCommandProceduralIndirect* proceduralIndirectDrawCommands;

	[Token(Token = "0x4000A5E")]
	[FieldOffset(Offset = "0x20")]
	public unsafe int* visibleInstances;

	[Token(Token = "0x4000A5F")]
	[FieldOffset(Offset = "0x28")]
	public unsafe BatchDrawRange* drawRanges;

	[Token(Token = "0x4000A60")]
	[FieldOffset(Offset = "0x30")]
	public unsafe float* instanceSortingPositions;

	[Token(Token = "0x4000A61")]
	[FieldOffset(Offset = "0x38")]
	public unsafe EntityId* drawCommandPickingEntityIds;

	[Token(Token = "0x4000A62")]
	[FieldOffset(Offset = "0x40")]
	public int drawCommandCount;

	[Token(Token = "0x4000A63")]
	[FieldOffset(Offset = "0x44")]
	public int indirectDrawCommandCount;

	[Token(Token = "0x4000A64")]
	[FieldOffset(Offset = "0x48")]
	public int proceduralDrawCommandCount;

	[Token(Token = "0x4000A65")]
	[FieldOffset(Offset = "0x4C")]
	public int proceduralIndirectDrawCommandCount;

	[Token(Token = "0x4000A66")]
	[FieldOffset(Offset = "0x50")]
	public int visibleInstanceCount;

	[Token(Token = "0x4000A67")]
	[FieldOffset(Offset = "0x54")]
	public int drawRangeCount;

	[Token(Token = "0x4000A68")]
	[FieldOffset(Offset = "0x58")]
	public int instanceSortingPositionFloatCount;
}
