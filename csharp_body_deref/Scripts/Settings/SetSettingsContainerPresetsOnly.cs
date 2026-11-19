// ==================== AoTTG2 cross-reference ====================
// Type: Settings.SetSettingsContainerPresetsOnly
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/SetSettingsContainerPresetsOnly.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/SetSettingsContainerPresetsOnly.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200011A")]
internal class SetSettingsContainerPresetsOnly<T> : SetSettingsContainer<T> where T : BaseSetSetting, new()
{
	[Token(Token = "0x170000CD")]
	protected override bool PresetsOnly
	{
		[Token(Token = "0x6000605")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000606")]
	public SetSettingsContainerPresetsOnly()
	{
	}
}
