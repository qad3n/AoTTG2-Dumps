// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RadeonRays.RadeonRaysShaders
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RadeonRays;

[Token(Token = "0x200001B")]
internal sealed class RadeonRaysShaders
{
	[Token(Token = "0x4000086")]
	[FieldOffset(Offset = "0x10")]
	public ComputeShader bitHistogram;

	[Token(Token = "0x4000087")]
	[FieldOffset(Offset = "0x18")]
	public ComputeShader blockReducePart;

	[Token(Token = "0x4000088")]
	[FieldOffset(Offset = "0x20")]
	public ComputeShader blockScan;

	[Token(Token = "0x4000089")]
	[FieldOffset(Offset = "0x28")]
	public ComputeShader buildHlbvh;

	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0x30")]
	public ComputeShader restructureBvh;

	[Token(Token = "0x400008B")]
	[FieldOffset(Offset = "0x38")]
	public ComputeShader scatter;

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public RadeonRaysShaders()
	{
	}
}
