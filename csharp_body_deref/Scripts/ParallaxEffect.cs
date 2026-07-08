using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000022")]
public class ParallaxEffect : MonoBehaviour
{
	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0x20")]
	public float parallaxIntensity;

	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x24")]
	public float smoothTime;

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x28")]
	public float scale;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x2C")]
	private Vector2 currentVelocity;

	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform rectTransform;

	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0x40")]
	private Vector2 lastValidMousePosition;

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x3C6E800", Offset = "0x3C6E800", VA = "0x3C6E800")]
	private void Awake()
	{
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x3C6E8E0", Offset = "0x3C6E8E0", VA = "0x3C6E8E0")]
	private void Update()
	{
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x3C6EBB0", Offset = "0x3C6EBB0", VA = "0x3C6EBB0")]
	private Vector2 GetConstrainedTargetPosition(Vector2 mousePosition)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x3C6ECB0", Offset = "0x3C6ECB0", VA = "0x3C6ECB0")]
	private Vector2 ClampPosition(Vector2 position)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x3C6ED80", Offset = "0x3C6ED80", VA = "0x3C6ED80")]
	private float MapRange(float value, float fromSource, float toSource, float fromTarget, float toTarget)
	{
		return default(float);
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x3C6EDA0", Offset = "0x3C6EDA0", VA = "0x3C6EDA0")]
	public ParallaxEffect()
	{
	}
}
