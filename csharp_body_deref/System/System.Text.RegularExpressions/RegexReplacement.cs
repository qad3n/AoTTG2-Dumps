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

[Token(Token = "0x20000BB")]
internal sealed class RegexReplacement
{
	[Token(Token = "0x4000352")]
	private const int Specials = 4;

	[Token(Token = "0x4000353")]
	public const int LeftPortion = -1;

	[Token(Token = "0x4000354")]
	public const int RightPortion = -2;

	[Token(Token = "0x4000355")]
	public const int LastGroup = -3;

	[Token(Token = "0x4000356")]
	public const int WholeString = -4;

	[Token(Token = "0x4000357")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<string> _strings;

	[Token(Token = "0x4000358")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<int> _rules;

	[Token(Token = "0x170000BE")]
	public string Pattern
	{
		[Token(Token = "0x600045E")]
		[Address(RVA = "0x61FCC50", Offset = "0x61FBC50", VA = "0x61FCC50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x61F7430", Offset = "0x61F6430", VA = "0x61F7430")]
	public RegexReplacement(string rep, RegexNode concat, Hashtable _caps)
	{
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x61FCB50", Offset = "0x61FBB50", VA = "0x61FCB50")]
	public static RegexReplacement GetOrCreate(WeakReference<RegexReplacement> replRef, string replacement, Hashtable caps, int capsize, Hashtable capnames, RegexOptions roptions)
	{
		return null;
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x61FCC60", Offset = "0x61FBC60", VA = "0x61FCC60")]
	private void ReplacementImpl(StringBuilder sb, Match match)
	{
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x61FCDE0", Offset = "0x61FBDE0", VA = "0x61FCDE0")]
	private void ReplacementImplRTL(List<string> al, Match match)
	{
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x61FD050", Offset = "0x61FC050", VA = "0x61FD050")]
	public string Replace(Regex regex, string input, int count, int startat)
	{
		return null;
	}
}
