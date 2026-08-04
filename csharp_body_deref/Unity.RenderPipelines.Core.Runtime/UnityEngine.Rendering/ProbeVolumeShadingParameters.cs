// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolumeShadingParameters
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200011D")]
public struct ProbeVolumeShadingParameters
{
	[Token(Token = "0x4000426")]
	[FieldOffset(Offset = "0x0")]
	public float normalBias;

	[Token(Token = "0x4000427")]
	[FieldOffset(Offset = "0x4")]
	public float viewBias;

	[Token(Token = "0x4000428")]
	[FieldOffset(Offset = "0x8")]
	public bool scaleBiasByMinDistanceBetweenProbes;

	[Token(Token = "0x4000429")]
	[FieldOffset(Offset = "0xC")]
	public float samplingNoise;

	[Token(Token = "0x400042A")]
	[FieldOffset(Offset = "0x10")]
	public float weight;

	[Token(Token = "0x400042B")]
	[FieldOffset(Offset = "0x14")]
	public APVLeakReductionMode leakReductionMode;

	[Token(Token = "0x400042C")]
	[FieldOffset(Offset = "0x18")]
	public float occlusionWeightContribution;

	[Token(Token = "0x400042D")]
	[FieldOffset(Offset = "0x1C")]
	public float minValidNormalWeight;

	[Token(Token = "0x400042E")]
	[FieldOffset(Offset = "0x20")]
	public int frameIndexForNoise;

	[Token(Token = "0x400042F")]
	[FieldOffset(Offset = "0x24")]
	public float reflNormalizationLowerClamp;

	[Token(Token = "0x4000430")]
	[FieldOffset(Offset = "0x28")]
	public float reflNormalizationUpperClamp;
}
