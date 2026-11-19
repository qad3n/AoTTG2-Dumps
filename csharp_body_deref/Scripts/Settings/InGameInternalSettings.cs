// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameInternalSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InGameInternalSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameInternalSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000E1")]
internal class InGameInternalSettings : BaseSettingsContainer
{
	[Token(Token = "0x40004B9")]
	[FieldOffset(Offset = "0x30")]
	public StringSetting ScoreboardFormat;

	[Token(Token = "0x600051E")]
	[Address(RVA = "0x5A47250", Offset = "0x5A46250", VA = "0x5A47250")]
	public InGameInternalSettings()
	{
	}
}
