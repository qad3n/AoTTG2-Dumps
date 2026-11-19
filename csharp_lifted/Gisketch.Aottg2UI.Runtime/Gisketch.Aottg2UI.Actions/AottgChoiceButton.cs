// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.AottgChoiceButton
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceButton.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000C3")]
public sealed class AottgChoiceButton : Button
{
	[Token(Token = "0x4000404")]
	[FieldOffset(Offset = "0x108")]
	private AottgChoiceControl _control;

	[Token(Token = "0x4000405")]
	[FieldOffset(Offset = "0x110")]
	private bool _selectMode;

	[Token(Token = "0x6000617")]
	[Address(RVA = "0x5294550", Offset = "0x5293550", VA = "0x5294550")]
	public void Setup(AottgChoiceControl control, bool selectMode)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceButton.c (Gisketch.Aottg2UI.Actions.AottgChoiceButton$$Setup): clean
		this._control = control;
		this._selectMode = selectMode;
		return;
	}

	[Token(Token = "0x6000618")]
	[Address(RVA = "0x5294580", Offset = "0x5293580", VA = "0x5294580", Slot = "32")]
	public override void OnPointerDown(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceButton.c (Gisketch.Aottg2UI.Actions.AottgChoiceButton$$OnPointerDown): clean
		Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields pGVar1;
		Action pSVar2;

		pGVar1 = typeof(GisketchFocusInputMode).static_fields;
		if (pGVar1._Mode_k__BackingField != 0) {
			if (Il2CppMethodInitialized_07542bea == false) {
				Il2CppMethodInitialized_07542bea = true;
				pGVar1 = typeof(GisketchFocusInputMode).static_fields;
				pGVar1._Mode_k__BackingField = 0;
				pSVar2 = pGVar1.Changed;
			}
			else {
				pGVar1._Mode_k__BackingField = 0;
				pSVar2 = pGVar1.Changed;
			}
			if (pSVar2 != null) {
				(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar2.method);
			}
		}
		this.OnPointerDown(eventData);
		return;
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x52946F0", Offset = "0x52936F0", VA = "0x52946F0", Slot = "42")]
	public override void OnSubmit(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceButton.c (Gisketch.Aottg2UI.Actions.AottgChoiceButton$$OnSubmit): clean
		Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields pGVar1;
		Action pSVar2;

		pGVar1 = typeof(GisketchFocusInputMode).static_fields;
		if (pGVar1._Mode_k__BackingField != 1) {
			if (Il2CppMethodInitialized_07542bea == false) {
				Il2CppMethodInitialized_07542bea = true;
				pGVar1 = typeof(GisketchFocusInputMode).static_fields;
				pGVar1._Mode_k__BackingField = 1;
				pSVar2 = pGVar1.Changed;
			}
			else {
				pGVar1._Mode_k__BackingField = 1;
				pSVar2 = pGVar1.Changed;
			}
			if (pSVar2 != null) {
				(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar2.method);
			}
		}
		this.OnSubmit(eventData);
		return;
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x5294860", Offset = "0x5293860", VA = "0x5294860", Slot = "31")]
	public override void OnMove(AxisEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceButton.c (Gisketch.Aottg2UI.Actions.AottgChoiceButton$$OnMove): clean
		int iVar1;
		AottgChoiceControl pGVar2;
		AottgChoiceOptions pGVar3;
		GisketchChoiceOptionDefinition[] pGVar4;
		bool bVar5;
		uint uVar6;
		MethodInfo method_00;
		int iVar7;

		if (this._selectMode != false) {
			pGVar2 = this._control;
			bVar5 = ((Object)pGVar2 != null);
			if (bVar5) {
				pGVar2 = this._control;
				if (pGVar2 == null) {
	label_053949a8: ;
					throw new NullReferenceException();
				}
				pGVar3 = pGVar2._options;
				if (pGVar3 != null) {
					pGVar4 = pGVar3._items;
					if (pGVar4 == null) goto label_053949a8;
					iVar1 = (int)pGVar4.Length;
					if (0 < iVar1) {
						iVar7 = 0;
						method_00 = null;
						do {
							if (pGVar4[iVar7] == null) goto label_053949a8;
							uVar6 = (int)method_00 + (uint)pGVar4[iVar7].enabled;
							method_00 = (MethodInfo)(ulong)uVar6;
							iVar7 = iVar7 + 1;
						} while (iVar1 != iVar7);
						if ((eventData != null) && (1 < (int)uVar6)) {
							iVar1 = eventData._moveDir_k__BackingField;
							if (iVar1 == 2) {
								pGVar2.Next(2);
							}
							else {
								if (iVar1 != 0) goto label_05394950;
								pGVar2.Previous(2);
							}
							GisketchUiSounds.Play(0);
							eventData.Use() ;
							return;
						}
					}
				}
			}
		}
	label_05394950: ;
		this.OnMove(eventData);
		return;
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x5294A00", Offset = "0x5293A00", VA = "0x5294A00")]
	public AottgChoiceButton()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceButton.c (Gisketch.Aottg2UI.Actions.AottgChoiceButton$$.ctor): clean
		base();
		return;
	}
}
