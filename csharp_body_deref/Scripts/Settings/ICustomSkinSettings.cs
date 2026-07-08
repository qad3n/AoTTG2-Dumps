using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200006B")]
internal interface ICustomSkinSettings : ISetSettingsContainer
{
	[Token(Token = "0x600030B")]
	BoolSetting GetSkinsLocal();

	[Token(Token = "0x600030C")]
	BoolSetting GetSkinsEnabled();

	[Token(Token = "0x600030D")]
	IListSetting GetSkinSets();
}
