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
	[Address(RVA = "0x4161450", Offset = "0x4161450", VA = "0x4161450", Slot = "4")]
	public override bool CheckResources()
	{
		return default(bool);
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x4161510", Offset = "0x4161510", VA = "0x4161510")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x4161660", Offset = "0x4161660", VA = "0x4161660")]
	public ScreenOverlay()
	{
	}
}
