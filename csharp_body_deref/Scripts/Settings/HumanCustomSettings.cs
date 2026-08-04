// ==================== AoTTG2 cross-reference ====================
// Type: Settings.HumanCustomSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/HumanCustomSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/HumanCustomSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000087")]
internal class HumanCustomSettings : PresetSettingsContainer
{
	[Token(Token = "0x40002F6")]
	[FieldOffset(Offset = "0x20")]
	public SetSettingsContainer<HumanCustomSet> CustomSets;

	[Token(Token = "0x40002F7")]
	[FieldOffset(Offset = "0x28")]
	public SetSettingsContainer<HumanCustomSet> Costume1Sets;

	[Token(Token = "0x40002F8")]
	[FieldOffset(Offset = "0x30")]
	public SetSettingsContainer<HumanCustomSet> Costume2Sets;

	[Token(Token = "0x40002F9")]
	[FieldOffset(Offset = "0x38")]
	public SetSettingsContainer<HumanCustomSet> Costume3Sets;

	[Token(Token = "0x1700008B")]
	protected override string FileName
	{
		[Token(Token = "0x6000324")]
		[Address(RVA = "0x3F89C90", Offset = "0x3F89C90", VA = "0x3F89C90", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x3F89CC0", Offset = "0x3F89CC0", VA = "0x3F89CC0")]
	public HumanCustomSettings()
	{
	}
}
