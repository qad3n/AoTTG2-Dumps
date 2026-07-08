using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x2000024")]
[ExecuteInEditMode]
[AddComponentMenu("Image Effects/Color Adjustments/Grayscale")]
public class Grayscale : ImageEffectBase
{
	[Token(Token = "0x400011F")]
	[FieldOffset(Offset = "0x30")]
	public Texture textureRamp;

	[Token(Token = "0x4000120")]
	[FieldOffset(Offset = "0x38")]
	[Range(-1f, 1f)]
	public float rampOffset;

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x415DB50", Offset = "0x415DB50", VA = "0x415DB50")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x415DC20", Offset = "0x415DC20", VA = "0x415DC20")]
	public Grayscale()
	{
	}
}
