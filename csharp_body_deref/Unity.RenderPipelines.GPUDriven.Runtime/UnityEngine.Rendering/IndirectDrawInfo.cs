// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IndirectDrawInfo
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000A7")]
[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@6c7e6aba313a\\Runtime\\GPUDriven\\InstanceOcclusionCuller.cs", needAccessors = false)]
internal struct IndirectDrawInfo
{
	[Token(Token = "0x400031B")]
	[FieldOffset(Offset = "0x0")]
	public uint indexCount;

	[Token(Token = "0x400031C")]
	[FieldOffset(Offset = "0x4")]
	public uint firstIndex;

	[Token(Token = "0x400031D")]
	[FieldOffset(Offset = "0x8")]
	public uint baseVertex;

	[Token(Token = "0x400031E")]
	[FieldOffset(Offset = "0xC")]
	public uint firstInstanceGlobalIndex;

	[Token(Token = "0x400031F")]
	[FieldOffset(Offset = "0x10")]
	public uint maxInstanceCountAndTopology;
}
