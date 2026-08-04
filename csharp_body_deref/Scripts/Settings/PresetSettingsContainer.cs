// ==================== AoTTG2 cross-reference ====================
// Type: Settings.PresetSettingsContainer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/PresetSettingsContainer.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/PresetSettingsContainer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000BC")]
internal abstract class PresetSettingsContainer : SaveableSettingsContainer
{
	[Token(Token = "0x1700009A")]
	protected virtual string PresetFolderPath
	{
		[Token(Token = "0x60003D6")]
		[Address(RVA = "0x4102770", Offset = "0x4102770", VA = "0x4102770", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x41027D0", Offset = "0x41027D0", VA = "0x41027D0", Slot = "17")]
	public override void Load()
	{
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x4103380", Offset = "0x4103380", VA = "0x4103380", Slot = "21")]
	protected virtual string GetPresetFilePath()
	{
		return null;
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x41033F0", Offset = "0x41033F0", VA = "0x41033F0")]
	protected PresetSettingsContainer()
	{
	}
}
