// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameInternalSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InGameInternalSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameInternalSettings.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
		// Lifted from source/cpp/Settings/InGameInternalSettings.c (Settings.InGameInternalSettings$$.ctor): clean
		MethodInfo method_00;

		method_00 = new StringSetting("Kills/Deaths/Avg Dmg/Total Dmg", 0x7fffffff);
		this.ScoreboardFormat = (StringSetting)method_00;
		base();
		return;
	}
}
