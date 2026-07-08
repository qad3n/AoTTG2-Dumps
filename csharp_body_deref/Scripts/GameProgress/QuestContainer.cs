using Il2CppDummyDll;
using Settings;

namespace GameProgress;

[Token(Token = "0x20001CA")]
internal class QuestContainer : BaseSettingsContainer
{
	[Token(Token = "0x40009EA")]
	[FieldOffset(Offset = "0x20")]
	public ListSetting<QuestItem> DailyQuestItems;

	[Token(Token = "0x40009EB")]
	[FieldOffset(Offset = "0x28")]
	public ListSetting<QuestItem> WeeklyQuestItems;

	[Token(Token = "0x6000A53")]
	[Address(RVA = "0x410AB30", Offset = "0x410AB30", VA = "0x410AB30")]
	public void CollectRewards()
	{
	}

	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x410AEF0", Offset = "0x410AEF0", VA = "0x410AEF0")]
	public QuestContainer()
	{
	}
}
