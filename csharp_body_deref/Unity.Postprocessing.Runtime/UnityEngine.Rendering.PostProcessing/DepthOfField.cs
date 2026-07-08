using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x2000025")]
[PostProcess(typeof(DepthOfFieldRenderer), "Unity/Depth of Field", false)]
public sealed class DepthOfField : PostProcessEffectSettings
{
	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0x30")]
	[Min(0.1f)]
	[Tooltip("Distance to the point of focus.")]
	public FloatParameter focusDistance;

	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0x38")]
	[Range(0.05f, 32f)]
	[Tooltip("Ratio of aperture (known as f-stop or f-number). The smaller the value is, the shallower the depth of field is.")]
	public FloatParameter aperture;

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x40")]
	[Range(1f, 300f)]
	[Tooltip("Distance between the lens and the film. The larger the value is, the shallower the depth of field is.")]
	public FloatParameter focalLength;

	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0x48")]
	[DisplayName("Max Blur Size")]
	[Tooltip("Convolution kernel size of the bokeh filter, which determines the maximum radius of bokeh. It also affects performances (the larger the kernel is, the longer the GPU time is required).")]
	public KernelSizeParameter kernelSize;

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x48159C0", Offset = "0x48159C0", VA = "0x48159C0", Slot = "4")]
	public override bool IsEnabledAndSupported(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x48159F0", Offset = "0x48159F0", VA = "0x48159F0")]
	public DepthOfField()
	{
	}
}
