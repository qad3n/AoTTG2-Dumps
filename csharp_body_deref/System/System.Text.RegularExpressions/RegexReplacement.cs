// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.RegexReplacement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x491FD30", Offset = "0x491FD30", VA = "0x491FD30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x491A4C0", Offset = "0x491A4C0", VA = "0x491A4C0")]
	public RegexReplacement(string rep, RegexNode concat, Hashtable _caps)
	{
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x491FC30", Offset = "0x491FC30", VA = "0x491FC30")]
	public static RegexReplacement GetOrCreate(WeakReference<RegexReplacement> replRef, string replacement, Hashtable caps, int capsize, Hashtable capnames, RegexOptions roptions)
	{
		return null;
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x491FD40", Offset = "0x491FD40", VA = "0x491FD40")]
	private void ReplacementImpl(StringBuilder sb, Match match)
	{
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x491FFA0", Offset = "0x491FFA0", VA = "0x491FFA0")]
	private void ReplacementImplRTL(List<string> al, Match match)
	{
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x4920230", Offset = "0x4920230", VA = "0x4920230")]
	public string Replace(Regex regex, string input, int count, int startat)
	{
		return null;
	}
}
