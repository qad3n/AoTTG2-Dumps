// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorHirarchyButton
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorHirarchyButton.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorHierarchyButton.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.EventSystems;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20008A5")]
internal class MapEditorHirarchyButton : Button, IBeginDragHandler, IEventSystemHandler, IDragHandler, IEndDragHandler, IPointerDownHandler
{
	[Token(Token = "0x4002B96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private UnityAction _onButtonRelease;

	[Token(Token = "0x4002B97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private UnityAction<PointerEventData> _onRightClick;

	[Token(Token = "0x4002B98")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private UnityAction<PointerEventData> _onPointerDown;

	[Token(Token = "0x4002B99")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private UnityAction<PointerEventData> _onBeginDrag;

	[Token(Token = "0x4002B9A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private UnityAction<PointerEventData> _onDrag;

	[Token(Token = "0x4002B9B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private UnityAction<PointerEventData> _onEndDrag;

	[Token(Token = "0x6005254")]
	[Address(RVA = "0x5C71880", Offset = "0x5C70880", VA = "0x5C71880")]
	public void Setup(UnityAction onButtonClick, UnityAction onButtonRelease, [Optional] UnityAction<PointerEventData> onRightClick, [Optional] UnityAction<PointerEventData> onPointerDown, [Optional] UnityAction<PointerEventData> onBeginDrag, [Optional] UnityAction<PointerEventData> onDrag, [Optional] UnityAction<PointerEventData> onEndDrag)
	{
		// Lifted from source/cpp/UI/MapEditorHirarchyButton.c (UI.MapEditorHirarchyButton$$Setup): clean
		Button.ButtonClickedEvent __this_00;
		UnityEvent __this_01;

		__this_00 = this.m_OnClick;
		if (__this_00 != null) {
			__this_00.RemoveAllListeners();
			__this_01 = (UnityEvent)this.m_OnClick;
			if (__this_01 != null) {
				__this_01.AddListener(onButtonClick);
				this._onButtonRelease = onButtonRelease;
				this._onRightClick = onRightClick;
				this._onPointerDown = onPointerDown;
				this._onBeginDrag = onBeginDrag;
				this._onDrag = onDrag;
				this._onEndDrag = onEndDrag;
				this.transition = 0;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005255")]
	[Address(RVA = "0x5C71990", Offset = "0x5C70990", VA = "0x5C71990", Slot = "41")]
	public override void OnPointerClick(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MapEditorHirarchyButton.c (UI.MapEditorHirarchyButton$$OnPointerClick): 1 lines keep C-only constructs
		UnityAction<PointerEventData> pUVar1;
		code *vtableDispatch;

		if (eventData == null) {
			throw new NullReferenceException();
		}
		if (eventData._button_k__BackingField != 1) {
			this.OnPointerClick(eventData);
			return;
		}
		pUVar1 = this._onRightClick;
		if (pUVar1 == null) {
			return;
		}
		vtableDispatch = (code)pUVar1.invoke_impl;
		(*vtableDispatch)(pUVar1.method_code,eventData,pUVar1.method,vtableDispatch);
		return;
	}

	[Token(Token = "0x6005256")]
	[Address(RVA = "0x5C719D0", Offset = "0x5C709D0", VA = "0x5C719D0", Slot = "18")]
	public new void OnPointerDown(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MapEditorHirarchyButton.c (UI.MapEditorHirarchyButton$$OnPointerDown): 1 lines keep C-only constructs
		UnityAction<PointerEventData> pUVar1;
		code *vtableDispatch;

		if (eventData == null) {
			throw new NullReferenceException();
		}
		if ((eventData._button_k__BackingField == 0) &&(pUVar1 = this._onPointerDown, pUVar1 != null)) {
			vtableDispatch = (code)pUVar1.invoke_impl;
			(*vtableDispatch)(pUVar1.method_code,eventData,pUVar1.method,vtableDispatch);
			return;
		}
		return;
	}

	[Token(Token = "0x6005257")]
	[Address(RVA = "0x5C71A10", Offset = "0x5C70A10", VA = "0x5C71A10", Slot = "43")]
	public void OnBeginDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MapEditorHirarchyButton.c (UI.MapEditorHirarchyButton$$OnBeginDrag): 1 lines keep C-only constructs
		UnityAction<PointerEventData> pUVar1;
		code *vtableDispatch;

		if (eventData == null) {
			throw new NullReferenceException();
		}
		if ((eventData._button_k__BackingField == 0) &&(pUVar1 = this._onBeginDrag, pUVar1 != null)) {
			vtableDispatch = (code)pUVar1.invoke_impl;
			(*vtableDispatch)(pUVar1.method_code,eventData,pUVar1.method,vtableDispatch);
			return;
		}
		return;
	}

	[Token(Token = "0x6005258")]
	[Address(RVA = "0x5C71A50", Offset = "0x5C70A50", VA = "0x5C71A50", Slot = "44")]
	public void OnDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MapEditorHirarchyButton.c (UI.MapEditorHirarchyButton$$OnDrag): 1 lines keep C-only constructs
		UnityAction<PointerEventData> pUVar1;
		code *vtableDispatch;

		if (eventData == null) {
			throw new NullReferenceException();
		}
		if ((eventData._button_k__BackingField == 0) &&(pUVar1 = this._onDrag, pUVar1 != null)) {
			vtableDispatch = (code)pUVar1.invoke_impl;
			(*vtableDispatch)(pUVar1.method_code,eventData,pUVar1.method,vtableDispatch);
			return;
		}
		return;
	}

	[Token(Token = "0x6005259")]
	[Address(RVA = "0x5C71A90", Offset = "0x5C70A90", VA = "0x5C71A90", Slot = "45")]
	public void OnEndDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MapEditorHirarchyButton.c (UI.MapEditorHirarchyButton$$OnEndDrag): 1 lines keep C-only constructs
		UnityAction<PointerEventData> pUVar1;
		code *vtableDispatch;

		if (eventData == null) {
			throw new NullReferenceException();
		}
		if ((eventData._button_k__BackingField == 0) &&(pUVar1 = this._onEndDrag, pUVar1 != null)) {
			vtableDispatch = (code)pUVar1.invoke_impl;
			(*vtableDispatch)(pUVar1.method_code,eventData,pUVar1.method,vtableDispatch);
			return;
		}
		return;
	}

	[Token(Token = "0x600525A")]
	[Address(RVA = "0x5C71AD0", Offset = "0x5C70AD0", VA = "0x5C71AD0", Slot = "33")]
	public override void OnPointerUp(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MapEditorHirarchyButton.c (UI.MapEditorHirarchyButton$$OnPointerUp): clean
		UnityAction pUVar1;

		this.OnPointerUp(eventData);
		if (eventData == null) {
			throw new NullReferenceException();
		}
		if ((eventData._button_k__BackingField == 0) &&(pUVar1 = this._onButtonRelease, pUVar1 != null)) {
			(*(code)pUVar1.invoke_impl)(pUVar1.method_code,pUVar1.method);
			return;
		}
		return;
	}

	[Token(Token = "0x600525B")]
	[Address(RVA = "0x5C71B20", Offset = "0x5C70B20", VA = "0x5C71B20")]
	public MapEditorHirarchyButton()
	{
		// Lifted from source/cpp/UI/MapEditorHirarchyButton.c (UI.MapEditorHirarchyButton$$.ctor): clean
		base();
		return;
	}
}
