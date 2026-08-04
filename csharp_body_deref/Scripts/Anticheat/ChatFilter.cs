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

[Token(Token = "0x20007DD")]
internal static class ChatFilter
{
	[Token(Token = "0x40025B3")]
	[FieldOffset(Offset = "0x0")]
	private static List<Regex> _bannedRegex;

	[Token(Token = "0x40025B4")]
	[FieldOffset(Offset = "0x8")]
	private static List<char> _bannedChar;

	[Token(Token = "0x6004AF6")]
	[Address(RVA = "0x43D2650", Offset = "0x43D2650", VA = "0x43D2650")]
	public static void Init()
	{
	}

	[Token(Token = "0x6004AF7")]
	[Address(RVA = "0x43D2B10", Offset = "0x43D2B10", VA = "0x43D2B10")]
	public static string FilterBadWords(this string text)
	{
		return null;
	}

	[Token(Token = "0x6004AF8")]
	[Address(RVA = "0x43D2F60", Offset = "0x43D2F60", VA = "0x43D2F60")]
	public static string FilterSizeTag(this string text)
	{
		return null;
	}
}
