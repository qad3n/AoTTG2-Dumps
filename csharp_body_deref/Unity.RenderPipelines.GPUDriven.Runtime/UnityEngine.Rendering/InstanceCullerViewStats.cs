// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceCullerViewStats
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000025")]
internal struct InstanceCullerViewStats
{
	[Token(Token = "0x4000069")]
	[FieldOffset(Offset = "0x0")]
	public BatchCullingViewType viewType;

	[Token(Token = "0x400006A")]
	[FieldOffset(Offset = "0x4")]
	public int viewInstanceID;

	[Token(Token = "0x400006B")]
	[FieldOffset(Offset = "0x8")]
	public int splitIndex;

	[Token(Token = "0x400006C")]
	[FieldOffset(Offset = "0xC")]
	public int visibleInstancesOnCPU;

	[Token(Token = "0x400006D")]
	[FieldOffset(Offset = "0x10")]
	public int visibleInstancesOnGPU;

	[Token(Token = "0x400006E")]
	[FieldOffset(Offset = "0x14")]
	public int visiblePrimitivesOnCPU;

	[Token(Token = "0x400006F")]
	[FieldOffset(Offset = "0x18")]
	public int visiblePrimitivesOnGPU;

	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0x1C")]
	public int drawCommands;
}
