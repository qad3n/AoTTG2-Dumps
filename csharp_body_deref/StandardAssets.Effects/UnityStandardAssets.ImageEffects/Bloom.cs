using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x2000006")]
[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
[AddComponentMenu("Image Effects/Bloom and Glow/Bloom")]
public class Bloom : PostEffectsBase
{
	[Token(Token = "0x2000007")]
	public enum LensFlareStyle
	{
		[Token(Token = "0x4000043")]
		Ghosting,
		[Token(Token = "0x4000044")]
		Anamorphic,
		[Token(Token = "0x4000045")]
		Combined
	}

	[Token(Token = "0x2000008")]
	public enum TweakMode
	{
		[Token(Token = "0x4000047")]
		Basic,
		[Token(Token = "0x4000048")]
		Complex
	}

	[Token(Token = "0x2000009")]
	public enum HDRBloomMode
	{
		[Token(Token = "0x400004A")]
		Auto,
		[Token(Token = "0x400004B")]
		On,
		[Token(Token = "0x400004C")]
		Off
	}

	[Token(Token = "0x200000A")]
	public enum BloomScreenBlendMode
	{
		[Token(Token = "0x400004E")]
		Screen,
		[Token(Token = "0x400004F")]
		Add
	}

	[Token(Token = "0x200000B")]
	public enum BloomQuality
	{
		[Token(Token = "0x4000051")]
		Cheap,
		[Token(Token = "0x4000052")]
		High
	}

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x30")]
	public TweakMode tweakMode;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x34")]
	public BloomScreenBlendMode screenBlendMode;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x38")]
	public HDRBloomMode hdr;

	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x3C")]
	private bool doHdr;

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x40")]
	public float sepBlurSpread;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x44")]
	public BloomQuality quality;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x48")]
	public float bloomIntensity;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x4C")]
	public float bloomThreshold;

	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x50")]
	public Color bloomThresholdColor;

	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x60")]
	public int bloomBlurIterations;

	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x64")]
	public int hollywoodFlareBlurIterations;

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x68")]
	public float flareRotation;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x6C")]
	public LensFlareStyle lensflareMode;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x70")]
	public float hollyStretchWidth;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x74")]
	public float lensflareIntensity;

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x78")]
	public float lensflareThreshold;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x7C")]
	public float lensFlareSaturation;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x80")]
	public Color flareColorA;

	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x90")]
	public Color flareColorB;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0xA0")]
	public Color flareColorC;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0xB0")]
	public Color flareColorD;

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0xC0")]
	public Texture2D lensFlareVignetteMask;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0xC8")]
	public Shader lensFlareShader;

	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0xD0")]
	private Material lensFlareMaterial;

	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0xD8")]
	public Shader screenBlendShader;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0xE0")]
	private Material screenBlend;

	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0xE8")]
	public Shader blurAndFlaresShader;

	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0xF0")]
	private Material blurAndFlaresMaterial;

	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0xF8")]
	public Shader brightPassFilterShader;

	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x100")]
	private Material brightPassFilterMaterial;

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4151800", Offset = "0x4151800", VA = "0x4151800", Slot = "4")]
	public override bool CheckResources()
	{
		return default(bool);
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x4151CF0", Offset = "0x4151CF0", VA = "0x4151CF0")]
	public void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x4153000", Offset = "0x4153000", VA = "0x4153000")]
	private void AddTo(float intensity_, RenderTexture from, RenderTexture to)
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x4152E60", Offset = "0x4152E60", VA = "0x4152E60")]
	private void BlendFlares(RenderTexture from, RenderTexture to)
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x4152BD0", Offset = "0x4152BD0", VA = "0x4152BD0")]
	private void BrightFilter(float thresh, RenderTexture from, RenderTexture to)
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x4152B20", Offset = "0x4152B20", VA = "0x4152B20")]
	private void BrightFilter(Color threshColor, RenderTexture from, RenderTexture to)
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x4152C80", Offset = "0x4152C80", VA = "0x4152C80")]
	private void Vignette(float amount, RenderTexture from, RenderTexture to)
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x41530C0", Offset = "0x41530C0", VA = "0x41530C0")]
	public Bloom()
	{
	}
}
