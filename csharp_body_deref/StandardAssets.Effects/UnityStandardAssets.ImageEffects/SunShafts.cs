// ==================== AoTTG2 cross-reference ====================
// Type: UnityStandardAssets.ImageEffects.SunShafts
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UnityStandardAssets/ImageEffects/SunShafts.c
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/SunShafts.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x2000033")]
[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
[AddComponentMenu("Image Effects/Rendering/Sun Shafts")]
public class SunShafts : PostEffectsBase
{
	[Token(Token = "0x2000034")]
	public enum SunShaftsResolution
	{
		[Token(Token = "0x4000181")]
		Low,
		[Token(Token = "0x4000182")]
		Normal,
		[Token(Token = "0x4000183")]
		High
	}

	[Token(Token = "0x2000035")]
	public enum ShaftsScreenBlendMode
	{
		[Token(Token = "0x4000185")]
		Screen,
		[Token(Token = "0x4000186")]
		Add
	}

	[Token(Token = "0x4000172")]
	[FieldOffset(Offset = "0x30")]
	public SunShaftsResolution resolution;

	[Token(Token = "0x4000173")]
	[FieldOffset(Offset = "0x34")]
	public ShaftsScreenBlendMode screenBlendMode;

	[Token(Token = "0x4000174")]
	[FieldOffset(Offset = "0x38")]
	public Transform sunTransform;

	[Token(Token = "0x4000175")]
	[FieldOffset(Offset = "0x40")]
	public int radialBlurIterations;

	[Token(Token = "0x4000176")]
	[FieldOffset(Offset = "0x44")]
	public Color sunColor;

	[Token(Token = "0x4000177")]
	[FieldOffset(Offset = "0x54")]
	public Color sunThreshold;

	[Token(Token = "0x4000178")]
	[FieldOffset(Offset = "0x64")]
	public float sunShaftBlurRadius;

	[Token(Token = "0x4000179")]
	[FieldOffset(Offset = "0x68")]
	public float sunShaftIntensity;

	[Token(Token = "0x400017A")]
	[FieldOffset(Offset = "0x6C")]
	public float maxRadius;

	[Token(Token = "0x400017B")]
	[FieldOffset(Offset = "0x70")]
	public bool useDepthTexture;

	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0x78")]
	public Shader sunShaftsShader;

	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x80")]
	private Material sunShaftsMaterial;

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0x88")]
	public Shader simpleClearShader;

	[Token(Token = "0x400017F")]
	[FieldOffset(Offset = "0x90")]
	private Material simpleClearMaterial;

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x4487E00", Offset = "0x4487E00", VA = "0x4487E00", Slot = "4")]
	public override bool CheckResources()
	{
		return default(bool);
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x4487EA0", Offset = "0x4487EA0", VA = "0x4487EA0")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x44885F0", Offset = "0x44885F0", VA = "0x44885F0")]
	public SunShafts()
	{
	}
}
