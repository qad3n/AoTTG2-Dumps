using System.Runtime.InteropServices;
using DG.Tweening;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Overlays;

[Token(Token = "0x2000040")]
public sealed class GisketchTooltipTrigger : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, IPointerMoveHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x4000138")]
	private const float MaxWidth = 420f;

	[Token(Token = "0x4000139")]
	private const float DefaultPadding = 12f;

	[Token(Token = "0x400013A")]
	private const int TooltipSortingOrder = 950;

	[Token(Token = "0x400013B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Vector2 PointerOffset;

	[Token(Token = "0x400013C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string _text;

	[Token(Token = "0x400013D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private GisketchTheme _theme;

	[Token(Token = "0x400013E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private GameObject _tooltip;

	[Token(Token = "0x400013F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private RectTransform _tooltipRect;

	[Token(Token = "0x4000140")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private CanvasGroup _group;

	[Token(Token = "0x4000141")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Tween _tween;

	[Token(Token = "0x4000142")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private Vector2 _tooltipSize;

	[Token(Token = "0x4000143")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private Canvas _placementCanvas;

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x39EDB90", Offset = "0x39EDB90", VA = "0x39EDB90")]
	public void Setup(string text, [Optional] GisketchTheme theme)
	{
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x39EDC10", Offset = "0x39EDC10", VA = "0x39EDC10", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x39EE6E0", Offset = "0x39EE6E0", VA = "0x39EE6E0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x39EEA00", Offset = "0x39EEA00", VA = "0x39EEA00", Slot = "6")]
	public void OnPointerMove(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x39EEA30", Offset = "0x39EEA30", VA = "0x39EEA30", Slot = "7")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x39EEC10", Offset = "0x39EEC10", VA = "0x39EEC10", Slot = "8")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x39EDC40", Offset = "0x39EDC40", VA = "0x39EDC40")]
	private void ShowTooltip()
	{
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x39EEC90", Offset = "0x39EEC90", VA = "0x39EEC90")]
	private bool Style(string name, out GisketchStyleDefinition style)
	{
		return default(bool);
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x39EEC20", Offset = "0x39EEC20", VA = "0x39EEC20")]
	private static void PromoteTooltip(GameObject tooltip)
	{
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x39EED10", Offset = "0x39EED10", VA = "0x39EED10")]
	private void ApplyShadow(GameObject go, GisketchStyleDefinition style)
	{
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x39EE5B0", Offset = "0x39EE5B0", VA = "0x39EE5B0")]
	private void MoveTooltip(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x39EEA50", Offset = "0x39EEA50", VA = "0x39EEA50")]
	private void MoveTooltipToTarget()
	{
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x39EEDC0", Offset = "0x39EEDC0", VA = "0x39EEDC0")]
	private static Vector2 TooltipSize(TextMeshProUGUI label, float padding)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x39EEE50", Offset = "0x39EEE50", VA = "0x39EEE50")]
	private void PlayEnter()
	{
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x39EE6F0", Offset = "0x39EE6F0", VA = "0x39EE6F0")]
	private void PlayExit()
	{
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x39EF310", Offset = "0x39EF310", VA = "0x39EF310")]
	private void DestroyTooltip()
	{
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x39EF110", Offset = "0x39EF110", VA = "0x39EF110")]
	private static void PlaceTooltip(Canvas canvas, Vector2 screenPosition, Vector2 size, RectTransform tooltip)
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x39EF410", Offset = "0x39EF410", VA = "0x39EF410")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x39EF420", Offset = "0x39EF420", VA = "0x39EF420")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x39EF430", Offset = "0x39EF430", VA = "0x39EF430")]
	public GisketchTooltipTrigger()
	{
	}
}
