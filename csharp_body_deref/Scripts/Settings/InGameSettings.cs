// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InGameSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000093")]
internal class InGameSettings : PresetSettingsContainer
{
	[Token(Token = "0x400034E")]
	[FieldOffset(Offset = "0x20")]
	public SetSettingsContainer<InGameSet> InGameSets;

	[Token(Token = "0x400034F")]
	[FieldOffset(Offset = "0x28")]
	public InGameCharacterSettings LastCharacter;

	[Token(Token = "0x1700008C")]
	protected override string FileName
	{
		[Token(Token = "0x6000331")]
		[Address(RVA = "0x3F8C410", Offset = "0x3F8C410", VA = "0x3F8C410", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x3F8C440", Offset = "0x3F8C440", VA = "0x3F8C440")]
	public InGameSettings()
	{
	}
}
