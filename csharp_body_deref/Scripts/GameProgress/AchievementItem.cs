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

[Token(Token = "0x2000361")]
internal class AchievementItem : QuestItem
{
	[Token(Token = "0x40010E4")]
	[FieldOffset(Offset = "0x80")]
	public StringSetting Tier;

	[Token(Token = "0x40010E5")]
	[FieldOffset(Offset = "0x88")]
	public BoolSetting Active;

	[Token(Token = "0x60014FD")]
	[Address(RVA = "0x581C1A0", Offset = "0x581B1A0", VA = "0x581C1A0", Slot = "14")]
	public override string GetQuestName()
	{
		return null;
	}

	[Token(Token = "0x60014FE")]
	[Address(RVA = "0x581C310", Offset = "0x581B310", VA = "0x581C310")]
	public AchievementItem()
	{
	}
}
