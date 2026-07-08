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
	[Address(RVA = "0x415D3F0", Offset = "0x415D3F0", VA = "0x415D3F0", Slot = "4")]
	public override bool CheckResources()
	{
		return default(bool);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x415D450", Offset = "0x415D450", VA = "0x415D450")]
	[ImageEffectOpaque]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x415DAB0", Offset = "0x415DAB0", VA = "0x415DAB0")]
	public GlobalFog()
	{
	}
}
