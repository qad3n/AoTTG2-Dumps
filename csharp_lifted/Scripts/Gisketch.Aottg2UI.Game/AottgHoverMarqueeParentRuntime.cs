// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgHoverMarqueeParentRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000209")]
internal sealed class AottgHoverMarqueeParentRuntime : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x4000AD8")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<AottgHoverMarqueeTextRuntime> _items;

	[Token(Token = "0x4000AD9")]
	[FieldOffset(Offset = "0x28")]
	private bool _hovered;

	[Token(Token = "0x4000ADA")]
	[FieldOffset(Offset = "0x29")]
	private bool _selected;

	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x5D84D10", Offset = "0x5D83D10", VA = "0x5D84D10")]
	public void Register(AottgHoverMarqueeTextRuntime item)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHoverMarqueeParentRuntime.c (Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$Register): 2 lines keep C-only constructs
		int piVar1;
		sbyte cVar2;
		uint uVar3;
		List<AottgHoverMarqueeTextRuntime> pSVar4;
		AottgHoverMarqueeTextRuntime[] pGVar5;
		bool bVar7;

		bVar7 = ((Object)item == null);
		if (bVar7) {
			return;
		}
		pSVar4 = this._items;
		if (pSVar4 != null) {
			bVar7 = pSVar4.Contains((object)item);
			if (bVar7) {
				return;
			}
			pSVar4 = this._items;
			if (pSVar4 != null) {
				piVar1 = &pSVar4._version;
				*piVar1 = *piVar1 + 1;
				pGVar5 = pSVar4._items;
				if (pGVar5 != null) {
					uVar3 = pSVar4._size;
					if (uVar3 < (uint)pGVar5.Length) {
						pSVar4._size = uVar3 + 1;
						pGVar5[(int)uVar3] = item;
						cVar2 = this._hovered;
					}
					else {
						pSVar4.AddWithResize((object)item);
						cVar2 = this._hovered;
					}
					bVar7 = true;
					if (cVar2 == false) {
						bVar7 = this._selected;
					}
					if (item != null) {
						item._active = bVar7;
						item.RefreshMarquee();
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000C1E")]
	[Address(RVA = "0x5D84EE0", Offset = "0x5D83EE0", VA = "0x5D84EE0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHoverMarqueeParentRuntime.c (Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$OnPointerEnter): clean
		this._hovered = true;
		this.Refresh();
		return;
	}

	[Token(Token = "0x6000C1F")]
	[Address(RVA = "0x5D85040", Offset = "0x5D84040", VA = "0x5D85040", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHoverMarqueeParentRuntime.c (Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$OnPointerExit): clean
		this._hovered = false;
		this.Refresh();
		return;
	}

	[Token(Token = "0x6000C20")]
	[Address(RVA = "0x5D85050", Offset = "0x5D84050", VA = "0x5D85050", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHoverMarqueeParentRuntime.c (Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$OnSelect): clean
		this._selected = true;
		this.Refresh();
		return;
	}

	[Token(Token = "0x6000C21")]
	[Address(RVA = "0x5D85060", Offset = "0x5D84060", VA = "0x5D85060", Slot = "7")]
	public void OnDeselect(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHoverMarqueeParentRuntime.c (Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$OnDeselect): clean
		this._selected = false;
		this.Refresh();
		return;
	}

	[Token(Token = "0x6000C22")]
	[Address(RVA = "0x5D85070", Offset = "0x5D84070", VA = "0x5D85070")]
	private void OnDisable()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHoverMarqueeParentRuntime.c (Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$OnDisable): clean
		this._hovered = false;
		this._selected = false;
		this.Refresh();
		return;
	}

	[Token(Token = "0x6000C23")]
	[Address(RVA = "0x5D84EF0", Offset = "0x5D83EF0", VA = "0x5D84EF0")]
	private void Refresh()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHoverMarqueeParentRuntime.c (Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$Refresh): clean
		sbyte cVar1;
		uint index;
		List<AottgHoverMarqueeTextRuntime> pSVar2;
		bool bVar3;
		AottgHoverMarqueeTextRuntime pGVar4;
		bool bVar5;

		if (Il2CppMethodInitialized_07548847 == false) {
			Il2CppMethodInitialized_07548847 = true;
			cVar1 = this._hovered;
		}
		else {
			cVar1 = this._hovered;
		}
		if (cVar1 == false) {
			bVar5 = this._selected;
			pSVar2 = this._items;
		}
		else {
			bVar5 = true;
			pSVar2 = this._items;
		}
		if (pSVar2 != null) {
			index = pSVar2._size;
			while(true) {
				index = index - 1;
				if ((int)index < 0) {
					return;
				}
				pSVar2 = this._items;
				if (pSVar2 == null) break;
				pGVar4 = pSVar2.get_Item(index);
				bVar3 = ((Object)pGVar4 == null);
				pSVar2 = this._items;
				if (bVar3) {
					if (pSVar2 == null) break;
					pSVar2.RemoveAt(index);
				}
				else {
					if (pSVar2 == null) break;
					pGVar4 = pSVar2.get_Item(index);
					if (pGVar4 == null) break;
					pGVar4._active = bVar5;
					pGVar4.RefreshMarquee();
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000C24")]
	[Address(RVA = "0x5D85080", Offset = "0x5D84080", VA = "0x5D85080")]
	public AottgHoverMarqueeParentRuntime()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHoverMarqueeParentRuntime.c (Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$.ctor): 1 lines keep C-only constructs
		List<AottgHoverMarqueeTextRuntime> __this_00;

		__this_00 = il2cpp_codegen_object_new(typeof(List<AottgHoverMarqueeTextRuntime>)) ;
		__this_00 = new List<object>();
		this._items = __this_00;
		base();
		return;
	}
}
