using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x20000B1")]
internal sealed class RegexCode
{
	[Token(Token = "0x40002DB")]
	public const int Onerep = 0;

	[Token(Token = "0x40002DC")]
	public const int Notonerep = 1;

	[Token(Token = "0x40002DD")]
	public const int Setrep = 2;

	[Token(Token = "0x40002DE")]
	public const int Oneloop = 3;

	[Token(Token = "0x40002DF")]
	public const int Notoneloop = 4;

	[Token(Token = "0x40002E0")]
	public const int Setloop = 5;

	[Token(Token = "0x40002E1")]
	public const int Onelazy = 6;

	[Token(Token = "0x40002E2")]
	public const int Notonelazy = 7;

	[Token(Token = "0x40002E3")]
	public const int Setlazy = 8;

	[Token(Token = "0x40002E4")]
	public const int One = 9;

	[Token(Token = "0x40002E5")]
	public const int Notone = 10;

	[Token(Token = "0x40002E6")]
	public const int Set = 11;

	[Token(Token = "0x40002E7")]
	public const int Multi = 12;

	[Token(Token = "0x40002E8")]
	public const int Ref = 13;

	[Token(Token = "0x40002E9")]
	public const int Bol = 14;

	[Token(Token = "0x40002EA")]
	public const int Eol = 15;

	[Token(Token = "0x40002EB")]
	public const int Boundary = 16;

	[Token(Token = "0x40002EC")]
	public const int Nonboundary = 17;

	[Token(Token = "0x40002ED")]
	public const int Beginning = 18;

	[Token(Token = "0x40002EE")]
	public const int Start = 19;

	[Token(Token = "0x40002EF")]
	public const int EndZ = 20;

	[Token(Token = "0x40002F0")]
	public const int End = 21;

	[Token(Token = "0x40002F1")]
	public const int Nothing = 22;

	[Token(Token = "0x40002F2")]
	public const int Lazybranch = 23;

	[Token(Token = "0x40002F3")]
	public const int Branchmark = 24;

	[Token(Token = "0x40002F4")]
	public const int Lazybranchmark = 25;

	[Token(Token = "0x40002F5")]
	public const int Nullcount = 26;

	[Token(Token = "0x40002F6")]
	public const int Setcount = 27;

	[Token(Token = "0x40002F7")]
	public const int Branchcount = 28;

	[Token(Token = "0x40002F8")]
	public const int Lazybranchcount = 29;

	[Token(Token = "0x40002F9")]
	public const int Nullmark = 30;

	[Token(Token = "0x40002FA")]
	public const int Setmark = 31;

	[Token(Token = "0x40002FB")]
	public const int Capturemark = 32;

	[Token(Token = "0x40002FC")]
	public const int Getmark = 33;

	[Token(Token = "0x40002FD")]
	public const int Setjump = 34;

	[Token(Token = "0x40002FE")]
	public const int Backjump = 35;

	[Token(Token = "0x40002FF")]
	public const int Forejump = 36;

	[Token(Token = "0x4000300")]
	public const int Testref = 37;

	[Token(Token = "0x4000301")]
	public const int Goto = 38;

	[Token(Token = "0x4000302")]
	public const int Prune = 39;

	[Token(Token = "0x4000303")]
	public const int Stop = 40;

	[Token(Token = "0x4000304")]
	public const int ECMABoundary = 41;

	[Token(Token = "0x4000305")]
	public const int NonECMABoundary = 42;

	[Token(Token = "0x4000306")]
	public const int Mask = 63;

	[Token(Token = "0x4000307")]
	public const int Rtl = 64;

	[Token(Token = "0x4000308")]
	public const int Back = 128;

	[Token(Token = "0x4000309")]
	public const int Back2 = 256;

	[Token(Token = "0x400030A")]
	public const int Ci = 512;

	[Token(Token = "0x400030B")]
	[FieldOffset(Offset = "0x10")]
	public readonly int[] Codes;

	[Token(Token = "0x400030C")]
	[FieldOffset(Offset = "0x18")]
	public readonly string[] Strings;

	[Token(Token = "0x400030D")]
	[FieldOffset(Offset = "0x20")]
	public readonly int TrackCount;

	[Token(Token = "0x400030E")]
	[FieldOffset(Offset = "0x28")]
	public readonly Hashtable Caps;

	[Token(Token = "0x400030F")]
	[FieldOffset(Offset = "0x30")]
	public readonly int CapSize;

	[Token(Token = "0x4000310")]
	[FieldOffset(Offset = "0x38")]
	public readonly RegexPrefix? FCPrefix;

	[Token(Token = "0x4000311")]
	[FieldOffset(Offset = "0x50")]
	public readonly RegexBoyerMoore BMPrefix;

	[Token(Token = "0x4000312")]
	[FieldOffset(Offset = "0x58")]
	public readonly int Anchors;

	[Token(Token = "0x4000313")]
	[FieldOffset(Offset = "0x5C")]
	public readonly bool RightToLeft;

	[Token(Token = "0x6000387")]
	[Address(RVA = "0x45ECFE0", Offset = "0x45ECFE0", VA = "0x45ECFE0")]
	public RegexCode(int[] codes, List<string> stringlist, int trackcount, Hashtable caps, int capsize, RegexBoyerMoore bmPrefix, RegexPrefix? fcPrefix, int anchors, bool rightToLeft)
	{
	}

	[Token(Token = "0x6000388")]
	[Address(RVA = "0x45ED0E0", Offset = "0x45ED0E0", VA = "0x45ED0E0")]
	public static bool OpcodeBacktracks(int Op)
	{
		return default(bool);
	}
}
