// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuPanelHoverSlide.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using DG.Tweening;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002AB")]
public sealed class AottgMainMenuPanelHoverSlide : MonoBehaviour
{
	[Token(Token = "0x4000DAB")]
	private const float HoverWidthScale = 1f;

	[Token(Token = "0x4000DAC")]
	private const float SlideSeconds = 0.22f;

	[Token(Token = "0x4000DAD")]
	[FieldOffset(Offset = "0x20")]
	private GisketchUIRoot _root;

	[Token(Token = "0x4000DAE")]
	[FieldOffset(Offset = "0x28")]
	private GameObject _panel;

	[Token(Token = "0x4000DAF")]
	[FieldOffset(Offset = "0x30")]
	private GameObject _visual;

	[Token(Token = "0x4000DB0")]
	[FieldOffset(Offset = "0x38")]
	private Tween _tween;

	[Token(Token = "0x4000DB1")]
	[FieldOffset(Offset = "0x40")]
	private bool _shown;

	[Token(Token = "0x600103D")]
	[Address(RVA = "0x57C10B0", Offset = "0x57C00B0", VA = "0x57C10B0")]
	public void Setup(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuPanelHoverSlide.c (Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$Setup): clean
		this._root = root;
		return;
	}

	[Token(Token = "0x600103E")]
	[Address(RVA = "0x57C10C0", Offset = "0x57C00C0", VA = "0x57C10C0")]
	private void Update()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuPanelHoverSlide.c (Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$Update): clean
		GisketchUIRoot x;
		UISettings pSVar1;
		BoolSetting pSVar2;
		bool bVar3;

		x = this._root;
		bVar3 = ((Object)x == null);
		if (!bVar3) {
			pSVar1 = SettingsManager.UISettings;
			bVar3 = true;
			if (((pSVar1 != null) &&(pSVar2 = pSVar1.FadeMainMenu, pSVar2 != null)) &&(pSVar2._value != false)) {
				bVar3 = this.HoverPanelBand();
			}
			if (this._shown != bVar3) {
				this.SetShown(bVar3);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600103F")]
	[Address(RVA = "0x57C1390", Offset = "0x57C0390", VA = "0x57C1390")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuPanelHoverSlide.c (Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$OnDestroy): clean
		Tween t;
		bool bVar1;

		t = this._tween;
		if (t != null) {
			bVar1 = TweenExtensions.IsActive(t);
			if (bVar1) {
				TweenExtensions.Kill(this._tween, false);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6001040")]
	[Address(RVA = "0x57C1180", Offset = "0x57C0180", VA = "0x57C1180")]
	private bool HoverPanelBand()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuPanelHoverSlide.c (Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$HoverPanelBand): clean
		GisketchUIRoot __this_00;
		bool bVar1;
		RectTransform __this_01;
		Canvas __this_02;
		float fVar2;
		float fVar3;
		Rect UVar4;
		Vector3 UVar5;

		__this_01 = this.PanelRect();
		bVar1 = ((Object)__this_01 == null);
		if (bVar1) {
			return true;
		}
		__this_00 = this._root;
		if (__this_00 != null) {
			__this_02 = __this_00.GetComponentInChildren<Canvas>();
			bVar1 = ((Object)__this_02 != null);
			if (bVar1) {
				if (__this_02 == null) goto label_058c12c8;
				fVar2 = __this_02.scaleFactor;
			}
			else {
				fVar2 = 1.0;
			}
			if (__this_01 != null) {
				UVar4 = __this_01.rect;
				if (1.0 <= UVar4.m_Width) {
				}
				UVar5 = Input.mousePosition;
				return UVar5.x < fVar2 * fVar3;
			}
		}
	label_058c12c8: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001041")]
	[Address(RVA = "0x57C13C0", Offset = "0x57C03C0", VA = "0x57C13C0")]
	private RectTransform PanelRect()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuPanelHoverSlide.c (Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$PanelRect): 4 lines keep C-only constructs
		GameObject* targetAddress;
		Object pUVar1;
		GisketchUIRoot pGVar2;
		GisketchScreenRouter pGVar3;
		GisketchView __this_00;
		bool bVar4;
		GameObject pUVar5;
		RectTransform pUVar6;

		pUVar1 = (Object)this._panel;
		targetAddress = &this._panel;
		bVar4 = (pUVar1 == null);
		if (bVar4) {
			pGVar2 = this._root;
			if (pGVar2 == null) goto label_058c14c6;
			pGVar3 = pGVar2._Screens_k__BackingField;
			if ((pGVar3 != null) &&(__this_00 = pGVar3._active, __this_00 != null)) {
				pUVar5 = __this_00.Find("main-menu-panel");
				*targetAddress = pUVar5;
			}
		}
		pUVar1 = (Object)*targetAddress;
		bVar4 = (pUVar1 != null);
		if (!bVar4) {
			return null;
		}
		if (*targetAddress != null) {
			pUVar6 = (*targetAddress).GetComponent<RectTransform>();
			return pUVar6;
		}
	label_058c14c6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001042")]
	[Address(RVA = "0x57C12D0", Offset = "0x57C02D0", VA = "0x57C12D0")]
	private void SetShown(bool shown)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuPanelHoverSlide.c (Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$SetShown): 5 lines keep C-only constructs
		Tween* targetAddress;
		bool bVar1;
		GameObject go;
		Tween pDVar2;
		undefined7 in_register_00000031;
		MethodInfo method_01;

		method_01 = (MethodInfo)CONCAT71(in_register_00000031, shown);
		this._shown = shown;
		targetAddress = &this._tween;
		pDVar2 = this._tween;
		if (pDVar2 != null) {
			bVar1 = TweenExtensions.IsActive(pDVar2);
			if (bVar1) {
				TweenExtensions.Kill(*targetAddress, false);
			}
		}
		go = this.PanelVisual();
		pDVar2 = GisketchMotion.PlayMainMenuPanel(go, shown, 0.22);
		this._tween = pDVar2;
		this.SetBrushButtonsFaded(!shown);
		return;
	}

	[Token(Token = "0x6001043")]
	[Address(RVA = "0x57C14D0", Offset = "0x57C04D0", VA = "0x57C14D0")]
	private GameObject PanelVisual()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuPanelHoverSlide.c (Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$PanelVisual): 2 lines keep C-only constructs
		GameObject* targetAddress;
		Object x;
		GisketchUIRoot pGVar1;
		GisketchScreenRouter pGVar2;
		GisketchView __this_00;
		bool bVar3;
		GameObject pUVar4;

		x = (Object)this._visual;
		targetAddress = &this._visual;
		bVar3 = (x == null);
		if (bVar3) {
			pGVar1 = this._root;
			if (pGVar1 == null) {
				throw new NullReferenceException();
			}
			pGVar2 = pGVar1._Screens_k__BackingField;
			if ((pGVar2 != null) &&(__this_00 = pGVar2._active, __this_00 != null)) {
				pUVar4 = __this_00.Find("main-menu-panel-visual");
				*targetAddress = pUVar4;
			}
		}
		return *targetAddress;
	}

	[Token(Token = "0x6001044")]
	[Address(RVA = "0x57C1580", Offset = "0x57C0580", VA = "0x57C1580")]
	private void SetBrushButtonsFaded(bool faded)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuPanelHoverSlide.c (Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$SetBrushButtonsFaded): clean
		Object x;
		GameObject __this_00;
		bool bVar1;
		uint uVar2;
		Object[] pSVar3;
		uint uVar4;

		x = (Object)this._panel;
		bVar1 = (x == null);
		if (bVar1) {
			return;
		}
		__this_00 = this._panel;
		if ((__this_00 != null) &&(pSVar3 = __this_00.GetComponentsInChildren<GisketchBrushButtonFeedback>(true), pSVar3 != null)) {
			uVar2 = (uint)pSVar3.Length;
			if ((int)uVar2 < 1) {
				return;
			}
			uVar4 = 0;
			while(true) {
				if (uVar2 <= uVar4) {
					throw new IndexOutOfRangeException();
				}
				if ((GisketchBrushButtonFeedback)pSVar3[(int)uVar4] ==null) break;
				(pSVar3[(int)uVar4]).SetPanelFaded(faded);
				uVar4 = uVar4 + 1;
				uVar2 = (uint)pSVar3.Length;
				if ((int)uVar2 <= (int)uVar4) {
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001045")]
	[Address(RVA = "0x57C1650", Offset = "0x57C0650", VA = "0x57C1650")]
	public AottgMainMenuPanelHoverSlide()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuPanelHoverSlide.c (Gisketch.Aottg2UI.Game.AottgMainMenuPanelHoverSlide$$.ctor): clean
		this._shown = true;
		base();
		return;
	}
}
