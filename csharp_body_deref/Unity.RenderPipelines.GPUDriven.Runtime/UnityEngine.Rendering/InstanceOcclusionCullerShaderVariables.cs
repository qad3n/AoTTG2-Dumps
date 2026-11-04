// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceOcclusionCullerShaderVariables
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000B3")]
[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@6c7e6aba313a\\Runtime\\GPUDriven\\InstanceOcclusionCullerShaderVariables.cs", needAccessors = false, generateCBuffer = true)]
internal struct InstanceOcclusionCullerShaderVariables
{
	[Token(Token = "0x4000363")]
	[FieldOffset(Offset = "0x0")]
	public uint _DrawInfoAllocIndex;

	[Token(Token = "0x4000364")]
	[FieldOffset(Offset = "0x4")]
	public uint _DrawInfoCount;

	[Token(Token = "0x4000365")]
	[FieldOffset(Offset = "0x8")]
	public uint _InstanceInfoAllocIndex;

	[Token(Token = "0x4000366")]
	[FieldOffset(Offset = "0xC")]
	public uint _InstanceInfoCount;

	[Token(Token = "0x4000367")]
	[FieldOffset(Offset = "0x10")]
	public int _BoundingSphereInstanceDataAddress;

	[Token(Token = "0x4000368")]
	[FieldOffset(Offset = "0x14")]
	public int _DebugCounterIndex;

	[Token(Token = "0x4000369")]
	[FieldOffset(Offset = "0x18")]
	public int _InstanceMultiplierShift;

	[Token(Token = "0x400036A")]
	[FieldOffset(Offset = "0x1C")]
	public int _InstanceOcclusionCullerPad0;
}
