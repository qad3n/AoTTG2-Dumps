using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x2000020")]
[PostProcess(typeof(ColorGradingRenderer), "Unity/Color Grading", true)]
public sealed class ColorGrading : PostProcessEffectSettings
{
	[Token(Token = "0x4000060")]
	[FieldOffset(Offset = "0x30")]
	[DisplayName("Mode")]
	[Tooltip("Select a color grading mode that fits your dynamic range and workflow. Use HDR if your camera is set to render in HDR and your target platform supports it. Use LDR for low-end mobiles or devices that don't support HDR. Use External if you prefer authoring a Log LUT in an external software.")]
	public GradingModeParameter gradingMode;

	[Token(Token = "0x4000061")]
	[FieldOffset(Offset = "0x38")]
	[DisplayName("Lookup Texture")]
	[Tooltip("A custom 3D log-encoded texture.")]
	public TextureParameter externalLut;

	[Token(Token = "0x4000062")]
	[FieldOffset(Offset = "0x40")]
	[DisplayName("Mode")]
	[Tooltip("Select a tonemapping algorithm to use at the end of the color grading process.")]
	public TonemapperParameter tonemapper;

	[Token(Token = "0x4000063")]
	[FieldOffset(Offset = "0x48")]
	[DisplayName("Toe Strength")]
	[Range(0f, 1f)]
	[Tooltip("Affects the transition between the toe and the mid section of the curve. A value of 0 means no toe, a value of 1 means a very hard transition.")]
	public FloatParameter toneCurveToeStrength;

	[Token(Token = "0x4000064")]
	[FieldOffset(Offset = "0x50")]
	[DisplayName("Toe Length")]
	[Range(0f, 1f)]
	[Tooltip("Affects how much of the dynamic range is in the toe. With a small value, the toe will be very short and quickly transition into the linear section, with a larger value, the toe will be longer.")]
	public FloatParameter toneCurveToeLength;

	[Token(Token = "0x4000065")]
	[FieldOffset(Offset = "0x58")]
	[DisplayName("Shoulder Strength")]
	[Range(0f, 1f)]
	[Tooltip("Affects the transition between the mid section and the shoulder of the curve. A value of 0 means no shoulder, a value of 1 means a very hard transition.")]
	public FloatParameter toneCurveShoulderStrength;

	[Token(Token = "0x4000066")]
	[FieldOffset(Offset = "0x60")]
	[DisplayName("Shoulder Length")]
	[Min(0f)]
	[Tooltip("Affects how many F-stops (EV) to add to the dynamic range of the curve.")]
	public FloatParameter toneCurveShoulderLength;

	[Token(Token = "0x4000067")]
	[FieldOffset(Offset = "0x68")]
	[DisplayName("Shoulder Angle")]
	[Range(0f, 1f)]
	[Tooltip("Affects how much overshoot to add to the shoulder.")]
	public FloatParameter toneCurveShoulderAngle;

	[Token(Token = "0x4000068")]
	[FieldOffset(Offset = "0x70")]
	[DisplayName("Gamma")]
	[Min(0.001f)]
	[Tooltip("Applies a gamma function to the curve.")]
	public FloatParameter toneCurveGamma;

	[Token(Token = "0x4000069")]
	[FieldOffset(Offset = "0x78")]
	[DisplayName("Lookup Texture")]
	[Tooltip("Custom lookup texture (strip format, for example 256x16) to apply before the rest of the color grading operators. If none is provided, a neutral one will be generated internally.")]
	public TextureParameter ldrLut;

	[Token(Token = "0x400006A")]
	[FieldOffset(Offset = "0x80")]
	[DisplayName("Contribution")]
	[Range(0f, 1f)]
	[Tooltip("How much of the lookup texture will contribute to the color grading effect.")]
	public FloatParameter ldrLutContribution;

	[Token(Token = "0x400006B")]
	[FieldOffset(Offset = "0x88")]
	[DisplayName("Temperature")]
	[Range(-100f, 100f)]
	[Tooltip("Sets the white balance to a custom color temperature.")]
	public FloatParameter temperature;

	[Token(Token = "0x400006C")]
	[FieldOffset(Offset = "0x90")]
	[DisplayName("Tint")]
	[Range(-100f, 100f)]
	[Tooltip("Sets the white balance to compensate for a green or magenta tint.")]
	public FloatParameter tint;

	[Token(Token = "0x400006D")]
	[FieldOffset(Offset = "0x98")]
	[DisplayName("Color Filter")]
	[ColorUsage(false, true)]
	[Tooltip("Tint the render by multiplying a color.")]
	public ColorParameter colorFilter;

	[Token(Token = "0x400006E")]
	[FieldOffset(Offset = "0xA0")]
	[DisplayName("Hue Shift")]
	[Range(-180f, 180f)]
	[Tooltip("Shift the hue of all colors.")]
	public FloatParameter hueShift;

	[Token(Token = "0x400006F")]
	[FieldOffset(Offset = "0xA8")]
	[DisplayName("Saturation")]
	[Range(-100f, 100f)]
	[Tooltip("Pushes the intensity of all colors.")]
	public FloatParameter saturation;

	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0xB0")]
	[DisplayName("Brightness")]
	[Range(-100f, 100f)]
	[Tooltip("Makes the image brighter or darker.")]
	public FloatParameter brightness;

	[Token(Token = "0x4000071")]
	[FieldOffset(Offset = "0xB8")]
	[DisplayName("Post-exposure (EV)")]
	[Tooltip("Adjusts the overall exposure of the scene in EV units. This is applied after the HDR effect and right before tonemapping so it won't affect previous effects in the chain.")]
	public FloatParameter postExposure;

	[Token(Token = "0x4000072")]
	[FieldOffset(Offset = "0xC0")]
	[DisplayName("Contrast")]
	[Range(-100f, 100f)]
	[Tooltip("Expands or shrinks the overall range of tonal values.")]
	public FloatParameter contrast;

	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0xC8")]
	[DisplayName("Red")]
	[Range(-200f, 200f)]
	[Tooltip("Modify influence of the red channel in the overall mix.")]
	public FloatParameter mixerRedOutRedIn;

	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0xD0")]
	[DisplayName("Green")]
	[Range(-200f, 200f)]
	[Tooltip("Modify influence of the green channel in the overall mix.")]
	public FloatParameter mixerRedOutGreenIn;

	[Token(Token = "0x4000075")]
	[FieldOffset(Offset = "0xD8")]
	[DisplayName("Blue")]
	[Range(-200f, 200f)]
	[Tooltip("Modify influence of the blue channel in the overall mix.")]
	public FloatParameter mixerRedOutBlueIn;

	[Token(Token = "0x4000076")]
	[FieldOffset(Offset = "0xE0")]
	[DisplayName("Red")]
	[Range(-200f, 200f)]
	[Tooltip("Modify influence of the red channel in the overall mix.")]
	public FloatParameter mixerGreenOutRedIn;

	[Token(Token = "0x4000077")]
	[FieldOffset(Offset = "0xE8")]
	[DisplayName("Green")]
	[Range(-200f, 200f)]
	[Tooltip("Modify influence of the green channel in the overall mix.")]
	public FloatParameter mixerGreenOutGreenIn;

	[Token(Token = "0x4000078")]
	[FieldOffset(Offset = "0xF0")]
	[DisplayName("Blue")]
	[Range(-200f, 200f)]
	[Tooltip("Modify influence of the blue channel in the overall mix.")]
	public FloatParameter mixerGreenOutBlueIn;

	[Token(Token = "0x4000079")]
	[FieldOffset(Offset = "0xF8")]
	[DisplayName("Red")]
	[Range(-200f, 200f)]
	[Tooltip("Modify influence of the red channel in the overall mix.")]
	public FloatParameter mixerBlueOutRedIn;

	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0x100")]
	[DisplayName("Green")]
	[Range(-200f, 200f)]
	[Tooltip("Modify influence of the green channel in the overall mix.")]
	public FloatParameter mixerBlueOutGreenIn;

	[Token(Token = "0x400007B")]
	[FieldOffset(Offset = "0x108")]
	[DisplayName("Blue")]
	[Range(-200f, 200f)]
	[Tooltip("Modify influence of the blue channel in the overall mix.")]
	public FloatParameter mixerBlueOutBlueIn;

	[Token(Token = "0x400007C")]
	[FieldOffset(Offset = "0x110")]
	[DisplayName("Lift")]
	[Tooltip("Controls the darkest portions of the render.")]
	[Trackball(TrackballAttribute.Mode.Lift)]
	public Vector4Parameter lift;

	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0x118")]
	[DisplayName("Gamma")]
	[Tooltip("Power function that controls mid-range tones.")]
	[Trackball(TrackballAttribute.Mode.Gamma)]
	public Vector4Parameter gamma;

	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x120")]
	[DisplayName("Gain")]
	[Tooltip("Controls the lightest portions of the render.")]
	[Trackball(TrackballAttribute.Mode.Gain)]
	public Vector4Parameter gain;

	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x128")]
	public SplineParameter masterCurve;

	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0x130")]
	public SplineParameter redCurve;

	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0x138")]
	public SplineParameter greenCurve;

	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0x140")]
	public SplineParameter blueCurve;

	[Token(Token = "0x4000083")]
	[FieldOffset(Offset = "0x148")]
	public SplineParameter hueVsHueCurve;

	[Token(Token = "0x4000084")]
	[FieldOffset(Offset = "0x150")]
	public SplineParameter hueVsSatCurve;

	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x158")]
	public SplineParameter satVsSatCurve;

	[Token(Token = "0x4000086")]
	[FieldOffset(Offset = "0x160")]
	public SplineParameter lumVsSatCurve;

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x4811670", Offset = "0x4811670", VA = "0x4811670", Slot = "4")]
	public override bool IsEnabledAndSupported(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x48116C0", Offset = "0x48116C0", VA = "0x48116C0")]
	public ColorGrading()
	{
	}
}
