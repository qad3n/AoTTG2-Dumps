// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchFocusNavigation
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusNavigation.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000E4")]
public static class GisketchFocusNavigation
{
	[Token(Token = "0x6000714")]
	[Address(RVA = "0x52A17C0", Offset = "0x52A07C0", VA = "0x52A17C0")]
	public static bool Cycle(GameObject root, bool backwards)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusNavigation.c (Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$Cycle): clean
		bool bVar1;
		EventSystem eventSystem;

		eventSystem = EventSystem.current;
		bVar1 = GisketchFocusNavigation.Cycle(root, backwards, eventSystem);
		return bVar1;
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x52A1820", Offset = "0x52A0820", VA = "0x52A1820")]
	internal static bool Cycle(GameObject root, bool backwards, EventSystem eventSystem)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusNavigation.c (Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$Cycle): clean
		int iVar1;
		bool bVar2;
		int iVar3;
		List<Selectable> items;
		Selectable pUVar4;
		GameObject pUVar5;

		bVar2 = ((Object)root == null);
		if (!bVar2) {
			bVar2 = ((Object)eventSystem == null);
			if (!bVar2) {
				items = GisketchFocusNavigation.Items(root);
				if (items != null) {
					if (items._size == 0) {
						return false;
					}
					if (eventSystem != null) {
						iVar3 = GisketchFocusNavigation.IndexOf(items, eventSystem.m_CurrentSelected);
						if (iVar3 < 0) {
							iVar3 = GisketchFocusNavigation.FirstVisibleIndex(items, backwards);
						}
						else {
							iVar1 = items._size;
							iVar3 = ((int)(iVar3 + (uint)!backwards * 2 + -1) % iVar1 + iVar1) % iVar1;
						}
						pUVar4 = items.get_Item(iVar3);
						if (pUVar4 != null) {
							pUVar5 = pUVar4.gameObject;
							eventSystem.SetSelectedGameObject(pUVar5);
							pUVar4 = items.get_Item(iVar3);
							if (pUVar4 != null) {
								pUVar5 = pUVar4.gameObject;
								GisketchScrollFocus.Reveal(pUVar5, 12.0);
								return true;
							}
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return false;
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x52A1990", Offset = "0x52A0990", VA = "0x52A1990")]
	private static List<Selectable> Items(GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusNavigation.c (Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$Items): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Selectable x;
		Selectable[] pUVar3;
		bool bVar5;
		List<Selectable> __this;
		Object[] pSVar6;
		ulong uVar7;
		GisketchFocusRing x_00;
		ulong uVar8;

		__this = new List<Selectable>();
		if (root != null) {
			pSVar6 = root.GetComponentsInChildren<Selectable>(false);
			if (pSVar6 != null) {
				if (0 < (int)pSVar6.Length) {
					uVar7 = pSVar6.Length & 0xffffffff;
					uVar8 = 0;
					do {
						if (uVar7 <= uVar8) {
							throw new IndexOutOfRangeException();
						}
						x = (Selectable)pSVar6[uVar8];
						bVar5 = ((Object)x != null);
						if (bVar5) {
							if (x == null) goto label_053a1ba5;
							bVar5 = x.IsActive();
							if (bVar5) {
								bVar5 = x.IsInteractable();
								if ((bVar5) && (x.m_Navigation.m_Mode != 0)) {
									x_00 = x.GetComponent<GisketchFocusRing>();
									bVar5 = ((Object)x_00 != null) ;
									if (bVar5) {
										if (__this == null) goto label_053a1ba5;
										piVar1 = &__this._version;
										*piVar1 = *piVar1 + 1;
										pUVar3 = __this._items;
										if (pUVar3 == null) goto label_053a1ba5;
										uVar2 = __this._size;
										if (uVar2 < (uint)pUVar3.Length) {
											__this._size = uVar2 + 1;
											pUVar3[(int)uVar2] = x;
										}
										else {
											__this.AddWithResize((object)x);
										}
									}
								}
							}
						}
						uVar8 = uVar8 + 1;
						uVar2 = (uint)pSVar6.Length;
						uVar7 = (ulong)uVar2;
					} while ((long)uVar8 < (long)(int)uVar2);
				}
				return __this;
			}
		}
	label_053a1ba5: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000717")]
	[Address(RVA = "0x52A1BB0", Offset = "0x52A0BB0", VA = "0x52A1BB0")]
	private static int IndexOf(List<Selectable> items, GameObject selected)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusNavigation.c (Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$IndexOf): clean
		bool bVar1;
		Selectable __this;
		Object x;
		int index;

		if (items == null) {
	label_053a1c83: ;
			throw new NullReferenceException();
		}
		if (0 < items._size) {
			index = 0;
			do {
				__this = items.get_Item(index);
				if (__this == null) goto label_053a1c83;
				x = (Object)__this.gameObject;
				bVar1 = (x == (Object)selected);
				if (bVar1) {
					return index;
				}
				index = index + 1;
			} while (index < items._size);
		}
		return -1;
	}

	[Token(Token = "0x6000718")]
	[Address(RVA = "0x52A1CA0", Offset = "0x52A0CA0", VA = "0x52A1CA0")]
	private static int FirstVisibleIndex(List<Selectable> items, bool backwards)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusNavigation.c (Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$FirstVisibleIndex): clean
		bool bVar1;
		Selectable __this;
		GameObject focused;
		int iVar2;
		int iVar3;
		int iVar4;

		if (backwards) {
			if (items == null) {
	label_053a1d6e: ;
				throw new NullReferenceException();
			}
			iVar3 = items._size + -1;
			iVar4 = -1;
			iVar2 = -1;
			if (iVar3 == -1) goto label_053a1d50;
		}
		else {
			if (items == null) goto label_053a1d6e;
			iVar2 = items._size;
			iVar3 = 0;
			iVar4 = 1;
			if (iVar2 == 0) goto label_053a1d50;
		}
		do {
			__this = items.get_Item(iVar3);
			if (__this == null) goto label_053a1d6e;
			focused = __this.gameObject;
			bVar1 = GisketchScrollFocus.IsVisible(focused);
			if (bVar1) {
				return iVar3;
			}
			iVar3 = iVar3 + iVar4;
		} while (iVar2 != iVar3);
	label_053a1d50: ;
		iVar3 = 0;
		if (backwards) {
			iVar3 = items._size + -1;
		}
		return iVar3;
	}

	[Token(Token = "0x6000719")]
	[Address(RVA = "0x52A1C90", Offset = "0x52A0C90", VA = "0x52A1C90")]
	private static int Mod(int value, int count)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchFocusNavigation.c (Gisketch.Aottg2UI.Actions.GisketchFocusNavigation$$Mod): clean
		return (value % count + count) % count;
	}
}
