// ==================== AoTTG2 cross-reference ====================
// Type: UnityStandardAssets.ImageEffects.Fisheye
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UnityStandardAssets/ImageEffects/Fisheye.c
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/Fisheye.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x2000022")]
[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
[AddComponentMenu("Image Effects/Displacement/Fisheye")]
public class Fisheye : PostEffectsBase
{
	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0x30")]
	[Range(0f, 1.5f)]
	public float strengthX;

	[Token(Token = "0x4000113")]
	[FieldOffset(Offset = "0x34")]
	[Range(0f, 1.5f)]
	public float strengthY;

	[Token(Token = "0x4000114")]
	[FieldOffset(Offset = "0x38")]
	public Shader fishEyeShader;

	[Token(Token = "0x4000115")]
	[FieldOffset(Offset = "0x40")]
	private Material fisheyeMaterial;

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x4482270", Offset = "0x4482270", VA = "0x4482270", Slot = "4")]
	public override bool CheckResources()
	{
		return default(bool);
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x4482330", Offset = "0x4482330", VA = "0x4482330")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x4482460", Offset = "0x4482460", VA = "0x4482460")]
	public Fisheye()
	{
	}
}
