using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x2000028")]
[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
[AddComponentMenu("Image Effects/Noise/Noise And Grain (Filmic)")]
public class NoiseAndGrain : PostEffectsBase
{
	[Token(Token = "0x4000126")]
	[FieldOffset(Offset = "0x30")]
	public float intensityMultiplier;

	[Token(Token = "0x4000127")]
	[FieldOffset(Offset = "0x34")]
	public float generalIntensity;

	[Token(Token = "0x4000128")]
	[FieldOffset(Offset = "0x38")]
	public float blackIntensity;

	[Token(Token = "0x4000129")]
	[FieldOffset(Offset = "0x3C")]
	public float whiteIntensity;

	[Token(Token = "0x400012A")]
	[FieldOffset(Offset = "0x40")]
	public float midGrey;

	[Token(Token = "0x400012B")]
	[FieldOffset(Offset = "0x44")]
	public bool dx11Grain;

	[Token(Token = "0x400012C")]
	[FieldOffset(Offset = "0x48")]
	public float softness;

	[Token(Token = "0x400012D")]
	[FieldOffset(Offset = "0x4C")]
	public bool monochrome;

	[Token(Token = "0x400012E")]
	[FieldOffset(Offset = "0x50")]
	public Vector3 intensities;

	[Token(Token = "0x400012F")]
	[FieldOffset(Offset = "0x5C")]
	public Vector3 tiling;

	[Token(Token = "0x4000130")]
	[FieldOffset(Offset = "0x68")]
	public float monochromeTiling;

	[Token(Token = "0x4000131")]
	[FieldOffset(Offset = "0x6C")]
	public FilterMode filterMode;

	[Token(Token = "0x4000132")]
	[FieldOffset(Offset = "0x70")]
	public Texture2D noiseTexture;

	[Token(Token = "0x4000133")]
	[FieldOffset(Offset = "0x78")]
	public Shader noiseShader;

	[Token(Token = "0x4000134")]
	[FieldOffset(Offset = "0x80")]
	private Material noiseMaterial;

	[Token(Token = "0x4000135")]
	[FieldOffset(Offset = "0x88")]
	public Shader dx11NoiseShader;

	[Token(Token = "0x4000136")]
	[FieldOffset(Offset = "0x90")]
	private Material dx11NoiseMaterial;

	[Token(Token = "0x4000137")]
	[FieldOffset(Offset = "0x0")]
	private static float TILE_AMOUNT;

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x415E530", Offset = "0x415E530", VA = "0x415E530", Slot = "4")]
	public override bool CheckResources()
	{
		return default(bool);
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x415E630", Offset = "0x415E630", VA = "0x415E630")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x415EE90", Offset = "0x415EE90", VA = "0x415EE90")]
	private static void DrawNoiseQuadGrid(RenderTexture source, RenderTexture dest, Material fxMaterial, Texture2D noise, int passNr)
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x415F280", Offset = "0x415F280", VA = "0x415F280")]
	public NoiseAndGrain()
	{
	}
}
