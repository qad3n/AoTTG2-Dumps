// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.TeamInfo
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameManagers/TeamInfo.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Characters;
using Il2CppDummyDll;
using UnityEngine;

namespace GameManagers;

[Token(Token = "0x2000348")]
internal class TeamInfo
{
	[Token(Token = "0x400110F")]
	[FieldOffset(Offset = "0x0")]
	public static string Blue;

	[Token(Token = "0x4001110")]
	[FieldOffset(Offset = "0x8")]
	public static string Red;

	[Token(Token = "0x4001111")]
	[FieldOffset(Offset = "0x10")]
	public static string None;

	[Token(Token = "0x4001112")]
	[FieldOffset(Offset = "0x18")]
	public static string Titan;

	[Token(Token = "0x4001113")]
	[FieldOffset(Offset = "0x20")]
	public static string Human;

	[Token(Token = "0x60014DC")]
	[Address(RVA = "0x1E77000", Offset = "0x1E75600", VA = "0x181E77000")]
	public static bool SameTeam(string a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x60014DD")]
	[Address(RVA = "0x1E770D0", Offset = "0x1E756D0", VA = "0x181E770D0")]
	public static bool SameTeam(BaseCharacter a, BaseCharacter b)
	{
		return default(bool);
	}

	[Token(Token = "0x60014DE")]
	[Address(RVA = "0x1E76F20", Offset = "0x1E75520", VA = "0x181E76F20")]
	public static bool SameTeam(BaseCharacter a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x60014DF")]
	[Address(RVA = "0x1E76BC0", Offset = "0x1E751C0", VA = "0x181E76BC0")]
	public static Color GetTeamColorUnity(string Team)
	{
		return default(Color);
	}

	[Token(Token = "0x60014E0")]
	[Address(RVA = "0x1E76D90", Offset = "0x1E75390", VA = "0x181E76D90")]
	public static string GetTeamColor(string team)
	{
		return null;
	}

	[Token(Token = "0x60014E1")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public TeamInfo()
	{
	}
}
