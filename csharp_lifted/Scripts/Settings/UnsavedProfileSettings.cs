// ==================== AoTTG2 cross-reference ====================
// Type: Settings.UnsavedProfileSettings
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Settings/UnsavedProfileSettings.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000102")]
internal class UnsavedProfileSettings : ProfileSettings
{
	[Token(Token = "0x6000564")]
	[Address(RVA = "0x5A549B0", Offset = "0x5A539B0", VA = "0x5A549B0", Slot = "11")]
	protected override void Setup()
	{
		// Lifted from source/cpp/Settings/UnsavedProfileSettings.c (Settings.UnsavedProfileSettings$$Setup): clean
		this.RegisterSettings();
		this.Apply();
		return;
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x5A54ED0", Offset = "0x5A53ED0", VA = "0x5A54ED0")]
	public UnsavedProfileSettings()
	{
		// Lifted from source/cpp/Settings/UnsavedProfileSettings.c (Settings.UnsavedProfileSettings$$.ctor): clean
		base();
		return;
	}
}
