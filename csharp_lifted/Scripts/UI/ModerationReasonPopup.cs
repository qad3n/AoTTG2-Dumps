// ==================== AoTTG2 cross-reference ====================
// Type: UI.ModerationReasonPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ModerationReasonPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using TMPro;

namespace UI;

[Token(Token = "0x2000852")]
internal class ModerationReasonPopup : AottgScoreboardPopup
{
	[Token(Token = "0x4002A26")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private TMP_InputField _reason;

	[Token(Token = "0x4002A27")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private Action<string> _onConfirm;

	[Token(Token = "0x17000DDA")]
	protected override string DialogId
	{
		[Token(Token = "0x6004F91")]
		[Address(RVA = "0x5C39EC0", Offset = "0x5C38EC0", VA = "0x5C39EC0", Slot = "62")]
		get
		{
			// Lifted from source/cpp/UI/ModerationReasonPopup.c (UI.ModerationReasonPopup$$get_DialogId): clean
			return "ingame-moderation-reason";
		}
	}

	[Token(Token = "0x6004F92")]
	[Address(RVA = "0x5C39EF0", Offset = "0x5C38EF0", VA = "0x5C39EF0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/ModerationReasonPopup.c (UI.ModerationReasonPopup$$Setup): 1 lines keep C-only constructs
		GisketchView __this_00;
		GameObject __this_01;
		TMP_InputField pTVar1;

		if (Il2CppMethodInitialized_07547e62 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField) ;
			Il2CppMethodInitialized_07547e62 = true;
		}
		this.Setup(parent);
		__this_00 = this._Dialog_k__BackingField;
		if (__this_00 != null) {
			__this_01 = __this_00.Find("ingame-moderation-reason-reason");
			if (__this_01 != null) {
				pTVar1 = __this_01.GetComponent<TMP_InputField>() ;
				this._reason = pTVar1;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F93")]
	[Address(RVA = "0x5C39F90", Offset = "0x5C38F90", VA = "0x5C39F90")]
	public void Show(string actionTitle, Action<string> onConfirm)
	{
		// Lifted from source/cpp/UI/ModerationReasonPopup.c (UI.ModerationReasonPopup$$Show): clean
		TMP_InputField __this_00;
		AottgInGameView __this_01;

		if (this.IsActive != false) {
			return;
		}
		this._onConfirm = onConfirm;
		__this_00 = this._reason;
		if (__this_00 != null) {
			__this_00.SetTextWithoutNotify((String)**(ulong*)(g_data_07556758 + 0xb8));
			__this_01 = this._View_k__BackingField;
			if (__this_01 != null) {
				__this_01.SetState("ingame-moderation-reason-title", actionTitle);
				this.Show();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F94")]
	[Address(RVA = "0x5C3A040", Offset = "0x5C39040", VA = "0x5C3A040")]
	internal void Confirm()
	{
		// Lifted from source/cpp/UI/ModerationReasonPopup.c (UI.ModerationReasonPopup$$Confirm): clean
		Action<string> pSVar1;
		TMP_InputField pTVar2;
		String pSVar3;

		if (this.IsActive != false) {
			pSVar1 = this._onConfirm;
			this._onConfirm = null;
			pTVar2 = this._reason;
			if ((pTVar2 == null) ||(pSVar3 = pTVar2.m_Text, pSVar3 == null)) {
				throw new NullReferenceException();
			}
			pSVar3 = pSVar3.Trim();
			this.Hide();
			if (pSVar1 != null) {
				(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar3,pSVar1.method);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6004F95")]
	[Address(RVA = "0x5C3A0D0", Offset = "0x5C390D0", VA = "0x5C3A0D0")]
	public ModerationReasonPopup()
	{
		// Lifted from source/cpp/UI/ModerationReasonPopup.c (UI.ModerationReasonPopup$$.ctor): clean
		base();
		return;
	}
}
