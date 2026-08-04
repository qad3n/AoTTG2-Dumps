// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ShaderVariablesProbeVolumes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000154")]
[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@15.0.7\\Runtime\\Lighting\\ProbeVolume\\ShaderVariablesProbeVolumes.cs", needAccessors = false, generateCBuffer = true, constantRegister = 6)]
internal struct ShaderVariablesProbeVolumes
{
	[Token(Token = "0x40005D6")]
	[FieldOffset(Offset = "0x0")]
	public Vector4 _PoolDim_CellInMeters;

	[Token(Token = "0x40005D7")]
	[FieldOffset(Offset = "0x10")]
	public Vector4 _RcpPoolDim_Padding;

	[Token(Token = "0x40005D8")]
	[FieldOffset(Offset = "0x20")]
	public Vector4 _MinEntryPos_Noise;

	[Token(Token = "0x40005D9")]
	[FieldOffset(Offset = "0x30")]
	public Vector4 _IndicesDim_IndexChunkSize;

	[Token(Token = "0x40005DA")]
	[FieldOffset(Offset = "0x40")]
	public Vector4 _Biases_CellInMinBrick_MinBrickSize;

	[Token(Token = "0x40005DB")]
	[FieldOffset(Offset = "0x50")]
	public Vector4 _LeakReductionParams;

	[Token(Token = "0x40005DC")]
	[FieldOffset(Offset = "0x60")]
	public Vector4 _Weight_MinLoadedCellInEntries;

	[Token(Token = "0x40005DD")]
	[FieldOffset(Offset = "0x70")]
	public Vector4 _MaxLoadedCellInEntries_FrameIndex;

	[Token(Token = "0x40005DE")]
	[FieldOffset(Offset = "0x80")]
	public Vector4 _NormalizationClamp_IndirectionEntryDim_Padding;
}
