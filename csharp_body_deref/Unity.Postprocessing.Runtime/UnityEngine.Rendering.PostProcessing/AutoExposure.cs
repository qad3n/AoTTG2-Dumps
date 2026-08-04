// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.AutoExposure
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x2000014")]
[PostProcess(typeof(AutoExposureRenderer), "Unity/Auto Exposure", true)]
public sealed class AutoExposure : PostProcessEffectSettings
{
	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x30")]
	[MinMax(1f, 99f)]
	[DisplayName("Filtering (%)")]
	[Tooltip("Filters the bright and dark parts of the histogram when computing the average luminance. This is to avoid very dark pixels and very bright pixels from contributing to the auto exposure. Unit is in percent.")]
	public Vector2Parameter filtering;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x38")]
	[Range(-9f, 9f)]
	[DisplayName("Minimum (EV)")]
	[Tooltip("Minimum average luminance to consider for auto exposure. Unit is EV.")]
	public FloatParameter minLuminance;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x40")]
	[Range(-9f, 9f)]
	[DisplayName("Maximum (EV)")]
	[Tooltip("Maximum average luminance to consider for auto exposure. Unit is EV.")]
	public FloatParameter maxLuminance;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x48")]
	[Min(0f)]
	[DisplayName("Exposure Compensation")]
	[Tooltip("Use this to scale the global exposure of the scene.")]
	public FloatParameter keyValue;

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x50")]
	[DisplayName("Type")]
	[Tooltip("Use \"Progressive\" if you want auto exposure to be animated. Use \"Fixed\" otherwise.")]
	public EyeAdaptationParameter eyeAdaptation;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x58")]
	[Min(0f)]
	[Tooltip("Adaptation speed from a dark to a light environment.")]
	public FloatParameter speedUp;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x60")]
	[Min(0f)]
	[Tooltip("Adaptation speed from a light to a dark environment.")]
	public FloatParameter speedDown;

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4B339A0", Offset = "0x4B339A0", VA = "0x4B339A0", Slot = "4")]
	public override bool IsEnabledAndSupported(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4B33B00", Offset = "0x4B33B00", VA = "0x4B33B00")]
	public AutoExposure()
	{
	}
}
