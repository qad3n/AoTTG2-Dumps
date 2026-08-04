// ==================== AoTTG2 cross-reference ====================
// Type: UnityStandardAssets.ImageEffects.Twirl
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UnityStandardAssets/ImageEffects/Twirl.c
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/Twirl.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x200003D")]
[ExecuteInEditMode]
[AddComponentMenu("Image Effects/Displacement/Twirl")]
public class Twirl : ImageEffectBase
{
	[Token(Token = "0x40001B5")]
	[FieldOffset(Offset = "0x30")]
	public Vector2 radius;

	[Token(Token = "0x40001B6")]
	[FieldOffset(Offset = "0x38")]
	[Range(0f, 360f)]
	public float angle;

	[Token(Token = "0x40001B7")]
	[FieldOffset(Offset = "0x3C")]
	public Vector2 center;

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x448A110", Offset = "0x448A110", VA = "0x448A110")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x448A150", Offset = "0x448A150", VA = "0x448A150")]
	public Twirl()
	{
	}
}
