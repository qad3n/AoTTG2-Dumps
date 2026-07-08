using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x2000015")]
[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
[AddComponentMenu("Image Effects/Blur/Blur (Optimized)")]
public class BlurOptimized : PostEffectsBase
{
	[Token(Token = "0x2000016")]
	public enum BlurType
	{
		[Token(Token = "0x400009C")]
		StandardGauss,
		[Token(Token = "0x400009D")]
		SgxGauss
	}

	[Token(Token = "0x4000095")]
	[FieldOffset(Offset = "0x30")]
	[Range(0f, 2f)]
	public int downsample;

	[Token(Token = "0x4000096")]
	[FieldOffset(Offset = "0x34")]
	[Range(0f, 10f)]
	public float blurSize;

	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0x38")]
	[Range(1f, 4f)]
	public int blurIterations;

	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0x3C")]
	public BlurType blurType;

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x40")]
	public Shader blurShader;

	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0x48")]
	private Material blurMaterial;

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4155080", Offset = "0x4155080", VA = "0x4155080", Slot = "4")]
	public override bool CheckResources()
	{
		return default(bool);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4155140", Offset = "0x4155140", VA = "0x4155140")]
	public void OnDisable()
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x41551C0", Offset = "0x41551C0", VA = "0x41551C0")]
	public void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4155530", Offset = "0x4155530", VA = "0x4155530")]
	public BlurOptimized()
	{
	}
}
