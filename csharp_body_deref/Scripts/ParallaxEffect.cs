// ==================== AoTTG2 cross-reference ====================
// Type: ParallaxEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ParallaxEffect.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/ParallaxEffect.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000024")]
public class ParallaxEffect : MonoBehaviour
{
	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x20")]
	public float parallaxIntensity;

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x24")]
	public float smoothTime;

	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x28")]
	public float scale;

	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0x2C")]
	private Vector2 currentVelocity;

	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform rectTransform;

	[Token(Token = "0x40000CC")]
	[FieldOffset(Offset = "0x40")]
	private Vector2 lastValidMousePosition;

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x1DAB910", Offset = "0x1DA9F10", VA = "0x181DAB910")]
	private void Awake()
	{
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x1DABC70", Offset = "0x1DAA270", VA = "0x181DABC70")]
	private void Update()
	{
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x1DABB00", Offset = "0x1DAA100", VA = "0x181DABB00")]
	private Vector2 GetConstrainedTargetPosition(Vector2 mousePosition)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x1DABA20", Offset = "0x1DAA020", VA = "0x181DABA20")]
	private Vector2 ClampPosition(Vector2 position)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x1DABC40", Offset = "0x1DAA240", VA = "0x181DABC40")]
	private float MapRange(float value, float fromSource, float toSource, float fromTarget, float toTarget)
	{
		return default(float);
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x1DABF80", Offset = "0x1DAA580", VA = "0x181DABF80")]
	public ParallaxEffect()
	{
	}
}
