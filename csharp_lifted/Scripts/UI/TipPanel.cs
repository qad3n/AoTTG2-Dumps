// ==================== AoTTG2 cross-reference ====================
// Type: UI.TipPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/TipPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/TipPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200088C")]
internal class TipPanel : MonoBehaviour
{
	[Token(Token = "0x4002B21")]
	[FieldOffset(Offset = "0x20")]
	private Text _label;

	[Token(Token = "0x4002B22")]
	[FieldOffset(Offset = "0x28")]
	private int currentTipIndex;

	[Token(Token = "0x6005151")]
	[Address(RVA = "0x5C5BC40", Offset = "0x5C5AC40", VA = "0x5C5BC40")]
	public void Setup()
	{
		// Lifted from source/cpp/UI/TipPanel.c (UI.TipPanel$$Setup): clean
		Transform pUVar1;
		Text pUVar2;

		pUVar1 = this.transform;
		if (pUVar1 != null) {
			pUVar1 = pUVar1.Find("Label");
			if (pUVar1 != null) {
				pUVar2 = pUVar1.GetComponent<Text>();
				this._label = pUVar2;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005152")]
	[Address(RVA = "0x5C560C0", Offset = "0x5C550C0", VA = "0x5C560C0")]
	public void SetRandomTip()
	{
		// Lifted from source/cpp/UI/TipPanel.c (UI.TipPanel$$SetRandomTip): clean
		Text pUVar1;
		String pSVar2;

		pUVar1 = this._label;
		pSVar2 = TipPanel.RandomTipText(ref this.currentTipIndex);
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.set_text(pSVar2) ;
		return;
	}

	[Token(Token = "0x6005153")]
	[Address(RVA = "0x5C5BCC0", Offset = "0x5C5ACC0", VA = "0x5C5BCC0")]
	public static string RandomTipText(ref int lastIndex)
	{
		// Lifted from source/cpp/UI/TipPanel.c (UI.TipPanel$$RandomTipText): 6 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Int32[] pSVar3;
		bool bVar5;
		int iVar6;
		JSONNode a;
		List<int> __this;
		JSONNode pSVar7;
		String pSVar8;
		String pSVar9;
		int iVar10;

		pSVar7 = MainMenu.MainBackgroundInfo;
		a = null;
		bVar5 = (pSVar7 != null);
		if (bVar5) {
			pSVar7 = MainMenu.MainBackgroundInfo;
			if (pSVar7 == null) goto label_05d5c23d;
			a = pSVar7.get_Item("Tips");
		}
		bVar5 = (a == null);
		if (bVar5) {
	label_05d5bfb0: ;
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (a != null) {
			iVar6 = a.get_Count();
			if (iVar6 == 0) goto label_05d5bfb0;
			iVar6 = a.get_Count();
			__this = new List<int>(iVar6) ;
			iVar6 = a.get_Count();
			if (0 < iVar6) {
				iVar10 = 0;
				if (__this == null) {
					do {
						pSVar7 = a.get_Item(iVar10) ;
						if (pSVar7 == null) goto label_05d5c23d;
						pSVar8 = pSVar7.get_Value();
						bVar5 = UIManager.HasLocale("Notifications", "Tips", pSVar8, "");
						if (bVar5) goto label_05d5c23d;
						iVar10 = iVar10 + 1;
						iVar6 = a.get_Count();
					} while (iVar10 < iVar6);
				}
				else {
					do {
						pSVar7 = a.get_Item(iVar10) ;
						if (pSVar7 == null) goto label_05d5c23d;
						pSVar8 = pSVar7.get_Value();
						bVar5 = UIManager.HasLocale("Notifications", "Tips", pSVar8, "");
						if (bVar5) {
							piVar1 = &__this._version;
							*piVar1 = *piVar1 + 1;
							pSVar3 = __this._items;
							if (pSVar3 == null) goto label_05d5c23d;
							uVar2 = __this._size;
							if (uVar2 < (uint)pSVar3.Length) {
								__this._size = uVar2 + 1;
								pSVar3[(int)uVar2] = iVar10;
							}
							else {
								__this.AddWithResize(iVar10);
							}
						}
						iVar10 = iVar10 + 1;
						iVar6 = a.get_Count();
					} while (iVar10 < iVar6);
				}
			}
			if (__this != null) {
				iVar10 = __this._size;
				if (iVar10 == 0) {
					iVar6 = a.get_Count();
					if (0 < iVar6) {
						iVar10 = 0;
						do {
							piVar1 = &__this._version;
							*piVar1 = *piVar1 + 1;
							pSVar3 = __this._items;
							if (pSVar3 == null) goto label_05d5c23d;
							uVar2 = __this._size;
							if (uVar2 < (uint)pSVar3.Length) {
								__this._size = uVar2 + 1;
								pSVar3[(int)uVar2] = iVar10;
							}
							else {
								__this.AddWithResize(iVar10);
							}
							iVar10 = iVar10 + 1;
							iVar6 = a.get_Count();
						} while (iVar10 < iVar6);
					}
					iVar10 = __this._size;
				}
				if (1 < iVar10) {
					__this.Remove(*lastIndex);
					iVar10 = __this._size;
				}
				iVar6 = Random.Range(0, iVar10);
				iVar6 = __this.get_Item(iVar6);
				*lastIndex = iVar6;
				pSVar8 = UIManager.GetLocale("Notifications", "Tips", "Title", "", "");
				pSVar7 = a.get_Item(*lastIndex) ;
				if (pSVar7 != null) {
					pSVar9 = pSVar7.get_Value();
					pSVar9 = UIManager.GetLocale("Notifications", "Tips", pSVar9, "", "");
					pSVar8 = GisketchArabicText.Join(pSVar8, ": ", pSVar9);
					return pSVar8;
				}
			}
		}
	label_05d5c23d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005154")]
	[Address(RVA = "0x5C5C250", Offset = "0x5C5B250", VA = "0x5C5C250")]
	public void SetPressAnyKey()
	{
		// Lifted from source/cpp/UI/TipPanel.c (UI.TipPanel$$SetPressAnyKey): clean
		Text pUVar1;
		String pSVar2;

		pUVar1 = this._label;
		pSVar2 = UIManager.GetLocaleCommon("PressAnyKey");
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.set_text(pSVar2) ;
		return;
	}

	[Token(Token = "0x6005155")]
	[Address(RVA = "0x5C5C2D0", Offset = "0x5C5B2D0", VA = "0x5C5C2D0")]
	public TipPanel()
	{
		// Lifted from source/cpp/UI/TipPanel.c (UI.TipPanel$$.ctor): clean
		this.currentTipIndex = -1;
		base();
		return;
	}
}
