using Il2CppDummyDll;

namespace GameProgress;

[Token(Token = "0x20001B8")]
internal class AchievementCount
{
	[Token(Token = "0x4000996")]
	[FieldOffset(Offset = "0x10")]
	public int FinishedBronze;

	[Token(Token = "0x4000997")]
	[FieldOffset(Offset = "0x14")]
	public int TotalBronze;

	[Token(Token = "0x4000998")]
	[FieldOffset(Offset = "0x18")]
	public int FinishedSilver;

	[Token(Token = "0x4000999")]
	[FieldOffset(Offset = "0x1C")]
	public int TotalSilver;

	[Token(Token = "0x400099A")]
	[FieldOffset(Offset = "0x20")]
	public int FinishedGold;

	[Token(Token = "0x400099B")]
	[FieldOffset(Offset = "0x24")]
	public int TotalGold;

	[Token(Token = "0x400099C")]
	[FieldOffset(Offset = "0x28")]
	public int FinishedAll;

	[Token(Token = "0x400099D")]
	[FieldOffset(Offset = "0x2C")]
	public int TotalAll;

	[Token(Token = "0x60009FE")]
	[Address(RVA = "0x41069A0", Offset = "0x41069A0", VA = "0x41069A0")]
	public AchievementCount()
	{
	}
}
