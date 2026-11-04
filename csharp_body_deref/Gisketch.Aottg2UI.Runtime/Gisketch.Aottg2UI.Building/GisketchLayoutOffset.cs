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

[Token(Token = "0x20000A5")]
[ExecuteAlways]
internal sealed class GisketchLayoutOffset : MonoBehaviour
{
	[Token(Token = "0x4000370")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _rect;

	[Token(Token = "0x4000371")]
	[FieldOffset(Offset = "0x28")]
	private Vector2 _layoutOffset;

	[Token(Token = "0x4000372")]
	[FieldOffset(Offset = "0x30")]
	private Vector2 _motionOffset;

	[Token(Token = "0x4000373")]
	[FieldOffset(Offset = "0x38")]
	private Vector2 _basePosition;

	[Token(Token = "0x4000374")]
	[FieldOffset(Offset = "0x40")]
	private Vector2 _lastOffset;

	[Token(Token = "0x4000375")]
	[FieldOffset(Offset = "0x48")]
	private bool _hasBase;

	[Token(Token = "0x17000099")]
	public Vector2 MotionOffset
	{
		[Token(Token = "0x60004EE")]
		[Address(RVA = "0x18DAD90", Offset = "0x18D9390", VA = "0x1818DAD90")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x18DABC0", Offset = "0x18D91C0", VA = "0x1818DABC0")]
	public static GisketchLayoutOffset For(RectTransform rect)
	{
		return null;
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x18DAD20", Offset = "0x18D9320", VA = "0x1818DAD20")]
	public void Setup(Vector2 offset)
	{
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x18DAD10", Offset = "0x18D9310", VA = "0x1818DAD10")]
	public void SetMotionOffset(Vector2 offset)
	{
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x18DAD00", Offset = "0x18D9300", VA = "0x1818DAD00")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x18DAA30", Offset = "0x18D9030", VA = "0x1818DAA30")]
	private void Apply()
	{
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public GisketchLayoutOffset()
	{
	}
}
