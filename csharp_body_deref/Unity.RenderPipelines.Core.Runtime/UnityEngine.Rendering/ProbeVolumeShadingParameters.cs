using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000131")]
public struct ProbeVolumeShadingParameters
{
	[Token(Token = "0x400051A")]
	[FieldOffset(Offset = "0x0")]
	public float normalBias;

	[Token(Token = "0x400051B")]
	[FieldOffset(Offset = "0x4")]
	public float viewBias;

	[Token(Token = "0x400051C")]
	[FieldOffset(Offset = "0x8")]
	public bool scaleBiasByMinDistanceBetweenProbes;

	[Token(Token = "0x400051D")]
	[FieldOffset(Offset = "0xC")]
	public float samplingNoise;

	[Token(Token = "0x400051E")]
	[FieldOffset(Offset = "0x10")]
	public float weight;

	[Token(Token = "0x400051F")]
	[FieldOffset(Offset = "0x14")]
	public APVLeakReductionMode leakReductionMode;

	[Token(Token = "0x4000520")]
	[FieldOffset(Offset = "0x18")]
	public float occlusionWeightContribution;

	[Token(Token = "0x4000521")]
	[FieldOffset(Offset = "0x1C")]
	public float minValidNormalWeight;

	[Token(Token = "0x4000522")]
	[FieldOffset(Offset = "0x20")]
	public int frameIndexForNoise;

	[Token(Token = "0x4000523")]
	[FieldOffset(Offset = "0x24")]
	public float reflNormalizationLowerClamp;

	[Token(Token = "0x4000524")]
	[FieldOffset(Offset = "0x28")]
	public float reflNormalizationUpperClamp;
}
