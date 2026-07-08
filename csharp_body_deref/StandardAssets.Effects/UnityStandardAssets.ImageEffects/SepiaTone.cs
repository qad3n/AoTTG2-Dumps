using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x2000032")]
[ExecuteInEditMode]
[AddComponentMenu("Image Effects/Color Adjustments/Sepia Tone")]
public class SepiaTone : ImageEffectBase
{
	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x4162C80", Offset = "0x4162C80", VA = "0x4162C80")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x4162CF0", Offset = "0x4162CF0", VA = "0x4162CF0")]
	public SepiaTone()
	{
	}
}
