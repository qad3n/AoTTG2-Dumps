// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateHierarchyTransition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using DG.Tweening;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000209")]
internal static class AottgGameCreateHierarchyTransition
{
	[Token(Token = "0x4000AE2")]
	private const float Duration = 0.1f;

	[Token(Token = "0x4000AE3")]
	private const float HandoffDuration = 0.16f;

	[Token(Token = "0x4000AE4")]
	private const float HandoffSettleDelay = 0.03f;

	[Token(Token = "0x4000AE5")]
	[FieldOffset(Offset = "0x0")]
	private static bool _playing;

	[Token(Token = "0x6000BFA")]
	[Address(RVA = "0x23C71C0", Offset = "0x23C57C0", VA = "0x1823C71C0")]
	public static bool Play(GameObject source, string targetId, Action completed)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x23C6D90", Offset = "0x23C5390", VA = "0x1823C6D90")]
	private static RectTransform FindTile(Transform source)
	{
		return null;
	}

	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x23C5450", Offset = "0x23C3A50", VA = "0x1823C5450")]
	private static void ContinueIntoCompactButton(Transform root, string targetId, Vector3 startPosition, GameObject preservedTile)
	{
	}

	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x23C7090", Offset = "0x23C5690", VA = "0x1823C7090")]
	private static void HideRebuiltTarget(Transform root, string targetId)
	{
	}

	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x23C5DC0", Offset = "0x23C43C0", VA = "0x1823C5DC0")]
	private static GameObject CreatePreservedTile(RectTransform selected, Transform root)
	{
		return null;
	}

	[Token(Token = "0x6000BFF")]
	[Address(RVA = "0x23C6D10", Offset = "0x23C5310", VA = "0x1823C6D10")]
	private static GisketchLogoMotionBlur FindPreservedBlur(GameObject preservedTile)
	{
		return null;
	}

	[Token(Token = "0x6000C00")]
	[Address(RVA = "0x23C6A90", Offset = "0x23C5090", VA = "0x1823C6A90")]
	private static Transform FindActiveByName(Transform parent, string name)
	{
		return null;
	}

	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x23C5240", Offset = "0x23C3840", VA = "0x1823C5240")]
	private static void AddOuterCollapse(Sequence sequence, RectTransform tile)
	{
	}

	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x23C6BC0", Offset = "0x23C51C0", VA = "0x1823C6BC0")]
	private static CanvasGroup FindLabelGroup(RectTransform tile)
	{
		return null;
	}

	[Token(Token = "0x6000C03")]
	[Address(RVA = "0x23C6E60", Offset = "0x23C5460", VA = "0x1823C6E60")]
	private static GisketchLogoMotionBlur FindVisualBlur(RectTransform tile)
	{
		return null;
	}

	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x23C80E0", Offset = "0x23C66E0", VA = "0x1823C80E0")]
	private static void StartBackgroundBlend(RectTransform tile)
	{
	}

	[Token(Token = "0x6000C05")]
	[Address(RVA = "0x23C60A0", Offset = "0x23C46A0", VA = "0x1823C60A0")]
	private static CanvasGroup CreateShearVisual(RectTransform tile, float rise, Sequence sequence)
	{
		return null;
	}

	[Token(Token = "0x6000C06")]
	[Address(RVA = "0x23C6F50", Offset = "0x23C5550", VA = "0x1823C6F50")]
	private static Image FindVisual(RectTransform tile)
	{
		return null;
	}
}
