// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.PlayerInfo
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/GameManagers/PlayerInfo.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerInfo.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
	}

	[Token(Token = "0x6001748")]
	[Address(RVA = "0x5857850", Offset = "0x5856850", VA = "0x5857850", Slot = "14")]
	protected virtual ProfileSettings CreateProfile()
	{
		return null;
	}

	[Token(Token = "0x6001749")]
	[Address(RVA = "0x5857890", Offset = "0x5856890", VA = "0x5857890")]
	public PlayerInfo()
	{
	}
}
