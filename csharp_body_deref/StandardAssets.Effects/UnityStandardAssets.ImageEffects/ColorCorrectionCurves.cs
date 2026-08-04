// ==================== AoTTG2 cross-reference ====================
// Type: UnityStandardAssets.ImageEffects.ColorCorrectionCurves
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UnityStandardAssets/ImageEffects/ColorCorrectionCurves.c
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/ColorCorrectionCurves.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x2000019")]
[ExecuteInEditMode]
[AddComponentMenu("Image Effects/Color Adjustments/Color Correction (Curves, Saturation)")]
public class ColorCorrectionCurves : PostEffectsBase
{
	[Token(Token = "0x200001A")]
	public enum ColorCorrectionMode
	{
		[Token(Token = "0x40000DD")]
		Simple,
		[Token(Token = "0x40000DE")]
		Advanced
	}

	[Token(Token = "0x40000C4")]
	[FieldOffset(Offset = "0x30")]
	public AnimationCurve redChannel;

	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0x38")]
	public AnimationCurve greenChannel;

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x40")]
	public AnimationCurve blueChannel;

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x48")]
	public bool useDepthCorrection;

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x50")]
	public AnimationCurve zCurve;

	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x58")]
	public AnimationCurve depthRedChannel;

	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0x60")]
	public AnimationCurve depthGreenChannel;

	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0x68")]
	public AnimationCurve depthBlueChannel;

	[Token(Token = "0x40000CC")]
	[FieldOffset(Offset = "0x70")]
	private Material ccMaterial;

	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x78")]
	private Material ccDepthMaterial;

	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x80")]
	private Material selectiveCcMaterial;

	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x88")]
	private Texture2D rgbChannelTex;

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x90")]
	private Texture2D rgbDepthChannelTex;

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x98")]
	private Texture2D zCurveTex;

	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0xA0")]
	public float saturation;

	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0xA4")]
	public bool selectiveCc;

	[Token(Token = "0x40000D4")]
	[FieldOffset(Offset = "0xA8")]
	public Color selectiveFromColor;

	[Token(Token = "0x40000D5")]
	[FieldOffset(Offset = "0xB8")]
	public Color selectiveToColor;

	[Token(Token = "0x40000D6")]
	[FieldOffset(Offset = "0xC8")]
	public ColorCorrectionMode mode;

	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0xCC")]
	public bool updateTextures;

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0xD0")]
	public Shader colorCorrectionCurvesShader;

	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0xD8")]
	public Shader simpleColorCorrectionCurvesShader;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0xE0")]
	public Shader colorCorrectionSelectiveShader;

	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0xE8")]
	private bool updateTexturesOnStartup;

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x447E6B0", Offset = "0x447E6B0", VA = "0x447E6B0")]
	private new void Start()
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x447E6F0", Offset = "0x447E6F0", VA = "0x447E6F0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x447E700", Offset = "0x447E700", VA = "0x447E700", Slot = "4")]
	public override bool CheckResources()
	{
		return default(bool);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x447E9E0", Offset = "0x447E9E0", VA = "0x447E9E0")]
	public void UpdateParameters()
	{
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x447EDD0", Offset = "0x447EDD0", VA = "0x447EDD0")]
	private void UpdateTextures()
	{
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x447EDE0", Offset = "0x447EDE0", VA = "0x447EDE0")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x447F150", Offset = "0x447F150", VA = "0x447F150")]
	public ColorCorrectionCurves()
	{
	}
}
