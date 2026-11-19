// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.UnsavedPlayerInfo
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/GameManagers/UnsavedPlayerInfo.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace GameManagers;

[Token(Token = "0x20003A0")]
internal class UnsavedPlayerInfo : PlayerInfo
{
	[Token(Token = "0x600174A")]
	[Address(RVA = "0x58578A0", Offset = "0x58568A0", VA = "0x58578A0", Slot = "14")]
	protected override ProfileSettings CreateProfile()
	{
		// Lifted from source/cpp/GameManagers/UnsavedPlayerInfo.c (GameManagers.UnsavedPlayerInfo$$CreateProfile): clean
		UnsavedProfileSettings __this_00;

		__this_00 = new UnsavedProfileSettings();
		return (ProfileSettings)__this_00;
	}

	[Token(Token = "0x600174B")]
	[Address(RVA = "0x58578E0", Offset = "0x58568E0", VA = "0x58578E0")]
	public UnsavedPlayerInfo()
	{
		// Lifted from source/cpp/GameManagers/UnsavedPlayerInfo.c (GameManagers.UnsavedPlayerInfo$$.ctor): clean
		base();
		return;
	}
}
