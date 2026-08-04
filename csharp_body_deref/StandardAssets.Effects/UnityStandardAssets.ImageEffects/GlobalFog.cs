// ==================== AoTTG2 cross-reference ====================
// Type: UnityStandardAssets.ImageEffects.GlobalFog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UnityStandardAssets/ImageEffects/GlobalFog.c
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/GlobalFog.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x2000023")]
[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
[AddComponentMenu("Image Effects/Rendering/Global Fog")]
public class GlobalFog : PostEffectsBase
{
	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0x30")]
	[Tooltip("Apply distance-based fog?")]
	public bool distanceFog;

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x31")]
	[Tooltip("Exclude far plane pixels from distance-based fog? (Skybox or clear color)")]
	public bool excludeFarPixels;

	[Token(Token = "0x4000118")]
	[FieldOffset(Offset = "0x32")]
	[Tooltip("Distance fog is based on radial distance from camera when checked")]
	public bool useRadialDistance;

	[Token(Token = "0x4000119")]
	[FieldOffset(Offset = "0x33")]
	[Tooltip("Apply height-based fog?")]
	public bool heightFog;

	[Token(Token = "0x400011A")]
	[FieldOffset(Offset = "0x34")]
	[Tooltip("Fog top Y coordinate")]
	public float height;

	[Token(Token = "0x400011B")]
	[FieldOffset(Offset = "0x38")]
	[Range(0.001f, 10f)]
	public float heightDensity;

	[Token(Token = "0x400011C")]
	[FieldOffset(Offset = "0x3C")]
	[Tooltip("Push fog away from the camera by this amount")]
	public float startDistance;

	[Token(Token = "0x400011D")]
	[FieldOffset(Offset = "0x40")]
	public Shader fogShader;

	[Token(Token = "0x400011E")]
	[FieldOffset(Offset = "0x48")]
	private Material fogMaterial;

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x44824F0", Offset = "0x44824F0", VA = "0x44824F0", Slot = "4")]
	public override bool CheckResources()
	{
		return default(bool);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x4482550", Offset = "0x4482550", VA = "0x4482550")]
	[ImageEffectOpaque]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x4482BB0", Offset = "0x4482BB0", VA = "0x4482BB0")]
	public GlobalFog()
	{
	}
}
