// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputButton
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputButton.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200073C")]
public class MobileInputButton : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IPointerUpHandler
{
	[Token(Token = "0x400245A")]
	[FieldOffset(Offset = "0x20")]
	private MobileInput[] _inputs;

	[Token(Token = "0x400245B")]
	[FieldOffset(Offset = "0x28")]
	private bool _aimAssistOnPress;

	[Token(Token = "0x400245C")]
	[FieldOffset(Offset = "0x29")]
	private bool _aimAssistOnRelease;

	[Token(Token = "0x400245D")]
	[FieldOffset(Offset = "0x2A")]
	private bool _pressed;

	[Token(Token = "0x400245E")]
	[FieldOffset(Offset = "0x30")]
	private Image _image;

	[Token(Token = "0x400245F")]
	[FieldOffset(Offset = "0x38")]
	private MobileInputSkin _normalSkin;

	[Token(Token = "0x4002460")]
	[FieldOffset(Offset = "0x40")]
	private MobileInputSkin _pressedSkin;

	[Token(Token = "0x4002461")]
	[FieldOffset(Offset = "0x48")]
	private MobileInputControlShape _shape;

	[Token(Token = "0x17000C08")]
	public bool HasInputs
	{
		[Token(Token = "0x6004637")]
		[Address(RVA = "0x5B6AD40", Offset = "0x5B69D40", VA = "0x5B6AD40")]
		get
		{
			// Lifted from source/cpp/UI/MobileInputButton.c (UI.MobileInputButton$$get_HasInputs): clean
			MobileInput[] pSVar1;

			pSVar1 = this._inputs;
			if (pSVar1 == null) {
				return false;
			}
			return (int)pSVar1.Length != 0;
		}
	}

	[Token(Token = "0x6004638")]
	[Address(RVA = "0x5B6C5A0", Offset = "0x5B6B5A0", VA = "0x5B6C5A0")]
	public void Setup(MobileInput[] inputs, bool aimAssistOnPress, bool aimAssistOnRelease, MobileInputSkin normalSkin, MobileInputSkin pressedSkin, MobileInputControlShape shape)
	{
		// Lifted from source/cpp/UI/MobileInputButton.c (UI.MobileInputButton$$Setup): clean
		Image pUVar1;

		if (inputs == null) {
			inputs = (MobileInput[])new MobileInput[0];
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this._inputs = inputs;
		this._aimAssistOnPress = aimAssistOnPress;
		this._aimAssistOnRelease = aimAssistOnRelease;
		this._normalSkin = normalSkin;
		this._pressedSkin = pressedSkin;
		this._shape = shape;
		pUVar1 = this.GetComponent<Image>();
		this._image = pUVar1;
		return;
	}

	[Token(Token = "0x6004639")]
	[Address(RVA = "0x5B6DE20", Offset = "0x5B6CE20", VA = "0x5B6DE20")]
	private void OnDisable()
	{
		// Lifted from source/cpp/UI/MobileInputButton.c (UI.MobileInputButton$$OnDisable): clean


		this.SetPressed(false, null);
		return;
	}

	[Token(Token = "0x600463A")]
	[Address(RVA = "0x5B6DE40", Offset = "0x5B6CE40", VA = "0x5B6DE40", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileInputButton.c (UI.MobileInputButton$$OnPointerDown): clean


		this.SetPressed(true, null);
		return;
	}

	[Token(Token = "0x600463B")]
	[Address(RVA = "0x5B6DE50", Offset = "0x5B6CE50", VA = "0x5B6DE50", Slot = "5")]
	public void OnPointerUp(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileInputButton.c (UI.MobileInputButton$$OnPointerUp): clean


		this.SetPressed(false, null);
		return;
	}

	[Token(Token = "0x600463C")]
	[Address(RVA = "0x5B6DE30", Offset = "0x5B6CE30", VA = "0x5B6DE30")]
	public void SetPressed(bool pressed)
	{
		// Lifted from source/cpp/UI/MobileInputButton.c (UI.MobileInputButton$$SetPressed): clean


		this.SetPressed(pressed, null);
		return;
	}

	[Token(Token = "0x600463D")]
	[Address(RVA = "0x5B6DF60", Offset = "0x5B6CF60", VA = "0x5B6DF60")]
	public void SetHighlighted(bool highlighted)
	{
		// Lifted from source/cpp/UI/MobileInputButton.c (UI.MobileInputButton$$SetHighlighted): 1 lines keep C-only constructs
		int shape;
		Image pUVar1;
		MobileInputSkin skin;
		bool bVar2;

		pUVar1 = this._image;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._image;
			skin = (&this._normalSkin)[highlighted];
			shape = this._shape;
			MobileControlSkinManager.ApplySkin(pUVar1, skin, shape);
			return;
		}
		return;
	}

	[Token(Token = "0x600463E")]
	[Address(RVA = "0x5B6DE60", Offset = "0x5B6CE60", VA = "0x5B6DE60")]
	public void SetPressed(bool pressed, Func<MobileInput, bool> keepInputPressed)
	{
		// Lifted from source/cpp/UI/MobileInputButton.c (UI.MobileInputButton$$SetPressed): clean
		uint uVar1;
		MobileInput[] pSVar2;
		MobileInput __this_00;
		sbyte cVar3;
		ulong uVar4;
		ulong uVar5;
		long lVar6;

		if (this._pressed != pressed) {
			this._pressed = pressed;
			if (*(sbyte)((long)this + (0x29 - (ulong)pressed)) != false) {
				MobileAimAssist.SnapToNearestTarget();
			}
			this.SetHighlighted(pressed);
			pSVar2 = this._inputs;
			if (pSVar2 == null) {
	label_05c6df57: ;
				throw new NullReferenceException();
			}
			uVar4 = pSVar2.Length;
			if ((keepInputPressed == null) || (pressed)) {
				if (0 < (int)uVar4) {
					lVar6 = 0;
					do {
						if ((uint)uVar4 <= (uint)lVar6) goto label_05c6df52;
						if (pSVar2[lVar6] == null) goto label_05c6df57;
						(pSVar2[lVar6]).SetPressed(pressed);
						uVar1 = (uint)pSVar2.Length;
						uVar4 = (ulong)uVar1;
						lVar6 = lVar6 + 1;
					} while ((int)lVar6 < (int)uVar1);
				}
			}
			else if (0 < (int)uVar4) {
				uVar4 = uVar4 & 0xffffffff;
				uVar5 = 0;
				do {
					if (uVar4 <= uVar5) {
	label_05c6df52: ;
						throw new IndexOutOfRangeException();
					}
					__this_00 = pSVar2[uVar5];
					cVar3 = (*(code)keepInputPressed.invoke_impl)(keepInputPressed.method_code,__this_00,keepInputPressed.method) ;
					if (cVar3 == false) {
						if (__this_00 == null) goto label_05c6df57;
						__this_00.SetPressed(false);
					}
					uVar5 = uVar5 + 1;
					uVar1 = (uint)pSVar2.Length;
					uVar4 = (ulong)uVar1;
				} while ((long)uVar5 < (long)(int)uVar1);
			}
		}
		return;
	}

	[Token(Token = "0x600463F")]
	[Address(RVA = "0x5B6E010", Offset = "0x5B6D010", VA = "0x5B6E010")]
	public void TriggerOneFrame()
	{
		// Lifted from source/cpp/UI/MobileInputButton.c (UI.MobileInputButton$$TriggerOneFrame): clean
		MobileInput[] pSVar1;
		uint uVar2;
		uint uVar3;

		pSVar1 = this._inputs;
		if (pSVar1 == null) {
	label_05c6e05f: ;
			throw new NullReferenceException();
		}
		uVar2 = (uint)pSVar1.Length;
		if (0 < (int)uVar2) {
			uVar3 = 0;
			do {
				if (uVar2 <= uVar3) {
					throw new IndexOutOfRangeException();
				}
				if (pSVar1[(int)uVar3] == null) goto label_05c6e05f;
				(pSVar1[(int)uVar3]).PressForOneFrame();
				uVar3 = uVar3 + 1;
				uVar2 = (uint)pSVar1.Length;
			} while ((int)uVar3 < (int)uVar2);
		}
		return;
	}

	[Token(Token = "0x6004640")]
	[Address(RVA = "0x5B6E070", Offset = "0x5B6D070", VA = "0x5B6E070")]
	public MobileInputButton()
	{
		// Lifted from source/cpp/UI/MobileInputButton.c (UI.MobileInputButton$$.ctor): clean
		MobileInput[] pSVar1;

		pSVar1 = (MobileInput[])new MobileInput[0];
		this._inputs = pSVar1;
		base();
		return;
	}
}
