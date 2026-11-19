// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InGameSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
			return null;
		}
	}

	[Token(Token = "0x6000525")]
	[Address(RVA = "0x5A49A50", Offset = "0x5A48A50", VA = "0x5A49A50")]
	public InGameSettings()
	{
	}
}
