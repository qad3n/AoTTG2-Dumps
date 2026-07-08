using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x2000011")]
[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
[AddComponentMenu("Image Effects/Bloom and Glow/Bloom (Optimized)")]
public class BloomOptimized : PostEffectsBase
{
	[Token(Token = "0x2000012")]
	public enum Resolution
	{
		[Token(Token = "0x400008C")]
		Low,
		[Token(Token = "0x400008D")]
		High
	}

	[Token(Token = "0x2000013")]
	public enum BlurType
	{
		[Token(Token = "0x400008F")]
		Standard,
		[Token(Token = "0x4000090")]
		Sgx
	}

	[Token(Token = "0x4000083")]
	[FieldOffset(Offset = "0x30")]
	[Range(0f, 1.5f)]
	public float threshold;

	[Token(Token = "0x4000084")]
	[FieldOffset(Offset = "0x34")]
	[Range(0f, 2.5f)]
	public float intensity;

	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x38")]
	[Range(0.25f, 5.5f)]
	public float blurSize;

	[Token(Token = "0x4000086")]
	[FieldOffset(Offset = "0x3C")]
	private Resolution resolution;

	[Token(Token = "0x4000087")]
	[FieldOffset(Offset = "0x40")]
	[Range(1f, 4f)]
	public int blurIterations;

	[Token(Token = "0x4000088")]
	[FieldOffset(Offset = "0x44")]
	public BlurType blurType;

	[Token(Token = "0x4000089")]
	[FieldOffset(Offset = "0x48")]
	public Shader fastBloomShader;

	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0x50")]
	private Material fastBloomMaterial;

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4154540", Offset = "0x4154540", VA = "0x4154540", Slot = "4")]
	public override bool CheckResources()
	{
		return default(bool);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x4154600", Offset = "0x4154600", VA = "0x4154600")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4154680", Offset = "0x4154680", VA = "0x4154680")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4154A10", Offset = "0x4154A10", VA = "0x4154A10")]
	public BloomOptimized()
	{
	}
}
