// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.StringPluginExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x237DAB0", Offset = "0x237DAB0", VA = "0x237DAB0")]
	static StringPluginExtensions()
	{
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x237DE30", Offset = "0x237DE30", VA = "0x237DE30")]
	internal static void ScrambleChars(this char[] chars)
	{
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x237D860", Offset = "0x237D860", VA = "0x237D860")]
	internal static StringBuilder AppendScrambledChars(this StringBuilder buffer, int length, char[] chars)
	{
		return null;
	}
}
