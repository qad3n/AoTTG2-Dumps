// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchCullingOutputDrawCommands
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000316")]
public struct BatchCullingOutputDrawCommands
{
	[Token(Token = "0x40009AE")]
	[FieldOffset(Offset = "0x0")]
	public unsafe BatchDrawCommand* drawCommands;

	[Token(Token = "0x40009AF")]
	[FieldOffset(Offset = "0x8")]
	public unsafe int* visibleInstances;

	[Token(Token = "0x40009B0")]
	[FieldOffset(Offset = "0x10")]
	public unsafe BatchDrawRange* drawRanges;

	[Token(Token = "0x40009B1")]
	[FieldOffset(Offset = "0x18")]
	public unsafe float* instanceSortingPositions;

	[Token(Token = "0x40009B2")]
	[FieldOffset(Offset = "0x20")]
	public unsafe int* drawCommandPickingInstanceIDs;

	[Token(Token = "0x40009B3")]
	[FieldOffset(Offset = "0x28")]
	public int drawCommandCount;

	[Token(Token = "0x40009B4")]
	[FieldOffset(Offset = "0x2C")]
	public int visibleInstanceCount;

	[Token(Token = "0x40009B5")]
	[FieldOffset(Offset = "0x30")]
	public int drawRangeCount;

	[Token(Token = "0x40009B6")]
	[FieldOffset(Offset = "0x34")]
	public int instanceSortingPositionFloatCount;
}
