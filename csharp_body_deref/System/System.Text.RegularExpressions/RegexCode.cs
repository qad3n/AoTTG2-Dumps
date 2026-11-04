// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.RegexCode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x20000F1")]
internal sealed class RegexCode
{
	[Token(Token = "0x40003AD")]
	public const int Onerep = 0;

	[Token(Token = "0x40003AE")]
	public const int Notonerep = 1;

	[Token(Token = "0x40003AF")]
	public const int Setrep = 2;

	[Token(Token = "0x40003B0")]
	public const int Oneloop = 3;

	[Token(Token = "0x40003B1")]
	public const int Notoneloop = 4;

	[Token(Token = "0x40003B2")]
	public const int Setloop = 5;

	[Token(Token = "0x40003B3")]
	public const int Onelazy = 6;

	[Token(Token = "0x40003B4")]
	public const int Notonelazy = 7;

	[Token(Token = "0x40003B5")]
	public const int Setlazy = 8;

	[Token(Token = "0x40003B6")]
	public const int One = 9;

	[Token(Token = "0x40003B7")]
	public const int Notone = 10;

	[Token(Token = "0x40003B8")]
	public const int Set = 11;

	[Token(Token = "0x40003B9")]
	public const int Multi = 12;

	[Token(Token = "0x40003BA")]
	public const int Ref = 13;

	[Token(Token = "0x40003BB")]
	public const int Bol = 14;

	[Token(Token = "0x40003BC")]
	public const int Eol = 15;

	[Token(Token = "0x40003BD")]
	public const int Boundary = 16;

	[Token(Token = "0x40003BE")]
	public const int Nonboundary = 17;

	[Token(Token = "0x40003BF")]
	public const int Beginning = 18;

	[Token(Token = "0x40003C0")]
	public const int Start = 19;

	[Token(Token = "0x40003C1")]
	public const int EndZ = 20;

	[Token(Token = "0x40003C2")]
	public const int End = 21;

	[Token(Token = "0x40003C3")]
	public const int Nothing = 22;

	[Token(Token = "0x40003C4")]
	public const int Lazybranch = 23;

	[Token(Token = "0x40003C5")]
	public const int Branchmark = 24;

	[Token(Token = "0x40003C6")]
	public const int Lazybranchmark = 25;

	[Token(Token = "0x40003C7")]
	public const int Nullcount = 26;

	[Token(Token = "0x40003C8")]
	public const int Setcount = 27;

	[Token(Token = "0x40003C9")]
	public const int Branchcount = 28;

	[Token(Token = "0x40003CA")]
	public const int Lazybranchcount = 29;

	[Token(Token = "0x40003CB")]
	public const int Nullmark = 30;

	[Token(Token = "0x40003CC")]
	public const int Setmark = 31;

	[Token(Token = "0x40003CD")]
	public const int Capturemark = 32;

	[Token(Token = "0x40003CE")]
	public const int Getmark = 33;

	[Token(Token = "0x40003CF")]
	public const int Setjump = 34;

	[Token(Token = "0x40003D0")]
	public const int Backjump = 35;

	[Token(Token = "0x40003D1")]
	public const int Forejump = 36;

	[Token(Token = "0x40003D2")]
	public const int Testref = 37;

	[Token(Token = "0x40003D3")]
	public const int Goto = 38;

	[Token(Token = "0x40003D4")]
	public const int Prune = 39;

	[Token(Token = "0x40003D5")]
	public const int Stop = 40;

	[Token(Token = "0x40003D6")]
	public const int ECMABoundary = 41;

	[Token(Token = "0x40003D7")]
	public const int NonECMABoundary = 42;

	[Token(Token = "0x40003D8")]
	public const int Mask = 63;

	[Token(Token = "0x40003D9")]
	public const int Rtl = 64;

	[Token(Token = "0x40003DA")]
	public const int Back = 128;

	[Token(Token = "0x40003DB")]
	public const int Back2 = 256;

	[Token(Token = "0x40003DC")]
	public const int Ci = 512;

	[Token(Token = "0x40003DD")]
	[FieldOffset(Offset = "0x10")]
	public readonly int[] Codes;

	[Token(Token = "0x40003DE")]
	[FieldOffset(Offset = "0x18")]
	public readonly string[] Strings;

	[Token(Token = "0x40003DF")]
	[FieldOffset(Offset = "0x20")]
	public readonly int TrackCount;

	[Token(Token = "0x40003E0")]
	[FieldOffset(Offset = "0x28")]
	public readonly Hashtable Caps;

	[Token(Token = "0x40003E1")]
	[FieldOffset(Offset = "0x30")]
	public readonly int CapSize;

	[Token(Token = "0x40003E2")]
	[FieldOffset(Offset = "0x38")]
	public readonly RegexPrefix? FCPrefix;

	[Token(Token = "0x40003E3")]
	[FieldOffset(Offset = "0x50")]
	public readonly RegexBoyerMoore BMPrefix;

	[Token(Token = "0x40003E4")]
	[FieldOffset(Offset = "0x58")]
	public readonly int Anchors;

	[Token(Token = "0x40003E5")]
	[FieldOffset(Offset = "0x5C")]
	public readonly bool RightToLeft;

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x2856990", Offset = "0x2854F90", VA = "0x182856990")]
	public RegexCode(int[] codes, List<string> stringlist, int trackcount, Hashtable caps, int capsize, RegexBoyerMoore bmPrefix, RegexPrefix? fcPrefix, int anchors, bool rightToLeft)
	{
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x2856930", Offset = "0x2854F30", VA = "0x182856930")]
	public static bool OpcodeBacktracks(int Op)
	{
		return default(bool);
	}
}
