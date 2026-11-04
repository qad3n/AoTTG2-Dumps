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

[Token(Token = "0x2000665")]
internal class HumanSpecials
{
	[Token(Token = "0x4001E24")]
	[FieldOffset(Offset = "0x0")]
	public static string[] AnySpecials;

	[Token(Token = "0x4001E25")]
	[FieldOffset(Offset = "0x8")]
	public static string[] AHSSSpecials;

	[Token(Token = "0x4001E26")]
	[FieldOffset(Offset = "0x10")]
	public static string[] BladeSpecials;

	[Token(Token = "0x4001E27")]
	[FieldOffset(Offset = "0x18")]
	public static string[] ShifterSpecials;

	[Token(Token = "0x4001E28")]
	[FieldOffset(Offset = "0x20")]
	public static readonly string DefaultSpecial;

	[Token(Token = "0x6003F5A")]
	[Address(RVA = "0x215DDF0", Offset = "0x215C3F0", VA = "0x18215DDF0")]
	public static List<string> GetSpecialNames(string loadout, bool includeShifters)
	{
		return null;
	}

	[Token(Token = "0x6003F5B")]
	[Address(RVA = "0x215DCC0", Offset = "0x215C2C0", VA = "0x18215DCC0")]
	private static void AddSpecialName(List<string> specials, string special)
	{
	}

	[Token(Token = "0x6003F5C")]
	[Address(RVA = "0x215E560", Offset = "0x215CB60", VA = "0x18215E560")]
	public static BaseUseable GetSpecialUseable(BaseCharacter owner, string special)
	{
		return null;
	}

	[Token(Token = "0x6003F5D")]
	[Address(RVA = "0x215DD70", Offset = "0x215C370", VA = "0x18215DD70")]
	public static string GetSpecialIcon(string special)
	{
		return null;
	}

	[Token(Token = "0x6003F5E")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public HumanSpecials()
	{
	}
}
