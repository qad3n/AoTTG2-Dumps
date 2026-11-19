// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.QuestContainer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/QuestContainer.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/QuestContainer.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace GameProgress;

[Token(Token = "0x2000370")]
internal class QuestContainer : BaseSettingsContainer
{
	[Token(Token = "0x4001132")]
	[FieldOffset(Offset = "0x30")]
	public ListSetting<QuestItem> DailyQuestItems;

	[Token(Token = "0x4001133")]
	[FieldOffset(Offset = "0x38")]
	public ListSetting<QuestItem> WeeklyQuestItems;

	[Token(Token = "0x6001554")]
	[Address(RVA = "0x581F2B0", Offset = "0x581E2B0", VA = "0x581F2B0")]
	public void CollectRewards()
	{
		// Lifted from source/cpp/GameProgress/QuestContainer.c (GameProgress.QuestContainer$$CollectRewards): 6 lines keep C-only constructs
		ListSetting<QuestItem> pSVar1;
		List<object> pSVar2;
		bool bVar3;
		byte[] local_60 = new byte[16];
		QuestItem local_50;
		byte[] local_48 = new byte[8];
		QuestItem local_38;

		local_48 = (byte[])0x0;
		local_38 = null;
		pSVar1 = this.DailyQuestItems;
		if ((pSVar1 != null) &&(pSVar2 = (List<object>)pSVar1._value, pSVar2 != null)) {
			local_60.GetEnumerator(pSVar2);
			local_38 = local_50;
			local_48 = (byte[])local_60._0_8_;
			local_60._0_8_ = null;
			local_60._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_48;
			while(true) {
				bVar3 = local_48.MoveNext();
				if (!bVar3) break;
				if (local_38 == null) {
					throw new NullReferenceException();
				}
				local_38.CollectReward();
			}
			local_48.Dispose();
			pSVar1 = this.WeeklyQuestItems;
			if ((pSVar1 != null) &&(pSVar2 = (List<object>)pSVar1._value, pSVar2 != null)) {
				local_60.GetEnumerator(pSVar2);
				local_38 = local_50;
				local_48 = (byte[])local_60._0_8_;
				local_60._0_8_ = null;
				local_60._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_48;
				while(true) {
					bVar3 = local_48.MoveNext();
					if (!bVar3) {
						local_48.Dispose();
						return;
					}
					if (local_38 == null) break;
					local_38.CollectReward();
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001555")]
	[Address(RVA = "0x581F650", Offset = "0x581E650", VA = "0x581F650")]
	public QuestContainer()
	{
		// Lifted from source/cpp/GameProgress/QuestContainer.c (GameProgress.QuestContainer$$.ctor): clean
		ListSetting<QuestItem> pSVar1;

		pSVar1 = new ListSetting<QuestItem>();
		this.DailyQuestItems = pSVar1;
		pSVar1 = new ListSetting<QuestItem>();
		this.WeeklyQuestItems = pSVar1;
		base();
		return;
	}
}
