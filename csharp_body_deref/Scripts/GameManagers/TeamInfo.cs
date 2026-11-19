// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.TeamInfo
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/GameManagers/TeamInfo.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Characters;
using Il2CppDummyDll;
using UnityEngine;

namespace GameManagers;

[Token(Token = "0x20003AA")]
internal class TeamInfo
{
	[Token(Token = "0x40012BF")]
	[FieldOffset(Offset = "0x0")]
	public static string Blue;

	[Token(Token = "0x40012C0")]
	[FieldOffset(Offset = "0x8")]
	public static string Red;

	[Token(Token = "0x40012C1")]
	[FieldOffset(Offset = "0x10")]
	public static string None;

	[Token(Token = "0x40012C2")]
	[FieldOffset(Offset = "0x18")]
	public static string Titan;

	[Token(Token = "0x40012C3")]
	[FieldOffset(Offset = "0x20")]
	public static string Human;

	[Token(Token = "0x600175C")]
	[Address(RVA = "0x5858850", Offset = "0x5857850", VA = "0x5858850")]
	public static bool SameTeam(string a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x600175D")]
	[Address(RVA = "0x5858900", Offset = "0x5857900", VA = "0x5858900")]
	public static bool SameTeam(BaseCharacter a, BaseCharacter b)
	{
		return default(bool);
	}

	[Token(Token = "0x600175E")]
	[Address(RVA = "0x5858B00", Offset = "0x5857B00", VA = "0x5858B00")]
	private static bool IsOwnHorse(BaseCharacter human, BaseCharacter horse)
	{
		return default(bool);
	}

	[Token(Token = "0x600175F")]
	[Address(RVA = "0x5858BA0", Offset = "0x5857BA0", VA = "0x5858BA0")]
	public static bool SameTeam(BaseCharacter a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x6001760")]
	[Address(RVA = "0x5858C60", Offset = "0x5857C60", VA = "0x5858C60")]
	public static Color GetTeamColorUnity(string Team)
	{
		return default(Color);
	}

	[Token(Token = "0x6001761")]
	[Address(RVA = "0x5858CD0", Offset = "0x5857CD0", VA = "0x5858CD0")]
	public static string GetTeamColor(string team)
	{
		return null;
	}

	[Token(Token = "0x6001762")]
	[Address(RVA = "0x5858E30", Offset = "0x5857E30", VA = "0x5858E30")]
	public TeamInfo()
	{
	}
}
