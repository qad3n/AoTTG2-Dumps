// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchBrushButtonIntroReveal
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchBrushButtonIntroReveal.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using DG.Tweening;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000D5")]
public sealed class GisketchBrushButtonIntroReveal : MonoBehaviour
{
	[Token(Token = "0x4000463")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _mask;

	[Token(Token = "0x4000464")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _content;

	[Token(Token = "0x4000465")]
	[FieldOffset(Offset = "0x30")]
	private Mask _maskComponent;

	[Token(Token = "0x4000466")]
	[FieldOffset(Offset = "0x38")]
	private Image _maskImage;

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x529DF40", Offset = "0x529CF40", VA = "0x529DF40")]
	public void Setup(RectTransform mask, RectTransform content, Sprite brushSprite)
	{
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x529E160", Offset = "0x529D160", VA = "0x529E160")]
	public Tween Play(float duration)
	{
		return null;
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x529E4E0", Offset = "0x529D4E0", VA = "0x529E4E0")]
	public GisketchBrushButtonIntroReveal()
	{
	}
}
