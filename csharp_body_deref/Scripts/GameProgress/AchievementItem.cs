// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.AchievementItem
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/AchievementItem.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/AchievementItem.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace GameProgress;

[Token(Token = "0x2000300")]
internal class AchievementItem : QuestItem
{
	[Token(Token = "0x4000F46")]
	[FieldOffset(Offset = "0x80")]
	public StringSetting Tier;

	[Token(Token = "0x4000F47")]
	[FieldOffset(Offset = "0x88")]
	public BoolSetting Active;

	[Token(Token = "0x600128F")]
	[Address(RVA = "0x1E28B60", Offset = "0x1E27160", VA = "0x181E28B60", Slot = "14")]
	public override string GetQuestName()
	{
		return null;
	}

	[Token(Token = "0x6001290")]
	[Address(RVA = "0x1E28CF0", Offset = "0x1E272F0", VA = "0x181E28CF0")]
	public AchievementItem()
	{
	}
}
