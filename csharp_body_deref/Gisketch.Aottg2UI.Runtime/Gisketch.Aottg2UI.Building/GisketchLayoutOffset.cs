using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x2000089")]
[ExecuteAlways]
internal sealed class GisketchLayoutOffset : MonoBehaviour
{
	[Token(Token = "0x40002C3")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _rect;

	[Token(Token = "0x40002C4")]
	[FieldOffset(Offset = "0x28")]
	private Vector2 _layoutOffset;

	[Token(Token = "0x40002C5")]
	[FieldOffset(Offset = "0x30")]
	private Vector2 _motionOffset;

	[Token(Token = "0x40002C6")]
	[FieldOffset(Offset = "0x38")]
	private Vector2 _basePosition;

	[Token(Token = "0x40002C7")]
	[FieldOffset(Offset = "0x40")]
	private Vector2 _lastOffset;

	[Token(Token = "0x40002C8")]
	[FieldOffset(Offset = "0x48")]
	private bool _hasBase;

	[Token(Token = "0x1700006C")]
	public Vector2 MotionOffset
	{
		[Token(Token = "0x60003B5")]
		[Address(RVA = "0x3A07710", Offset = "0x3A07710", VA = "0x3A07710")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x3A07720", Offset = "0x3A07720", VA = "0x3A07720")]
	public static GisketchLayoutOffset For(RectTransform rect)
	{
		return null;
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x3A07890", Offset = "0x3A07890", VA = "0x3A07890")]
	public void Setup(Vector2 offset)
	{
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x3A07A60", Offset = "0x3A07A60", VA = "0x3A07A60")]
	public void SetMotionOffset(Vector2 offset)
	{
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x3A07A70", Offset = "0x3A07A70", VA = "0x3A07A70")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x3A078F0", Offset = "0x3A078F0", VA = "0x3A078F0")]
	private void Apply()
	{
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x3A07A80", Offset = "0x3A07A80", VA = "0x3A07A80")]
	public GisketchLayoutOffset()
	{
	}
}
