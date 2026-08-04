// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.QuestItem
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/QuestItem.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/QuestItem.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace GameProgress;

[Token(Token = "0x20001FF")]
internal class QuestItem : BaseSettingsContainer
{
	[Token(Token = "0x4000ABC")]
	[FieldOffset(Offset = "0x20")]
	public StringSetting Category;

	[Token(Token = "0x4000ABD")]
	[FieldOffset(Offset = "0x28")]
	public ListSetting<StringSetting> Conditions;

	[Token(Token = "0x4000ABE")]
	[FieldOffset(Offset = "0x30")]
	public IntSetting Amount;

	[Token(Token = "0x4000ABF")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting RewardType;

	[Token(Token = "0x4000AC0")]
	[FieldOffset(Offset = "0x40")]
	public StringSetting RewardValue;

	[Token(Token = "0x4000AC1")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting Icon;

	[Token(Token = "0x4000AC2")]
	[FieldOffset(Offset = "0x50")]
	public IntSetting Progress;

	[Token(Token = "0x4000AC3")]
	[FieldOffset(Offset = "0x58")]
	public BoolSetting Daily;

	[Token(Token = "0x4000AC4")]
	[FieldOffset(Offset = "0x60")]
	public IntSetting DayCreated;

	[Token(Token = "0x4000AC5")]
	[FieldOffset(Offset = "0x68")]
	public BoolSetting Collected;

	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x4442620", Offset = "0x4442620", VA = "0x4442620", Slot = "13")]
	public virtual string GetQuestName()
	{
		return null;
	}

	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x443A020", Offset = "0x443A020", VA = "0x443A020")]
	public string GetConditionsHash()
	{
		return null;
	}

	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x4438AD0", Offset = "0x4438AD0", VA = "0x4438AD0")]
	public bool Finished()
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x4441920", Offset = "0x4441920", VA = "0x4441920")]
	public void AddProgress(int count = 1)
	{
	}

	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x443F700", Offset = "0x443F700", VA = "0x443F700")]
	public void CollectReward()
	{
	}

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x443A650", Offset = "0x443A650", VA = "0x443A650")]
	public QuestItem()
	{
	}
}
