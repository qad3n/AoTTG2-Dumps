// ==================== AoTTG2 cross-reference ====================
// Type: Settings.TitanCustomSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/TitanCustomSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/TitanCustomSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000EB")]
internal class TitanCustomSettings : PresetSettingsContainer
{
	[Token(Token = "0x400051E")]
	[FieldOffset(Offset = "0x38")]
	public SetSettingsContainer<TitanCustomSet> TitanCustomSets;

	[Token(Token = "0x170000B5")]
	protected override string FileName
	{
		[Token(Token = "0x600052D")]
		[Address(RVA = "0x5A4A130", Offset = "0x5A49130", VA = "0x5A4A130", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600052E")]
	[Address(RVA = "0x5A4A160", Offset = "0x5A49160", VA = "0x5A4A160")]
	public TitanCustomSettings()
	{
	}
}
