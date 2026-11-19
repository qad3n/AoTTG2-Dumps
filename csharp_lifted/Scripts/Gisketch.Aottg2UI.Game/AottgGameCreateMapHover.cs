// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateMapHover
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateMapHover.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000230")]
internal sealed class AottgGameCreateMapHover : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x4000B90")]
	[FieldOffset(Offset = "0x20")]
	private UnityEngine.UI.Outline _outline;

	[Token(Token = "0x6000D0C")]
	[Address(RVA = "0x5D98A60", Offset = "0x5D97A60", VA = "0x5D98A60")]
	private void Awake()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateMapHover.c (Gisketch.Aottg2UI.Game.AottgGameCreateMapHover$$Awake): 5 lines keep C-only constructs
		Outline* targetAddress;
		Shadow __this_00;
		Outline pUVar1;
		GameObject __this_01;

		pUVar1 = this.GetComponent<Outline>();
		if (pUVar1 == null) {
			__this_01 = this.gameObject;
			if (__this_01 == null) goto label_05e98b1f;
			pUVar1 = __this_01.AddComponent<Outline>();
		}
		if (this != null) {
			targetAddress = &this._outline;
			this._outline = pUVar1;
			__this_00 = (Shadow)this._outline;
			if (__this_00 != null) {
				__this_00.effectDistance = (Vector2)0xc000000040000000;
				if ((Shadow)*targetAddress != null) {
					(*targetAddress).useGraphicAlpha = false;
					if (*targetAddress != null) {
						(*targetAddress).enabled = false;
						return;
					}
				}
			}
		}
	label_05e98b1f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000D0D")]
	[Address(RVA = "0x5D98B30", Offset = "0x5D97B30", VA = "0x5D98B30", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateMapHover.c (Gisketch.Aottg2UI.Game.AottgGameCreateMapHover$$OnPointerEnter): clean
		Shadow __this_00;
		Outline __this_01;
		Color value;

		__this_00 = (Shadow)this._outline;
		value = AottgGameCreateMapHover.OutlineColor((Component)this);
		if (__this_00 != null) {
			__this_00.effectColor = value;
			__this_01 = this._outline;
			if (__this_01 != null) {
				__this_01.enabled = true;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000D0E")]
	[Address(RVA = "0x5D98BC0", Offset = "0x5D97BC0", VA = "0x5D98BC0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateMapHover.c (Gisketch.Aottg2UI.Game.AottgGameCreateMapHover$$OnPointerExit): clean
		Outline __this_00;

		__this_00 = this._outline;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.enabled = false;
		return;
	}

	[Token(Token = "0x6000D0F")]
	[Address(RVA = "0x5D98BE0", Offset = "0x5D97BE0", VA = "0x5D98BE0", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateMapHover.c (Gisketch.Aottg2UI.Game.AottgGameCreateMapHover$$OnSelect): clean
		Shadow __this_00;
		Outline __this_01;
		Color value;

		__this_00 = (Shadow)this._outline;
		value = AottgGameCreateMapHover.OutlineColor((Component)this);
		if (__this_00 != null) {
			__this_00.effectColor = value;
			__this_01 = this._outline;
			if (__this_01 != null) {
				__this_01.enabled = true;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000D10")]
	[Address(RVA = "0x5D98C20", Offset = "0x5D97C20", VA = "0x5D98C20", Slot = "7")]
	public void OnDeselect(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateMapHover.c (Gisketch.Aottg2UI.Game.AottgGameCreateMapHover$$OnDeselect): clean
		Outline __this_00;

		__this_00 = this._outline;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.enabled = false;
		return;
	}

	[Token(Token = "0x6000D11")]
	[Address(RVA = "0x5D98B70", Offset = "0x5D97B70", VA = "0x5D98B70")]
	private void SetHovered(bool hovered)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateMapHover.c (Gisketch.Aottg2UI.Game.AottgGameCreateMapHover$$SetHovered): 2 lines keep C-only constructs
		Shadow __this_00;
		Outline __this_01;
		undefined7 in_register_00000031;
		Color value;

		if ((int)(MethodInfo)CONCAT71(in_register_00000031, hovered) != 0) {
			__this_00 = (Shadow)this._outline;
			value = AottgGameCreateMapHover.OutlineColor((Component)this) ;
			if (__this_00 == null) goto label_05e98bb0;
			__this_00.effectColor = value;
		}
		__this_01 = this._outline;
		if (__this_01 != null) {
			__this_01.enabled = hovered;
			return;
		}
	label_05e98bb0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000D12")]
	[Address(RVA = "0x5D92FE0", Offset = "0x5D91FE0", VA = "0x5D92FE0")]
	internal static Color OutlineColor(Component component)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateMapHover.c (Gisketch.Aottg2UI.Game.AottgGameCreateMapHover$$OutlineColor): 12 lines keep C-only constructs
		GisketchTheme __this;
		byte[] auVar1 = new byte[12];
		byte[] auVar2 = new byte[16];
		byte[] auVar3 = new byte[16];
		bool bVar4;
		GisketchUIRoot x;
		Color UVar5;
		Color UVar6;

		if (component == null) {
	label_05e930b4: ;
			throw new NullReferenceException();
		}
		x = component.GetComponentInParent<GisketchUIRoot>();
		bVar4 = ((Object)x != null);
		auVar2._8_8_ = 0x3f8000003f800000;
		auVar2._0_8_ = 0x3f8000003f800000;
		auVar1 = auVar2._0_12_;
		if (bVar4) {
			if (x == null) goto label_05e930b4;
			__this = x._Theme_k__BackingField;
			if (__this == null) {
				auVar3._8_8_ = 0x3f8000003f800000;
				auVar3._0_8_ = 0x3f8000003f800000;
				auVar1 = auVar3._0_12_;
			}
			else {
				UVar5.b = 1.0;
				UVar5.a = 1.0;
				UVar5.r = 1.0;
				UVar5.g = 1.0;
				UVar5 = __this.GetColor("negative", UVar5);
				auVar1 = UVar5._0_12_;
			}
		}
		UVar6._0_8_ = auVar1._0_8_;
		UVar6.a = 0.9;
		UVar6.b = (float)auVar1._8_4_;
		return (Color)UVar6;
	}

	[Token(Token = "0x6000D13")]
	[Address(RVA = "0x5D98C40", Offset = "0x5D97C40", VA = "0x5D98C40")]
	public AottgGameCreateMapHover()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateMapHover.c (Gisketch.Aottg2UI.Game.AottgGameCreateMapHover$$.ctor): clean
		base();
		return;
	}
}
