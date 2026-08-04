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

[Token(Token = "0x2000230")]
internal class TeamInfo
{
	[Token(Token = "0x4000C08")]
	[FieldOffset(Offset = "0x0")]
	public static string Blue;

	[Token(Token = "0x4000C09")]
	[FieldOffset(Offset = "0x8")]
	public static string Red;

	[Token(Token = "0x4000C0A")]
	[FieldOffset(Offset = "0x10")]
	public static string None;

	[Token(Token = "0x4000C0B")]
	[FieldOffset(Offset = "0x18")]
	public static string Titan;

	[Token(Token = "0x4000C0C")]
	[FieldOffset(Offset = "0x20")]
	public static string Human;

	[Token(Token = "0x6000D94")]
	[Address(RVA = "0x446FE30", Offset = "0x446FE30", VA = "0x446FE30")]
	public static bool SameTeam(string a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D95")]
	[Address(RVA = "0x446FEE0", Offset = "0x446FEE0", VA = "0x446FEE0")]
	public static bool SameTeam(BaseCharacter a, BaseCharacter b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D96")]
	[Address(RVA = "0x446FFA0", Offset = "0x446FFA0", VA = "0x446FFA0")]
	public static bool SameTeam(BaseCharacter a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D97")]
	[Address(RVA = "0x4470060", Offset = "0x4470060", VA = "0x4470060")]
	public static Color GetTeamColorUnity(string Team)
	{
		return default(Color);
	}

	[Token(Token = "0x6000D98")]
	[Address(RVA = "0x44700D0", Offset = "0x44700D0", VA = "0x44700D0")]
	public static string GetTeamColor(string team)
	{
		return null;
	}

	[Token(Token = "0x6000D99")]
	[Address(RVA = "0x4470230", Offset = "0x4470230", VA = "0x4470230")]
	public TeamInfo()
	{
	}
}
