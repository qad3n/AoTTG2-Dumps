using Il2CppDummyDll;
using Settings;

namespace GameProgress;

[Token(Token = "0x20001B7")]
internal class AchievementContainer : BaseSettingsContainer
{
	[Token(Token = "0x4000995")]
	[FieldOffset(Offset = "0x20")]
	public ListSetting<AchievementItem> AchievementItems;

	[Token(Token = "0x60009FC")]
	[Address(RVA = "0x40FBC20", Offset = "0x40FBC20", VA = "0x40FBC20")]
	public AchievementCount GetAchievementCount()
	{
		return null;
	}

	[Token(Token = "0x60009FD")]
	[Address(RVA = "0x41069B0", Offset = "0x41069B0", VA = "0x41069B0")]
	public AchievementContainer()
	{
	}
}
