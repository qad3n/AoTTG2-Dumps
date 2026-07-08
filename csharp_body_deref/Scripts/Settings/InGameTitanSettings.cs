using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000093")]
internal class InGameTitanSettings : BaseSettingsContainer
{
	[Token(Token = "0x400034B")]
	[FieldOffset(Offset = "0x20")]
	public BoolSetting TitanSpawnEnabled;

	[Token(Token = "0x400034C")]
	[FieldOffset(Offset = "0x28")]
	public FloatSetting TitanSpawnNormal;

	[Token(Token = "0x400034D")]
	[FieldOffset(Offset = "0x30")]
	public FloatSetting TitanSpawnAbnormal;

	[Token(Token = "0x400034E")]
	[FieldOffset(Offset = "0x38")]
	public FloatSetting TitanSpawnJumper;

	[Token(Token = "0x400034F")]
	[FieldOffset(Offset = "0x40")]
	public FloatSetting TitanSpawnCrawler;

	[Token(Token = "0x4000350")]
	[FieldOffset(Offset = "0x48")]
	public FloatSetting TitanSpawnThrower;

	[Token(Token = "0x4000351")]
	[FieldOffset(Offset = "0x50")]
	public FloatSetting TitanSpawnPunk;

	[Token(Token = "0x4000352")]
	[FieldOffset(Offset = "0x58")]
	public BoolSetting TitanSizeEnabled;

	[Token(Token = "0x4000353")]
	[FieldOffset(Offset = "0x60")]
	public FloatSetting TitanSizeMin;

	[Token(Token = "0x4000354")]
	[FieldOffset(Offset = "0x68")]
	public FloatSetting TitanSizeMax;

	[Token(Token = "0x4000355")]
	[FieldOffset(Offset = "0x70")]
	public IntSetting TitanHealthMode;

	[Token(Token = "0x4000356")]
	[FieldOffset(Offset = "0x78")]
	public IntSetting TitanHealthMin;

	[Token(Token = "0x4000357")]
	[FieldOffset(Offset = "0x80")]
	public IntSetting TitanHealthMax;

	[Token(Token = "0x4000358")]
	[FieldOffset(Offset = "0x88")]
	public BoolSetting TitanArmorEnabled;

	[Token(Token = "0x4000359")]
	[FieldOffset(Offset = "0x90")]
	public BoolSetting TitanArmorCrawlerEnabled;

	[Token(Token = "0x400035A")]
	[FieldOffset(Offset = "0x98")]
	public IntSetting TitanArmor;

	[Token(Token = "0x400035B")]
	[FieldOffset(Offset = "0xA0")]
	public BoolSetting TitanStandardModels;

	[Token(Token = "0x400035C")]
	[FieldOffset(Offset = "0xA8")]
	public BoolSetting TitanSmartMovement;

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x3C95E40", Offset = "0x3C95E40", VA = "0x3C95E40")]
	public InGameTitanSettings()
	{
	}
}
