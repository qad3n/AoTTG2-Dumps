// ==================== AoTTG2 cross-reference ====================
// Type: UnityStandardAssets.ImageEffects.ScreenOverlay
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UnityStandardAssets/ImageEffects/ScreenOverlay.c
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/ScreenOverlay.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x200002D")]
[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
[AddComponentMenu("Image Effects/Other/Screen Overlay")]
public class ScreenOverlay : PostEffectsBase
{
	[Token(Token = "0x200002E")]
	public enum OverlayBlendMode
	{
		[Token(Token = "0x4000156")]
		Additive,
		[Token(Token = "0x4000157")]
		ScreenBlend,
		[Token(Token = "0x4000158")]
		Multiply,
		[Token(Token = "0x4000159")]
		Overlay,
		[Token(Token = "0x400015A")]
		AlphaBlend
	}

	[Token(Token = "0x4000150")]
	[FieldOffset(Offset = "0x30")]
	public OverlayBlendMode blendMode;

	[Token(Token = "0x4000151")]
	[FieldOffset(Offset = "0x34")]
	public float intensity;

	[Token(Token = "0x4000152")]
	[FieldOffset(Offset = "0x38")]
	public Texture2D texture;

	[Token(Token = "0x4000153")]
	[FieldOffset(Offset = "0x40")]
	public Shader overlayShader;

	[Token(Token = "0x4000154")]
	[FieldOffset(Offset = "0x48")]
	private Material overlayMaterial;

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x4486550", Offset = "0x4486550", VA = "0x4486550", Slot = "4")]
	public override bool CheckResources()
	{
		return default(bool);
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x4486610", Offset = "0x4486610", VA = "0x4486610")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x4486760", Offset = "0x4486760", VA = "0x4486760")]
	public ScreenOverlay()
	{
	}
}
