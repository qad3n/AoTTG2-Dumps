// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Overlays.GisketchToastStackHover
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastStackHover.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Overlays;

[Token(Token = "0x2000052")]
public sealed class GisketchToastStackHover : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler
{
	[Token(Token = "0x4000198")]
	[FieldOffset(Offset = "0x20")]
	private Action<bool> _hover;

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x52591B0", Offset = "0x52581B0", VA = "0x52591B0")]
	public void Setup(Action<bool> hover)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastStackHover.c (Gisketch.Aottg2UI.Overlays.GisketchToastStackHover$$Setup): clean
		this._hover = hover;
		return;
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x52591C0", Offset = "0x52581C0", VA = "0x52591C0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastStackHover.c (Gisketch.Aottg2UI.Overlays.GisketchToastStackHover$$OnPointerEnter): 1 lines keep C-only constructs
		Action<bool> pSVar1;
		code *vtableDispatch;

		pSVar1 = this._hover;
		if (pSVar1 == null) {
			return;
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,1,pSVar1.method,vtableDispatch);
		return;
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x52591E0", Offset = "0x52581E0", VA = "0x52591E0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastStackHover.c (Gisketch.Aottg2UI.Overlays.GisketchToastStackHover$$OnPointerExit): 1 lines keep C-only constructs
		Action<bool> pSVar1;
		code *vtableDispatch;

		pSVar1 = this._hover;
		if (pSVar1 == null) {
			return;
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,0,pSVar1.method,vtableDispatch);
		return;
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x5259200", Offset = "0x5258200", VA = "0x5259200")]
	public GisketchToastStackHover()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastStackHover.c (Gisketch.Aottg2UI.Overlays.GisketchToastStackHover$$.ctor): clean
		base();
		return;
	}
}
