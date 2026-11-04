// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ShaderVariablesProbeVolumes
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Mathematics;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000149")]
[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@6c7e6aba313a\\Runtime\\Lighting\\ProbeVolume\\ShaderVariablesProbeVolumes.cs", needAccessors = false, generateCBuffer = true, constantRegister = 6)]
internal struct ShaderVariablesProbeVolumes
{
	[Token(Token = "0x4000635")]
	[FieldOffset(Offset = "0x0")]
	public Vector4 _Offset_LayerCount;

	[Token(Token = "0x4000636")]
	[FieldOffset(Offset = "0x10")]
	public Vector4 _MinLoadedCellInEntries_IndirectionEntryDim;

	[Token(Token = "0x4000637")]
	[FieldOffset(Offset = "0x20")]
	public Vector4 _MaxLoadedCellInEntries_RcpIndirectionEntryDim;

	[Token(Token = "0x4000638")]
	[FieldOffset(Offset = "0x30")]
	public Vector4 _PoolDim_MinBrickSize;

	[Token(Token = "0x4000639")]
	[FieldOffset(Offset = "0x40")]
	public Vector4 _RcpPoolDim_XY;

	[Token(Token = "0x400063A")]
	[FieldOffset(Offset = "0x50")]
	public Vector4 _MinEntryPos_Noise;

	[Token(Token = "0x400063B")]
	[FieldOffset(Offset = "0x60")]
	public uint4 _EntryCount_X_XY_LeakReduction;

	[Token(Token = "0x400063C")]
	[FieldOffset(Offset = "0x70")]
	public Vector4 _Biases_NormalizationClamp;

	[Token(Token = "0x400063D")]
	[FieldOffset(Offset = "0x80")]
	public Vector4 _FrameIndex_Weights;

	[Token(Token = "0x400063E")]
	[FieldOffset(Offset = "0x90")]
	public uint4 _ProbeVolumeLayerMask;
}
