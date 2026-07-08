using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x2000040")]
[ExecuteInEditMode]
[AddComponentMenu("Image Effects/Displacement/Vortex")]
public class Vortex : ImageEffectBase
{
	[Token(Token = "0x40001C9")]
	[FieldOffset(Offset = "0x30")]
	public Vector2 radius;

	[Token(Token = "0x40001CA")]
	[FieldOffset(Offset = "0x38")]
	public float angle;

	[Token(Token = "0x40001CB")]
	[FieldOffset(Offset = "0x3C")]
	public Vector2 center;

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x41657C0", Offset = "0x41657C0", VA = "0x41657C0")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x4165800", Offset = "0x4165800", VA = "0x4165800")]
	public Vortex()
	{
	}
}
