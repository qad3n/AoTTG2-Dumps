// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputHoldButton
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputHoldButton.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x200073D")]
public class MobileInputHoldButton : MobileInputHoldControl
{
	[Token(Token = "0x4002462")]
	[FieldOffset(Offset = "0x78")]
	private MobileInput[] _inputs;

	[Token(Token = "0x6004641")]
	[Address(RVA = "0x5B6A720", Offset = "0x5B69720", VA = "0x5B6A720")]
	public void SetupHoldButton(RectTransform rect, MobileInput[] inputs, MobileInputSkin normalSkin, MobileInputSkin pressedSkin, MobileInputControlShape shape)
	{
		// Lifted from source/cpp/UI/MobileInputHoldButton.c (UI.MobileInputHoldButton$$SetupHoldButton): clean


		if (inputs == null) {
			inputs = (MobileInput[])new MobileInput[0];
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this._inputs = inputs;
		this.Setup(rect, normalSkin, pressedSkin, shape);
		return;
	}

	[Token(Token = "0x6004642")]
	[Address(RVA = "0x5B6E1B0", Offset = "0x5B6D1B0", VA = "0x5B6E1B0", Slot = "8")]
	protected override void OnControlPressed()
	{
		// Lifted from source/cpp/UI/MobileInputHoldButton.c (UI.MobileInputHoldButton$$OnControlPressed): clean
		MobileInput[] pSVar1;
		uint uVar2;
		uint uVar3;

		pSVar1 = this._inputs;
		if (pSVar1 == null) {
	label_05c6e204: ;
			throw new NullReferenceException();
		}
		uVar2 = (uint)pSVar1.Length;
		if (0 < (int)uVar2) {
			uVar3 = 0;
			do {
				if (uVar2 <= uVar3) {
					throw new IndexOutOfRangeException();
				}
				if (pSVar1[(int)uVar3] == null) goto label_05c6e204;
				(pSVar1[(int)uVar3]).SetPressed(true);
				uVar3 = uVar3 + 1;
				uVar2 = (uint)pSVar1.Length;
			} while ((int)uVar3 < (int)uVar2);
		}
		return;
	}

	[Token(Token = "0x6004643")]
	[Address(RVA = "0x5B6E210", Offset = "0x5B6D210", VA = "0x5B6E210", Slot = "9")]
	protected override void OnControlReleased()
	{
		// Lifted from source/cpp/UI/MobileInputHoldButton.c (UI.MobileInputHoldButton$$OnControlReleased): clean
		MobileInput[] pSVar1;
		uint uVar2;
		uint uVar3;

		pSVar1 = this._inputs;
		if (pSVar1 == null) {
	label_05c6e261: ;
			throw new NullReferenceException();
		}
		uVar2 = (uint)pSVar1.Length;
		if (0 < (int)uVar2) {
			uVar3 = 0;
			do {
				if (uVar2 <= uVar3) {
					throw new IndexOutOfRangeException();
				}
				if (pSVar1[(int)uVar3] == null) goto label_05c6e261;
				(pSVar1[(int)uVar3]).SetPressed(false);
				uVar3 = uVar3 + 1;
				uVar2 = (uint)pSVar1.Length;
			} while ((int)uVar3 < (int)uVar2);
		}
		return;
	}

	[Token(Token = "0x6004644")]
	[Address(RVA = "0x5B6E270", Offset = "0x5B6D270", VA = "0x5B6E270", Slot = "10")]
	protected override bool IsInputHeldByControl(MobileInput input)
	{
		// Lifted from source/cpp/UI/MobileInputHoldButton.c (UI.MobileInputHoldButton$$IsInputHeldByControl): clean
		int iVar1;
		MobileInput[] pSVar2;
		int iVar3;
		bool bVar4;

		if ((input != null) &&(pSVar2 = this._inputs, pSVar2 != null)) {
			iVar1 = (int)pSVar2.Length;
			if (iVar1 < 1) {
				return false;
			}
			iVar3 = 0;
			do {
				if (pSVar2[iVar3] == input) {
					return true;
				}
				bVar4 = iVar1 + -1 != iVar3;
				iVar3 = iVar3 + 1;
			} while (bVar4);
		}
		return false;
	}

	[Token(Token = "0x6004645")]
	[Address(RVA = "0x5B6E2F0", Offset = "0x5B6D2F0", VA = "0x5B6E2F0")]
	public MobileInputHoldButton()
	{
		// Lifted from source/cpp/UI/MobileInputHoldButton.c (UI.MobileInputHoldButton$$.ctor): 1 lines keep C-only constructs
		MobileInput[] pSVar1;
		List<MobileInputHoldControl.SlideButton> __this_00;

		pSVar1 = (MobileInput[])new MobileInput[0];
		this._inputs = pSVar1;
		this._pointerId = -0x80000000;
		this._moveContentWithTouch = true;
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<MobileInputHoldControl.SlideButton>));
		__this_00 = new List<MobileInputHoldControl.SlideButton>();
		this._slideButtons = __this_00;
		base();
		return;
	}
}
