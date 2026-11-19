// ==================== AoTTG2 cross-reference ====================
// Type: UI.ModerationBatchBanPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ModerationBatchBanPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using TMPro;

namespace UI;

[Token(Token = "0x2000851")]
internal class ModerationBatchBanPopup : AottgScoreboardPopup
{
	[Token(Token = "0x4002A25")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private TMP_InputField _targets;

	[Token(Token = "0x17000DD9")]
	protected override string DialogId
	{
		[Token(Token = "0x6004F8D")]
		[Address(RVA = "0x5C39C00", Offset = "0x5C38C00", VA = "0x5C39C00", Slot = "62")]
		get
		{
			// Lifted from source/cpp/UI/ModerationBatchBanPopup.c (UI.ModerationBatchBanPopup$$get_DialogId): clean
			return "ingame-moderation-batch-ban";
		}
	}

	[Token(Token = "0x6004F8E")]
	[Address(RVA = "0x5C39C30", Offset = "0x5C38C30", VA = "0x5C39C30", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/ModerationBatchBanPopup.c (UI.ModerationBatchBanPopup$$Setup): 1 lines keep C-only constructs
		GisketchView __this_00;
		GameObject __this_01;
		TMP_InputField pTVar1;

		if (Il2CppMethodInitialized_07547e5f == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField) ;
			Il2CppMethodInitialized_07547e5f = true;
		}
		this.Setup(parent);
		__this_00 = this._Dialog_k__BackingField;
		if (__this_00 != null) {
			__this_01 = __this_00.Find("ingame-moderation-batch-ban-targets");
			if (__this_01 != null) {
				pTVar1 = __this_01.GetComponent<TMP_InputField>() ;
				this._targets = pTVar1;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F8F")]
	[Address(RVA = "0x5C39CD0", Offset = "0x5C38CD0", VA = "0x5C39CD0")]
	internal void Submit(string action)
	{
		// Lifted from source/cpp/UI/ModerationBatchBanPopup.c (UI.ModerationBatchBanPopup$$Submit): clean
		TMP_InputField pTVar1;
		String pSVar2;
		bool bVar3;

		if (this.IsActive == false) {
			return;
		}
		bVar3 = (action == "ingame.moderation.batch.session-ban");
		if (bVar3) {
			pTVar1 = this._targets;
			if (pTVar1 == null) goto label_05d39ea5;
			pSVar2 = pTVar1.m_Text;
			ModeratorManager.BatchSessionBan(pSVar2);
		}
		else {
			bVar3 = (action == "ingame.moderation.batch.ip-ban");
			if (bVar3) {
				pTVar1 = this._targets;
				if (pTVar1 == null) goto label_05d39ea5;
				pSVar2 = pTVar1.m_Text;
				ModeratorManager.BatchIPBan(pSVar2);
			}
			else {
				bVar3 = (action == "ingame.moderation.batch.session-unban");
				if (bVar3) {
					pTVar1 = this._targets;
					if (pTVar1 == null) {
	label_05d39ea5: ;
						throw new NullReferenceException();
					}
					pSVar2 = pTVar1.m_Text;
					ModeratorManager.BatchSessionUnban(pSVar2);
				}
				else {
					bVar3 = (action == "ingame.moderation.batch.ip-unban");
					if (!bVar3) {
						return;
					}
					pTVar1 = this._targets;
					if (pTVar1 == null) goto label_05d39ea5;
					pSVar2 = pTVar1.m_Text;
					ModeratorManager.BatchIPUnban(pSVar2);
				}
			}
		}
		this.Hide();
		return;
	}

	[Token(Token = "0x6004F90")]
	[Address(RVA = "0x5C39EB0", Offset = "0x5C38EB0", VA = "0x5C39EB0")]
	public ModerationBatchBanPopup()
	{
		// Lifted from source/cpp/UI/ModerationBatchBanPopup.c (UI.ModerationBatchBanPopup$$.ctor): clean
		base();
		return;
	}
}
