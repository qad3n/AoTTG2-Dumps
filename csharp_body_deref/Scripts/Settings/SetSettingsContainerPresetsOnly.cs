using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000BE")]
internal class SetSettingsContainerPresetsOnly<T> : SetSettingsContainer<T> where T : BaseSetSetting, new()
{
	[Token(Token = "0x1700009F")]
	protected override bool PresetsOnly
	{
		[Token(Token = "0x60003E9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60003EA")]
	public SetSettingsContainerPresetsOnly()
	{
	}
}
