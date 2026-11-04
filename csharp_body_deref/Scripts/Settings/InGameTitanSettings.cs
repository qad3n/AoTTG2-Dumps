// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameTitanSettings
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/InGameTitanSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameTitanSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000B1")]
internal class InGameTitanSettings : BaseSettingsContainer
{
	[Token(Token = "0x40003C5")]
	[FieldOffset(Offset = "0x30")]
	public BoolSetting TitanSpawnEnabled;

	[Token(Token = "0x40003C6")]
	[FieldOffset(Offset = "0x38")]
	public FloatSetting TitanSpawnNormal;

	[Token(Token = "0x40003C7")]
	[FieldOffset(Offset = "0x40")]
	public FloatSetting TitanSpawnAbnormal;

	[Token(Token = "0x40003C8")]
	[FieldOffset(Offset = "0x48")]
	public FloatSetting TitanSpawnJumper;

	[Token(Token = "0x40003C9")]
	[FieldOffset(Offset = "0x50")]
	public FloatSetting TitanSpawnCrawler;

	[Token(Token = "0x40003CA")]
	[FieldOffset(Offset = "0x58")]
	public FloatSetting TitanSpawnThrower;

	[Token(Token = "0x40003CB")]
	[FieldOffset(Offset = "0x60")]
	public FloatSetting TitanSpawnPunk;

	[Token(Token = "0x40003CC")]
	[FieldOffset(Offset = "0x68")]
	public BoolSetting TitanSizeEnabled;

	[Token(Token = "0x40003CD")]
	[FieldOffset(Offset = "0x70")]
	public FloatSetting TitanSizeMin;

	[Token(Token = "0x40003CE")]
	[FieldOffset(Offset = "0x78")]
	public FloatSetting TitanSizeMax;

	[Token(Token = "0x40003CF")]
	[FieldOffset(Offset = "0x80")]
	public IntSetting TitanHealthMode;

	[Token(Token = "0x40003D0")]
	[FieldOffset(Offset = "0x88")]
	public IntSetting TitanHealthMin;

	[Token(Token = "0x40003D1")]
	[FieldOffset(Offset = "0x90")]
	public IntSetting TitanHealthMax;

	[Token(Token = "0x40003D2")]
	[FieldOffset(Offset = "0x98")]
	public IntSetting TitanHeadMode;

	[Token(Token = "0x40003D3")]
	[FieldOffset(Offset = "0xA0")]
	public FloatSetting TitanHeadRandomMin;

	[Token(Token = "0x40003D4")]
	[FieldOffset(Offset = "0xA8")]
	public FloatSetting TitanHeadRandomMax;

	[Token(Token = "0x40003D5")]
	[FieldOffset(Offset = "0xB0")]
	public BoolSetting TitanDecapitationEnabled;

	[Token(Token = "0x40003D6")]
	[FieldOffset(Offset = "0xB8")]
	public IntSetting TitanDecapitationMinDamage;

	[Token(Token = "0x40003D7")]
	[FieldOffset(Offset = "0xC0")]
	public BoolSetting TitanArmorEnabled;

	[Token(Token = "0x40003D8")]
	[FieldOffset(Offset = "0xC8")]
	public BoolSetting TitanArmorCrawlerEnabled;

	[Token(Token = "0x40003D9")]
	[FieldOffset(Offset = "0xD0")]
	public IntSetting TitanArmor;

	[Token(Token = "0x40003DA")]
	[FieldOffset(Offset = "0xD8")]
	public BoolSetting TitanStandardModels;

	[Token(Token = "0x40003DB")]
	[FieldOffset(Offset = "0xE0")]
	public BoolSetting TitanSmartMovement;

	[Token(Token = "0x40003DC")]
	[FieldOffset(Offset = "0xE8")]
	public FloatSetting TitanChanceWarded;

	[Token(Token = "0x40003DD")]
	[FieldOffset(Offset = "0xF0")]
	public BoolSetting TitanWardedEnabled;

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x1F1BDE0", Offset = "0x1F1A3E0", VA = "0x181F1BDE0")]
	public InGameTitanSettings()
	{
	}
}
