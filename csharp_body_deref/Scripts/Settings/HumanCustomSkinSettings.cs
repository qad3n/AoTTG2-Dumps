using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200006A")]
internal class HumanCustomSkinSettings : BaseCustomSkinSettings<HumanCustomSkinSet>
{
	[Token(Token = "0x4000220")]
	[FieldOffset(Offset = "0x48")]
	public BoolSetting GasEnabled;

	[Token(Token = "0x4000221")]
	[FieldOffset(Offset = "0x50")]
	public BoolSetting HookEnabled;

	[Token(Token = "0x4000222")]
	[FieldOffset(Offset = "0x58")]
	public BoolSetting SetSpecificSkinsEnabled;

	[Token(Token = "0x4000223")]
	[FieldOffset(Offset = "0x60")]
	public BoolSetting GlobalSkinOverridesEnabled;

	[Token(Token = "0x4000224")]
	[FieldOffset(Offset = "0x68")]
	public IntSetting SkinMode;

	[Token(Token = "0x4000225")]
	[FieldOffset(Offset = "0x70")]
	public IntSetting SelectedCharacterIndex;

	[Token(Token = "0x4000226")]
	[FieldOffset(Offset = "0x78")]
	public IntSetting LastGlobalPresetIndex;

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x3C8F880", Offset = "0x3C8F880", VA = "0x3C8F880")]
	public HumanCustomSkinSettings()
	{
	}
}
