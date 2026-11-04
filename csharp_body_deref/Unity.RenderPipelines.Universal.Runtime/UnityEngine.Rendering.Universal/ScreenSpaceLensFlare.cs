// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ScreenSpaceLensFlare
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x200010C")]
[VolumeComponentMenu("Post-processing/Screen Space Lens Flare")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
[DisplayInfo(name = "Screen Space Lens Flare")]
public class ScreenSpaceLensFlare : VolumeComponent, IPostProcessComponent
{
	[Token(Token = "0x40005E8")]
	[FieldOffset(Offset = "0x38")]
	public MinFloatParameter intensity;

	[Token(Token = "0x40005E9")]
	[FieldOffset(Offset = "0x40")]
	public ColorParameter tintColor;

	[Token(Token = "0x40005EA")]
	[FieldOffset(Offset = "0x48")]
	[AdditionalProperty]
	public ClampedIntParameter bloomMip;

	[Token(Token = "0x40005EB")]
	[FieldOffset(Offset = "0x50")]
	[Header("Flares")]
	public MinFloatParameter firstFlareIntensity;

	[Token(Token = "0x40005EC")]
	[FieldOffset(Offset = "0x58")]
	public MinFloatParameter secondaryFlareIntensity;

	[Token(Token = "0x40005ED")]
	[FieldOffset(Offset = "0x60")]
	public MinFloatParameter warpedFlareIntensity;

	[Token(Token = "0x40005EE")]
	[FieldOffset(Offset = "0x68")]
	[AdditionalProperty]
	public Vector2Parameter warpedFlareScale;

	[Token(Token = "0x40005EF")]
	[FieldOffset(Offset = "0x70")]
	public ClampedIntParameter samples;

	[Token(Token = "0x40005F0")]
	[FieldOffset(Offset = "0x78")]
	[AdditionalProperty]
	public ClampedFloatParameter sampleDimmer;

	[Token(Token = "0x40005F1")]
	[FieldOffset(Offset = "0x80")]
	public ClampedFloatParameter vignetteEffect;

	[Token(Token = "0x40005F2")]
	[FieldOffset(Offset = "0x88")]
	public ClampedFloatParameter startingPosition;

	[Token(Token = "0x40005F3")]
	[FieldOffset(Offset = "0x90")]
	public ClampedFloatParameter scale;

	[Token(Token = "0x40005F4")]
	[FieldOffset(Offset = "0x98")]
	[Header("Streaks")]
	public MinFloatParameter streaksIntensity;

	[Token(Token = "0x40005F5")]
	[FieldOffset(Offset = "0xA0")]
	public ClampedFloatParameter streaksLength;

	[Token(Token = "0x40005F6")]
	[FieldOffset(Offset = "0xA8")]
	public FloatParameter streaksOrientation;

	[Token(Token = "0x40005F7")]
	[FieldOffset(Offset = "0xB0")]
	public ClampedFloatParameter streaksThreshold;

	[Token(Token = "0x40005F8")]
	[FieldOffset(Offset = "0xB8")]
	[SerializeField]
	[AdditionalProperty]
	public ScreenSpaceLensFlareResolutionParameter resolution;

	[Token(Token = "0x40005F9")]
	[FieldOffset(Offset = "0xC0")]
	[Header("Chromatic Abberation")]
	public ClampedFloatParameter chromaticAbberationIntensity;

	[Token(Token = "0x60006D0")]
	[Address(RVA = "0x2C55830", Offset = "0x2C53E30", VA = "0x182C55830", Slot = "8")]
	public bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60006D1")]
	[Address(RVA = "0x2C6D8F0", Offset = "0x2C6BEF0", VA = "0x182C6D8F0")]
	public bool IsStreaksActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60006D2")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
	[Obsolete("Unused. #from(2023.1)")]
	public bool IsTileCompatible()
	{
		return default(bool);
	}

	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x2C6D930", Offset = "0x2C6BF30", VA = "0x182C6D930")]
	public ScreenSpaceLensFlare()
	{
	}
}
