// ==================== AoTTG2 cross-reference ====================
// Type: UnityStandardAssets.ImageEffects.ColorCorrectionRamp
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UnityStandardAssets/ImageEffects/ColorCorrectionRamp.c
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/ColorCorrectionRamp.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4480730", Offset = "0x4480730", VA = "0x4480730")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x44808A0", Offset = "0x44808A0", VA = "0x44808A0")]
	public ColorCorrectionRamp()
	{
	}
}
