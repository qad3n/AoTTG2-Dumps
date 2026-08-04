// ==================== AoTTG2 cross-reference ====================
// Type: UnityStandardAssets.ImageEffects.Antialiasing
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UnityStandardAssets/ImageEffects/Antialiasing.c
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/Antialiasing.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x2000005")]
[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
[AddComponentMenu("Image Effects/Other/Antialiasing")]
public class Antialiasing : PostEffectsBase
{
	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x30")]
	public AAMode mode;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x34")]
	public bool showGeneratedNormals;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x38")]
	public float offsetScale;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x3C")]
	public float blurRadius;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x40")]
	public float edgeThresholdMin;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x44")]
	public float edgeThreshold;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x48")]
	public float edgeSharpness;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x4C")]
	public bool dlaaSharp;

	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x50")]
	public Shader ssaaShader;

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x58")]
	private Material ssaa;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x60")]
	public Shader dlaaShader;

	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x68")]
	private Material dlaa;

	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x70")]
	public Shader nfaaShader;

	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x78")]
	private Material nfaa;

	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x80")]
	public Shader shaderFXAAPreset2;

	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x88")]
	private Material materialFXAAPreset2;

	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x90")]
	public Shader shaderFXAAPreset3;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x98")]
	private Material materialFXAAPreset3;

	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0xA0")]
	public Shader shaderFXAAII;

	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0xA8")]
	private Material materialFXAAII;

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0xB0")]
	public Shader shaderFXAAIII;

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0xB8")]
	private Material materialFXAAIII;

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4475CA0", Offset = "0x4475CA0", VA = "0x4475CA0")]
	public Material CurrentAAMaterial()
	{
		return null;
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x4475D00", Offset = "0x4475D00", VA = "0x4475D00", Slot = "4")]
	public override bool CheckResources()
	{
		return default(bool);
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4476290", Offset = "0x4476290", VA = "0x4476290")]
	public void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x44767E0", Offset = "0x44767E0", VA = "0x44767E0")]
	public Antialiasing()
	{
	}
}
