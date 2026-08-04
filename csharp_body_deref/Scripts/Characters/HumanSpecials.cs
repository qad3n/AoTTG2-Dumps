// ==================== AoTTG2 cross-reference ====================
// Type: Characters.HumanSpecials
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/HumanSpecials.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/HumanSpecials.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x200050B")]
internal class HumanSpecials
{
	[Token(Token = "0x4001798")]
	[FieldOffset(Offset = "0x0")]
	public static string[] AnySpecials;

	[Token(Token = "0x4001799")]
	[FieldOffset(Offset = "0x8")]
	public static string[] AHSSSpecials;

	[Token(Token = "0x400179A")]
	[FieldOffset(Offset = "0x10")]
	public static string[] BladeSpecials;

	[Token(Token = "0x400179B")]
	[FieldOffset(Offset = "0x18")]
	public static string[] ShifterSpecials;

	[Token(Token = "0x400179C")]
	[FieldOffset(Offset = "0x20")]
	public static readonly string DefaultSpecial;

	[Token(Token = "0x600352D")]
	[Address(RVA = "0x41E2EB0", Offset = "0x41E2EB0", VA = "0x41E2EB0")]
	public static List<string> GetSpecialNames(string loadout, bool includeShifters)
	{
		return null;
	}

	[Token(Token = "0x600352E")]
	[Address(RVA = "0x41E3650", Offset = "0x41E3650", VA = "0x41E3650")]
	private static void AddSpecialName(List<string> specials, string special)
	{
	}

	[Token(Token = "0x600352F")]
	[Address(RVA = "0x41E36F0", Offset = "0x41E36F0", VA = "0x41E36F0")]
	public static BaseUseable GetSpecialUseable(BaseCharacter owner, string special)
	{
		return null;
	}

	[Token(Token = "0x6003530")]
	[Address(RVA = "0x41E4390", Offset = "0x41E4390", VA = "0x41E4390")]
	public static string GetSpecialIcon(string special)
	{
		return null;
	}

	[Token(Token = "0x6003531")]
	[Address(RVA = "0x41E4410", Offset = "0x41E4410", VA = "0x41E4410")]
	public HumanSpecials()
	{
	}
}
