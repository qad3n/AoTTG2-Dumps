// ==================== AoTTG2 cross-reference ====================
// Type: ParallaxEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ParallaxEffect.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/ParallaxEffect.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000023")]
public class ParallaxEffect : MonoBehaviour
{
	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x20")]
	public float parallaxIntensity;

	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x24")]
	public float smoothTime;

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x28")]
	public float scale;

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x2C")]
	private Vector2 currentVelocity;

	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform rectTransform;

	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0x40")]
	private Vector2 lastValidMousePosition;

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x574DD80", Offset = "0x574CD80", VA = "0x574DD80")]
	private void Awake()
	{
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x574DE60", Offset = "0x574CE60", VA = "0x574DE60")]
	private void Update()
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x574E0B0", Offset = "0x574D0B0", VA = "0x574E0B0")]
	private Vector2 GetConstrainedTargetPosition(Vector2 mousePosition)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x574E160", Offset = "0x574D160", VA = "0x574E160")]
	private Vector2 ClampPosition(Vector2 position)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x574E1F0", Offset = "0x574D1F0", VA = "0x574E1F0")]
	private float MapRange(float value, float fromSource, float toSource, float fromTarget, float toTarget)
	{
		return default(float);
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x574E210", Offset = "0x574D210", VA = "0x574E210")]
	public ParallaxEffect()
	{
	}
}
