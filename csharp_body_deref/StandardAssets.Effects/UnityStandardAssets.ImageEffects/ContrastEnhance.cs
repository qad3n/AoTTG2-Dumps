using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x200001D")]
[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
[AddComponentMenu("Image Effects/Color Adjustments/Contrast Enhance (Unsharp Mask)")]
public class ContrastEnhance : PostEffectsBase
{
	[Token(Token = "0x40000E4")]
	[FieldOffset(Offset = "0x30")]
	[Range(0f, 1f)]
	public float intensity;

	[Token(Token = "0x40000E5")]
	[FieldOffset(Offset = "0x34")]
	[Range(0f, 0.999f)]
	public float threshold;

	[Token(Token = "0x40000E6")]
	[FieldOffset(Offset = "0x38")]
	private Material separableBlurMaterial;

	[Token(Token = "0x40000E7")]
	[FieldOffset(Offset = "0x40")]
	private Material contrastCompositeMaterial;

	[Token(Token = "0x40000E8")]
	[FieldOffset(Offset = "0x48")]
	[Range(0f, 1f)]
	public float blurSpread;

	[Token(Token = "0x40000E9")]
	[FieldOffset(Offset = "0x50")]
	public Shader separableBlurShader;

	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0x58")]
	public Shader contrastCompositeShader;

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x415B7C0", Offset = "0x415B7C0", VA = "0x415B7C0", Slot = "4")]
	public override bool CheckResources()
	{
		return default(bool);
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x415B8A0", Offset = "0x415B8A0", VA = "0x415B8A0")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x415BBE0", Offset = "0x415BBE0", VA = "0x415BBE0")]
	public ContrastEnhance()
	{
	}
}
