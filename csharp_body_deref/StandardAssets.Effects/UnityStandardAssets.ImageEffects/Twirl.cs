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
	[Address(RVA = "0x4165010", Offset = "0x4165010", VA = "0x4165010")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x4165050", Offset = "0x4165050", VA = "0x4165050")]
	public Twirl()
	{
	}
}
