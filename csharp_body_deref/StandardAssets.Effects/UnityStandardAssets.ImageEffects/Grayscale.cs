// ==================== AoTTG2 cross-reference ====================
// Type: UnityStandardAssets.ImageEffects.Grayscale
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UnityStandardAssets/ImageEffects/Grayscale.c
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/Grayscale.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4482C50", Offset = "0x4482C50", VA = "0x4482C50")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x4482D20", Offset = "0x4482D20", VA = "0x4482D20")]
	public Grayscale()
	{
	}
}
