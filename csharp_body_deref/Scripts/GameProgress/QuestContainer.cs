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
	}

	[Token(Token = "0x6001555")]
	[Address(RVA = "0x581F650", Offset = "0x581E650", VA = "0x581F650")]
	public QuestContainer()
	{
	}
}
