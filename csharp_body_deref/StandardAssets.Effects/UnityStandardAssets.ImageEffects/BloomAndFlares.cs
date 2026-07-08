using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x2000010")]
[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
[AddComponentMenu("Image Effects/Bloom and Glow/BloomAndFlares (3.5, Deprecated)")]
public class BloomAndFlares : PostEffectsBase
{
	[Token(Token = "0x4000061")]
	[FieldOffset(Offset = "0x30")]
	public TweakMode34 tweakMode;

	[Token(Token = "0x4000062")]
	[FieldOffset(Offset = "0x34")]
	public BloomScreenBlendMode screenBlendMode;

	[Token(Token = "0x4000063")]
	[FieldOffset(Offset = "0x38")]
	public HDRBloomMode hdr;

	[Token(Token = "0x4000064")]
	[FieldOffset(Offset = "0x3C")]
	private bool doHdr;

	[Token(Token = "0x4000065")]
	[FieldOffset(Offset = "0x40")]
	public float sepBlurSpread;

	[Token(Token = "0x4000066")]
	[FieldOffset(Offset = "0x44")]
	public float useSrcAlphaAsMask;

	[Token(Token = "0x4000067")]
	[FieldOffset(Offset = "0x48")]
	public float bloomIntensity;

	[Token(Token = "0x4000068")]
	[FieldOffset(Offset = "0x4C")]
	public float bloomThreshold;

	[Token(Token = "0x4000069")]
	[FieldOffset(Offset = "0x50")]
	public int bloomBlurIterations;

	[Token(Token = "0x400006A")]
	[FieldOffset(Offset = "0x54")]
	public bool lensflares;

	[Token(Token = "0x400006B")]
	[FieldOffset(Offset = "0x58")]
	public int hollywoodFlareBlurIterations;

	[Token(Token = "0x400006C")]
	[FieldOffset(Offset = "0x5C")]
	public LensflareStyle34 lensflareMode;

	[Token(Token = "0x400006D")]
	[FieldOffset(Offset = "0x60")]
	public float hollyStretchWidth;

	[Token(Token = "0x400006E")]
	[FieldOffset(Offset = "0x64")]
	public float lensflareIntensity;

	[Token(Token = "0x400006F")]
	[FieldOffset(Offset = "0x68")]
	public float lensflareThreshold;

	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0x6C")]
	public Color flareColorA;

	[Token(Token = "0x4000071")]
	[FieldOffset(Offset = "0x7C")]
	public Color flareColorB;

	[Token(Token = "0x4000072")]
	[FieldOffset(Offset = "0x8C")]
	public Color flareColorC;

	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x9C")]
	public Color flareColorD;

	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0xB0")]
	public Texture2D lensFlareVignetteMask;

	[Token(Token = "0x4000075")]
	[FieldOffset(Offset = "0xB8")]
	public Shader lensFlareShader;

	[Token(Token = "0x4000076")]
	[FieldOffset(Offset = "0xC0")]
	private Material lensFlareMaterial;

	[Token(Token = "0x4000077")]
	[FieldOffset(Offset = "0xC8")]
	public Shader vignetteShader;

	[Token(Token = "0x4000078")]
	[FieldOffset(Offset = "0xD0")]
	private Material vignetteMaterial;

	[Token(Token = "0x4000079")]
	[FieldOffset(Offset = "0xD8")]
	public Shader separableBlurShader;

	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0xE0")]
	private Material separableBlurMaterial;

	[Token(Token = "0x400007B")]
	[FieldOffset(Offset = "0xE8")]
	public Shader addBrightStuffOneOneShader;

	[Token(Token = "0x400007C")]
	[FieldOffset(Offset = "0xF0")]
	private Material addBrightStuffBlendOneOneMaterial;

	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0xF8")]
	public Shader screenBlendShader;

	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x100")]
	private Material screenBlend;

	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x108")]
	public Shader hollywoodFlaresShader;

	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0x110")]
	private Material hollywoodFlaresMaterial;

	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0x118")]
	public Shader brightPassFilterShader;

	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0x120")]
	private Material brightPassFilterMaterial;

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x41531E0", Offset = "0x41531E0", VA = "0x41531E0", Slot = "4")]
	public override bool CheckResources()
	{
		return default(bool);
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x41533C0", Offset = "0x41533C0", VA = "0x41533C0")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x41543B0", Offset = "0x41543B0", VA = "0x41543B0")]
	private void AddTo(float intensity_, RenderTexture from, RenderTexture to)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x4154220", Offset = "0x4154220", VA = "0x4154220")]
	private void BlendFlares(RenderTexture from, RenderTexture to)
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x4153FA0", Offset = "0x4153FA0", VA = "0x4153FA0")]
	private void BrightFilter(float thresh, float useAlphaAsMask, RenderTexture from, RenderTexture to)
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x41540C0", Offset = "0x41540C0", VA = "0x41540C0")]
	private void Vignette(float amount, RenderTexture from, RenderTexture to)
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4154450", Offset = "0x4154450", VA = "0x4154450")]
	public BloomAndFlares()
	{
	}
}
