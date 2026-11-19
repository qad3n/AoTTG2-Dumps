// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.AottgSearchResultSelection
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchResultSelection.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000D1")]
public sealed class AottgSearchResultSelection : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerMoveHandler, ISelectHandler
{
	[Token(Token = "0x400043D")]
	[FieldOffset(Offset = "0x20")]
	private AottgSearchPaletteControl _owner;

	[Token(Token = "0x400043E")]
	[FieldOffset(Offset = "0x28")]
	private int _index;

	[Token(Token = "0x6000681")]
	[Address(RVA = "0x529A590", Offset = "0x5299590", VA = "0x529A590")]
	public void Setup(AottgSearchPaletteControl owner, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchResultSelection.c (Gisketch.Aottg2UI.Actions.AottgSearchResultSelection$$Setup): clean
		this._owner = owner;
		this._index = index;
		return;
	}

	[Token(Token = "0x6000682")]
	[Address(RVA = "0x529B4E0", Offset = "0x529A4E0", VA = "0x529B4E0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchResultSelection.c (Gisketch.Aottg2UI.Actions.AottgSearchResultSelection$$OnPointerEnter): 1 lines keep C-only constructs
		Vector2 UVar1;
		sbyte cVar2;
		int iVar3;
		int iVar4;
		AottgSearchPaletteControl __this_00;
		List<GisketchSearchEntry> pSVar5;
		int iVar6;
		float fVar7;
		Vector2 UVar8;
		float fVar9;
		Vector3 UVar10;

		__this_00 = this._owner;
		if (__this_00 != null) {
			iVar3 = this._index;
			if (eventData == null) {
				UVar10 = Input.mousePosition;
				UVar8 = UVar10._0_8_;
				cVar2 = __this_00._pointerSelectionLocked;
			}
			else {
				UVar8 = eventData._position_k__BackingField;
				cVar2 = __this_00._pointerSelectionLocked;
			}
			if (cVar2 != false) {
				UVar1 = __this_00._pointerLockPosition;
				fVar7 = UVar8.x - UVar1.x;
				fVar9 = UVar8.y - UVar1.y;
				if (fVar9 * fVar9 + fVar7 * fVar7 < 4.0) {
					return;
				}
				__this_00._pointerSelectionLocked = false;
			}
			pSVar5 = __this_00._results;
			if (pSVar5 == null) {
				throw new NullReferenceException();
			}
			iVar4 = pSVar5._size;
			iVar6 = 8;
			if (iVar4 < 8) {
				iVar6 = iVar4;
			}
			if (iVar6 != 0) {
				__this_00._selectedIndex = (iVar3 % iVar6 + iVar6) % iVar6;
				__this_00.RefreshSelection() ;
				__this_00.RevealSelectedResult();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000683")]
	[Address(RVA = "0x529B5C0", Offset = "0x529A5C0", VA = "0x529B5C0", Slot = "5")]
	public void OnPointerMove(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchResultSelection.c (Gisketch.Aottg2UI.Actions.AottgSearchResultSelection$$OnPointerMove): 1 lines keep C-only constructs
		Vector2 UVar1;
		sbyte cVar2;
		int iVar3;
		int iVar4;
		AottgSearchPaletteControl __this_00;
		List<GisketchSearchEntry> pSVar5;
		int iVar6;
		float fVar7;
		Vector2 UVar8;
		float fVar9;
		Vector3 UVar10;

		__this_00 = this._owner;
		if (__this_00 != null) {
			iVar3 = this._index;
			if (eventData == null) {
				UVar10 = Input.mousePosition;
				UVar8 = UVar10._0_8_;
				cVar2 = __this_00._pointerSelectionLocked;
			}
			else {
				UVar8 = eventData._position_k__BackingField;
				cVar2 = __this_00._pointerSelectionLocked;
			}
			if (cVar2 != false) {
				UVar1 = __this_00._pointerLockPosition;
				fVar7 = UVar8.x - UVar1.x;
				fVar9 = UVar8.y - UVar1.y;
				if (fVar9 * fVar9 + fVar7 * fVar7 < 4.0) {
					return;
				}
				__this_00._pointerSelectionLocked = false;
			}
			pSVar5 = __this_00._results;
			if (pSVar5 == null) {
				throw new NullReferenceException();
			}
			iVar4 = pSVar5._size;
			iVar6 = 8;
			if (iVar4 < 8) {
				iVar6 = iVar4;
			}
			if (iVar6 != 0) {
				__this_00._selectedIndex = (iVar3 % iVar6 + iVar6) % iVar6;
				__this_00.RefreshSelection() ;
				__this_00.RevealSelectedResult();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000684")]
	[Address(RVA = "0x529B6A0", Offset = "0x529A6A0", VA = "0x529B6A0", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchResultSelection.c (Gisketch.Aottg2UI.Actions.AottgSearchResultSelection$$OnSelect): clean
		int iVar1;
		int iVar2;
		AottgSearchPaletteControl __this_00;
		List<GisketchSearchEntry> pSVar3;
		int iVar4;

		__this_00 = this._owner;
		if (__this_00 != null) {
			iVar1 = this._index;
			pSVar3 = __this_00._results;
			if (pSVar3 == null) {
				throw new NullReferenceException();
			}
			iVar2 = pSVar3._size;
			iVar4 = 8;
			if (iVar2 < 8) {
				iVar4 = iVar2;
			}
			if (iVar4 != 0) {
				__this_00._selectedIndex = (iVar1 % iVar4 + iVar4) % iVar4;
				__this_00.RefreshSelection() ;
				__this_00.RevealSelectedResult();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000685")]
	[Address(RVA = "0x529B720", Offset = "0x529A720", VA = "0x529B720")]
	public AottgSearchResultSelection()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchResultSelection.c (Gisketch.Aottg2UI.Actions.AottgSearchResultSelection$$.ctor): clean
		base();
		return;
	}
}
