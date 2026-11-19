// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputToggleButton
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputToggleButton.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000746")]
public class MobileInputToggleButton : MonoBehaviour, IPointerClickHandler, IEventSystemHandler
{
	[Token(Token = "0x40024A2")]
	[FieldOffset(Offset = "0x20")]
	private MobileInput[] _inputs;

	[Token(Token = "0x40024A3")]
	[FieldOffset(Offset = "0x28")]
	private Image _image;

	[Token(Token = "0x40024A4")]
	[FieldOffset(Offset = "0x30")]
	private MobileInputSkin _offSkin;

	[Token(Token = "0x40024A5")]
	[FieldOffset(Offset = "0x38")]
	private MobileInputSkin _onSkin;

	[Token(Token = "0x40024A6")]
	[FieldOffset(Offset = "0x40")]
	private MobileInputControlShape _shape;

	[Token(Token = "0x40024A7")]
	[FieldOffset(Offset = "0x44")]
	private bool _active;

	[Token(Token = "0x60046A4")]
	[Address(RVA = "0x5B6D0C0", Offset = "0x5B6C0C0", VA = "0x5B6D0C0")]
	public void Setup(MobileInput[] inputs, MobileInputSkin offSkin, MobileInputSkin onSkin, MobileInputControlShape shape)
	{
		// Lifted from source/cpp/UI/MobileInputToggleButton.c (UI.MobileInputToggleButton$$Setup): clean
		Image pUVar1;

		if (inputs == null) {
			inputs = (MobileInput[])new MobileInput[0];
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this._inputs = inputs;
		pUVar1 = this.GetComponent<Image>();
		this._image = pUVar1;
		this._offSkin = offSkin;
		this._onSkin = onSkin;
		this._shape = shape;
		this.RefreshColor();
		return;
	}

	[Token(Token = "0x60046A5")]
	[Address(RVA = "0x5B71A80", Offset = "0x5B70A80", VA = "0x5B71A80")]
	private void OnEnable()
	{
		// Lifted from source/cpp/UI/MobileInputToggleButton.c (UI.MobileInputToggleButton$$OnEnable): 1 lines keep C-only constructs
		Action __this_00;

		__this_00 = new Action((object)this, (intptr_t)MethodInfo_UI_MobileInputToggleButton_OnStateCleared);
		MobileInputBridge.add_OnStateCleared(__this_00);
		return;
	}

	[Token(Token = "0x60046A6")]
	[Address(RVA = "0x5B71B10", Offset = "0x5B70B10", VA = "0x5B71B10")]
	private void OnDisable()
	{
		// Lifted from source/cpp/UI/MobileInputToggleButton.c (UI.MobileInputToggleButton$$OnDisable): 1 lines keep C-only constructs
		MobileInput[] pSVar1;
		uint uVar2;
		Action __this_00;
		uint uVar3;

		__this_00 = new Action((object)this, (intptr_t)MethodInfo_UI_MobileInputToggleButton_OnStateCleared);
		MobileInputBridge.remove_OnStateCleared(__this_00);
		if (this._active == false) {
			return;
		}
		this._active = false;
		pSVar1 = this._inputs;
		if (pSVar1 == null) {
	label_05c71bfc: ;
			throw new NullReferenceException();
		}
		uVar2 = (uint)pSVar1.Length;
		if (0 < (int)uVar2) {
			uVar3 = 0;
			do {
				if (uVar2 <= uVar3) {
					throw new IndexOutOfRangeException();
				}
				if (pSVar1[(int)uVar3] == null) goto label_05c71bfc;
				(pSVar1[(int)uVar3]).SetPressed(false);
				uVar3 = uVar3 + 1;
				uVar2 = (uint)pSVar1.Length;
			} while ((int)uVar3 < (int)uVar2);
		}
		this.RefreshColor();
		return;
	}

	[Token(Token = "0x60046A7")]
	[Address(RVA = "0x5B71C90", Offset = "0x5B70C90", VA = "0x5B71C90")]
	private void OnStateCleared()
	{
		// Lifted from source/cpp/UI/MobileInputToggleButton.c (UI.MobileInputToggleButton$$OnStateCleared): clean
		if (this._active == false) {
			return;
		}
		this._active = false;
		this.RefreshColor();
		return;
	}

	[Token(Token = "0x60046A8")]
	[Address(RVA = "0x5B71CA0", Offset = "0x5B70CA0", VA = "0x5B71CA0", Slot = "4")]
	public void OnPointerClick(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileInputToggleButton.c (UI.MobileInputToggleButton$$OnPointerClick): clean
		bool bVar1;
		MobileInput[] pSVar2;
		uint uVar3;
		uint uVar4;

		bVar1 = this._active;
		this._active = (bool)(bVar1 ^ 1);
		pSVar2 = this._inputs;
		if (pSVar2 == null) {
	label_05c71d11: ;
			throw new NullReferenceException();
		}
		uVar3 = (uint)pSVar2.Length;
		if (0 < (int)uVar3) {
			uVar4 = 0;
			do {
				if (uVar3 <= uVar4) {
					throw new IndexOutOfRangeException();
				}
				if (pSVar2[(int)uVar4] == null) goto label_05c71d11;
				eventData = (PointerEventData)(ulong)(bVar1 == false);
				(pSVar2[(int)uVar4]).SetPressed(bVar1 == false);
				uVar4 = uVar4 + 1;
				uVar3 = (uint)pSVar2.Length;
			} while ((int)uVar4 < (int)uVar3);
		}
		this.RefreshColor();
		return;
	}

	[Token(Token = "0x60046A9")]
	[Address(RVA = "0x5B71C10", Offset = "0x5B70C10", VA = "0x5B71C10")]
	private void SetActive(bool active)
	{
		// Lifted from source/cpp/UI/MobileInputToggleButton.c (UI.MobileInputToggleButton$$SetActive): 2 lines keep C-only constructs
		MobileInput[] pSVar1;
		uint uVar2;
		uint uVar3;
		undefined7 in_register_00000031;
		MethodInfo method_00;

		method_00 = (MethodInfo)CONCAT71(in_register_00000031, active);
		if (this._active == active) {
			return;
		}
		this._active = active;
		pSVar1 = this._inputs;
		if (pSVar1 == null) {
	label_05c71c8b: ;
			throw new NullReferenceException();
		}
		uVar2 = (uint)pSVar1.Length;
		if (0 < (int)uVar2) {
			uVar3 = 0;
			do {
				if (uVar2 <= uVar3) {
					throw new IndexOutOfRangeException();
				}
				if (pSVar1[(int)uVar3] == null) goto label_05c71c8b;
				(pSVar1[(int)uVar3]).SetPressed(active);
				uVar3 = uVar3 + 1;
				uVar2 = (uint)pSVar1.Length;
			} while ((int)uVar3 < (int)uVar2);
		}
		this.RefreshColor();
		return;
	}

	[Token(Token = "0x60046AA")]
	[Address(RVA = "0x5B719E0", Offset = "0x5B709E0", VA = "0x5B719E0")]
	private void RefreshColor()
	{
		// Lifted from source/cpp/UI/MobileInputToggleButton.c (UI.MobileInputToggleButton$$RefreshColor): 1 lines keep C-only constructs
		int shape;
		Image pUVar1;
		MobileInputSkin skin;
		bool bVar2;

		pUVar1 = this._image;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._image;
			skin = (&this._offSkin)[this._active];
			shape = this._shape;
			MobileControlSkinManager.ApplySkin(pUVar1, skin, shape);
			return;
		}
		return;
	}

	[Token(Token = "0x60046AB")]
	[Address(RVA = "0x5B71D20", Offset = "0x5B70D20", VA = "0x5B71D20")]
	public MobileInputToggleButton()
	{
		// Lifted from source/cpp/UI/MobileInputToggleButton.c (UI.MobileInputToggleButton$$.ctor): clean
		MobileInput[] pSVar1;

		pSVar1 = (MobileInput[])new MobileInput[0];
		this._inputs = pSVar1;
		base();
		return;
	}
}
