// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMobileMenuSafeArea
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMobileMenuSafeArea.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002BA")]
internal sealed class AottgMobileMenuSafeArea : MonoBehaviour
{
	[Token(Token = "0x4000DE2")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _content;

	[Token(Token = "0x4000DE3")]
	[FieldOffset(Offset = "0x28")]
	private int _childCount;

	[Token(Token = "0x4000DE4")]
	[FieldOffset(Offset = "0x2C")]
	private float _inset;

	[Token(Token = "0x6001082")]
	[Address(RVA = "0x57C46F0", Offset = "0x57C36F0", VA = "0x57C46F0")]
	internal static float HorizontalInset()
	{
		return default(float);
	}

	[Token(Token = "0x6001083")]
	[Address(RVA = "0x57C4810", Offset = "0x57C3810", VA = "0x57C4810")]
	internal static void ApplyInset(RectTransform rect, float inset)
	{
	}

	[Token(Token = "0x6001084")]
	[Address(RVA = "0x57C48B0", Offset = "0x57C38B0", VA = "0x57C48B0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6001085")]
	[Address(RVA = "0x57C4E90", Offset = "0x57C3E90", VA = "0x57C4E90")]
	public AottgMobileMenuSafeArea()
	{
	}
}
