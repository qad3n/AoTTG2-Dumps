// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.RegexInterpreter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x20000B5")]
internal sealed class RegexInterpreter : RegexRunner
{
	[Token(Token = "0x400031F")]
	[FieldOffset(Offset = "0x80")]
	private readonly RegexCode _code;

	[Token(Token = "0x4000320")]
	[FieldOffset(Offset = "0x88")]
	private readonly CultureInfo _culture;

	[Token(Token = "0x4000321")]
	[FieldOffset(Offset = "0x90")]
	private int _operator;

	[Token(Token = "0x4000322")]
	[FieldOffset(Offset = "0x94")]
	private int _codepos;

	[Token(Token = "0x4000323")]
	[FieldOffset(Offset = "0x98")]
	private bool _rightToLeft;

	[Token(Token = "0x4000324")]
	[FieldOffset(Offset = "0x99")]
	private bool _caseInsensitive;

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x61F0E10", Offset = "0x61EFE10", VA = "0x61F0E10")]
	public RegexInterpreter(RegexCode code, CultureInfo culture)
	{
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x61F0E70", Offset = "0x61EFE70", VA = "0x61F0E70", Slot = "6")]
	protected override void InitTrackCount()
	{
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x61F0E90", Offset = "0x61EFE90", VA = "0x61F0E90")]
	private void Advance(int i)
	{
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x61F0F30", Offset = "0x61EFF30", VA = "0x61F0F30")]
	private void Goto(int newpos)
	{
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x61F1000", Offset = "0x61F0000", VA = "0x61F1000")]
	private void Textto(int newpos)
	{
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x61F1010", Offset = "0x61F0010", VA = "0x61F1010")]
	private void Trackto(int newpos)
	{
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x61F1030", Offset = "0x61F0030", VA = "0x61F1030")]
	private int Textstart()
	{
		return default(int);
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x61F1040", Offset = "0x61F0040", VA = "0x61F1040")]
	private int Textpos()
	{
		return default(int);
	}

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x61F1050", Offset = "0x61F0050", VA = "0x61F1050")]
	private int Trackpos()
	{
		return default(int);
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x61F1070", Offset = "0x61F0070", VA = "0x61F1070")]
	private void TrackPush()
	{
	}

	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x61F10A0", Offset = "0x61F00A0", VA = "0x61F10A0")]
	private void TrackPush(int I1)
	{
	}

	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x61F10F0", Offset = "0x61F00F0", VA = "0x61F10F0")]
	private void TrackPush(int I1, int I2)
	{
	}

	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x61F1150", Offset = "0x61F0150", VA = "0x61F1150")]
	private void TrackPush(int I1, int I2, int I3)
	{
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x61F11C0", Offset = "0x61F01C0", VA = "0x61F11C0")]
	private void TrackPush2(int I1)
	{
	}

	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x61F1210", Offset = "0x61F0210", VA = "0x61F1210")]
	private void TrackPush2(int I1, int I2)
	{
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x61F1270", Offset = "0x61F0270", VA = "0x61F1270")]
	private void Backtrack()
	{
	}

	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x61F0F00", Offset = "0x61EFF00", VA = "0x61F0F00")]
	private void SetOperator(int op)
	{
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x61F13B0", Offset = "0x61F03B0", VA = "0x61F13B0")]
	private void TrackPop()
	{
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x61F13C0", Offset = "0x61F03C0", VA = "0x61F13C0")]
	private void TrackPop(int framesize)
	{
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x61F13D0", Offset = "0x61F03D0", VA = "0x61F13D0")]
	private int TrackPeek()
	{
		return default(int);
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x61F1400", Offset = "0x61F0400", VA = "0x61F1400")]
	private int TrackPeek(int i)
	{
		return default(int);
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x61F1430", Offset = "0x61F0430", VA = "0x61F1430")]
	private void StackPush(int I1)
	{
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x61F1460", Offset = "0x61F0460", VA = "0x61F1460")]
	private void StackPush(int I1, int I2)
	{
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x61F14B0", Offset = "0x61F04B0", VA = "0x61F14B0")]
	private void StackPop()
	{
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x61F14C0", Offset = "0x61F04C0", VA = "0x61F14C0")]
	private void StackPop(int framesize)
	{
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x61F14D0", Offset = "0x61F04D0", VA = "0x61F14D0")]
	private int StackPeek()
	{
		return default(int);
	}

	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x61F1500", Offset = "0x61F0500", VA = "0x61F1500")]
	private int StackPeek(int i)
	{
		return default(int);
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x61F1530", Offset = "0x61F0530", VA = "0x61F1530")]
	private int Operator()
	{
		return default(int);
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x61F1540", Offset = "0x61F0540", VA = "0x61F1540")]
	private int Operand(int i)
	{
		return default(int);
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x61F1580", Offset = "0x61F0580", VA = "0x61F1580")]
	private int Leftchars()
	{
		return default(int);
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x61F1590", Offset = "0x61F0590", VA = "0x61F1590")]
	private int Rightchars()
	{
		return default(int);
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x61F15A0", Offset = "0x61F05A0", VA = "0x61F15A0")]
	private int Bump()
	{
		return default(int);
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x61F15B0", Offset = "0x61F05B0", VA = "0x61F15B0")]
	private int Forwardchars()
	{
		return default(int);
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x61F15D0", Offset = "0x61F05D0", VA = "0x61F15D0")]
	private char Forwardcharnext()
	{
		return default(char);
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x61F1660", Offset = "0x61F0660", VA = "0x61F1660")]
	private bool Stringmatch(string str)
	{
		return default(bool);
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x61F17E0", Offset = "0x61F07E0", VA = "0x61F17E0")]
	private bool Refmatch(int index, int len)
	{
		return default(bool);
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x61F19B0", Offset = "0x61F09B0", VA = "0x61F19B0")]
	private void Backwardnext()
	{
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x61F19D0", Offset = "0x61F09D0", VA = "0x61F19D0")]
	private char CharAt(int j)
	{
		return default(char);
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x61F19F0", Offset = "0x61F09F0", VA = "0x61F19F0", Slot = "5")]
	protected override bool FindFirstChar()
	{
		return default(bool);
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x61F1D40", Offset = "0x61F0D40", VA = "0x61F1D40", Slot = "4")]
	protected override void Go()
	{
	}
}
