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
	[Address(RVA = "0x415D170", Offset = "0x415D170", VA = "0x415D170", Slot = "4")]
	public override bool CheckResources()
	{
		return default(bool);
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x415D230", Offset = "0x415D230", VA = "0x415D230")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x415D360", Offset = "0x415D360", VA = "0x415D360")]
	public Fisheye()
	{
	}
}
