using System.Collections.Generic;
using System.Text.RegularExpressions;
using Il2CppDummyDll;

namespace Anticheat;

[Token(Token = "0x200077B")]
internal static class ChatFilter
{
	[Token(Token = "0x4002415")]
	[FieldOffset(Offset = "0x0")]
	private static List<Regex> _bannedRegex;

	[Token(Token = "0x4002416")]
	[FieldOffset(Offset = "0x8")]
	private static List<char> _bannedChar;

	[Token(Token = "0x6004803")]
	[Address(RVA = "0x40B4CD0", Offset = "0x40B4CD0", VA = "0x40B4CD0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6004804")]
	[Address(RVA = "0x40B5190", Offset = "0x40B5190", VA = "0x40B5190")]
	public static string FilterBadWords(this string text)
	{
		return null;
	}

	[Token(Token = "0x6004805")]
	[Address(RVA = "0x40B55E0", Offset = "0x40B55E0", VA = "0x40B55E0")]
	public static string FilterSizeTag(this string text)
	{
		return null;
	}
}
