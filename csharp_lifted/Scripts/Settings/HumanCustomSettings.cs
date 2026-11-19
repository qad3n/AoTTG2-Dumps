// ==================== AoTTG2 cross-reference ====================
// Type: Settings.HumanCustomSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/HumanCustomSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/HumanCustomSettings.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/Settings/HumanCustomSettings.c (Settings.HumanCustomSettings$$get_FileName): clean
			return "HumanCustom.json";
		}
	}

	[Token(Token = "0x6000517")]
	[Address(RVA = "0x5A453C0", Offset = "0x5A443C0", VA = "0x5A453C0")]
	public HumanCustomSettings()
	{
		// Lifted from source/cpp/Settings/HumanCustomSettings.c (Settings.HumanCustomSettings$$.ctor): 4 lines keep C-only constructs
		SetSettingsContainerNoPresets<HumanCustomSet> __this_00;
		SetSettingsContainerPresetsOnly<HumanCustomSet> pSVar1;

		__this_00 = new SetSettingsContainerNoPresets<HumanCustomSet>();
		this.CustomSets = (Settings_SetSettingsContainer_HumanCustomSet__o)__this_00;
		pSVar1 = new SetSettingsContainerPresetsOnly<HumanCustomSet>();
		this.Costume1Sets = (Settings_SetSettingsContainer_HumanCustomSet__o)pSVar1;
		pSVar1 = new SetSettingsContainerPresetsOnly<HumanCustomSet>();
		this.Costume2Sets = (Settings_SetSettingsContainer_HumanCustomSet__o)pSVar1;
		pSVar1 = new SetSettingsContainerPresetsOnly<HumanCustomSet>();
		this.Costume3Sets = (Settings_SetSettingsContainer_HumanCustomSet__o)pSVar1;
		base();
		return;
	}
}
