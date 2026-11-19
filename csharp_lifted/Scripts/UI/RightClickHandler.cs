// ==================== AoTTG2 cross-reference ====================
// Type: UI.RightClickHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/RightClickHandler.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UI;

[Token(Token = "0x20007DE")]
internal class RightClickHandler : MonoBehaviour, IPointerClickHandler, IEventSystemHandler
{
	[Token(Token = "0x4002777")]
	[FieldOffset(Offset = "0x20")]
	private Action<PointerEventData> _onRightClick;

	[Token(Token = "0x6004BF7")]
	[Address(RVA = "0x5BEC670", Offset = "0x5BEB670", VA = "0x5BEC670")]
	public void Setup(Action<PointerEventData> onRightClick)
	{
		// Lifted from source/cpp/UI/RightClickHandler.c (UI.RightClickHandler$$Setup): clean
		this._onRightClick = onRightClick;
		return;
	}

	[Token(Token = "0x6004BF8")]
	[Address(RVA = "0x5BEC680", Offset = "0x5BEB680", VA = "0x5BEC680", Slot = "4")]
	public void OnPointerClick(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/RightClickHandler.c (UI.RightClickHandler$$OnPointerClick): 1 lines keep C-only constructs
		Action<PointerEventData> pSVar1;
		code *vtableDispatch;

		if (eventData == null) {
			throw new NullReferenceException();
		}
		if ((eventData._button_k__BackingField == 1) &&(pSVar1 = this._onRightClick, pSVar1 != null)) {
			vtableDispatch = (code)pSVar1.invoke_impl;
			(*vtableDispatch)(pSVar1.method_code,eventData,pSVar1.method,vtableDispatch);
			return;
		}
		return;
	}

	[Token(Token = "0x6004BF9")]
	[Address(RVA = "0x5BEC6B0", Offset = "0x5BEB6B0", VA = "0x5BEC6B0")]
	public RightClickHandler()
	{
		// Lifted from source/cpp/UI/RightClickHandler.c (UI.RightClickHandler$$.ctor): clean
		base();
		return;
	}
}
