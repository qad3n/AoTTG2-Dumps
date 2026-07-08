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
	[Address(RVA = "0x41635B0", Offset = "0x41635B0", VA = "0x41635B0", Slot = "4")]
	public override bool CheckResources()
	{
		return default(bool);
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x4163610", Offset = "0x4163610", VA = "0x4163610")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x4163890", Offset = "0x4163890", VA = "0x4163890")]
	public TiltShift()
	{
	}
}
