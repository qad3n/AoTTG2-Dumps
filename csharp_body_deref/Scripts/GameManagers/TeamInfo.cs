using Characters;
using Il2CppDummyDll;
using UnityEngine;

namespace GameManagers;

[Token(Token = "0x20001FA")]
internal class TeamInfo
{
	[Token(Token = "0x4000B2F")]
	[FieldOffset(Offset = "0x0")]
	public static string Blue;

	[Token(Token = "0x4000B30")]
	[FieldOffset(Offset = "0x8")]
	public static string Red;

	[Token(Token = "0x4000B31")]
	[FieldOffset(Offset = "0x10")]
	public static string None;

	[Token(Token = "0x4000B32")]
	[FieldOffset(Offset = "0x18")]
	public static string Titan;

	[Token(Token = "0x4000B33")]
	[FieldOffset(Offset = "0x20")]
	public static string Human;

	[Token(Token = "0x6000BFF")]
	[Address(RVA = "0x413B460", Offset = "0x413B460", VA = "0x413B460")]
	public static bool SameTeam(string a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C00")]
	[Address(RVA = "0x413B510", Offset = "0x413B510", VA = "0x413B510")]
	public static bool SameTeam(BaseCharacter a, BaseCharacter b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x413B5D0", Offset = "0x413B5D0", VA = "0x413B5D0")]
	public static bool SameTeam(BaseCharacter a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x413B690", Offset = "0x413B690", VA = "0x413B690")]
	public static Color GetTeamColorUnity(string Team)
	{
		return default(Color);
	}

	[Token(Token = "0x6000C03")]
	[Address(RVA = "0x413B700", Offset = "0x413B700", VA = "0x413B700")]
	public static string GetTeamColor(string team)
	{
		return null;
	}

	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x413B860", Offset = "0x413B860", VA = "0x413B860")]
	public TeamInfo()
	{
	}
}
