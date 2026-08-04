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

[Token(Token = "0x20000AE")]
public sealed class GisketchBrushButtonIntroReveal : MonoBehaviour
{
	[Token(Token = "0x4000384")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _mask;

	[Token(Token = "0x4000385")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _content;

	[Token(Token = "0x4000386")]
	[FieldOffset(Offset = "0x30")]
	private Mask _maskComponent;

	[Token(Token = "0x4000387")]
	[FieldOffset(Offset = "0x38")]
	private Image _maskImage;

	[Token(Token = "0x6000514")]
	[Address(RVA = "0x3A92AF0", Offset = "0x3A92AF0", VA = "0x3A92AF0")]
	public void Setup(RectTransform mask, RectTransform content, Sprite brushSprite)
	{
	}

	[Token(Token = "0x6000515")]
	[Address(RVA = "0x3A92D10", Offset = "0x3A92D10", VA = "0x3A92D10")]
	public Tween Play(float duration)
	{
		return null;
	}

	[Token(Token = "0x6000516")]
	[Address(RVA = "0x3A93060", Offset = "0x3A93060", VA = "0x3A93060")]
	public GisketchBrushButtonIntroReveal()
	{
	}
}
