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

[Token(Token = "0x20006C4")]
internal class HumanSpecials
{
	[Token(Token = "0x4001FD2")]
	[FieldOffset(Offset = "0x0")]
	public static string[] AnySpecials;

	[Token(Token = "0x4001FD3")]
	[FieldOffset(Offset = "0x8")]
	public static string[] AHSSSpecials;

	[Token(Token = "0x4001FD4")]
	[FieldOffset(Offset = "0x10")]
	public static string[] BladeSpecials;

	[Token(Token = "0x4001FD5")]
	[FieldOffset(Offset = "0x18")]
	public static string[] ShifterSpecials;

	[Token(Token = "0x4001FD6")]
	[FieldOffset(Offset = "0x20")]
	public static readonly string DefaultSpecial;

	[Token(Token = "0x60041F2")]
	[Address(RVA = "0x5AF7A20", Offset = "0x5AF6A20", VA = "0x5AF7A20")]
	public static List<string> GetSpecialNames(string loadout, bool includeShifters)
	{
		return null;
	}

	[Token(Token = "0x60041F3")]
	[Address(RVA = "0x5AF8280", Offset = "0x5AF7280", VA = "0x5AF8280")]
	private static void AddSpecialName(List<string> specials, string special)
	{
	}

	[Token(Token = "0x60041F4")]
	[Address(RVA = "0x5AF8320", Offset = "0x5AF7320", VA = "0x5AF8320")]
	public static BaseUseable GetSpecialUseable(BaseCharacter owner, string special)
	{
		return null;
	}

	[Token(Token = "0x60041F5")]
	[Address(RVA = "0x5AF8B70", Offset = "0x5AF7B70", VA = "0x5AF8B70")]
	public static string GetSpecialIcon(string special)
	{
		return null;
	}

	[Token(Token = "0x60041F6")]
	[Address(RVA = "0x5AF8BF0", Offset = "0x5AF7BF0", VA = "0x5AF8BF0")]
	public HumanSpecials()
	{
	}
}
