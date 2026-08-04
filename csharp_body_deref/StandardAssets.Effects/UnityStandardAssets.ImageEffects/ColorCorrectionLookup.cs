// ==================== AoTTG2 cross-reference ====================
// Type: UnityStandardAssets.ImageEffects.ColorCorrectionLookup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UnityStandardAssets/ImageEffects/ColorCorrectionLookup.c
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/ColorCorrectionLookup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x447F960", Offset = "0x447F960", VA = "0x447F960", Slot = "4")]
	public override bool CheckResources()
	{
		return default(bool);
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x447FA20", Offset = "0x447FA20", VA = "0x447FA20")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x447FAB0", Offset = "0x447FAB0", VA = "0x447FAB0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x447FB40", Offset = "0x447FB40", VA = "0x447FB40")]
	public void SetIdentityLut()
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x447FFD0", Offset = "0x447FFD0", VA = "0x447FFD0")]
	public bool ValidDimensions(Texture2D tex2d)
	{
		return default(bool);
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x44800E0", Offset = "0x44800E0", VA = "0x44800E0")]
	public void Convert(Texture2D temp2DTex, string path)
	{
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4480460", Offset = "0x4480460", VA = "0x4480460")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x4480670", Offset = "0x4480670", VA = "0x4480670")]
	public ColorCorrectionLookup()
	{
	}
}
