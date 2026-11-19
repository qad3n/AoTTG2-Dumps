// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InGameSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameSettings.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000E7")]
internal class InGameSettings : PresetSettingsContainer
{
	[Token(Token = "0x40004F8")]
	[FieldOffset(Offset = "0x38")]
	public SetSettingsContainer<InGameSet> InGameSets;

	[Token(Token = "0x40004F9")]
	[FieldOffset(Offset = "0x40")]
	public InGameCharacterSettings LastCharacter;

	[Token(Token = "0x170000B4")]
	protected override string FileName
	{
		[Token(Token = "0x6000524")]
		[Address(RVA = "0x5A49A20", Offset = "0x5A48A20", VA = "0x5A49A20", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Settings/InGameSettings.c (Settings.InGameSettings$$get_FileName): clean
			return "InGame.json";
		}
	}

	[Token(Token = "0x6000525")]
	[Address(RVA = "0x5A49A50", Offset = "0x5A48A50", VA = "0x5A49A50")]
	public InGameSettings()
	{
		// Lifted from source/cpp/Settings/InGameSettings.c (Settings.InGameSettings$$.ctor): clean
		MethodInfo method_00;
		InGameCharacterSettings __this_00;

		method_00 = new SetSettingsContainer<InGameSet>();
		this.InGameSets = (SetSettingsContainer<InGameSet>)method_00;
		__this_00 = new InGameCharacterSettings();
		this.LastCharacter = __this_00;
		base();
		return;
	}
}
