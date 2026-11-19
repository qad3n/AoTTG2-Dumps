// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapDragArea
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapDragArea.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UI;

[Token(Token = "0x200084F")]
internal class MapDragArea : MonoBehaviour, IDragHandler, IEventSystemHandler, IEndDragHandler
{
	[Token(Token = "0x4002A0C")]
	[FieldOffset(Offset = "0x20")]
	private Action<Vector2> _onDrag;

	[Token(Token = "0x4002A0D")]
	[FieldOffset(Offset = "0x28")]
	private Action _onEndDrag;

	[Token(Token = "0x6004F7A")]
	[Address(RVA = "0x5C35870", Offset = "0x5C34870", VA = "0x5C35870")]
	public void Setup(Action<Vector2> onDrag, Action onEndDrag)
	{
		// Lifted from source/cpp/UI/MapDragArea.c (UI.MapDragArea$$Setup): clean
		this._onDrag = onDrag;
		this._onEndDrag = onEndDrag;
		return;
	}

	[Token(Token = "0x6004F7B")]
	[Address(RVA = "0x5C36F10", Offset = "0x5C35F10", VA = "0x5C36F10", Slot = "4")]
	public void OnDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MapDragArea.c (UI.MapDragArea$$OnDrag): 1 lines keep C-only constructs
		Vector2 UVar1;
		Vector2 UVar2;
		Action<Vector2> pSVar3;
		bool bVar4;
		RectTransform rect;
		Camera pUVar5;
		Vector2 local_48;
		Vector2 local_40;
		Vector2 local_38;

		local_40.x = 0.0;
		local_40.y = 0.0;
		local_48.x = 0.0;
		local_48.y = 0.0;
		rect = (RectTransform)this.transform;
		if ((rect != null) && (rect.klass != typeof(RectTransform))) {
			throw new InvalidCastException();
		}
		if (eventData == null) {
	label_05d37058: ;
			throw new NullReferenceException();
		}
		local_38 = eventData._position_k__BackingField;
		pUVar5 = eventData.pressEventCamera;
		bVar4 = RectTransformUtility.ScreenPointToLocalPointInRectangle(rect, (Vector2)local_38, pUVar5, ref local_40);
		if (bVar4) {
			UVar1 = eventData._position_k__BackingField;
			UVar2 = eventData._delta_k__BackingField;
			local_38.y = UVar1.y - UVar2.y;
			local_38.x = UVar1.x - UVar2.x;
			pUVar5 = eventData.pressEventCamera;
			bVar4 = RectTransformUtility.ScreenPointToLocalPointInRectangle(rect, (Vector2)local_38, pUVar5, ref local_48);
			if (bVar4) {
				pSVar3 = this._onDrag;
				if (pSVar3 == null) goto label_05d37058;
				(*(code)pSVar3.invoke_impl)(local_40.x - local_48.x,pSVar3.method_code,pSVar3.method);
			}
		}
		return;
	}

	[Token(Token = "0x6004F7C")]
	[Address(RVA = "0x5C37070", Offset = "0x5C36070", VA = "0x5C37070", Slot = "5")]
	public void OnEndDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MapDragArea.c (UI.MapDragArea$$OnEndDrag): 1 lines keep C-only constructs
		Action pSVar1;
		code *vtableDispatch;

		pSVar1 = this._onEndDrag;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,pSVar1.method,method,vtableDispatch);
		return;
	}

	[Token(Token = "0x6004F7D")]
	[Address(RVA = "0x5C37090", Offset = "0x5C36090", VA = "0x5C37090")]
	public MapDragArea()
	{
		// Lifted from source/cpp/UI/MapDragArea.c (UI.MapDragArea$$.ctor): clean
		base();
		return;
	}
}
