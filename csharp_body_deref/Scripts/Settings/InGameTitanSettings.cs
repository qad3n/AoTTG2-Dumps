// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameTitanSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InGameTitanSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameTitanSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000E8")]
internal class InGameTitanSettings : BaseSettingsContainer
{
	[Token(Token = "0x40004FA")]
	[FieldOffset(Offset = "0x30")]
	public BoolSetting TitanSpawnEnabled;

	[Token(Token = "0x40004FB")]
	[FieldOffset(Offset = "0x38")]
	public FloatSetting TitanSpawnNormal;

	[Token(Token = "0x40004FC")]
	[FieldOffset(Offset = "0x40")]
	public FloatSetting TitanSpawnAbnormal;

	[Token(Token = "0x40004FD")]
	[FieldOffset(Offset = "0x48")]
	public FloatSetting TitanSpawnJumper;

	[Token(Token = "0x40004FE")]
	[FieldOffset(Offset = "0x50")]
	public FloatSetting TitanSpawnCrawler;

	[Token(Token = "0x40004FF")]
	[FieldOffset(Offset = "0x58")]
	public FloatSetting TitanSpawnThrower;

	[Token(Token = "0x4000500")]
	[FieldOffset(Offset = "0x60")]
	public FloatSetting TitanSpawnPunk;

	[Token(Token = "0x4000501")]
	[FieldOffset(Offset = "0x68")]
	public BoolSetting TitanSizeEnabled;

	[Token(Token = "0x4000502")]
	[FieldOffset(Offset = "0x70")]
	public FloatSetting TitanSizeMin;

	[Token(Token = "0x4000503")]
	[FieldOffset(Offset = "0x78")]
	public FloatSetting TitanSizeMax;

	[Token(Token = "0x4000504")]
	[FieldOffset(Offset = "0x80")]
	public IntSetting TitanHealthMode;

	[Token(Token = "0x4000505")]
	[FieldOffset(Offset = "0x88")]
	public IntSetting TitanHealthMin;

	[Token(Token = "0x4000506")]
	[FieldOffset(Offset = "0x90")]
	public IntSetting TitanHealthMax;

	[Token(Token = "0x4000507")]
	[FieldOffset(Offset = "0x98")]
	public IntSetting TitanHeadMode;

	[Token(Token = "0x4000508")]
	[FieldOffset(Offset = "0xA0")]
	public FloatSetting TitanHeadRandomMin;

	[Token(Token = "0x4000509")]
	[FieldOffset(Offset = "0xA8")]
	public FloatSetting TitanHeadRandomMax;

	[Token(Token = "0x400050A")]
	[FieldOffset(Offset = "0xB0")]
	public BoolSetting TitanDecapitationEnabled;

	[Token(Token = "0x400050B")]
	[FieldOffset(Offset = "0xB8")]
	public IntSetting TitanDecapitationMinDamage;

	[Token(Token = "0x400050C")]
	[FieldOffset(Offset = "0xC0")]
	public BoolSetting TitanArmorEnabled;

	[Token(Token = "0x400050D")]
	[FieldOffset(Offset = "0xC8")]
	public BoolSetting TitanArmorCrawlerEnabled;

	[Token(Token = "0x400050E")]
	[FieldOffset(Offset = "0xD0")]
	public IntSetting TitanArmor;

	[Token(Token = "0x400050F")]
	[FieldOffset(Offset = "0xD8")]
	public BoolSetting TitanStandardModels;

	[Token(Token = "0x4000510")]
	[FieldOffset(Offset = "0xE0")]
	public BoolSetting TitanSmartMovement;

	[Token(Token = "0x4000511")]
	[FieldOffset(Offset = "0xE8")]
	public FloatSetting TitanChanceWarded;

	[Token(Token = "0x4000512")]
	[FieldOffset(Offset = "0xF0")]
	public BoolSetting TitanWardedEnabled;

	[Token(Token = "0x6000526")]
	[Address(RVA = "0x5A48D70", Offset = "0x5A47D70", VA = "0x5A48D70")]
	public InGameTitanSettings()
	{
	}
}
