using Il2CppDummyDll;
using Settings;

namespace GameProgress;

[Token(Token = "0x20001C8")]
internal class GameStatContainer : BaseSettingsContainer
{
	[Token(Token = "0x40009D1")]
	[FieldOffset(Offset = "0x20")]
	public IntSetting Level;

	[Token(Token = "0x40009D2")]
	[FieldOffset(Offset = "0x28")]
	public IntSetting Exp;

	[Token(Token = "0x40009D3")]
	[FieldOffset(Offset = "0x30")]
	public FloatSetting PlayTime;

	[Token(Token = "0x40009D4")]
	[FieldOffset(Offset = "0x38")]
	public FloatSetting HighestSpeed;

	[Token(Token = "0x40009D5")]
	[FieldOffset(Offset = "0x40")]
	public IntSetting TitansKilledTotal;

	[Token(Token = "0x40009D6")]
	[FieldOffset(Offset = "0x48")]
	public IntSetting TitansKilledBlade;

	[Token(Token = "0x40009D7")]
	[FieldOffset(Offset = "0x50")]
	public IntSetting TitansKilledAHSS;

	[Token(Token = "0x40009D8")]
	[FieldOffset(Offset = "0x58")]
	public IntSetting TitansKilledThunderspear;

	[Token(Token = "0x40009D9")]
	[FieldOffset(Offset = "0x60")]
	public IntSetting TitansKilledAPG;

	[Token(Token = "0x40009DA")]
	[FieldOffset(Offset = "0x68")]
	public IntSetting TitansKilledOther;

	[Token(Token = "0x40009DB")]
	[FieldOffset(Offset = "0x70")]
	public IntSetting HumansKilledTotal;

	[Token(Token = "0x40009DC")]
	[FieldOffset(Offset = "0x78")]
	public IntSetting HumansKilledBlade;

	[Token(Token = "0x40009DD")]
	[FieldOffset(Offset = "0x80")]
	public IntSetting HumansKilledAHSS;

	[Token(Token = "0x40009DE")]
	[FieldOffset(Offset = "0x88")]
	public IntSetting HumansKilledThunderspear;

	[Token(Token = "0x40009DF")]
	[FieldOffset(Offset = "0x90")]
	public IntSetting HumansKilledAPG;

	[Token(Token = "0x40009E0")]
	[FieldOffset(Offset = "0x98")]
	public IntSetting HumansKilledTitan;

	[Token(Token = "0x40009E1")]
	[FieldOffset(Offset = "0xA0")]
	public IntSetting HumansKilledOther;

	[Token(Token = "0x40009E2")]
	[FieldOffset(Offset = "0xA8")]
	public DamageSetting Damage;

	[Token(Token = "0x6000A49")]
	[Address(RVA = "0x410AFA0", Offset = "0x410AFA0", VA = "0x410AFA0")]
	public GameStatContainer()
	{
	}
}
