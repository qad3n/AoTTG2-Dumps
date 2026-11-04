// ==================== AoTTG2 cross-reference ====================
// Type: Anticheat.ChatFilter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Anticheat/ChatFilter.c
// Prior real C# source (older reference): Assets/Scripts/Anticheat/ChatFilter.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Text.RegularExpressions;
using Il2CppDummyDll;

namespace Anticheat;

[Token(Token = "0x200096A")]
internal static class ChatFilter
{
	[Token(Token = "0x4002E85")]
	[FieldOffset(Offset = "0x0")]
	private static List<Regex> _bannedRegex;

	[Token(Token = "0x4002E86")]
	[FieldOffset(Offset = "0x8")]
	private static List<char> _bannedChar;

	[Token(Token = "0x600576F")]
	[Address(RVA = "0x236AD70", Offset = "0x2369370", VA = "0x18236AD70")]
	public static void Init()
	{
	}

	[Token(Token = "0x6005770")]
	[Address(RVA = "0x236A400", Offset = "0x2368A00", VA = "0x18236A400")]
	public static string FilterBadWords(this string text)
	{
		return null;
	}

	[Token(Token = "0x6005771")]
	[Address(RVA = "0x236A790", Offset = "0x2368D90", VA = "0x18236A790")]
	public static string FilterSizeTag(this string text)
	{
		return null;
	}
}
