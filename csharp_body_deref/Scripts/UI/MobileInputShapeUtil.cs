// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputShapeUtil
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputShapeUtil.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000750")]
internal static class MobileInputShapeUtil
{
	[Token(Token = "0x40024F0")]
	[FieldOffset(Offset = "0x0")]
	private static Sprite _circleSprite;

	[Token(Token = "0x40024F1")]
	[FieldOffset(Offset = "0x8")]
	private static Sprite _diamondSprite;

	[Token(Token = "0x60046D8")]
	[Address(RVA = "0x5B73890", Offset = "0x5B72890", VA = "0x5B73890")]
	public static void ApplyShape(Image image, MobileInputControlShape shape)
	{
	}

	[Token(Token = "0x60046D9")]
	[Address(RVA = "0x5B73940", Offset = "0x5B72940", VA = "0x5B73940")]
	private static Sprite GetCircleSprite()
	{
		return null;
	}

	[Token(Token = "0x60046DA")]
	[Address(RVA = "0x5B73BB0", Offset = "0x5B72BB0", VA = "0x5B73BB0")]
	private static Sprite GetDiamondSprite()
	{
		return null;
	}
}
