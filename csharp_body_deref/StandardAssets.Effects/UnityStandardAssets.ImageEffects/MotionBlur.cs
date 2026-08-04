// ==================== AoTTG2 cross-reference ====================
// Type: UnityStandardAssets.ImageEffects.MotionBlur
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UnityStandardAssets/ImageEffects/MotionBlur.c
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/MotionBlur.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x2000027")]
[ExecuteInEditMode]
[AddComponentMenu("Image Effects/Blur/Motion Blur (Color Accumulation)")]
[RequireComponent(typeof(Camera))]
public class MotionBlur : ImageEffectBase
{
	[Token(Token = "0x4000123")]
	[FieldOffset(Offset = "0x30")]
	[Range(0f, 0.92f)]
	public float blurAmount;

	[Token(Token = "0x4000124")]
	[FieldOffset(Offset = "0x34")]
	public bool extraBlur;

	[Token(Token = "0x4000125")]
	[FieldOffset(Offset = "0x38")]
	private RenderTexture accumTexture;

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x44831F0", Offset = "0x44831F0", VA = "0x44831F0", Slot = "4")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x4483200", Offset = "0x4483200", VA = "0x4483200", Slot = "5")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x44832B0", Offset = "0x44832B0", VA = "0x44832B0")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x4483620", Offset = "0x4483620", VA = "0x4483620")]
	public MotionBlur()
	{
	}
}
