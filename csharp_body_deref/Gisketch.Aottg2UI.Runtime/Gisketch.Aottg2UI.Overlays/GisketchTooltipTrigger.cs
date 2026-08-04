// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Overlays/GisketchTooltipTrigger.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using DG.Tweening;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Overlays;

[Token(Token = "0x2000041")]
public sealed class GisketchTooltipTrigger : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, IPointerMoveHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x400013E")]
	private const float MaxWidth = 420f;

	[Token(Token = "0x400013F")]
	private const float DefaultPadding = 12f;

	[Token(Token = "0x4000140")]
	private const int TooltipSortingOrder = 950;

	[Token(Token = "0x4000141")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Vector2 PointerOffset;

	[Token(Token = "0x4000142")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string _text;

	[Token(Token = "0x4000143")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private GisketchTheme _theme;

	[Token(Token = "0x4000144")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private GameObject _tooltip;

	[Token(Token = "0x4000145")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private RectTransform _tooltipRect;

	[Token(Token = "0x4000146")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private CanvasGroup _group;

	[Token(Token = "0x4000147")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Tween _tween;

	[Token(Token = "0x4000148")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private Vector2 _tooltipSize;

	[Token(Token = "0x4000149")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private Canvas _placementCanvas;

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x3A584B0", Offset = "0x3A584B0", VA = "0x3A584B0")]
	public void Setup(string text, [Optional] GisketchTheme theme)
	{
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x3A58530", Offset = "0x3A58530", VA = "0x3A58530", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x3A59000", Offset = "0x3A59000", VA = "0x3A59000", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x3A59320", Offset = "0x3A59320", VA = "0x3A59320", Slot = "6")]
	public void OnPointerMove(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x3A59350", Offset = "0x3A59350", VA = "0x3A59350", Slot = "7")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x3A59530", Offset = "0x3A59530", VA = "0x3A59530", Slot = "8")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x3A58560", Offset = "0x3A58560", VA = "0x3A58560")]
	private void ShowTooltip()
	{
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x3A595B0", Offset = "0x3A595B0", VA = "0x3A595B0")]
	private bool Style(string name, out GisketchStyleDefinition style)
	{
		return default(bool);
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x3A59540", Offset = "0x3A59540", VA = "0x3A59540")]
	private static void PromoteTooltip(GameObject tooltip)
	{
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x3A59630", Offset = "0x3A59630", VA = "0x3A59630")]
	private void ApplyShadow(GameObject go, GisketchStyleDefinition style)
	{
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x3A58ED0", Offset = "0x3A58ED0", VA = "0x3A58ED0")]
	private void MoveTooltip(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x3A59370", Offset = "0x3A59370", VA = "0x3A59370")]
	private void MoveTooltipToTarget()
	{
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x3A596E0", Offset = "0x3A596E0", VA = "0x3A596E0")]
	private static Vector2 TooltipSize(TextMeshProUGUI label, float padding)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x3A59770", Offset = "0x3A59770", VA = "0x3A59770")]
	private void PlayEnter()
	{
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x3A59010", Offset = "0x3A59010", VA = "0x3A59010")]
	private void PlayExit()
	{
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x3A59C30", Offset = "0x3A59C30", VA = "0x3A59C30")]
	private void DestroyTooltip()
	{
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x3A59A30", Offset = "0x3A59A30", VA = "0x3A59A30")]
	private static void PlaceTooltip(Canvas canvas, Vector2 screenPosition, Vector2 size, RectTransform tooltip)
	{
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x3A59D30", Offset = "0x3A59D30", VA = "0x3A59D30")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x3A59D40", Offset = "0x3A59D40", VA = "0x3A59D40")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x3A59D50", Offset = "0x3A59D50", VA = "0x3A59D50")]
	public GisketchTooltipTrigger()
	{
	}
}
