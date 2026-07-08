using System.Text;
using Il2CppDummyDll;

namespace DG.Tweening.Plugins;

[Token(Token = "0x2000084")]
internal static class StringPluginExtensions
{
	[Token(Token = "0x4000163")]
	[FieldOffset(Offset = "0x0")]
	public static readonly char[] ScrambledCharsAll;

	[Token(Token = "0x4000164")]
	[FieldOffset(Offset = "0x8")]
	public static readonly char[] ScrambledCharsUppercase;

	[Token(Token = "0x4000165")]
	[FieldOffset(Offset = "0x10")]
	public static readonly char[] ScrambledCharsLowercase;

	[Token(Token = "0x4000166")]
	[FieldOffset(Offset = "0x18")]
	public static readonly char[] ScrambledCharsNumerals;

	[Token(Token = "0x4000167")]
	[FieldOffset(Offset = "0x20")]
	private static int _lastRndSeed;

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x23171D0", Offset = "0x23171D0", VA = "0x23171D0")]
	static StringPluginExtensions()
	{
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x2317550", Offset = "0x2317550", VA = "0x2317550")]
	internal static void ScrambleChars(this char[] chars)
	{
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x2316F80", Offset = "0x2316F80", VA = "0x2316F80")]
	internal static StringBuilder AppendScrambledChars(this StringBuilder buffer, int length, char[] chars)
	{
		return null;
	}
}
