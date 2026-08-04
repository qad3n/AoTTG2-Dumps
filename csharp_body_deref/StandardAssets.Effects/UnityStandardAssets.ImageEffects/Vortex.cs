// ==================== AoTTG2 cross-reference ====================
// Type: UnityStandardAssets.ImageEffects.Vortex
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UnityStandardAssets/ImageEffects/Vortex.c
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/Vortex.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x448A8C0", Offset = "0x448A8C0", VA = "0x448A8C0")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x448A900", Offset = "0x448A900", VA = "0x448A900")]
	public Vortex()
	{
	}
}
