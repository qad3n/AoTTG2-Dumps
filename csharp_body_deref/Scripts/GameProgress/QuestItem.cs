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

[Token(Token = "0x2000311")]
internal class QuestItem : BaseSettingsContainer
{
	[Token(Token = "0x4000F9F")]
	[FieldOffset(Offset = "0x30")]
	public StringSetting Category;

	[Token(Token = "0x4000FA0")]
	[FieldOffset(Offset = "0x38")]
	public ListSetting<StringSetting> Conditions;

	[Token(Token = "0x4000FA1")]
	[FieldOffset(Offset = "0x40")]
	public IntSetting Amount;

	[Token(Token = "0x4000FA2")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting RewardType;

	[Token(Token = "0x4000FA3")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting RewardValue;

	[Token(Token = "0x4000FA4")]
	[FieldOffset(Offset = "0x58")]
	public StringSetting Icon;

	[Token(Token = "0x4000FA5")]
	[FieldOffset(Offset = "0x60")]
	public IntSetting Progress;

	[Token(Token = "0x4000FA6")]
	[FieldOffset(Offset = "0x68")]
	public BoolSetting Daily;

	[Token(Token = "0x4000FA7")]
	[FieldOffset(Offset = "0x70")]
	public IntSetting DayCreated;

	[Token(Token = "0x4000FA8")]
	[FieldOffset(Offset = "0x78")]
	public BoolSetting Collected;

	[Token(Token = "0x60012F4")]
	[Address(RVA = "0x1E39CD0", Offset = "0x1E382D0", VA = "0x181E39CD0", Slot = "14")]
	public virtual string GetQuestName()
	{
		return null;
	}

	[Token(Token = "0x60012F5")]
	[Address(RVA = "0x1E39B60", Offset = "0x1E38160", VA = "0x181E39B60")]
	public string GetConditionsHash()
	{
		return null;
	}

	[Token(Token = "0x60012F6")]
	[Address(RVA = "0x1E39B10", Offset = "0x1E38110", VA = "0x181E39B10")]
	public bool Finished()
	{
		return default(bool);
	}

	[Token(Token = "0x60012F7")]
	[Address(RVA = "0x1E398D0", Offset = "0x1E37ED0", VA = "0x181E398D0")]
	public void AddProgress(int count = 1)
	{
	}

	[Token(Token = "0x60012F8")]
	[Address(RVA = "0x1E399A0", Offset = "0x1E37FA0", VA = "0x181E399A0")]
	public void CollectReward()
	{
	}

	[Token(Token = "0x60012F9")]
	[Address(RVA = "0x1E39D70", Offset = "0x1E38370", VA = "0x181E39D70")]
	public QuestItem()
	{
	}
}
