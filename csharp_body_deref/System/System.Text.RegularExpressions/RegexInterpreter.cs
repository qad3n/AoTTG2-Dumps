using System.Globalization;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x20000B4")]
internal sealed class RegexInterpreter : RegexRunner
{
	[Token(Token = "0x400031C")]
	[FieldOffset(Offset = "0x80")]
	private readonly RegexCode _code;

	[Token(Token = "0x400031D")]
	[FieldOffset(Offset = "0x88")]
	private readonly CultureInfo _culture;

	[Token(Token = "0x400031E")]
	[FieldOffset(Offset = "0x90")]
	private int _operator;

	[Token(Token = "0x400031F")]
	[FieldOffset(Offset = "0x94")]
	private int _codepos;

	[Token(Token = "0x4000320")]
	[FieldOffset(Offset = "0x98")]
	private bool _rightToLeft;

	[Token(Token = "0x4000321")]
	[FieldOffset(Offset = "0x99")]
	private bool _caseInsensitive;

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x45EE810", Offset = "0x45EE810", VA = "0x45EE810")]
	public RegexInterpreter(RegexCode code, CultureInfo culture)
	{
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x45EE870", Offset = "0x45EE870", VA = "0x45EE870", Slot = "6")]
	protected override void InitTrackCount()
	{
	}

	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x45EE890", Offset = "0x45EE890", VA = "0x45EE890")]
	private void Advance(int i)
	{
	}

	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x45EE930", Offset = "0x45EE930", VA = "0x45EE930")]
	private void Goto(int newpos)
	{
	}

	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x45EEA00", Offset = "0x45EEA00", VA = "0x45EEA00")]
	private void Textto(int newpos)
	{
	}

	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x45EEA10", Offset = "0x45EEA10", VA = "0x45EEA10")]
	private void Trackto(int newpos)
	{
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x45EEA30", Offset = "0x45EEA30", VA = "0x45EEA30")]
	private int Textstart()
	{
		return default(int);
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x45EEA40", Offset = "0x45EEA40", VA = "0x45EEA40")]
	private int Textpos()
	{
		return default(int);
	}

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x45EEA50", Offset = "0x45EEA50", VA = "0x45EEA50")]
	private int Trackpos()
	{
		return default(int);
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x45EEA70", Offset = "0x45EEA70", VA = "0x45EEA70")]
	private void TrackPush()
	{
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x45EEAB0", Offset = "0x45EEAB0", VA = "0x45EEAB0")]
	private void TrackPush(int I1)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x45EEB00", Offset = "0x45EEB00", VA = "0x45EEB00")]
	private void TrackPush(int I1, int I2)
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x45EEB60", Offset = "0x45EEB60", VA = "0x45EEB60")]
	private void TrackPush(int I1, int I2, int I3)
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x45EEBE0", Offset = "0x45EEBE0", VA = "0x45EEBE0")]
	private void TrackPush2(int I1)
	{
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x45EEC30", Offset = "0x45EEC30", VA = "0x45EEC30")]
	private void TrackPush2(int I1, int I2)
	{
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x45EECA0", Offset = "0x45EECA0", VA = "0x45EECA0")]
	private void Backtrack()
	{
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x45EE900", Offset = "0x45EE900", VA = "0x45EE900")]
	private void SetOperator(int op)
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x45EEDF0", Offset = "0x45EEDF0", VA = "0x45EEDF0")]
	private void TrackPop()
	{
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x45EEE00", Offset = "0x45EEE00", VA = "0x45EEE00")]
	private void TrackPop(int framesize)
	{
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x45EEE10", Offset = "0x45EEE10", VA = "0x45EEE10")]
	private int TrackPeek()
	{
		return default(int);
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x45EEE40", Offset = "0x45EEE40", VA = "0x45EEE40")]
	private int TrackPeek(int i)
	{
		return default(int);
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x45EEE70", Offset = "0x45EEE70", VA = "0x45EEE70")]
	private void StackPush(int I1)
	{
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x45EEEA0", Offset = "0x45EEEA0", VA = "0x45EEEA0")]
	private void StackPush(int I1, int I2)
	{
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x45EEEF0", Offset = "0x45EEEF0", VA = "0x45EEEF0")]
	private void StackPop()
	{
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x45EEF00", Offset = "0x45EEF00", VA = "0x45EEF00")]
	private void StackPop(int framesize)
	{
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x45EEF10", Offset = "0x45EEF10", VA = "0x45EEF10")]
	private int StackPeek()
	{
		return default(int);
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x45EEF40", Offset = "0x45EEF40", VA = "0x45EEF40")]
	private int StackPeek(int i)
	{
		return default(int);
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x45EEF70", Offset = "0x45EEF70", VA = "0x45EEF70")]
	private int Operator()
	{
		return default(int);
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x45EEF80", Offset = "0x45EEF80", VA = "0x45EEF80")]
	private int Operand(int i)
	{
		return default(int);
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x45EEFC0", Offset = "0x45EEFC0", VA = "0x45EEFC0")]
	private int Leftchars()
	{
		return default(int);
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x45EEFD0", Offset = "0x45EEFD0", VA = "0x45EEFD0")]
	private int Rightchars()
	{
		return default(int);
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x45EEFE0", Offset = "0x45EEFE0", VA = "0x45EEFE0")]
	private int Bump()
	{
		return default(int);
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x45EF000", Offset = "0x45EF000", VA = "0x45EF000")]
	private int Forwardchars()
	{
		return default(int);
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x45EF030", Offset = "0x45EF030", VA = "0x45EF030")]
	private char Forwardcharnext()
	{
		return default(char);
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x45EF0C0", Offset = "0x45EF0C0", VA = "0x45EF0C0")]
	private bool Stringmatch(string str)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x45EF240", Offset = "0x45EF240", VA = "0x45EF240")]
	private bool Refmatch(int index, int len)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x45EF420", Offset = "0x45EF420", VA = "0x45EF420")]
	private void Backwardnext()
	{
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x45EF440", Offset = "0x45EF440", VA = "0x45EF440")]
	private char CharAt(int j)
	{
		return default(char);
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x45EF460", Offset = "0x45EF460", VA = "0x45EF460", Slot = "5")]
	protected override bool FindFirstChar()
	{
		return default(bool);
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x45EF7F0", Offset = "0x45EF7F0", VA = "0x45EF7F0", Slot = "4")]
	protected override void Go()
	{
	}
}
