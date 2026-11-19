// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.PlayerInfo
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/GameManagers/PlayerInfo.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerInfo.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace GameManagers;

[Token(Token = "0x200039F")]
internal class PlayerInfo : BaseSettingsContainer
{
	[Token(Token = "0x400126F")]
	[FieldOffset(Offset = "0x30")]
	public ProfileSettings Profile;

	[Token(Token = "0x6001747")]
	[Address(RVA = "0x5857820", Offset = "0x5856820", VA = "0x5857820", Slot = "11")]
	protected override void Setup()
	{
		// Lifted from source/cpp/GameManagers/PlayerInfo.c (GameManagers.PlayerInfo$$Setup): clean
		ProfileSettings pSVar1;

		pSVar1 = this.CreateProfile();
		this.Profile = pSVar1;
		this.Setup();
		return;
	}

	[Token(Token = "0x6001748")]
	[Address(RVA = "0x5857850", Offset = "0x5856850", VA = "0x5857850", Slot = "14")]
	protected virtual ProfileSettings CreateProfile()
	{
		// Lifted from source/cpp/GameManagers/PlayerInfo.c (GameManagers.PlayerInfo$$CreateProfile): clean
		ProfileSettings __this_00;

		__this_00 = new ProfileSettings();
		return __this_00;
	}

	[Token(Token = "0x6001749")]
	[Address(RVA = "0x5857890", Offset = "0x5856890", VA = "0x5857890")]
	public PlayerInfo()
	{
		// Lifted from source/cpp/GameManagers/PlayerInfo.c (GameManagers.PlayerInfo$$.ctor): clean
		base();
		return;
	}
}
