// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DepthOfField
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x20000FE")]
[VolumeComponentMenu("Post-processing/Depth Of Field")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
public sealed class DepthOfField : VolumeComponent, IPostProcessComponent
{
	[Token(Token = "0x40005B4")]
	[FieldOffset(Offset = "0x38")]
	[Tooltip("Use \"Gaussian\" for a faster but non physical depth of field; \"Bokeh\" for a more realistic but slower depth of field.")]
	public DepthOfFieldModeParameter mode;

	[Token(Token = "0x40005B5")]
	[FieldOffset(Offset = "0x40")]
	[Tooltip("The distance at which the blurring will start.")]
	public MinFloatParameter gaussianStart;

	[Token(Token = "0x40005B6")]
	[FieldOffset(Offset = "0x48")]
	[Tooltip("The distance at which the blurring will reach its maximum radius.")]
	public MinFloatParameter gaussianEnd;

	[Token(Token = "0x40005B7")]
	[FieldOffset(Offset = "0x50")]
	[Tooltip("The maximum radius of the gaussian blur. Values above 1 may show under-sampling artifacts.")]
	public ClampedFloatParameter gaussianMaxRadius;

	[Token(Token = "0x40005B8")]
	[FieldOffset(Offset = "0x58")]
	[Tooltip("Use higher quality sampling to reduce flickering and improve the overall blur smoothness.")]
	public BoolParameter highQualitySampling;

	[Token(Token = "0x40005B9")]
	[FieldOffset(Offset = "0x60")]
	[Tooltip("The distance to the point of focus.")]
	public MinFloatParameter focusDistance;

	[Token(Token = "0x40005BA")]
	[FieldOffset(Offset = "0x68")]
	[Tooltip("The ratio of aperture (known as f-stop or f-number). The smaller the value is, the shallower the depth of field is.")]
	public ClampedFloatParameter aperture;

	[Token(Token = "0x40005BB")]
	[FieldOffset(Offset = "0x70")]
	[Tooltip("The distance between the lens and the film. The larger the value is, the shallower the depth of field is.")]
	public ClampedFloatParameter focalLength;

	[Token(Token = "0x40005BC")]
	[FieldOffset(Offset = "0x78")]
	[Tooltip("The number of aperture blades.")]
	public ClampedIntParameter bladeCount;

	[Token(Token = "0x40005BD")]
	[FieldOffset(Offset = "0x80")]
	[Tooltip("The curvature of aperture blades. The smaller the value is, the more visible aperture blades are. A value of 1 will make the bokeh perfectly circular.")]
	public ClampedFloatParameter bladeCurvature;

	[Token(Token = "0x40005BE")]
	[FieldOffset(Offset = "0x88")]
	[Tooltip("The rotation of aperture blades in degrees.")]
	public ClampedFloatParameter bladeRotation;

	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x2C56730", Offset = "0x2C54D30", VA = "0x182C56730", Slot = "8")]
	public bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
	[Obsolete("Unused. #from(2023.1)")]
	public bool IsTileCompatible()
	{
		return default(bool);
	}

	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x2C567B0", Offset = "0x2C54DB0", VA = "0x182C567B0")]
	public DepthOfField()
	{
	}
}
