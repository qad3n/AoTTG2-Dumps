// ==================== AoTTG2 cross-reference ====================
// Type: UI.HoldableButton
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/HoldableButton.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/HoldableButton.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace UI;

[Token(Token = "0x20007F1")]
internal class HoldableButton : EventTrigger
{
	[Token(Token = "0x4002797")]
	[FieldOffset(Offset = "0x28")]
	public float ClickSpeed;

	[Token(Token = "0x4002798")]
	[FieldOffset(Offset = "0x2C")]
	public float HoldDelay;

	[Token(Token = "0x4002799")]
	[FieldOffset(Offset = "0x30")]
	private bool isHeld;

	[Token(Token = "0x400279A")]
	[FieldOffset(Offset = "0x34")]
	private float holdTime;

	[Token(Token = "0x400279B")]
	[FieldOffset(Offset = "0x38")]
	private float nextClickTime;

	[Token(Token = "0x400279C")]
	[FieldOffset(Offset = "0x40")]
	[CompilerGenerated]
	private Action m_OnClick;

	[Token(Token = "0x14000007")]
	public event Action OnClick
	{
		[Token(Token = "0x6004C4A")]
		[Address(RVA = "0x5BF0910", Offset = "0x5BEF910", VA = "0x5BF0910")]
		[CompilerGenerated]
		add
		{
			// Lifted from source/cpp/UI/HoldableButton.c (UI.HoldableButton$$add_OnClick): 2 lines keep C-only constructs
			Action pSVar1;
			Delegate value_00;
			Action a;
			bool bVar2;

			a = this.OnClick;
			while(true) {
				value_00 = Delegate.Combine((Delegate)a, (Delegate)value);
				if ((value_00 != null) &&((Action)value_00.klass != typeof(Action))) break;
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&this.OnClick, value_00, a);
				bVar2 = pSVar1 == a;
				a = pSVar1;
				if (bVar2) {
					return;
				}
			}
			throw new InvalidCastException();
		}
		[Token(Token = "0x6004C4B")]
		[Address(RVA = "0x5BF09A0", Offset = "0x5BEF9A0", VA = "0x5BF09A0")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/UI/HoldableButton.c (UI.HoldableButton$$remove_OnClick): 2 lines keep C-only constructs
			Action pSVar1;
			Delegate value_00;
			Action source;
			bool bVar2;

			source = this.OnClick;
			while(true) {
				value_00 = Delegate.Remove((Delegate)source, (Delegate)value);
				if ((value_00 != null) &&((Action)value_00.klass != typeof(Action))) break;
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&this.OnClick, value_00, source);
				bVar2 = pSVar1 == source;
				source = pSVar1;
				if (bVar2) {
					return;
				}
			}
			throw new InvalidCastException();
		}
	}

	[Token(Token = "0x6004C4C")]
	[Address(RVA = "0x5BF0A30", Offset = "0x5BEFA30", VA = "0x5BF0A30")]
	private void Update()
	{
		// Lifted from source/cpp/UI/HoldableButton.c (UI.HoldableButton$$Update): clean
		Action pSVar1;
		float fVar2;
		float fVar3;

		if (this.isHeld != false) {
			fVar3 = this.holdTime;
			fVar2 = Time.deltaTime;
			fVar2 = fVar2 + fVar3;
			this.holdTime = fVar2;
			if (this.HoldDelay <= fVar2) {
				fVar3 = Time.time;
				if (this.nextClickTime <= fVar3) {
					pSVar1 = this.OnClick;
					if (pSVar1 != null) {
						(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar1.method);
					}
					fVar3 = Time.time;
					this.nextClickTime = 1.0 / this.ClickSpeed + fVar3;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6004C4D")]
	[Address(RVA = "0x5BF0AB0", Offset = "0x5BEFAB0", VA = "0x5BF0AB0", Slot = "25")]
	public override void OnPointerDown(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/HoldableButton.c (UI.HoldableButton$$OnPointerDown): clean
		Action pSVar1;
		float fVar2;

		this.isHeld = true;
		this.holdTime = 0.0;
		fVar2 = Time.time;
		this.nextClickTime = fVar2 + this.HoldDelay;
		pSVar1 = this.OnClick;
		if (pSVar1 == null) {
			return;
		}
		(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar1.method);
		return;
	}

	[Token(Token = "0x6004C4E")]
	[Address(RVA = "0x5BF0AF0", Offset = "0x5BEFAF0", VA = "0x5BF0AF0", Slot = "26")]
	public override void OnPointerUp(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/HoldableButton.c (UI.HoldableButton$$OnPointerUp): clean
		this.isHeld = false;
		return;
	}

	[Token(Token = "0x6004C4F")]
	[Address(RVA = "0x5BF0B00", Offset = "0x5BEFB00", VA = "0x5BF0B00")]
	public HoldableButton()
	{
		// Lifted from source/cpp/UI/HoldableButton.c (UI.HoldableButton$$.ctor): clean
		this.ClickSpeed = 12.0;
		this.HoldDelay = 0.5;
		base();
		return;
	}
}
