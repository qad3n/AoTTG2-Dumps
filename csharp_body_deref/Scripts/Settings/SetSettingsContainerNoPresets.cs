using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000BD")]
internal class SetSettingsContainerNoPresets<T> : SetSettingsContainer<T> where T : BaseSetSetting, new()
{
	[Token(Token = "0x1700009E")]
	protected override bool AllowPresets
	{
		[Token(Token = "0x60003E7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60003E8")]
	public SetSettingsContainerNoPresets()
	{
	}
}
