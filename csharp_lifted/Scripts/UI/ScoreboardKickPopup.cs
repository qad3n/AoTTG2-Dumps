// ==================== AoTTG2 cross-reference ====================
// Type: UI.ScoreboardKickPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ScoreboardKickPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x2000859")]
internal sealed class ScoreboardKickPopup : AottgScoreboardPopup
{
	[Token(Token = "0x4002A47")]
	[FieldOffset(Offset = "0xD0")]
	private UnityAction _onConfirm;

	[Token(Token = "0x17000DE1")]
	protected override string DialogId
	{
		[Token(Token = "0x6004FC7")]
		[Address(RVA = "0x5C3EA40", Offset = "0x5C3DA40", VA = "0x5C3EA40", Slot = "62")]
		get
		{
			// Lifted from source/cpp/UI/ScoreboardKickPopup.c (UI.ScoreboardKickPopup$$get_DialogId): clean
			return "ingame-scoreboard-kick";
		}
	}

	[Token(Token = "0x6004FC8")]
	[Address(RVA = "0x5C3EA70", Offset = "0x5C3DA70", VA = "0x5C3EA70")]
	public void Show(string message, UnityAction onConfirm)
	{
		// Lifted from source/cpp/UI/ScoreboardKickPopup.c (UI.ScoreboardKickPopup$$Show): clean
		GisketchView __this_00;
		GameObject __this_01;
		TMP_Text pTVar1;

		if (this.IsActive != false) {
			return;
		}
		this._onConfirm = onConfirm;
		__this_00 = this._Dialog_k__BackingField;
		if (__this_00 != null) {
			__this_01 = __this_00.Find("ingame-scoreboard-kick-message");
			if (__this_01 != null) {
				pTVar1 = __this_01.GetComponent<TMP_Text>();
				if (pTVar1 != null) {
					pTVar1.set_text(message);
					this.Show();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004FC9")]
	[Address(RVA = "0x5C3EB30", Offset = "0x5C3DB30", VA = "0x5C3EB30")]
	internal void Confirm()
	{
		// Lifted from source/cpp/UI/ScoreboardKickPopup.c (UI.ScoreboardKickPopup$$Confirm): clean
		UnityAction pUVar1;

		if (this.IsActive != false) {
			pUVar1 = this._onConfirm;
			this._onConfirm = null;
			this.Hide();
			if (pUVar1 != null) {
				(*(code)pUVar1.invoke_impl)(pUVar1.method_code,pUVar1.method);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6004FCA")]
	[Address(RVA = "0x5C3EBA0", Offset = "0x5C3DBA0", VA = "0x5C3EBA0")]
	public ScoreboardKickPopup()
	{
		// Lifted from source/cpp/UI/ScoreboardKickPopup.c (UI.ScoreboardKickPopup$$.ctor): clean
		base();
		return;
	}
}
