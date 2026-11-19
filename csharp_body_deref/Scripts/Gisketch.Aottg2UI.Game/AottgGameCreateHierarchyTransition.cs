// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateHierarchyTransition
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000224")]
internal static class AottgGameCreateHierarchyTransition
{
	[Token(Token = "0x4000B66")]
	private const float Duration = 0.1f;

	[Token(Token = "0x4000B67")]
	private const float HandoffDuration = 0.16f;

	[Token(Token = "0x4000B68")]
	private const float HandoffSettleDelay = 0.03f;

	[Token(Token = "0x4000B69")]
	[FieldOffset(Offset = "0x0")]
	private static bool _playing;

	[Token(Token = "0x6000CC7")]
	[Address(RVA = "0x5D93900", Offset = "0x5D92900", VA = "0x5D93900")]
	public static bool Play(GameObject source, string targetId, Action completed)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC8")]
	[Address(RVA = "0x5D94790", Offset = "0x5D93790", VA = "0x5D94790")]
	private static RectTransform FindTile(Transform source)
	{
		return null;
	}

	[Token(Token = "0x6000CC9")]
	[Address(RVA = "0x5D95BE0", Offset = "0x5D94BE0", VA = "0x5D95BE0")]
	private static void ContinueIntoCompactButton(Transform root, string targetId, Vector3 startPosition, GameObject preservedTile)
	{
	}

	[Token(Token = "0x6000CCA")]
	[Address(RVA = "0x5D96750", Offset = "0x5D95750", VA = "0x5D96750")]
	private static void HideRebuiltTarget(Transform root, string targetId)
	{
	}

	[Token(Token = "0x6000CCB")]
	[Address(RVA = "0x5D968A0", Offset = "0x5D958A0", VA = "0x5D968A0")]
	private static GameObject CreatePreservedTile(RectTransform selected, Transform root)
	{
		return null;
	}

	[Token(Token = "0x6000CCC")]
	[Address(RVA = "0x5D966C0", Offset = "0x5D956C0", VA = "0x5D966C0")]
	private static GisketchLogoMotionBlur FindPreservedBlur(GameObject preservedTile)
	{
		return null;
	}

	[Token(Token = "0x6000CCD")]
	[Address(RVA = "0x5D96590", Offset = "0x5D95590", VA = "0x5D96590")]
	private static Transform FindActiveByName(Transform parent, string name)
	{
		return null;
	}

	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x5D959E0", Offset = "0x5D949E0", VA = "0x5D959E0")]
	private static void AddOuterCollapse(Sequence sequence, RectTransform tile)
	{
	}

	[Token(Token = "0x6000CCF")]
	[Address(RVA = "0x5D94E80", Offset = "0x5D93E80", VA = "0x5D94E80")]
	private static CanvasGroup FindLabelGroup(RectTransform tile)
	{
		return null;
	}

	[Token(Token = "0x6000CD0")]
	[Address(RVA = "0x5D94FD0", Offset = "0x5D93FD0", VA = "0x5D94FD0")]
	private static GisketchLogoMotionBlur FindVisualBlur(RectTransform tile)
	{
		return null;
	}

	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x5D94860", Offset = "0x5D93860", VA = "0x5D94860")]
	private static void StartBackgroundBlend(RectTransform tile)
	{
	}

	[Token(Token = "0x6000CD2")]
	[Address(RVA = "0x5D950B0", Offset = "0x5D940B0", VA = "0x5D950B0")]
	private static CanvasGroup CreateShearVisual(RectTransform tile, float rise, Sequence sequence)
	{
		return null;
	}

	[Token(Token = "0x6000CD3")]
	[Address(RVA = "0x5D96B90", Offset = "0x5D95B90", VA = "0x5D96B90")]
	private static Image FindVisual(RectTransform tile)
	{
		return null;
	}
}
