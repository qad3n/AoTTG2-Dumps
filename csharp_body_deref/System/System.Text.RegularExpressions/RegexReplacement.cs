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

[Token(Token = "0x20000FA")]
internal sealed class RegexReplacement
{
	[Token(Token = "0x4000421")]
	private const int Specials = 4;

	[Token(Token = "0x4000422")]
	public const int LeftPortion = -1;

	[Token(Token = "0x4000423")]
	public const int RightPortion = -2;

	[Token(Token = "0x4000424")]
	public const int LastGroup = -3;

	[Token(Token = "0x4000425")]
	public const int WholeString = -4;

	[Token(Token = "0x4000426")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<string> _strings;

	[Token(Token = "0x4000427")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<int> _rules;

	[Token(Token = "0x170000ED")]
	public string Pattern
	{
		[Token(Token = "0x6000614")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000612")]
	[Address(RVA = "0x2870B60", Offset = "0x286F160", VA = "0x182870B60")]
	public RegexReplacement(string rep, RegexNode concat, Hashtable _caps)
	{
	}

	[Token(Token = "0x6000613")]
	[Address(RVA = "0x286FEB0", Offset = "0x286E4B0", VA = "0x18286FEB0")]
	public static RegexReplacement GetOrCreate(WeakReference<RegexReplacement> replRef, string replacement, Hashtable caps, int capsize, Hashtable capnames, RegexOptions roptions)
	{
		return null;
	}

	[Token(Token = "0x6000615")]
	[Address(RVA = "0x2870990", Offset = "0x286EF90", VA = "0x182870990")]
	private void ReplacementImpl(StringBuilder sb, Match match)
	{
	}

	[Token(Token = "0x6000616")]
	[Address(RVA = "0x28707D0", Offset = "0x286EDD0", VA = "0x1828707D0")]
	private void ReplacementImplRTL(List<string> al, Match match)
	{
	}

	[Token(Token = "0x6000617")]
	[Address(RVA = "0x28700F0", Offset = "0x286E6F0", VA = "0x1828700F0")]
	public string Replace(Regex regex, string input, int count, int startat)
	{
		return null;
	}
}
