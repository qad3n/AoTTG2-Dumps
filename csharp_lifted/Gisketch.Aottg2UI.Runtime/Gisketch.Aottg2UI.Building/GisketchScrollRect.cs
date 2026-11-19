// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchScrollRect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchScrollRect.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x20000B9")]
internal sealed class GisketchScrollRect : ScrollRect
{
	[Token(Token = "0x40003D3")]
	[FieldOffset(Offset = "0x130")]
	private GisketchScrollContentLayout _contentLayout;

	[Token(Token = "0x60005D7")]
	[Address(RVA = "0x5290D90", Offset = "0x528FD90", VA = "0x5290D90", Slot = "47")]
	protected override void SetContentAnchoredPosition(Vector2 position)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScrollRect.c (Gisketch.Aottg2UI.Building.GisketchScrollRect$$SetContentAnchoredPosition): clean


		this.SetContentAnchoredPosition(position);
		this.SyncContentLayout();
		return;
	}

	[Token(Token = "0x60005D8")]
	[Address(RVA = "0x5290F00", Offset = "0x528FF00", VA = "0x5290F00", Slot = "49")]
	protected override void SetNormalizedPosition(float value, int axis)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScrollRect.c (Gisketch.Aottg2UI.Building.GisketchScrollRect$$SetNormalizedPosition): clean


		this.SetNormalizedPosition(value, axis);
		this.SyncContentLayout();
		return;
	}

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x5290F20", Offset = "0x528FF20", VA = "0x5290F20", Slot = "48")]
	protected override void LateUpdate()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScrollRect.c (Gisketch.Aottg2UI.Building.GisketchScrollRect$$LateUpdate): clean


		this.LateUpdate();
		this.SyncContentLayout();
		return;
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x5290F40", Offset = "0x528FF40", VA = "0x5290F40", Slot = "42")]
	public override void OnScroll(PointerEventData data)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScrollRect.c (Gisketch.Aottg2UI.Building.GisketchScrollRect$$OnScroll): 4 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		Transform pUVar3;
		GameObject root;
		Vector2 local_40;
		PointerEventData local_38;
		PointerEventData* local_28;
		Vector2 local_20;

		local_38 = data;
		if (data == null) goto label_053911a3;
		bVar2 = this.CanScroll((Vector2)data._scrollDelta_k__BackingField);
		if (!bVar2) {
			pUVar3 = this.transform;
			if (pUVar3 == null) goto label_053911a3;
			pUVar3 = pUVar3.parent;
			bVar2 = ((Object)pUVar3 != null);
			if (bVar2) {
				pUVar3 = this.transform;
				if ((pUVar3 != null) &&(pUVar3 = pUVar3.parent, pUVar3 != null)) {
					root = pUVar3.gameObject;
					if (Il2CppMethodInitialized_07542be9 == false) {
						Il2CppMethodInitialized_07542be9 = true;
						uVar1 = (typeof(ExecuteEvents)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar1 = ((typeof(ExecuteEvents))._2). cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
					}
					ExecuteEvents.ExecuteHierarchy<IScrollHandler>(root, (BaseEventData)data, (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T__o)ExecuteEvents.s_ScrollHandler);
					return;
				}
				goto label_053911a3;
			}
		}
		if ((this.m_Horizontal == false) || (this.m_Vertical != false)) {
			this.OnScroll(data);
			return;
		}
		local_40 = data._scrollDelta_k__BackingField;
		data._scrollDelta_k__BackingField.y = -local_40.y;
		local_28 = &local_38;
		local_20 = &local_40;
		this.OnScroll(data);
		if (local_38 != null) {
			local_38._scrollDelta_k__BackingField = local_40;
			return;
		}
	label_053911a3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x52911D0", Offset = "0x52901D0", VA = "0x52911D0")]
	private bool CanScroll(Vector2 delta)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScrollRect.c (Gisketch.Aottg2UI.Building.GisketchScrollRect$$CanScroll): clean
		bool bVar1;
		RectTransform pUVar2;
		bool bVar3;
		float fVar4;
		Rect UVar5;
		Rect UVar6;
		float fStack_34;
		float local_28;
		float fStack_24;

		pUVar2 = this.m_Content;
		bVar1 = ((Object)pUVar2 == null);
		if (bVar1) {
			return false;
		}
		pUVar2 = this.viewRect;
		if (pUVar2 == null) {
	label_05391345: ;
			throw new NullReferenceException();
		}
		UVar5 = pUVar2.rect;
		pUVar2 = this.m_Content;
		if (pUVar2 == null) goto label_05391345;
		UVar6 = pUVar2.rect;
		if (this.m_Vertical == false) {
	label_053912ef: ;
			if (this.m_Horizontal == false) {
				return false;
			}
			fVar4 = UVar6.m_Width;
			local_28 = UVar5.m_Width;
			local_28 = local_28 + 0.5;
		}
		else {
			fStack_34 = delta.y;
			if ((fStack_34 == 0.0) && (!NAN(fStack_34))) goto label_053912ef;
			fStack_24 = UVar5.m_Height;
			if (UVar6.m_Height <= fStack_24 + 0.5) goto label_053912ef;
			local_28 = this.verticalNormalizedPosition;
			if (fStack_34 <= 0.0) {
				bVar1 = local_28 == 0.001;
				bVar3 = local_28 < 0.001;
				goto label_05391326;
			}
			fVar4 = 0.999;
		}
		bVar1 = fVar4 == local_28;
		bVar3 = fVar4 < local_28;
	label_05391326: ;
		return !bVar3 && !bVar1;
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x5290DB0", Offset = "0x528FDB0", VA = "0x5290DB0")]
	private void SyncContentLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScrollRect.c (Gisketch.Aottg2UI.Building.GisketchScrollRect$$SyncContentLayout): 7 lines keep C-only constructs
		GisketchScrollContentLayout* targetAddress;
		RectTransform pUVar1;
		bool bVar2;
		Transform x;
		GisketchScrollContentLayout pGVar3;

		pUVar1 = this.m_Content;
		bVar2 = ((Object)pUVar1 == null);
		if (bVar2) {
			return;
		}
		pGVar3 = this._contentLayout;
		targetAddress = &this._contentLayout;
		bVar2 = ((Object)pGVar3 == null);
		if (bVar2) {
	label_05390e86: ;
			pUVar1 = this.m_Content;
			if (pUVar1 == null) goto label_05390ef2;
			pGVar3 = pUVar1.GetComponent<GisketchScrollContentLayout>();
			*targetAddress = pGVar3;
		}
		else {
			if (*targetAddress == null) goto label_05390ef2;
			x = (*targetAddress).transform;
			pUVar1 = this.m_Content;
			bVar2 = ((Object)x != (Object)pUVar1);
			if (bVar2) goto label_05390e86;
		}
		pGVar3 = *targetAddress;
		bVar2 = ((Object)pGVar3 != null);
		if (!bVar2) {
			return;
		}
		if (*targetAddress != null) {
			(*targetAddress).SyncScrollOffset();
			return;
		}
	label_05390ef2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x5291350", Offset = "0x5290350", VA = "0x5291350")]
	public GisketchScrollRect()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchScrollRect.c (Gisketch.Aottg2UI.Building.GisketchScrollRect$$.ctor): clean
		base();
		return;
	}
}
