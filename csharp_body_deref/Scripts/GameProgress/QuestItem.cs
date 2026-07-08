using Il2CppDummyDll;
using Settings;

namespace GameProgress;

[Token(Token = "0x20001CC")]
internal class QuestItem : BaseSettingsContainer
{
	[Token(Token = "0x40009F6")]
	[FieldOffset(Offset = "0x20")]
	public StringSetting Category;

	[Token(Token = "0x40009F7")]
	[FieldOffset(Offset = "0x28")]
	public ListSetting<StringSetting> Conditions;

	[Token(Token = "0x40009F8")]
	[FieldOffset(Offset = "0x30")]
	public IntSetting Amount;

	[Token(Token = "0x40009F9")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting RewardType;

	[Token(Token = "0x40009FA")]
	[FieldOffset(Offset = "0x40")]
	public StringSetting RewardValue;

	[Token(Token = "0x40009FB")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting Icon;

	[Token(Token = "0x40009FC")]
	[FieldOffset(Offset = "0x50")]
	public IntSetting Progress;

	[Token(Token = "0x40009FD")]
	[FieldOffset(Offset = "0x58")]
	public BoolSetting Daily;

	[Token(Token = "0x40009FE")]
	[FieldOffset(Offset = "0x60")]
	public IntSetting DayCreated;

	[Token(Token = "0x40009FF")]
	[FieldOffset(Offset = "0x68")]
	public BoolSetting Collected;

	[Token(Token = "0x6000A65")]
	[Address(RVA = "0x410FD60", Offset = "0x410FD60", VA = "0x410FD60", Slot = "13")]
	public virtual string GetQuestName()
	{
		return null;
	}

	[Token(Token = "0x6000A66")]
	[Address(RVA = "0x410FDF0", Offset = "0x410FDF0", VA = "0x410FDF0")]
	public string GetConditionsHash()
	{
		return null;
	}

	[Token(Token = "0x6000A67")]
	[Address(RVA = "0x410FFA0", Offset = "0x410FFA0", VA = "0x410FFA0")]
	public bool Finished()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A68")]
	[Address(RVA = "0x410FFF0", Offset = "0x410FFF0", VA = "0x410FFF0")]
	public void AddProgress(int count = 1)
	{
	}

	[Token(Token = "0x6000A69")]
	[Address(RVA = "0x41100B0", Offset = "0x41100B0", VA = "0x41100B0")]
	public void CollectReward()
	{
	}

	[Token(Token = "0x6000A6A")]
	[Address(RVA = "0x41101D0", Offset = "0x41101D0", VA = "0x41101D0")]
	public QuestItem()
	{
	}
}
