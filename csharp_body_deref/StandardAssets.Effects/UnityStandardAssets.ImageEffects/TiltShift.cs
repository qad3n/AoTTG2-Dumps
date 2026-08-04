// ==================== AoTTG2 cross-reference ====================
// Type: UnityStandardAssets.ImageEffects.TiltShift
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UnityStandardAssets/ImageEffects/TiltShift.c
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/TiltShift.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x2000036")]
[RequireComponent(typeof(Camera))]
[AddComponentMenu("Image Effects/Camera/Tilt Shift (Lens Blur)")]
internal class TiltShift : PostEffectsBase
{
	[Token(Token = "0x2000037")]
	public enum TiltShiftMode
	{
		[Token(Token = "0x400018F")]
		TiltShiftMode,
		[Token(Token = "0x4000190")]
		IrisMode
	}

	[Token(Token = "0x2000038")]
	public enum TiltShiftQuality
	{
		[Token(Token = "0x4000192")]
		Preview,
		[Token(Token = "0x4000193")]
		Low,
		[Token(Token = "0x4000194")]
		Normal,
		[Token(Token = "0x4000195")]
		High
	}

	[Token(Token = "0x4000187")]
	[FieldOffset(Offset = "0x30")]
	public TiltShiftMode mode;

	[Token(Token = "0x4000188")]
	[FieldOffset(Offset = "0x34")]
	public TiltShiftQuality quality;

	[Token(Token = "0x4000189")]
	[FieldOffset(Offset = "0x38")]
	[Range(0f, 15f)]
	public float blurArea;

	[Token(Token = "0x400018A")]
	[FieldOffset(Offset = "0x3C")]
	[Range(0f, 25f)]
	public float maxBlurSize;

	[Token(Token = "0x400018B")]
	[FieldOffset(Offset = "0x40")]
	[Range(0f, 1f)]
	public int downsample;

	[Token(Token = "0x400018C")]
	[FieldOffset(Offset = "0x48")]
	public Shader tiltShiftShader;

	[Token(Token = "0x400018D")]
	[FieldOffset(Offset = "0x50")]
	private Material tiltShiftMaterial;

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x44886B0", Offset = "0x44886B0", VA = "0x44886B0", Slot = "4")]
	public override bool CheckResources()
	{
		return default(bool);
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x4488710", Offset = "0x4488710", VA = "0x4488710")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x4488990", Offset = "0x4488990", VA = "0x4488990")]
	public TiltShift()
	{
	}
}
