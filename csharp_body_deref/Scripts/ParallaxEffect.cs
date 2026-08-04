// ==================== AoTTG2 cross-reference ====================
// Type: ParallaxEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ParallaxEffect.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/ParallaxEffect.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3F64150", Offset = "0x3F64150", VA = "0x3F64150")]
	private void Awake()
	{
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x3F64230", Offset = "0x3F64230", VA = "0x3F64230")]
	private void Update()
	{
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x3F64500", Offset = "0x3F64500", VA = "0x3F64500")]
	private Vector2 GetConstrainedTargetPosition(Vector2 mousePosition)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x3F64600", Offset = "0x3F64600", VA = "0x3F64600")]
	private Vector2 ClampPosition(Vector2 position)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x3F646D0", Offset = "0x3F646D0", VA = "0x3F646D0")]
	private float MapRange(float value, float fromSource, float toSource, float fromTarget, float toTarget)
	{
		return default(float);
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x3F646F0", Offset = "0x3F646F0", VA = "0x3F646F0")]
	public ParallaxEffect()
	{
	}
}
