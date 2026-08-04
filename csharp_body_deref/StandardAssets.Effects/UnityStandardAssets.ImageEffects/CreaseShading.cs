// ==================== AoTTG2 cross-reference ====================
// Type: UnityStandardAssets.ImageEffects.CreaseShading
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UnityStandardAssets/ImageEffects/CreaseShading.c
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/CreaseShading.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x200001F")]
[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
[AddComponentMenu("Image Effects/Edge Detection/Crease Shading")]
public class CreaseShading : PostEffectsBase
{
	[Token(Token = "0x40000F8")]
	[FieldOffset(Offset = "0x30")]
	public float intensity;

	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0x34")]
	public int softness;

	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0x38")]
	public float spread;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x40")]
	public Shader blurShader;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x48")]
	private Material blurMaterial;

	[Token(Token = "0x40000FD")]
	[FieldOffset(Offset = "0x50")]
	public Shader depthFetchShader;

	[Token(Token = "0x40000FE")]
	[FieldOffset(Offset = "0x58")]
	private Material depthFetchMaterial;

	[Token(Token = "0x40000FF")]
	[FieldOffset(Offset = "0x60")]
	public Shader creaseApplyShader;

	[Token(Token = "0x4000100")]
	[FieldOffset(Offset = "0x68")]
	private Material creaseApplyMaterial;

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x44819E0", Offset = "0x44819E0", VA = "0x44819E0", Slot = "4")]
	public override bool CheckResources()
	{
		return default(bool);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4481A90", Offset = "0x4481A90", VA = "0x4481A90")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x4481DF0", Offset = "0x4481DF0", VA = "0x4481DF0")]
	public CreaseShading()
	{
	}
}
