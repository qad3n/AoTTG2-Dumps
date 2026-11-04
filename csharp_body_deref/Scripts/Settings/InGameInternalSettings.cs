// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameInternalSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InGameInternalSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameInternalSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000AA")]
internal class InGameInternalSettings : BaseSettingsContainer
{
	[Token(Token = "0x4000385")]
	[FieldOffset(Offset = "0x30")]
	public StringSetting ScoreboardFormat;

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x1F19ED0", Offset = "0x1F184D0", VA = "0x181F19ED0")]
	public InGameInternalSettings()
	{
	}
}
