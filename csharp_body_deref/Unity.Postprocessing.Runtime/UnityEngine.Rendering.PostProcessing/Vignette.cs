using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x2000046")]
[PostProcess(typeof(VignetteRenderer), "Unity/Vignette", true)]
public sealed class Vignette : PostProcessEffectSettings
{
	[Token(Token = "0x400012B")]
	[FieldOffset(Offset = "0x30")]
	[Tooltip("Use the \"Classic\" mode for parametric controls. Use the \"Masked\" mode to use your own texture mask.")]
	public VignetteModeParameter mode;

	[Token(Token = "0x400012C")]
	[FieldOffset(Offset = "0x38")]
	[Tooltip("Vignette color.")]
	public ColorParameter color;

	[Token(Token = "0x400012D")]
	[FieldOffset(Offset = "0x40")]
	[Tooltip("Sets the vignette center point (screen center is [0.5, 0.5]).")]
	public Vector2Parameter center;

	[Token(Token = "0x400012E")]
	[FieldOffset(Offset = "0x48")]
	[Range(0f, 1f)]
	[Tooltip("Amount of vignetting on screen.")]
	public FloatParameter intensity;

	[Token(Token = "0x400012F")]
	[FieldOffset(Offset = "0x50")]
	[Range(0.01f, 1f)]
	[Tooltip("Smoothness of the vignette borders.")]
	public FloatParameter smoothness;

	[Token(Token = "0x4000130")]
	[FieldOffset(Offset = "0x58")]
	[Range(0f, 1f)]
	[Tooltip("Lower values will make a square-ish vignette.")]
	public FloatParameter roundness;

	[Token(Token = "0x4000131")]
	[FieldOffset(Offset = "0x60")]
	[Tooltip("Set to true to mark the vignette to be perfectly round. False will make its shape dependent on the current aspect ratio.")]
	public BoolParameter rounded;

	[Token(Token = "0x4000132")]
	[FieldOffset(Offset = "0x68")]
	[Tooltip("A black and white mask to use as a vignette.")]
	public TextureParameter mask;

	[Token(Token = "0x4000133")]
	[FieldOffset(Offset = "0x70")]
	[Range(0f, 1f)]
	[Tooltip("Mask opacity.")]
	public FloatParameter opacity;

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x4822A70", Offset = "0x4822A70", VA = "0x4822A70", Slot = "4")]
	public override bool IsEnabledAndSupported(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x4822B30", Offset = "0x4822B30", VA = "0x4822B30")]
	public Vignette()
	{
	}
}
