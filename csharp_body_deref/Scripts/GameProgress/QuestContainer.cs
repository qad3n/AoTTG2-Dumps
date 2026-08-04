// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.QuestContainer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/QuestContainer.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/QuestContainer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace GameProgress;

[Token(Token = "0x20001FD")]
internal class QuestContainer : BaseSettingsContainer
{
	[Token(Token = "0x4000AB0")]
	[FieldOffset(Offset = "0x20")]
	public ListSetting<QuestItem> DailyQuestItems;

	[Token(Token = "0x4000AB1")]
	[FieldOffset(Offset = "0x28")]
	public ListSetting<QuestItem> WeeklyQuestItems;

	[Token(Token = "0x6000BD0")]
	[Address(RVA = "0x443D180", Offset = "0x443D180", VA = "0x443D180")]
	public void CollectRewards()
	{
	}

	[Token(Token = "0x6000BD1")]
	[Address(RVA = "0x443D540", Offset = "0x443D540", VA = "0x443D540")]
	public QuestContainer()
	{
	}
}
