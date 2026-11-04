// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000052")]
public sealed class GisketchTooltipTrigger : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, IPointerMoveHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x4000193")]
	public const string OverflowLabelMode = "OverflowLabel";

	[Token(Token = "0x4000194")]
	private const float MaxWidth = 420f;

	[Token(Token = "0x4000195")]
	private const float DefaultPadding = 12f;

	[Token(Token = "0x4000196")]
	private const float AnchorGap = 8f;

	[Token(Token = "0x4000197")]
	private const int TooltipSortingOrder = 950;

	[Token(Token = "0x4000198")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Vector2 PointerOffset;

	[Token(Token = "0x4000199")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly List<GisketchTooltipTrigger> Showing;

	[Token(Token = "0x400019A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string _text;

	[Token(Token = "0x400019B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private GisketchTheme _theme;

	[Token(Token = "0x400019C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private GameObject _tooltip;

	[Token(Token = "0x400019D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private RectTransform _tooltipRect;

	[Token(Token = "0x400019E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private CanvasGroup _group;

	[Token(Token = "0x400019F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Tween _tween;

	[Token(Token = "0x40001A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private Vector2 _tooltipSize;

	[Token(Token = "0x40001A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private Canvas _placementCanvas;

	[Token(Token = "0x40001A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private string _mode;

	[Token(Token = "0x17000049")]
	private bool IsOverflowLabel
	{
		[Token(Token = "0x60002EC")]
		[Address(RVA = "0x18D50B0", Offset = "0x18D36B0", VA = "0x1818D50B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x18D4220", Offset = "0x18D2820", VA = "0x1818D4220")]
	public void Setup(string text, [Optional] GisketchTheme theme, [Optional] string mode)
	{
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x18D31D0", Offset = "0x18D17D0", VA = "0x1818D31D0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x18D31B0", Offset = "0x18D17B0", VA = "0x1818D31B0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x18D3270", Offset = "0x18D1870", VA = "0x1818D3270", Slot = "6")]
	public void OnPointerMove(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x18D32F0", Offset = "0x18D18F0", VA = "0x1818D32F0", Slot = "7")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x18D31B0", Offset = "0x18D17B0", VA = "0x1818D31B0", Slot = "8")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x18D42C0", Offset = "0x18D28C0", VA = "0x1818D42C0")]
	private void ShowTooltip()
	{
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x18D4EB0", Offset = "0x18D34B0", VA = "0x1818D4EB0")]
	private bool Style(string name, out GisketchStyleDefinition style)
	{
		return default(bool);
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x18D4190", Offset = "0x18D2790", VA = "0x1818D4190")]
	private static void PromoteTooltip(GameObject tooltip, Canvas parentCanvas)
	{
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x18D23A0", Offset = "0x18D09A0", VA = "0x1818D23A0")]
	private void ApplyShadow(GameObject go, GisketchStyleDefinition style)
	{
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x18D3050", Offset = "0x18D1650", VA = "0x1818D3050")]
	private void MoveTooltip(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x18D2D60", Offset = "0x18D1360", VA = "0x1818D2D60")]
	private void MoveTooltipToTarget()
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x18D4F40", Offset = "0x18D3540", VA = "0x1818D4F40")]
	private static Vector2 TooltipSize(TextMeshProUGUI label, float padding)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x18D2480", Offset = "0x18D0A80", VA = "0x1818D2480")]
	private bool CanShowTooltip()
	{
		return default(bool);
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x18D29D0", Offset = "0x18D0FD0", VA = "0x1818D29D0")]
	internal static bool IsOverflowing(TMP_Text text)
	{
		return default(bool);
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x18D29B0", Offset = "0x18D0FB0", VA = "0x1818D29B0")]
	internal static bool IsOverflowing(float preferredWidth, float availableWidth)
	{
		return default(bool);
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x18D3BC0", Offset = "0x18D21C0", VA = "0x1818D3BC0")]
	private void PlayEnter()
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x18D3E90", Offset = "0x18D2490", VA = "0x1818D3E90")]
	private void PlayExit()
	{
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x18D2860", Offset = "0x18D0E60", VA = "0x1818D2860")]
	public static void HideWithin(Transform root)
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x18D26B0", Offset = "0x18D0CB0", VA = "0x1818D26B0")]
	private void DestroyTooltip()
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x18D3900", Offset = "0x18D1F00", VA = "0x1818D3900")]
	private static void PlaceTooltip(Canvas canvas, Vector2 screenPosition, Vector2 size, RectTransform tooltip)
	{
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x18D3340", Offset = "0x18D1940", VA = "0x1818D3340")]
	private void PlaceAnchoredTooltip(Canvas canvas, RectTransform target, Vector2 size, RectTransform tooltip)
	{
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x18D2B70", Offset = "0x18D1170", VA = "0x1818D2B70")]
	private static Rect LocalRect(RectTransform canvas, RectTransform target)
	{
		return default(Rect);
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x18D2180", Offset = "0x18D0780", VA = "0x1818D2180")]
	internal static Vector2 AnchoredPosition(Rect bounds, Vector2 targetTop, Vector2 targetBottom, Vector2 size, out bool placedBelow)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x18D31C0", Offset = "0x18D17C0", VA = "0x1818D31C0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x18D31C0", Offset = "0x18D17C0", VA = "0x1818D31C0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public GisketchTooltipTrigger()
	{
	}
}
