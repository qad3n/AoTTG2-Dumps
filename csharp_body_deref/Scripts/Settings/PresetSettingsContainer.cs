// ==================== AoTTG2 cross-reference ====================
// Type: Settings.PresetSettingsContainer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/PresetSettingsContainer.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/PresetSettingsContainer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000115")]
internal abstract class PresetSettingsContainer : SaveableSettingsContainer
{
	[Token(Token = "0x170000C5")]
	protected virtual string PresetFolderPath
	{
		[Token(Token = "0x60005DE")]
		[Address(RVA = "0x5B7B940", Offset = "0x5B7A940", VA = "0x5B7B940", Slot = "23")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x5B7B9B0", Offset = "0x5B7A9B0", VA = "0x5B7B9B0", Slot = "19")]
	public override void Load()
	{
	}

	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x5B7C3C0", Offset = "0x5B7B3C0", VA = "0x5B7C3C0", Slot = "24")]
	protected virtual string GetPresetFilePath()
	{
		return null;
	}

	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x5B7C430", Offset = "0x5B7B430", VA = "0x5B7C430")]
	protected PresetSettingsContainer()
	{
	}
}
