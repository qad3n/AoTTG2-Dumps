using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x200001B")]
[ExecuteInEditMode]
[AddComponentMenu("Image Effects/Color Adjustments/Color Correction (3D Lookup Texture)")]
public class ColorCorrectionLookup : PostEffectsBase
{
	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x30")]
	public Shader shader;

	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x38")]
	private Material material;

	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x40")]
	public Texture3D converted3DLut;

	[Token(Token = "0x40000E2")]
	[FieldOffset(Offset = "0x48")]
	public string basedOnTempTex;

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x415A860", Offset = "0x415A860", VA = "0x415A860", Slot = "4")]
	public override bool CheckResources()
	{
		return default(bool);
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x415A920", Offset = "0x415A920", VA = "0x415A920")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x415A9B0", Offset = "0x415A9B0", VA = "0x415A9B0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x415AA40", Offset = "0x415AA40", VA = "0x415AA40")]
	public void SetIdentityLut()
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x415AED0", Offset = "0x415AED0", VA = "0x415AED0")]
	public bool ValidDimensions(Texture2D tex2d)
	{
		return default(bool);
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x415AFE0", Offset = "0x415AFE0", VA = "0x415AFE0")]
	public void Convert(Texture2D temp2DTex, string path)
	{
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x415B360", Offset = "0x415B360", VA = "0x415B360")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x415B570", Offset = "0x415B570", VA = "0x415B570")]
	public ColorCorrectionLookup()
	{
	}
}
