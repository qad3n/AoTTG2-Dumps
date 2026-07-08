using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x200001C")]
[ExecuteInEditMode]
[AddComponentMenu("Image Effects/Color Adjustments/Color Correction (Ramp)")]
public class ColorCorrectionRamp : ImageEffectBase
{
	[Token(Token = "0x40000E3")]
	[FieldOffset(Offset = "0x30")]
	public Texture textureRamp;

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x415B630", Offset = "0x415B630", VA = "0x415B630")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x415B7A0", Offset = "0x415B7A0", VA = "0x415B7A0")]
	public ColorCorrectionRamp()
	{
	}
}
