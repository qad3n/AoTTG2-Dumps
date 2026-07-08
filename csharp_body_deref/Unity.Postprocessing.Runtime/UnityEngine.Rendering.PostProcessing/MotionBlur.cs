using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x200002F")]
[PostProcess(typeof(MotionBlurRenderer), "Unity/Motion Blur", false)]
public sealed class MotionBlur : PostProcessEffectSettings
{
	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0x30")]
	[Range(0f, 360f)]
	[Tooltip("The angle of rotary shutter. Larger values give longer exposure.")]
	public FloatParameter shutterAngle;

	[Token(Token = "0x40000BF")]
	[FieldOffset(Offset = "0x38")]
	[Range(4f, 32f)]
	[Tooltip("The amount of sample points. This affects quality and performance.")]
	public IntParameter sampleCount;

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x4818840", Offset = "0x4818840", VA = "0x4818840", Slot = "4")]
	public override bool IsEnabledAndSupported(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x48188F0", Offset = "0x48188F0", VA = "0x48188F0")]
	public MotionBlur()
	{
	}
}
