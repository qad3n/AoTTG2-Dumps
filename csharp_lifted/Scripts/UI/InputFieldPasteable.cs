// ==================== AoTTG2 cross-reference ====================
// Type: UI.InputFieldPasteable
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/InputFieldPasteable.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/InputSettingElement.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007F6")]
public class InputFieldPasteable : InputField
{
	[Token(Token = "0x6004C67")]
	[Address(RVA = "0x5BF2B00", Offset = "0x5BF1B00", VA = "0x5BF2B00")]
	protected bool IsModifier()
	{
		// Lifted from source/cpp/UI/InputFieldPasteable.c (UI.InputFieldPasteable$$IsModifier): clean
		uint uVar1;
		bool bVar2;
		int iVar3;
		int key;

		if (Il2CppMethodInitialized_07547c98 == false) {
			Il2CppMethodInitialized_07547c98 = true;
			uVar1 = (typeof(Application)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Application)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			iVar3 = Application.platform;
		}
		else {
			iVar3 = Application.platform;
		}
		if (iVar3 == 1) {
			bVar2 = Input.GetKey(0x136);
			key = 0x135;
			if (bVar2) {
				return true;
			}
		}
		else {
			bVar2 = Input.GetKey(0x132);
			key = 0x131;
			if (bVar2) {
				return true;
			}
		}
		bVar2 = Input.GetKey(key);
		return bVar2;
	}

	[Token(Token = "0x6004C68")]
	[Address(RVA = "0x5BF2BA0", Offset = "0x5BF1BA0", VA = "0x5BF2BA0")]
	protected bool IsCopy()
	{
		// Lifted from source/cpp/UI/InputFieldPasteable.c (UI.InputFieldPasteable$$IsCopy): clean
		bool bVar1;

		return bVar1;
	}

	[Token(Token = "0x6004C69")]
	[Address(RVA = "0x5BF2BB0", Offset = "0x5BF1BB0", VA = "0x5BF2BB0")]
	protected bool IsPaste()
	{
		// Lifted from source/cpp/UI/InputFieldPasteable.c (UI.InputFieldPasteable$$IsPaste): clean
		bool bVar1;

		return bVar1;
	}

	[Token(Token = "0x6004C6A")]
	[Address(RVA = "0x5BF2BC0", Offset = "0x5BF1BC0", VA = "0x5BF2BC0")]
	protected bool IsCut()
	{
		// Lifted from source/cpp/UI/InputFieldPasteable.c (UI.InputFieldPasteable$$IsCut): clean
		bool bVar1;

		return bVar1;
	}

	[Token(Token = "0x6004C6B")]
	[Address(RVA = "0x5BF2BD0", Offset = "0x5BF1BD0", VA = "0x5BF2BD0", Slot = "67")]
	protected override void Append(char input)
	{
		// Lifted from source/cpp/UI/InputFieldPasteable.c (UI.InputFieldPasteable$$Append): clean
		bool bVar1;
		int iVar2;
		int iVar3;

		if (Il2CppMethodInitialized_07547c99 == false) {
			Il2CppMethodInitialized_07547c99 = true;
			if ((typeof(Application)._2).cctor_finished_or_no_cctor == 0) goto label_05cf2c2c;
	label_05cf2bf5: ;
			iVar2 = Application.platform;
		}
		else {
			if ((typeof(Application)._2).cctor_finished_or_no_cctor != 0) goto label_05cf2bf5;
	label_05cf2c2c: ;
			iVar2 = Application.platform;
		}
		if (iVar2 != 1) goto label_05cf2cfe;
		if (Il2CppMethodInitialized_07547c98 == false) {
			Il2CppMethodInitialized_07547c98 = true;
			if ((typeof(Application)._2).cctor_finished_or_no_cctor == 0) goto label_05cf2c98;
	label_05cf2c56: ;
			iVar3 = Application.platform;
			if (iVar3 == 1) goto label_05cf2c62;
	label_05cf2ca9: ;
			bVar1 = Input.GetKey(0x132);
			iVar3 = 0x131;
		}
		else {
			if ((typeof(Application)._2).cctor_finished_or_no_cctor != 0) goto label_05cf2c56;
	label_05cf2c98: ;
			iVar3 = Application.platform;
			if (iVar3 != 1) goto label_05cf2ca9;
	label_05cf2c62: ;
			bVar1 = Input.GetKey(0x136);
			iVar3 = 0x135;
		}
		if (((bVar1) || (bVar1 = Input.GetKey(iVar3))) &&((bVar1 = Input.GetKeyDown(99), bVar1 ||((bVar1 = Input.GetKeyDown(0x78), bVar1 ||(bVar1 = Input.GetKeyDown(0x76))))))) {
			return;
		}
	label_05cf2cfe: ;
		this.Append(input);
		return;
	}

	[Token(Token = "0x6004C6C")]
	[Address(RVA = "0x5BF2D10", Offset = "0x5BF1D10", VA = "0x5BF2D10", Slot = "66")]
	protected override void Append(string input)
	{
		// Lifted from source/cpp/UI/InputFieldPasteable.c (UI.InputFieldPasteable$$Append): clean
		InputField.OnChangeEvent __this_00;
		bool bVar1;
		ushort input_00;
		int iVar2;
		int iVar3;
		String pSVar4;

		if (Il2CppMethodInitialized_07547c9a == false) {
			Il2CppMethodInitialized_07547c9a = true;
			if ((typeof(Application)._2).cctor_finished_or_no_cctor == 0) goto label_05cf2d7a;
	label_05cf2d37: ;
			iVar2 = Application.platform;
		}
		else {
			if ((typeof(Application)._2).cctor_finished_or_no_cctor != 0) goto label_05cf2d37;
	label_05cf2d7a: ;
			iVar2 = Application.platform;
		}
		if (iVar2 == 1) {
			if (Il2CppMethodInitialized_07547c98 == false) {
				Il2CppMethodInitialized_07547c98 = true;
				if ((typeof(Application)._2).cctor_finished_or_no_cctor == 0) goto label_05cf2de6;
	label_05cf2da4: ;
				iVar3 = Application.platform;
				if (iVar3 == 1) goto label_05cf2db0;
	label_05cf2df7: ;
				bVar1 = Input.GetKey(0x132);
				iVar3 = 0x131;
			}
			else {
				if ((typeof(Application)._2).cctor_finished_or_no_cctor != 0) goto label_05cf2da4;
	label_05cf2de6: ;
				iVar3 = Application.platform;
				if (iVar3 != 1) goto label_05cf2df7;
	label_05cf2db0: ;
				bVar1 = Input.GetKey(0x136);
				iVar3 = 0x135;
			}
			if ((bVar1) || (bVar1 = Input.GetKey(iVar3))) {
				bVar1 = Input.GetKeyDown(99);
				if (bVar1) {
					return;
				}
				bVar1 = Input.GetKeyDown(0x78);
				if (bVar1) {
					return;
				}
			}
		}
		if (1 < this.m_LineType - 1U) {
			if ((typeof(Application)._2).cctor_finished_or_no_cctor == 0) {
				iVar2 = Application.platform;
			}
			else {
				iVar2 = Application.platform;
			}
			if (iVar2 != 1) goto label_05cf30b7;
			if (Il2CppMethodInitialized_07547c98 == false) {
				Il2CppMethodInitialized_07547c98 = true;
				if ((typeof(Application)._2).cctor_finished_or_no_cctor == 0) goto label_05cf3017;
	label_05cf2fd5: ;
				iVar3 = Application.platform;
				if (iVar3 == 1) goto label_05cf2fe1;
	label_05cf3028: ;
				bVar1 = Input.GetKey(0x132);
				iVar3 = 0x131;
			}
			else {
				if ((typeof(Application)._2).cctor_finished_or_no_cctor != 0) goto label_05cf2fd5;
	label_05cf3017: ;
				iVar3 = Application.platform;
				if (iVar3 != 1) goto label_05cf3028;
	label_05cf2fe1: ;
				bVar1 = Input.GetKey(0x136);
				iVar3 = 0x135;
			}
			if (((!bVar1) && (bVar1 = Input.GetKey(iVar3), !bVar1)) ||(bVar1 = Input.GetKeyDown(0x76), !bVar1)) goto label_05cf30b7;
			if (Il2CppMethodInitialized_07547c9b == false) {
				Il2CppMethodInitialized_07547c9b = true;
				if ((typeof(GUIUtility)._2).cctor_finished_or_no_cctor == 0) goto label_05cf30ef;
	label_05cf3074: ;
				pSVar4 = GUIUtility.systemCopyBuffer;
			}
			else {
				if ((typeof(GUIUtility)._2).cctor_finished_or_no_cctor != 0) goto label_05cf3074;
	label_05cf30ef: ;
				pSVar4 = GUIUtility.systemCopyBuffer;
			}
			if (pSVar4 != null) {
				if (pSVar4._stringLength < 1) {
					return;
				}
				iVar2 = 0;
				do {
					input_00 = pSVar4.get_Chars(iVar2);
					this.Append(input_00);
					iVar2 = iVar2 + 1;
				} while (iVar2 < pSVar4._stringLength);
				return;
			}
			goto label_05cf3100;
		}
		if (Il2CppMethodInitialized_07547c98 == false) {
			Il2CppMethodInitialized_07547c98 = true;
			if ((typeof(Application)._2).cctor_finished_or_no_cctor == 0) goto label_05cf2ec9;
	label_05cf2e62: ;
			iVar3 = Application.platform;
			if (iVar3 == 1) goto label_05cf2e6e;
	label_05cf2eda: ;
			bVar1 = Input.GetKey(0x132);
			iVar3 = 0x131;
		}
		else {
			if ((typeof(Application)._2).cctor_finished_or_no_cctor != 0) goto label_05cf2e62;
	label_05cf2ec9: ;
			iVar3 = Application.platform;
			if (iVar3 != 1) goto label_05cf2eda;
	label_05cf2e6e: ;
			bVar1 = Input.GetKey(0x136);
			iVar3 = 0x135;
		}
		if (((!bVar1) && (bVar1 = Input.GetKey(iVar3), !bVar1)) ||(bVar1 = Input.GetKeyDown(0x76), !bVar1)) {
	label_05cf30b7: ;
			this.Append(input);
			return;
		}
		pSVar4 = GUIUtility.systemCopyBuffer;
		this.text = pSVar4;
		__this_00 = this.m_OnValueChanged;
		if (__this_00 != null) {
			__this_00.Invoke((object)this.m_Text);
			pSVar4 = this.m_Text;
			if (pSVar4 != null) {
				iVar3 = pSVar4._stringLength;
				this.caretPosition = iVar3;
				this.m_CaretSelectPosition = iVar3;
				return;
			}
		}
	label_05cf3100: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004C6D")]
	[Address(RVA = "0x5BF3110", Offset = "0x5BF2110", VA = "0x5BF3110")]
	private string GetClipboard()
	{
		// Lifted from source/cpp/UI/InputFieldPasteable.c (UI.InputFieldPasteable$$GetClipboard): clean
		uint uVar1;
		String pSVar2;

		if (Il2CppMethodInitialized_07547c9b == false) {
			Il2CppMethodInitialized_07547c9b = true;
			uVar1 = (typeof(GUIUtility)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(GUIUtility)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return pSVar2;
		}
		return pSVar2;
	}

	[Token(Token = "0x6004C6E")]
	[Address(RVA = "0x5BF3170", Offset = "0x5BF2170", VA = "0x5BF3170")]
	public InputFieldPasteable()
	{
		// Lifted from source/cpp/UI/InputFieldPasteable.c (UI.InputFieldPasteable$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07547c9c == false) {
			Il2CppMethodInitialized_07547c9c = true;
			uVar1 = (typeof(InputField)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(InputField)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			base();
			return;
		}
		base();
		return;
	}
}
