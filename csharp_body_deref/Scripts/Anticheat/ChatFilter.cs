// ==================== AoTTG2 cross-reference ====================
// Type: Anticheat.ChatFilter
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Anticheat/ChatFilter.c
// Prior real C# source (older reference): Assets/Scripts/Anticheat/ChatFilter.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Text.RegularExpressions;
using Il2CppDummyDll;

namespace Anticheat;

[Token(Token = "0x20009D1")]
internal static class ChatFilter
{
	[Token(Token = "0x4003133")]
	[FieldOffset(Offset = "0x0")]
	private static List<Regex> _bannedRegex;

	[Token(Token = "0x4003134")]
	[FieldOffset(Offset = "0x8")]
	private static List<char> _bannedChar;

	[Token(Token = "0x4003135")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Regex SizeTagRegex;

	[Token(Token = "0x4003136")]
	private const string MaxSizeTag = "<size=20>";

	[Token(Token = "0x6005AC7")]
	[Address(RVA = "0x5D2E300", Offset = "0x5D2D300", VA = "0x5D2E300")]
	public static void Init()
	{
	}

	[Token(Token = "0x6005AC8")]
	[Address(RVA = "0x5D2E7B0", Offset = "0x5D2D7B0", VA = "0x5D2E7B0")]
	public static string FilterBadWords(this string text)
	{
		return null;
	}

	[Token(Token = "0x6005AC9")]
	[Address(RVA = "0x5D2EB90", Offset = "0x5D2DB90", VA = "0x5D2EB90")]
	public static string FilterSizeTag(this string text)
	{
		return null;
	}
}
