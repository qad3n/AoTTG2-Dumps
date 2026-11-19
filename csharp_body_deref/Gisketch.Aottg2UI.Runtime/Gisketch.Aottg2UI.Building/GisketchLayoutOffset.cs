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

[Token(Token = "0x20000AB")]
[ExecuteAlways]
internal sealed class GisketchLayoutOffset : MonoBehaviour
{
	[Token(Token = "0x4000397")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _rect;

	[Token(Token = "0x4000398")]
	[FieldOffset(Offset = "0x28")]
	private Vector2 _layoutOffset;

	[Token(Token = "0x4000399")]
	[FieldOffset(Offset = "0x30")]
	private Vector2 _motionOffset;

	[Token(Token = "0x400039A")]
	[FieldOffset(Offset = "0x38")]
	private Vector2 _basePosition;

	[Token(Token = "0x400039B")]
	[FieldOffset(Offset = "0x40")]
	private Vector2 _lastOffset;

	[Token(Token = "0x400039C")]
	[FieldOffset(Offset = "0x48")]
	private bool _hasBase;

	[Token(Token = "0x17000099")]
	public Vector2 MotionOffset
	{
		[Token(Token = "0x600053B")]
		[Address(RVA = "0x527B970", Offset = "0x527A970", VA = "0x527B970")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x527B980", Offset = "0x527A980", VA = "0x527B980")]
	public static GisketchLayoutOffset For(RectTransform rect)
	{
		return null;
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x527BB00", Offset = "0x527AB00", VA = "0x527BB00")]
	public void Setup(Vector2 offset)
	{
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x527BCD0", Offset = "0x527ACD0", VA = "0x527BCD0")]
	public void SetMotionOffset(Vector2 offset)
	{
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x527BCE0", Offset = "0x527ACE0", VA = "0x527BCE0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x527BB60", Offset = "0x527AB60", VA = "0x527BB60")]
	private void Apply()
	{
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x527BCF0", Offset = "0x527ACF0", VA = "0x527BCF0")]
	public GisketchLayoutOffset()
	{
	}
}
