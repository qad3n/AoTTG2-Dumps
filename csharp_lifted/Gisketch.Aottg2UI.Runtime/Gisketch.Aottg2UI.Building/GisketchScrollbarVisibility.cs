// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchScrollbarVisibility.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gilzoide.FlexUi;
using Gilzoide.FlexUi.Yoga;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x20000BA")]
[ExecuteAlways]
internal sealed class GisketchScrollbarVisibility : MonoBehaviour
{
	[Token(Token = "0x40003D4")]
	private const float InitialOverflowEpsilon = 0.5f;

	[Token(Token = "0x40003D5")]
	private const float ToggleOverflowEpsilon = 2f;

	[Token(Token = "0x40003D6")]
	private const int StablePasses = 2;

	[Token(Token = "0x40003D7")]
	[FieldOffset(Offset = "0x20")]
	private ScrollRect _scroll;

	[Token(Token = "0x40003D8")]
	[FieldOffset(Offset = "0x28")]
	private FlexLayout _flex;

	[Token(Token = "0x40003D9")]
	[FieldOffset(Offset = "0x30")]
	private bool? _autoHeight;

	[Token(Token = "0x40003DA")]
	[FieldOffset(Offset = "0x32")]
	private bool _hasVisibleState;

	[Token(Token = "0x40003DB")]
	[FieldOffset(Offset = "0x33")]
	private bool _visible;

	[Token(Token = "0x40003DC")]
	[FieldOffset(Offset = "0x34")]
	private bool? _pendingVisible;

	[Token(Token = "0x40003DD")]
	[FieldOffset(Offset = "0x38")]
	private int _pendingPasses;

	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x5291360", Offset = "0x5290360", VA = "0x5291360")]
	public void Setup(ScrollRect scroll)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScrollbarVisibility.c (Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$Setup): clean
		this._scroll = scroll;
		this.UpdateVisibility();
		return;
	}

	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x5291610", Offset = "0x5290610", VA = "0x5291610")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScrollbarVisibility.c (Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$LateUpdate): clean
		this.UpdateVisibility();
		return;
	}

	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x5291380", Offset = "0x5290380", VA = "0x5291380")]
	public bool UpdateVisibility()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScrollbarVisibility.c (Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$UpdateVisibility): 11 lines keep C-only constructs
		ScrollRect* targetAddress;
		RectTransform pUVar1;
		Scrollbar pUVar2;
		bool bVar3;
		bool bVar4;
		ScrollRect pUVar5;
		GameObject scrollbar;
		Rect UVar6;
		Rect UVar7;
		float fStack_34;

		pUVar5 = this._scroll;
		targetAddress = &this._scroll;
		bVar3 = ((Object)pUVar5 == null);
		if (bVar3) {
			pUVar5 = this.GetComponent<ScrollRect>();
			this._scroll = pUVar5;
		}
		pUVar5 = *targetAddress;
		bVar3 = ((Object)pUVar5 == null);
		if (bVar3) {
			return false;
		}
		if (*targetAddress != null) {
			pUVar1 = ((*targetAddress).fields).m_Viewport;
			bVar3 = ((Object)pUVar1 == null);
			if (bVar3) {
				return false;
			}
			if (*targetAddress != null) {
				pUVar1 = ((*targetAddress).fields).m_Content;
				bVar3 = ((Object)pUVar1 == null);
				if (bVar3) {
					return false;
				}
				if (*targetAddress != null) {
					pUVar2 = ((*targetAddress).fields).m_VerticalScrollbar;
					bVar3 = ((Object)pUVar2 == null);
					if (bVar3) {
						return false;
					}
					bVar3 = this.FitAutoHeightToContent();
					pUVar5 = this._scroll;
					if ((pUVar5 != null) &&(pUVar1 = pUVar5.m_Content, pUVar1 != null)) {
						UVar6 = pUVar1.rect;
						if ((*targetAddress != null) &&(pUVar1 = ((*targetAddress).fields).m_Viewport, pUVar1 != null)) {
							UVar7 = pUVar1.rect;
							if ((*targetAddress != null) &&(pUVar2 = ((*targetAddress).fields).m_VerticalScrollbar, pUVar2 != null)) {
								fStack_34 = UVar6.m_Height;
								fStack_34 = fStack_34 - UVar7.m_Height;
								scrollbar = pUVar2.gameObject;
								if (this._hasVisibleState == false) {
									this._visible = 0.5 < fStack_34;
									this._hasVisibleState = true;
									this._pendingVisible = (Nullable<bool>)0x0;
									this._pendingPasses = 0;
									bVar4 = GisketchScrollbarVisibility.ApplyVisibility(scrollbar, 0.5 < fStack_34);
								}
								else {
									bVar4 = -2.0 < fStack_34;
									if (this._visible == false) {
										bVar4 = 2.0 < fStack_34;
									}
									bVar4 = this.UpdateStableVisibility(scrollbar, bVar4);
								}
								return (bool)(bVar3 | bVar4);
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x5291620", Offset = "0x5290620", VA = "0x5291620")]
	private bool FitAutoHeightToContent()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScrollbarVisibility.c (Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$FitAutoHeightToContent): 12 lines keep C-only constructs
		FlexLayout* targetAddress;
		Nullable<bool> __this_00;
		int iVar1;
		ScrollRect pUVar2;
		RectTransform __this_01;
		YGValue GVar3;
		bool bVar4;
		FlexLayout pGVar5;
		ulong uVar6;
		YGValue value;
		float fVar7;
		float fVar8;
		float fVar9;
		Rect UVar10;
		Nullable<bool>[] local_40 = new Nullable<bool>[4];
		byte[] local_38 = new byte[8];

		pGVar5 = this._flex;
		targetAddress = &this._flex;
		bVar4 = ((Object)pGVar5 == null);
		if (bVar4) {
			pGVar5 = this.GetComponent<FlexLayout>();
			this._flex = pGVar5;
		}
		pGVar5 = *targetAddress;
		bVar4 = ((Object)pGVar5 == null);
		if (!bVar4) {
			__this_00 = &this._autoHeight;
			if (this._autoHeight.hasValue == false) {
				if (*targetAddress == null) goto label_053918b1;
				uVar6 = (ulong)((*targetAddress).fields)._height >> 0x20;
				local_40[0].hasValue = false;
				local_40[0].value = false;
				local_40 = new Nullable<bool>(uVar6 == 0 || uVar6 == 3);
				__this_00.fields = local_40[0];
			}
			bVar4 = __this_00.Value;
			if (bVar4) {
				pUVar2 = this._scroll;
				if ((pUVar2 == null) ||(__this_01 = pUVar2.m_Content, __this_01 == null)) {
	label_053918b1: ;
					throw new NullReferenceException();
				}
				UVar10 = __this_01.rect;
				fVar8 = UVar10.m_Height;
				if ((typeof(Rect)._2).cctor_finished_or_no_cctor == 0) {
					local_38 = (byte[])UVar10._8_8_;
					fVar8 = (float)local_38._4_4_;
				}
				if (0.0 < fVar8) {
					pGVar5 = *targetAddress;
					if (pGVar5 == null) goto label_053918b1;
					fVar7 = 0.0;
					if (pGVar5._paddingTop.Unit == 1) {
						fVar9 = pGVar5._paddingTop.Value;
						iVar1 = pGVar5._paddingBottom.Unit;
					}
					else {
						fVar9 = 0.0;
						iVar1 = pGVar5._paddingBottom.Unit;
					}
					if (iVar1 == 1) {
						fVar7 = pGVar5._paddingBottom.Value;
					}
					fVar7 = fVar8 + fVar9 + fVar7;
					GVar3 = pGVar5._height;
					if ((GVar3.Unit != 1) || (0.5 < ABS(GVar3.Value - fVar7))) {
						if (((typeof(YGValue))._2).cctor_finished_or_no_cctor == 0) {
							local_38._4_4_ = fVar8;
							local_38._0_4_ = fVar7;
							fVar7 = (float)local_38._0_4_;
						}
						value = ((YGValue)fVar7);
						pGVar5.Height = value;
						return true;
					}
				}
			}
		}
		return false;
	}

	[Token(Token = "0x60005E2")]
	[Address(RVA = "0x5291900", Offset = "0x5290900", VA = "0x5291900")]
	private bool UpdateStableVisibility(GameObject scrollbar, bool desired)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScrollbarVisibility.c (Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$UpdateStableVisibility): 3 lines keep C-only constructs
		Nullable<bool> SVar1;
		bool bVar2;
		int iVar3;
		ulong in_RAX;
		ulong local_28;

		local_28 = in_RAX;
		if (this._visible == desired) {
			this._pendingVisible = (Nullable<bool>)0x0;
			this._pendingPasses = 0;
			if (scrollbar == null) {
	label_05391a1f: ;
				throw new NullReferenceException();
			}
			bVar2 = scrollbar.activeSelf;
			if (bVar2 == desired) {
				return false;
			}
			scrollbar.SetActive(desired);
		}
		else {
			SVar1 = this._pendingVisible;
			if ((SVar1.hasValue != false) && ((ushort)SVar1 < 0x100 != desired)) {
				iVar3 = this._pendingPasses + 1;
				this._pendingPasses = iVar3;
				if (iVar3 < 2) {
					return true;
				}
				this._visible = desired;
				this._pendingVisible = (Nullable<bool>)0x0;
				this._pendingPasses = 0;
				if (scrollbar != null) {
					bVar2 = scrollbar.activeSelf;
					if (bVar2 == desired) {
						return true;
					}
					scrollbar.SetActive(desired);
					return true;
				}
				goto label_05391a1f;
			}
			local_28 = local_28 & 0xffffffffffff0000;
			local_28 = new Nullable<bool>(desired);
			this._pendingVisible = local_28._0_2_;
			this._pendingPasses = 1;
		}
		return true;
	}

	[Token(Token = "0x60005E3")]
	[Address(RVA = "0x52918C0", Offset = "0x52908C0", VA = "0x52918C0")]
	private static bool ApplyVisibility(GameObject scrollbar, bool visible)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScrollbarVisibility.c (Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$ApplyVisibility): clean
		bool bVar1;

		if (scrollbar == null) {
			throw new NullReferenceException();
		}
		bVar1 = scrollbar.activeSelf;
		if (bVar1 != visible) {
			scrollbar.SetActive(visible);
		}
		return bVar1 != visible;
	}

	[Token(Token = "0x60005E4")]
	[Address(RVA = "0x5291A30", Offset = "0x5290A30", VA = "0x5291A30")]
	private static float Point(YGValue value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScrollbarVisibility.c (Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$Point): clean
		if (value.Unit == 1) {
			return value.Value;
		}
		return 0.0;
	}

	[Token(Token = "0x60005E5")]
	[Address(RVA = "0x5291A50", Offset = "0x5290A50", VA = "0x5291A50")]
	public GisketchScrollbarVisibility()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScrollbarVisibility.c (Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$.ctor): clean
		base();
		return;
	}
}
