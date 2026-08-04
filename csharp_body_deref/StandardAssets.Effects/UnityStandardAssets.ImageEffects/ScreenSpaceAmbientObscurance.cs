// ==================== AoTTG2 cross-reference ====================
// Type: UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UnityStandardAssets/ImageEffects/ScreenSpaceAmbientObscurance.c
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/ScreenSpaceAmbientObscurance.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x200002F")]
[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
[AddComponentMenu("Image Effects/Rendering/Screen Space Ambient Obscurance")]
internal class ScreenSpaceAmbientObscurance : PostEffectsBase
{
	[Token(Token = "0x400015B")]
	[FieldOffset(Offset = "0x30")]
	[Range(0f, 3f)]
	public float intensity;

	[Token(Token = "0x400015C")]
	[FieldOffset(Offset = "0x34")]
	[Range(0.1f, 3f)]
	public float radius;

	[Token(Token = "0x400015D")]
	[FieldOffset(Offset = "0x38")]
	[Range(0f, 3f)]
	public int blurIterations;

	[Token(Token = "0x400015E")]
	[FieldOffset(Offset = "0x3C")]
	[Range(0f, 5f)]
	public float blurFilterDistance;

	[Token(Token = "0x400015F")]
	[FieldOffset(Offset = "0x40")]
	[Range(0f, 1f)]
	public int downsample;

	[Token(Token = "0x4000160")]
	[FieldOffset(Offset = "0x48")]
	public Texture2D rand;

	[Token(Token = "0x4000161")]
	[FieldOffset(Offset = "0x50")]
	public Shader aoShader;

	[Token(Token = "0x4000162")]
	[FieldOffset(Offset = "0x58")]
	private Material aoMaterial;

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x44867F0", Offset = "0x44867F0", VA = "0x44867F0", Slot = "4")]
	public override bool CheckResources()
	{
		return default(bool);
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x4486850", Offset = "0x4486850", VA = "0x4486850")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x44868E0", Offset = "0x44868E0", VA = "0x44868E0")]
	[ImageEffectOpaque]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x4487290", Offset = "0x4487290", VA = "0x4487290")]
	public ScreenSpaceAmbientObscurance()
	{
	}
}
