using System.Collections.Generic;
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20004C6")]
internal class HumanSpecials
{
	[Token(Token = "0x4001687")]
	[FieldOffset(Offset = "0x0")]
	public static string[] AnySpecials;

	[Token(Token = "0x4001688")]
	[FieldOffset(Offset = "0x8")]
	public static string[] AHSSSpecials;

	[Token(Token = "0x4001689")]
	[FieldOffset(Offset = "0x10")]
	public static string[] BladeSpecials;

	[Token(Token = "0x400168A")]
	[FieldOffset(Offset = "0x18")]
	public static string[] ShifterSpecials;

	[Token(Token = "0x400168B")]
	[FieldOffset(Offset = "0x20")]
	public static readonly string DefaultSpecial;

	[Token(Token = "0x600331F")]
	[Address(RVA = "0x3ED65F0", Offset = "0x3ED65F0", VA = "0x3ED65F0")]
	public static List<string> GetSpecialNames(string loadout, bool includeShifters)
	{
		return null;
	}

	[Token(Token = "0x6003320")]
	[Address(RVA = "0x3ED6D90", Offset = "0x3ED6D90", VA = "0x3ED6D90")]
	private static void AddSpecialName(List<string> specials, string special)
	{
	}

	[Token(Token = "0x6003321")]
	[Address(RVA = "0x3ED6E30", Offset = "0x3ED6E30", VA = "0x3ED6E30")]
	public static BaseUseable GetSpecialUseable(BaseCharacter owner, string special)
	{
		return null;
	}

	[Token(Token = "0x6003322")]
	[Address(RVA = "0x3ED7AD0", Offset = "0x3ED7AD0", VA = "0x3ED7AD0")]
	public static string GetSpecialIcon(string special)
	{
		return null;
	}

	[Token(Token = "0x6003323")]
	[Address(RVA = "0x3ED7B50", Offset = "0x3ED7B50", VA = "0x3ED7B50")]
	public HumanSpecials()
	{
	}
}
