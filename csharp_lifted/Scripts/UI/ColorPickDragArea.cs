// ==================== AoTTG2 cross-reference ====================
// Type: UI.ColorPickDragArea
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ColorPickDragArea.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UI;

[Token(Token = "0x200078F")]
internal class ColorPickDragArea : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler
{
	[Token(Token = "0x2000790")]
	public enum Mode
	{
		[Token(Token = "0x4002640")]
		TwoDimensional,
		[Token(Token = "0x4002641")]
		Horizontal,
		[Token(Token = "0x4002642")]
		Vertical
	}

	[Token(Token = "0x400263D")]
	[FieldOffset(Offset = "0x20")]
	private Mode _mode;

	[Token(Token = "0x400263E")]
	[FieldOffset(Offset = "0x28")]
	private Action<float, float> _onChanged;

	[Token(Token = "0x6004907")]
	[Address(RVA = "0x5BB9FE0", Offset = "0x5BB8FE0", VA = "0x5BB9FE0")]
	public void Setup(Mode mode, Action<float, float> onChanged)
	{
		// Lifted from source/cpp/UI/ColorPickDragArea.c (UI.ColorPickDragArea$$Setup): clean
		this._mode = mode;
		this._onChanged = onChanged;
		return;
	}

	[Token(Token = "0x6004908")]
	[Address(RVA = "0x5BBC350", Offset = "0x5BBB350", VA = "0x5BBC350", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/ColorPickDragArea.c (UI.ColorPickDragArea$$OnPointerDown): clean
		this.Notify(eventData);
		return;
	}

	[Token(Token = "0x6004909")]
	[Address(RVA = "0x5BBC5C0", Offset = "0x5BBB5C0", VA = "0x5BBC5C0", Slot = "5")]
	public void OnDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/ColorPickDragArea.c (UI.ColorPickDragArea$$OnDrag): clean
		this.Notify(eventData);
		return;
	}

	[Token(Token = "0x600490A")]
	[Address(RVA = "0x5BBC360", Offset = "0x5BBB360", VA = "0x5BBC360")]
	private void Notify(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/ColorPickDragArea.c (UI.ColorPickDragArea$$Notify): 11 lines keep C-only constructs
		int iVar1;
		Action<float, float> pSVar2;
		float fVar3;
		bool bVar4;
		RectTransform pUVar5;
		Camera cam;
		RectTransform rect;
		float fVar6;
		float fVar7;
		uint uVar8;
		float fVar9;
		Rect UVar10;
		Vector2 UStack_40;
		byte[] auStack_38 = new byte[8];
		byte[] auStack_28 = new byte[16];

		UStack_40.x = 0.0;
		UStack_40.y = 0.0;
		pUVar5 = (RectTransform)this.transform;
		rect = null;
		if ((pUVar5 != null) &&(rect = null, pUVar5.klass == typeof(RectTransform))) {
			rect = pUVar5;
		}
		bVar4 = ((Object)rect == null);
		if ((bVar4) || (this._onChanged == null)) {
			return;
		}
		if (eventData != null) {
			auStack_38 = (byte[])eventData._position_k__BackingField;
			cam = eventData.pressEventCamera;
			bVar4 = RectTransformUtility.ScreenPointToLocalPointInRectangle(rect, (Vector2)auStack_38, cam, ref UStack_40);
			if (!bVar4) {
				return;
			}
			if (rect != null) {
				UVar10 = rect.rect;
				auStack_38 = (byte[])UVar10._0_8_;
				UVar10 = rect.rect;
				fVar7 = UVar10.m_Width + UVar10.m_XMin;
				uVar8 = 0;
				if (((float)auStack_38._0_4_ != fVar7) || (NAN((float)auStack_38._0_4_) || NAN(fVar7))) {
					fVar9 = (UStack_40.x - (float)auStack_38._0_4_) / (fVar7 - (float)auStack_38._0_4_);
					fVar7 = 1.0;
					if (fVar9 <= 1.0) {
						fVar7 = fVar9;
					}
					uVar8 = -(uint)(0.0 <= fVar9) & (uint)fVar7;
				}
				auStack_28 = ZEXT416(uVar8);
				UVar10 = rect.rect;
				auStack_38._4_4_ = UVar10.m_YMin;
				auStack_38._0_4_ = auStack_38._4_4_;
				UVar10 = rect.rect;
				fVar9 = UVar10.m_Height + UVar10.m_YMin;
				fVar7 = 0.0;
				if (((float)auStack_38._0_4_ != fVar9) || (NAN((float)auStack_38._0_4_) || NAN(fVar9))) {
					fVar9 = (UStack_40.y - (float)auStack_38._0_4_) / (fVar9 - (float)auStack_38._0_4_);
					fVar7 = 1.0;
					if (fVar9 <= 1.0) {
						fVar7 = fVar9;
					}
					fVar7 = (float)(-(uint)(0.0 <= fVar9) & (uint)fVar7);
				}
				pSVar2 = this._onChanged;
				if (pSVar2 != null) {
					iVar1 = this._mode;
					fVar9 = 0.0;
					if (iVar1 != 2) {
						fVar9 = (float)auStack_28._0_4_;
					}
					fVar3 = 0.0;
					if (iVar1 != 1) {
						fVar3 = fVar7;
					}
					fVar7 = 1.0;
					if (fVar3 <= 1.0) {
						fVar7 = fVar3;
					}
					fVar6 = (float)auStack_28._0_4_;
					if (iVar1 != 1) {
						fVar6 = fVar9;
					}
					fVar9 = 1.0;
					if (fVar6 <= 1.0) {
						fVar9 = fVar6;
					}
					(*(code)pSVar2.invoke_impl)(-(uint)(0.0 <= fVar6) & (uint)fVar9,-(uint)(0.0 <= fVar3) & (uint)fVar7,pSVar2.method_code,pSVar2.method);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600490B")]
	[Address(RVA = "0x5BBC5D0", Offset = "0x5BBB5D0", VA = "0x5BBC5D0")]
	public ColorPickDragArea()
	{
		// Lifted from source/cpp/UI/ColorPickDragArea.c (UI.ColorPickDragArea$$.ctor): clean
		base();
		return;
	}
}
