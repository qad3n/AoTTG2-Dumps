// ==================== AoTTG2 cross-reference ====================
// Type: Settings.TitanCustomSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/TitanCustomSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/TitanCustomSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000B4")]
internal class TitanCustomSettings : PresetSettingsContainer
{
	[Token(Token = "0x40003E9")]
	[FieldOffset(Offset = "0x38")]
	public SetSettingsContainer<TitanCustomSet> TitanCustomSets;

	[Token(Token = "0x17000098")]
	protected override string FileName
	{
		[Token(Token = "0x60003BC")]
		[Address(RVA = "0x1F285F0", Offset = "0x1F26BF0", VA = "0x181F285F0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x1F28570", Offset = "0x1F26B70", VA = "0x181F28570")]
	public TitanCustomSettings()
	{
	}
}
