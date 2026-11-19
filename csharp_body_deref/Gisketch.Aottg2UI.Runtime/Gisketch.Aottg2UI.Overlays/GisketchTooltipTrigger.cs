// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using DG.Tweening;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Overlays;

[Token(Token = "0x2000059")]
public sealed class GisketchTooltipTrigger : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, IPointerMoveHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x40001B8")]
	public const string OverflowLabelMode = "OverflowLabel";

	[Token(Token = "0x40001B9")]
	private const float MaxWidth = 420f;

	[Token(Token = "0x40001BA")]
	private const float DefaultPadding = 12f;

	[Token(Token = "0x40001BB")]
	private const float AnchorGap = 8f;

	[Token(Token = "0x40001BC")]
	private const int TooltipSortingOrder = 950;

	[Token(Token = "0x40001BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Vector2 PointerOffset;

	[Token(Token = "0x40001BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly List<GisketchTooltipTrigger> Showing;

	[Token(Token = "0x40001BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string _text;

	[Token(Token = "0x40001C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private GisketchTheme _theme;

	[Token(Token = "0x40001C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private GameObject _tooltip;

	[Token(Token = "0x40001C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private RectTransform _tooltipRect;

	[Token(Token = "0x40001C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private CanvasGroup _group;

	[Token(Token = "0x40001C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Tween _tween;

	[Token(Token = "0x40001C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private Vector2 _tooltipSize;

	[Token(Token = "0x40001C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private Canvas _placementCanvas;

	[Token(Token = "0x40001C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private string _mode;

	[Token(Token = "0x17000049")]
	private bool IsOverflowLabel
	{
		[Token(Token = "0x6000338")]
		[Address(RVA = "0x525E340", Offset = "0x525D340", VA = "0x525E340")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x525D720", Offset = "0x525C720", VA = "0x525D720")]
	public void Setup(string text, [Optional] GisketchTheme theme, [Optional] string mode)
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x525D7C0", Offset = "0x525C7C0", VA = "0x525D7C0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x525E710", Offset = "0x525D710", VA = "0x525E710", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x525EA30", Offset = "0x525DA30", VA = "0x525EA30", Slot = "6")]
	public void OnPointerMove(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x525EAA0", Offset = "0x525DAA0", VA = "0x525EAA0", Slot = "7")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x525EAD0", Offset = "0x525DAD0", VA = "0x525EAD0", Slot = "8")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x525D900", Offset = "0x525C900", VA = "0x525D900")]
	private void ShowTooltip()
	{
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x525EB60", Offset = "0x525DB60", VA = "0x525EB60")]
	private bool Style(string name, out GisketchStyleDefinition style)
	{
		return default(bool);
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x525EAE0", Offset = "0x525DAE0", VA = "0x525EAE0")]
	private static void PromoteTooltip(GameObject tooltip, Canvas parentCanvas)
	{
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x525EBE0", Offset = "0x525DBE0", VA = "0x525EBE0")]
	private void ApplyShadow(GameObject go, GisketchStyleDefinition style)
	{
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x525E5E0", Offset = "0x525D5E0", VA = "0x525E5E0")]
	private void MoveTooltip(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x525E380", Offset = "0x525D380", VA = "0x525E380")]
	private void MoveTooltipToTarget()
	{
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x525EC90", Offset = "0x525DC90", VA = "0x525EC90")]
	private static Vector2 TooltipSize(TextMeshProUGUI label, float padding)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x525D850", Offset = "0x525C850", VA = "0x525D850")]
	private bool CanShowTooltip()
	{
		return default(bool);
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x525F540", Offset = "0x525E540", VA = "0x525F540")]
	internal static bool IsOverflowing(TMP_Text text)
	{
		return default(bool);
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x525F6E0", Offset = "0x525E6E0", VA = "0x525F6E0")]
	internal static bool IsOverflowing(float preferredWidth, float availableWidth)
	{
		return default(bool);
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x525ED20", Offset = "0x525DD20", VA = "0x525ED20")]
	private void PlayEnter()
	{
	}

	[Token(Token = "0x600033D")]
	[Address(RVA = "0x525E720", Offset = "0x525D720", VA = "0x525E720")]
	private void PlayExit()
	{
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x525F8F0", Offset = "0x525E8F0", VA = "0x525F8F0")]
	public static void HideWithin(Transform root)
	{
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x525F710", Offset = "0x525E710", VA = "0x525F710")]
	private void DestroyTooltip()
	{
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x525EFE0", Offset = "0x525DFE0", VA = "0x525EFE0")]
	private static void PlaceTooltip(Canvas canvas, Vector2 screenPosition, Vector2 size, RectTransform tooltip)
	{
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x525F230", Offset = "0x525E230", VA = "0x525F230")]
	private void PlaceAnchoredTooltip(Canvas canvas, RectTransform target, Vector2 size, RectTransform tooltip)
	{
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x525FA50", Offset = "0x525EA50", VA = "0x525FA50")]
	private static Rect LocalRect(RectTransform canvas, RectTransform target)
	{
		return default(Rect);
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x525FBA0", Offset = "0x525EBA0", VA = "0x525FBA0")]
	internal static Vector2 AnchoredPosition(Rect bounds, Vector2 targetTop, Vector2 targetBottom, Vector2 size, out bool placedBelow)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x525FE20", Offset = "0x525EE20", VA = "0x525FE20")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x525FE30", Offset = "0x525EE30", VA = "0x525FE30")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x525FE40", Offset = "0x525EE40", VA = "0x525FE40")]
	public GisketchTooltipTrigger()
	{
	}
}
