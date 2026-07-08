using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000065")]
internal class BaseCustomSkinSettings<T> : SetSettingsContainer<T>, ICustomSkinSettings, ISetSettingsContainer where T : BaseSetSetting, new()
{
	[Token(Token = "0x40001FB")]
	[FieldOffset(Offset = "0x0")]
	public BoolSetting SkinsLocal;

	[Token(Token = "0x40001FC")]
	[FieldOffset(Offset = "0x0")]
	public BoolSetting SkinsEnabled;

	[Token(Token = "0x40001FD")]
	[FieldOffset(Offset = "0x0")]
	public ListSetting<T> SkinSets;

	[Token(Token = "0x60002FF")]
	public BoolSetting GetSkinsEnabled()
	{
		return null;
	}

	[Token(Token = "0x6000300")]
	public IListSetting GetSkinSets()
	{
		return null;
	}

	[Token(Token = "0x6000301")]
	public BoolSetting GetSkinsLocal()
	{
		return null;
	}

	[Token(Token = "0x6000302")]
	public BaseCustomSkinSettings()
	{
	}
}
