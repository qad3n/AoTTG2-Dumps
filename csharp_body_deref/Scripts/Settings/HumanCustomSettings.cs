// ==================== AoTTG2 cross-reference ====================
// Type: Settings.HumanCustomSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/HumanCustomSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/HumanCustomSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000DB")]
internal class HumanCustomSettings : PresetSettingsContainer
{
	[Token(Token = "0x4000497")]
	[FieldOffset(Offset = "0x38")]
	public SetSettingsContainer<HumanCustomSet> CustomSets;

	[Token(Token = "0x4000498")]
	[FieldOffset(Offset = "0x40")]
	public SetSettingsContainer<HumanCustomSet> Costume1Sets;

	[Token(Token = "0x4000499")]
	[FieldOffset(Offset = "0x48")]
	public SetSettingsContainer<HumanCustomSet> Costume2Sets;

	[Token(Token = "0x400049A")]
	[FieldOffset(Offset = "0x50")]
	public SetSettingsContainer<HumanCustomSet> Costume3Sets;

	[Token(Token = "0x170000B3")]
	protected override string FileName
	{
		[Token(Token = "0x6000516")]
		[Address(RVA = "0x5A45390", Offset = "0x5A44390", VA = "0x5A45390", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000517")]
	[Address(RVA = "0x5A453C0", Offset = "0x5A443C0", VA = "0x5A453C0")]
	public HumanCustomSettings()
	{
	}
}
