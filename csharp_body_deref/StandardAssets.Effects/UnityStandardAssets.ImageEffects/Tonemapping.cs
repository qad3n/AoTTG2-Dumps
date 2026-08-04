// ==================== AoTTG2 cross-reference ====================
// Type: UnityStandardAssets.ImageEffects.Tonemapping
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UnityStandardAssets/ImageEffects/Tonemapping.c
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/Tonemapping.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x2000039")]
[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
[AddComponentMenu("Image Effects/Color Adjustments/Tonemapping")]
public class Tonemapping : PostEffectsBase
{
	[Token(Token = "0x200003A")]
	public enum TonemapperType
	{
		[Token(Token = "0x40001A4")]
		SimpleReinhard,
		[Token(Token = "0x40001A5")]
		UserCurve,
		[Token(Token = "0x40001A6")]
		Hable,
		[Token(Token = "0x40001A7")]
		Photographic,
		[Token(Token = "0x40001A8")]
		OptimizedHejiDawson,
		[Token(Token = "0x40001A9")]
		AdaptiveReinhard,
		[Token(Token = "0x40001AA")]
		AdaptiveReinhardAutoWhite
	}

	[Token(Token = "0x200003B")]
	public enum AdaptiveTexSize
	{
		[Token(Token = "0x40001AC")]
		Square16 = 0x10,
		[Token(Token = "0x40001AD")]
		Square32 = 0x20,
		[Token(Token = "0x40001AE")]
		Square64 = 0x40,
		[Token(Token = "0x40001AF")]
		Square128 = 0x80,
		[Token(Token = "0x40001B0")]
		Square256 = 0x100,
		[Token(Token = "0x40001B1")]
		Square512 = 0x200,
		[Token(Token = "0x40001B2")]
		Square1024 = 0x400
	}

	[Token(Token = "0x4000196")]
	[FieldOffset(Offset = "0x30")]
	public TonemapperType type;

	[Token(Token = "0x4000197")]
	[FieldOffset(Offset = "0x34")]
	public AdaptiveTexSize adaptiveTextureSize;

	[Token(Token = "0x4000198")]
	[FieldOffset(Offset = "0x38")]
	public AnimationCurve remapCurve;

	[Token(Token = "0x4000199")]
	[FieldOffset(Offset = "0x40")]
	private Texture2D curveTex;

	[Token(Token = "0x400019A")]
	[FieldOffset(Offset = "0x48")]
	public float exposureAdjustment;

	[Token(Token = "0x400019B")]
	[FieldOffset(Offset = "0x4C")]
	public float middleGrey;

	[Token(Token = "0x400019C")]
	[FieldOffset(Offset = "0x50")]
	public float white;

	[Token(Token = "0x400019D")]
	[FieldOffset(Offset = "0x54")]
	public float adaptionSpeed;

	[Token(Token = "0x400019E")]
	[FieldOffset(Offset = "0x58")]
	public Shader tonemapper;

	[Token(Token = "0x400019F")]
	[FieldOffset(Offset = "0x60")]
	public bool validRenderTextureFormat;

	[Token(Token = "0x40001A0")]
	[FieldOffset(Offset = "0x68")]
	private Material tonemapMaterial;

	[Token(Token = "0x40001A1")]
	[FieldOffset(Offset = "0x70")]
	private RenderTexture rt;

	[Token(Token = "0x40001A2")]
	[FieldOffset(Offset = "0x78")]
	private RenderTextureFormat rtFormat;

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x44889B0", Offset = "0x44889B0", VA = "0x44889B0", Slot = "4")]
	public override bool CheckResources()
	{
		return default(bool);
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x4488B10", Offset = "0x4488B10", VA = "0x4488B10")]
	public float UpdateCurve()
	{
		return default(float);
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x4488DF0", Offset = "0x4488DF0", VA = "0x4488DF0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x4488F40", Offset = "0x4488F40", VA = "0x4488F40")]
	private bool CreateInternalRenderTexture()
	{
		return default(bool);
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x4489030", Offset = "0x4489030", VA = "0x4489030")]
	[ImageEffectTransformsToLDR]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x4489940", Offset = "0x4489940", VA = "0x4489940")]
	public Tonemapping()
	{
	}
}
