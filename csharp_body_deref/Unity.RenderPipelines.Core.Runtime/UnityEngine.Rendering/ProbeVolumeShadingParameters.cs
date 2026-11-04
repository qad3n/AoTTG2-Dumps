// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolumeShadingParameters
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Mathematics;

namespace UnityEngine.Rendering;

[Token(Token = "0x200011F")]
internal struct ProbeVolumeShadingParameters
{
	[Token(Token = "0x400053B")]
	[FieldOffset(Offset = "0x0")]
	public float normalBias;

	[Token(Token = "0x400053C")]
	[FieldOffset(Offset = "0x4")]
	public float viewBias;

	[Token(Token = "0x400053D")]
	[FieldOffset(Offset = "0x8")]
	public bool scaleBiasByMinDistanceBetweenProbes;

	[Token(Token = "0x400053E")]
	[FieldOffset(Offset = "0xC")]
	public float samplingNoise;

	[Token(Token = "0x400053F")]
	[FieldOffset(Offset = "0x10")]
	public float weight;

	[Token(Token = "0x4000540")]
	[FieldOffset(Offset = "0x14")]
	public APVLeakReductionMode leakReductionMode;

	[Token(Token = "0x4000541")]
	[FieldOffset(Offset = "0x18")]
	public int frameIndexForNoise;

	[Token(Token = "0x4000542")]
	[FieldOffset(Offset = "0x1C")]
	public float reflNormalizationLowerClamp;

	[Token(Token = "0x4000543")]
	[FieldOffset(Offset = "0x20")]
	public float reflNormalizationUpperClamp;

	[Token(Token = "0x4000544")]
	[FieldOffset(Offset = "0x24")]
	public float skyOcclusionIntensity;

	[Token(Token = "0x4000545")]
	[FieldOffset(Offset = "0x28")]
	public bool skyOcclusionShadingDirection;

	[Token(Token = "0x4000546")]
	[FieldOffset(Offset = "0x2C")]
	public int regionCount;

	[Token(Token = "0x4000547")]
	[FieldOffset(Offset = "0x30")]
	public uint4 regionLayerMasks;

	[Token(Token = "0x4000548")]
	[FieldOffset(Offset = "0x40")]
	public Vector3 worldOffset;
}
