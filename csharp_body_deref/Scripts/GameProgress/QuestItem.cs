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

[Token(Token = "0x2000372")]
internal class QuestItem : BaseSettingsContainer
{
	[Token(Token = "0x400113E")]
	[FieldOffset(Offset = "0x30")]
	public StringSetting Category;

	[Token(Token = "0x400113F")]
	[FieldOffset(Offset = "0x38")]
	public ListSetting<StringSetting> Conditions;

	[Token(Token = "0x4001140")]
	[FieldOffset(Offset = "0x40")]
	public IntSetting Amount;

	[Token(Token = "0x4001141")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting RewardType;

	[Token(Token = "0x4001142")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting RewardValue;

	[Token(Token = "0x4001143")]
	[FieldOffset(Offset = "0x58")]
	public StringSetting Icon;

	[Token(Token = "0x4001144")]
	[FieldOffset(Offset = "0x60")]
	public IntSetting Progress;

	[Token(Token = "0x4001145")]
	[FieldOffset(Offset = "0x68")]
	public BoolSetting Daily;

	[Token(Token = "0x4001146")]
	[FieldOffset(Offset = "0x70")]
	public IntSetting DayCreated;

	[Token(Token = "0x4001147")]
	[FieldOffset(Offset = "0x78")]
	public BoolSetting Collected;

	[Token(Token = "0x6001566")]
	[Address(RVA = "0x5825050", Offset = "0x5824050", VA = "0x5825050", Slot = "14")]
	public virtual string GetQuestName()
	{
		return null;
	}

	[Token(Token = "0x6001567")]
	[Address(RVA = "0x581BDD0", Offset = "0x581ADD0", VA = "0x581BDD0")]
	public string GetConditionsHash()
	{
		return null;
	}

	[Token(Token = "0x6001568")]
	[Address(RVA = "0x581AA80", Offset = "0x5819A80", VA = "0x581AA80")]
	public bool Finished()
	{
		return default(bool);
	}

	[Token(Token = "0x6001569")]
	[Address(RVA = "0x5824030", Offset = "0x5823030", VA = "0x5824030")]
	public void AddProgress(int count = 1)
	{
	}

	[Token(Token = "0x600156A")]
	[Address(RVA = "0x5821FA0", Offset = "0x5820FA0", VA = "0x5821FA0")]
	public void CollectReward()
	{
	}

	[Token(Token = "0x600156B")]
	[Address(RVA = "0x581C3E0", Offset = "0x581B3E0", VA = "0x581C3E0")]
	public QuestItem()
	{
	}
}
