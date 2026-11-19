// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgScoreboardPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Building;
using Il2CppDummyDll;
using UI;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000293")]
internal abstract class AottgScoreboardPopup : PromptPopup
{
	[Token(Token = "0x4000D23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private RectTransform _canvasRect;

	[Token(Token = "0x4000D24")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Transform _dim;

	[Token(Token = "0x4000D25")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Transform _dialogHost;

	[Token(Token = "0x170001AB")]
	protected abstract string DialogId
	{
		[Token(Token = "0x6000FAD")]
		get;
	}

	[Token(Token = "0x170001AC")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6000FAE")]
		[Address(RVA = "0x57B5C50", Offset = "0x57B4C50", VA = "0x57B5C50", Slot = "54")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardPopup.c (Gisketch.Aottg2UI.Game.AottgScoreboardPopup$$get_PopupAnimationType): clean
			return 1;
		}
	}

	[Token(Token = "0x170001AD")]
	protected AottgInGameView View
	{
		[Token(Token = "0x6000FAF")]
		[Address(RVA = "0x57B5C60", Offset = "0x57B4C60", VA = "0x57B5C60")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardPopup.c (Gisketch.Aottg2UI.Game.AottgScoreboardPopup$$get_View): clean
			return this._View_k__BackingField;
		}
		[Token(Token = "0x6000FB0")]
		[Address(RVA = "0x57B5C70", Offset = "0x57B4C70", VA = "0x57B5C70")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardPopup.c (Gisketch.Aottg2UI.Game.AottgScoreboardPopup$$set_View): clean
			this._View_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x170001AE")]
	protected GisketchView Dialog
	{
		[Token(Token = "0x6000FB1")]
		[Address(RVA = "0x57B5C90", Offset = "0x57B4C90", VA = "0x57B5C90")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardPopup.c (Gisketch.Aottg2UI.Game.AottgScoreboardPopup$$get_Dialog): clean
			return this._Dialog_k__BackingField;
		}
		[Token(Token = "0x6000FB2")]
		[Address(RVA = "0x57B5CA0", Offset = "0x57B4CA0", VA = "0x57B5CA0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardPopup.c (Gisketch.Aottg2UI.Game.AottgScoreboardPopup$$set_Dialog): clean
			this._Dialog_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6000FB3")]
	[Address(RVA = "0x57B5CC0", Offset = "0x57B4CC0", VA = "0x57B5CC0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardPopup.c (Gisketch.Aottg2UI.Game.AottgScoreboardPopup$$Setup): 7 lines keep C-only constructs
		RectTransform pUVar1;
		Transform pUVar2;
		AottgInGameView pGVar3;
		Canvas pUVar4;
		RectTransform pUVar5;
		MethodInfo pMVar6;
		String id;
		GisketchView pGVar7;
		RectTransform* targetAddress;
		Rect UVar8;
		Rect UVar9;
		float local_38;

		this.Parent = parent;
		pMVar6 = null;
		pUVar2 = this.transform;
		AottgInGameView.HidePrefab(pUVar2);
		pGVar3 = new AottgInGameView();
		this._View_k__BackingField = pGVar3;
		pUVar4 = this.GetComponentInParent<Canvas>();
		if ((pUVar4 != null) &&(pUVar4 = pUVar4.rootCanvas, pUVar4 != null)) {
			pUVar5 = (RectTransform)pUVar4.transform;
			pUVar1 = typeof(RectTransform);
			if (pUVar5 == null) {
				this._canvasRect = null;
			}
			else if ((pUVar5.klass != typeof(RectTransform)) ||(this._canvasRect = pUVar5, pUVar5.klass != pUVar1)) {
				throw new InvalidCastException();
			}
			targetAddress = &this._canvasRect;
			pGVar3 = this._View_k__BackingField;
			pUVar2 = this.transform;
			pUVar5 = this._canvasRect;
			if (pUVar5 != null) {
				UVar8 = pUVar5.rect;
				if (*targetAddress != null) {
					UVar9 = (*targetAddress).rect;
					if (pGVar3 != null) {
						local_38 = UVar8.m_Width;
						pMVar6 = (MethodInfo)pGVar3.Panel(pUVar2, "inGamePauseDimOverlay", local_38, UVar9.m_Height, false, (Nullable<float>)0x0);
						this._dim = (Transform)pMVar6;
						pUVar2 = this._dim;
						AottgInGameView.Position(pUVar2, (Vector2)(Vector2.zeroVector));
						pGVar3 = this._View_k__BackingField;
						pUVar2 = this.transform;
						pUVar5 = this._canvasRect;
						if (pUVar5 != null) {
							UVar8 = pUVar5.rect;
							if (*targetAddress != null) {
								UVar9 = (*targetAddress).rect;
								if (pGVar3 != null) {
									local_38 = UVar8.m_Width;
									pMVar6 = (MethodInfo)pGVar3.Panel(pUVar2, "clear", local_38, UVar9.m_Height, false, (Nullable<float>)0x0);
									this._dialogHost = (Transform)pMVar6;
									pUVar2 = this._dialogHost;
									AottgInGameView.Position(pUVar2, (Vector2)(Vector2.zeroVector));
									pGVar3 = this._View_k__BackingField;
									pUVar2 = this._dialogHost;
									id = this.get_DialogId();
									if (pGVar3 != null) {
										pGVar7 = pGVar3.Dialog(pUVar2, id);
										this._Dialog_k__BackingField = pGVar7;
										return;
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000FB4")]
	[Address(RVA = "0x57B6020", Offset = "0x57B5020", VA = "0x57B6020", Slot = "21")]
	public override void Show()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardPopup.c (Gisketch.Aottg2UI.Game.AottgScoreboardPopup$$Show): clean
		GisketchView pGVar1;
		RectTransform __this_00;
		Transform __this_01;
		FlexLayout __this_02;
		YGValue value;
		GameObject pUVar2;
		float value_00;
		float fVar3;
		Rect UVar4;

		this.FitCanvas(this._dim);
		this.FitCanvas(this._dialogHost);
		pGVar1 = this._Dialog_k__BackingField;
		if ((pGVar1 != null) &&(pUVar2 = pGVar1._Root_k__BackingField, pUVar2 != null)) {
			__this_02 = pUVar2.GetComponent<FlexLayout>();
			__this_00 = this._canvasRect;
			if (__this_00 != null) {
				UVar4 = __this_00.rect;
				fVar3 = UVar4.m_Height + -64.0;
				value_00 = 0.0;
				if (0.0 <= fVar3) {
					value_00 = fVar3;
				}
				value = ((YGValue)value_00);
				if (__this_02 != null) {
					__this_02.MaxHeight = value;
					this.Show();
					__this_01 = this._dialogHost;
					if (__this_01 != null) {
						pUVar2 = __this_01.gameObject;
						GisketchScreenBuilder.SettleLayout(pUVar2);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000FB5")]
	[Address(RVA = "0x57B6190", Offset = "0x57B5190", VA = "0x57B6190")]
	private void FitCanvas(Transform target)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardPopup.c (Gisketch.Aottg2UI.Game.AottgScoreboardPopup$$FitCanvas): 2 lines keep C-only constructs
		RectTransform pUVar1;
		FlexLayout __this_00;
		YGValue GVar2;
		Rect UVar3;

		if (target == null) goto label_058b62fa;
		__this_00 = target.GetComponent<FlexLayout>();
		pUVar1 = this._canvasRect;
		if (pUVar1 == null) goto label_058b62fa;
		UVar3 = pUVar1.rect;
		if ((typeof(Rect)._2).cctor_finished_or_no_cctor == 0) {
			if ((typeof(YGValue)._2).cctor_finished_or_no_cctor == 0) goto label_058b626e;
	label_058b623d: ;
			GVar2 = ((YGValue)UVar3.m_Width);
		}
		else {
			if ((typeof(YGValue)._2).cctor_finished_or_no_cctor != 0) goto label_058b623d;
	label_058b626e: ;
			GVar2 = ((YGValue)UVar3.m_Width);
		}
		if (__this_00 != null) {
			__this_00.Width = GVar2;
			pUVar1 = this._canvasRect;
			if (pUVar1 != null) {
				UVar3 = pUVar1.rect;
				GVar2 = ((YGValue)UVar3.m_Height);
				__this_00.Height = GVar2;
				pUVar1 = this._canvasRect;
				if (pUVar1 != null) {
					UVar3 = pUVar1.rect;
					if ((RectTransform)target.klass != typeof(RectTransform)) {
						throw new InvalidCastException();
					}
					target.sizeDelta = (Vector2)UVar3._8_8_;
					return;
				}
			}
		}
	label_058b62fa: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000FB6")]
	[Address(RVA = "0x57B6310", Offset = "0x57B5310", VA = "0x57B6310")]
	protected AottgScoreboardPopup()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgScoreboardPopup.c (Gisketch.Aottg2UI.Game.AottgScoreboardPopup$$.ctor): clean
		base();
		return;
	}
}
