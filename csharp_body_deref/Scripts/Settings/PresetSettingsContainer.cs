// ==================== AoTTG2 cross-reference ====================
// Type: Settings.PresetSettingsContainer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/PresetSettingsContainer.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/PresetSettingsContainer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000DA")]
internal abstract class PresetSettingsContainer : SaveableSettingsContainer
{
	[Token(Token = "0x170000A8")]
	protected virtual string PresetFolderPath
	{
		[Token(Token = "0x6000460")]
		[Address(RVA = "0x1F24560", Offset = "0x1F22B60", VA = "0x181F24560", Slot = "23")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x1F23F40", Offset = "0x1F22540", VA = "0x181F23F40", Slot = "19")]
	public override void Load()
	{
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x1F23EC0", Offset = "0x1F224C0", VA = "0x181F23EC0", Slot = "24")]
	protected virtual string GetPresetFilePath()
	{
		return null;
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x1F24550", Offset = "0x1F22B50", VA = "0x181F24550")]
	protected PresetSettingsContainer()
	{
	}
}
