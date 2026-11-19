// ==================== AoTTG2 cross-reference ====================
// Type: Settings.SetSettingsContainerNoPresets
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/SetSettingsContainerNoPresets.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/SetSettingsContainerNoPresets.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000119")]
internal class SetSettingsContainerNoPresets<T> : SetSettingsContainer<T> where T : BaseSetSetting, new()
{
	[Token(Token = "0x170000CC")]
	protected override bool AllowPresets
	{
		[Token(Token = "0x6000603")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000604")]
	public SetSettingsContainerNoPresets()
	{
	}
}
