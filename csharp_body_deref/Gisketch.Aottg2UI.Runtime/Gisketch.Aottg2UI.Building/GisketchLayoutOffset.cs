// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchLayoutOffset
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchLayoutOffset.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x200008C")]
[ExecuteAlways]
internal sealed class GisketchLayoutOffset : MonoBehaviour
{
	[Token(Token = "0x40002DF")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _rect;

	[Token(Token = "0x40002E0")]
	[FieldOffset(Offset = "0x28")]
	private Vector2 _layoutOffset;

	[Token(Token = "0x40002E1")]
	[FieldOffset(Offset = "0x30")]
	private Vector2 _motionOffset;

	[Token(Token = "0x40002E2")]
	[FieldOffset(Offset = "0x38")]
	private Vector2 _basePosition;

	[Token(Token = "0x40002E3")]
	[FieldOffset(Offset = "0x40")]
	private Vector2 _lastOffset;

	[Token(Token = "0x40002E4")]
	[FieldOffset(Offset = "0x48")]
	private bool _hasBase;

	[Token(Token = "0x1700006E")]
	public Vector2 MotionOffset
	{
		[Token(Token = "0x60003D5")]
		[Address(RVA = "0x3A736D0", Offset = "0x3A736D0", VA = "0x3A736D0")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x3A736E0", Offset = "0x3A736E0", VA = "0x3A736E0")]
	public static GisketchLayoutOffset For(RectTransform rect)
	{
		return null;
	}

	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x3A73850", Offset = "0x3A73850", VA = "0x3A73850")]
	public void Setup(Vector2 offset)
	{
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x3A73A20", Offset = "0x3A73A20", VA = "0x3A73A20")]
	public void SetMotionOffset(Vector2 offset)
	{
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x3A73A30", Offset = "0x3A73A30", VA = "0x3A73A30")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x3A738B0", Offset = "0x3A738B0", VA = "0x3A738B0")]
	private void Apply()
	{
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x3A73A40", Offset = "0x3A73A40", VA = "0x3A73A40")]
	public GisketchLayoutOffset()
	{
	}
}
