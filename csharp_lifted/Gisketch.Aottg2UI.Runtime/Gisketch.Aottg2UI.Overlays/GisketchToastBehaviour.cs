// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastBehaviour.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Overlays;

[Token(Token = "0x2000051")]
public sealed class GisketchToastBehaviour : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IDragHandler
{
	[Token(Token = "0x4000193")]
	public const float DefaultDelay = 5f;

	[Token(Token = "0x4000194")]
	[FieldOffset(Offset = "0x20")]
	private Action _close;

	[Token(Token = "0x4000195")]
	[FieldOffset(Offset = "0x28")]
	private Vector2 _start;

	[Token(Token = "0x4000196")]
	[FieldOffset(Offset = "0x30")]
	private float _remaining;

	[Token(Token = "0x4000197")]
	[FieldOffset(Offset = "0x34")]
	private bool _paused;

	[Token(Token = "0x17000048")]
	public float Delay
	{
		[Token(Token = "0x60002EB")]
		[Address(RVA = "0x5259040", Offset = "0x5258040", VA = "0x5259040")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastBehaviour.c (Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour$$get_Delay): clean
			return 5.0;
		}
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x5259050", Offset = "0x5258050", VA = "0x5259050")]
	public void Setup(Action close)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastBehaviour.c (Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour$$Setup): clean
		this._close = close;
		this._remaining = 5.0;
		return;
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x5259070", Offset = "0x5258070", VA = "0x5259070", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastBehaviour.c (Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour$$OnPointerDown): clean
		if (eventData == null) {
			throw new NullReferenceException();
		}
		this._start = eventData._position_k__BackingField;
		return;
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x5259090", Offset = "0x5258090", VA = "0x5259090", Slot = "5")]
	public void OnDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastBehaviour.c (Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour$$OnDrag): 1 lines keep C-only constructs
		Action pSVar1;
		code *vtableDispatch;

		if (eventData == null) {
			throw new NullReferenceException();
		}
		if ((48.0 < this._start.y - eventData._position_k__BackingField.y) &&(pSVar1 = this._close, pSVar1 != null)) {
			vtableDispatch = (code)pSVar1.invoke_impl;
			(*vtableDispatch)(pSVar1.method_code,pSVar1.method,method,vtableDispatch);
			return;
		}
		return;
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x52590D0", Offset = "0x52580D0", VA = "0x52590D0")]
	public void SetPaused(bool paused)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastBehaviour.c (Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour$$SetPaused): clean
		this._paused = paused;
		return;
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x52590E0", Offset = "0x52580E0", VA = "0x52590E0")]
	private void Update()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastBehaviour.c (Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour$$Update): 2 lines keep C-only constructs
		uint uVar1;
		Action pSVar2;
		code *vtableDispatch;
		bool bVar3;
		ulong extraout_RDX;
		float fVar4;
		float fVar5;

		if (Il2CppMethodInitialized_0754296b == false) {
			Il2CppMethodInitialized_0754296b = true;
			uVar1 = (typeof(Application)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Application)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar3 = Application.isPlaying;
		}
		else {
			bVar3 = Application.isPlaying;
		}
		if ((bVar3) && (this._paused == false)) {
			fVar5 = this._remaining;
			fVar4 = Time.unscaledDeltaTime;
			fVar5 = fVar5 - fVar4;
			this._remaining = fVar5;
			if ((fVar5 <= 0.0) && (pSVar2 = this._close, pSVar2 != null)) {
				vtableDispatch = (code)pSVar2.invoke_impl;
				(*vtableDispatch)(pSVar2.method_code,pSVar2.method,extraout_RDX,vtableDispatch);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x52591A0", Offset = "0x52581A0", VA = "0x52591A0")]
	public GisketchToastBehaviour()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchToastBehaviour.c (Gisketch.Aottg2UI.Overlays.GisketchToastBehaviour$$.ctor): clean
		this._remaining = 5.0;
		base();
		return;
	}
}
