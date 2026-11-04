// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x2000184")]
internal class ScreenSpaceAmbientOcclusionSettings
{
	[Token(Token = "0x2000185")]
	internal enum DepthSource
	{
		[Token(Token = "0x40008BC")]
		Depth,
		[Token(Token = "0x40008BD")]
		DepthNormals
	}

	[Token(Token = "0x2000186")]
	internal enum NormalQuality
	{
		[Token(Token = "0x40008BF")]
		Low,
		[Token(Token = "0x40008C0")]
		Medium,
		[Token(Token = "0x40008C1")]
		High
	}

	[Token(Token = "0x2000187")]
	internal enum AOSampleOption
	{
		[Token(Token = "0x40008C3")]
		High,
		[Token(Token = "0x40008C4")]
		Medium,
		[Token(Token = "0x40008C5")]
		Low
	}

	[Token(Token = "0x2000188")]
	internal enum AOMethodOptions
	{
		[Token(Token = "0x40008C7")]
		BlueNoise,
		[Token(Token = "0x40008C8")]
		InterleavedGradient
	}

	[Token(Token = "0x2000189")]
	internal enum BlurQualityOptions
	{
		[Token(Token = "0x40008CA")]
		High,
		[Token(Token = "0x40008CB")]
		Medium,
		[Token(Token = "0x40008CC")]
		Low
	}

	[Token(Token = "0x40008AF")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	internal AOMethodOptions AOMethod;

	[Token(Token = "0x40008B0")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	internal bool Downsample;

	[Token(Token = "0x40008B1")]
	[FieldOffset(Offset = "0x15")]
	[SerializeField]
	internal bool AfterOpaque;

	[Token(Token = "0x40008B2")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	internal DepthSource Source;

	[Token(Token = "0x40008B3")]
	[FieldOffset(Offset = "0x1C")]
	[SerializeField]
	internal NormalQuality NormalSamples;

	[Token(Token = "0x40008B4")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	internal float Intensity;

	[Token(Token = "0x40008B5")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	internal float DirectLightingStrength;

	[Token(Token = "0x40008B6")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	internal float Radius;

	[Token(Token = "0x40008B7")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	internal AOSampleOption Samples;

	[Token(Token = "0x40008B8")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	internal BlurQualityOptions BlurQuality;

	[Token(Token = "0x40008B9")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	internal float Falloff;

	[Token(Token = "0x40008BA")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	internal int SampleCount;

	[Token(Token = "0x600088A")]
	[Address(RVA = "0x2C83510", Offset = "0x2C81B10", VA = "0x182C83510")]
	public ScreenSpaceAmbientOcclusionSettings()
	{
	}
}
