using Il2CppDummyDll;
using Settings;

namespace GameProgress;

[Token(Token = "0x20001BC")]
internal class AchievementItem : QuestItem
{
	[Token(Token = "0x40009A5")]
	[FieldOffset(Offset = "0x70")]
	public StringSetting Tier;

	[Token(Token = "0x40009A6")]
	[FieldOffset(Offset = "0x78")]
	public BoolSetting Active;

	[Token(Token = "0x6000A06")]
	[Address(RVA = "0x41080F0", Offset = "0x41080F0", VA = "0x41080F0", Slot = "13")]
	public override string GetQuestName()
	{
		return null;
	}

	[Token(Token = "0x6000A07")]
	[Address(RVA = "0x4108270", Offset = "0x4108270", VA = "0x4108270")]
	public AchievementItem()
	{
	}
}
