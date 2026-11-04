// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InGameSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000B0")]
internal class InGameSettings : PresetSettingsContainer
{
	[Token(Token = "0x40003C3")]
	[FieldOffset(Offset = "0x38")]
	public SetSettingsContainer<InGameSet> InGameSets;

	[Token(Token = "0x40003C4")]
	[FieldOffset(Offset = "0x40")]
	public InGameCharacterSettings LastCharacter;

	[Token(Token = "0x17000097")]
	protected override string FileName
	{
		[Token(Token = "0x60003B3")]
		[Address(RVA = "0x1F1BDB0", Offset = "0x1F1A3B0", VA = "0x181F1BDB0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x1F1BD00", Offset = "0x1F1A300", VA = "0x181F1BD00")]
	public InGameSettings()
	{
	}
}
