using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x20000BA")]
internal sealed class RegexReplacement
{
	[Token(Token = "0x400034F")]
	private const int Specials = 4;

	[Token(Token = "0x4000350")]
	public const int LeftPortion = -1;

	[Token(Token = "0x4000351")]
	public const int RightPortion = -2;

	[Token(Token = "0x4000352")]
	public const int LastGroup = -3;

	[Token(Token = "0x4000353")]
	public const int WholeString = -4;

	[Token(Token = "0x4000354")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<string> _strings;

	[Token(Token = "0x4000355")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<int> _rules;

	[Token(Token = "0x170000B4")]
	public string Pattern
	{
		[Token(Token = "0x6000435")]
		[Address(RVA = "0x45FAC30", Offset = "0x45FAC30", VA = "0x45FAC30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x45F53C0", Offset = "0x45F53C0", VA = "0x45F53C0")]
	public RegexReplacement(string rep, RegexNode concat, Hashtable _caps)
	{
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x45FAB30", Offset = "0x45FAB30", VA = "0x45FAB30")]
	public static RegexReplacement GetOrCreate(WeakReference<RegexReplacement> replRef, string replacement, Hashtable caps, int capsize, Hashtable capnames, RegexOptions roptions)
	{
		return null;
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x45FAC40", Offset = "0x45FAC40", VA = "0x45FAC40")]
	private void ReplacementImpl(StringBuilder sb, Match match)
	{
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x45FAEA0", Offset = "0x45FAEA0", VA = "0x45FAEA0")]
	private void ReplacementImplRTL(List<string> al, Match match)
	{
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x45FB130", Offset = "0x45FB130", VA = "0x45FB130")]
	public string Replace(Regex regex, string input, int count, int startat)
	{
		return null;
	}
}
