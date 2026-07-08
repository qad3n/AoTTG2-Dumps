using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x200003E")]
[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
[AddComponentMenu("Image Effects/Camera/Vignette and Chromatic Aberration")]
public class VignetteAndChromaticAberration : PostEffectsBase
{
	[Token(Token = "0x200003F")]
	public enum AberrationMode
	{
		[Token(Token = "0x40001C7")]
		Simple,
		[Token(Token = "0x40001C8")]
		Advanced
	}

	[Token(Token = "0x40001B8")]
	[FieldOffset(Offset = "0x30")]
	public AberrationMode mode;

	[Token(Token = "0x40001B9")]
	[FieldOffset(Offset = "0x34")]
	public float intensity;

	[Token(Token = "0x40001BA")]
	[FieldOffset(Offset = "0x38")]
	public float chromaticAberration;

	[Token(Token = "0x40001BB")]
	[FieldOffset(Offset = "0x3C")]
	public float axialAberration;

	[Token(Token = "0x40001BC")]
	[FieldOffset(Offset = "0x40")]
	public float blur;

	[Token(Token = "0x40001BD")]
	[FieldOffset(Offset = "0x44")]
	public float blurSpread;

	[Token(Token = "0x40001BE")]
	[FieldOffset(Offset = "0x48")]
	public float luminanceDependency;

	[Token(Token = "0x40001BF")]
	[FieldOffset(Offset = "0x4C")]
	public float blurDistance;

	[Token(Token = "0x40001C0")]
	[FieldOffset(Offset = "0x50")]
	public Shader vignetteShader;

	[Token(Token = "0x40001C1")]
	[FieldOffset(Offset = "0x58")]
	public Shader separableBlurShader;

	[Token(Token = "0x40001C2")]
	[FieldOffset(Offset = "0x60")]
	public Shader chromAberrationShader;

	[Token(Token = "0x40001C3")]
	[FieldOffset(Offset = "0x68")]
	private Material m_VignetteMaterial;

	[Token(Token = "0x40001C4")]
	[FieldOffset(Offset = "0x70")]
	private Material m_SeparableBlurMaterial;

	[Token(Token = "0x40001C5")]
	[FieldOffset(Offset = "0x78")]
	private Material m_ChromAberrationMaterial;

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x4165070", Offset = "0x4165070", VA = "0x4165070", Slot = "4")]
	public override bool CheckResources()
	{
		return default(bool);
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x4165120", Offset = "0x4165120", VA = "0x4165120")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x4165780", Offset = "0x4165780", VA = "0x4165780")]
	public VignetteAndChromaticAberration()
	{
	}
}
