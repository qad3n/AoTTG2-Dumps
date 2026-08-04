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
	[Address(RVA = "0x4913910", Offset = "0x4913910", VA = "0x4913910")]
	public RegexInterpreter(RegexCode code, CultureInfo culture)
	{
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x4913970", Offset = "0x4913970", VA = "0x4913970", Slot = "6")]
	protected override void InitTrackCount()
	{
	}

	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x4913990", Offset = "0x4913990", VA = "0x4913990")]
	private void Advance(int i)
	{
	}

	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x4913A30", Offset = "0x4913A30", VA = "0x4913A30")]
	private void Goto(int newpos)
	{
	}

	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x4913B00", Offset = "0x4913B00", VA = "0x4913B00")]
	private void Textto(int newpos)
	{
	}

	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x4913B10", Offset = "0x4913B10", VA = "0x4913B10")]
	private void Trackto(int newpos)
	{
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x4913B30", Offset = "0x4913B30", VA = "0x4913B30")]
	private int Textstart()
	{
		return default(int);
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x4913B40", Offset = "0x4913B40", VA = "0x4913B40")]
	private int Textpos()
	{
		return default(int);
	}

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x4913B50", Offset = "0x4913B50", VA = "0x4913B50")]
	private int Trackpos()
	{
		return default(int);
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x4913B70", Offset = "0x4913B70", VA = "0x4913B70")]
	private void TrackPush()
	{
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x4913BB0", Offset = "0x4913BB0", VA = "0x4913BB0")]
	private void TrackPush(int I1)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x4913C00", Offset = "0x4913C00", VA = "0x4913C00")]
	private void TrackPush(int I1, int I2)
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x4913C60", Offset = "0x4913C60", VA = "0x4913C60")]
	private void TrackPush(int I1, int I2, int I3)
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x4913CE0", Offset = "0x4913CE0", VA = "0x4913CE0")]
	private void TrackPush2(int I1)
	{
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x4913D30", Offset = "0x4913D30", VA = "0x4913D30")]
	private void TrackPush2(int I1, int I2)
	{
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x4913DA0", Offset = "0x4913DA0", VA = "0x4913DA0")]
	private void Backtrack()
	{
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x4913A00", Offset = "0x4913A00", VA = "0x4913A00")]
	private void SetOperator(int op)
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x4913EF0", Offset = "0x4913EF0", VA = "0x4913EF0")]
	private void TrackPop()
	{
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x4913F00", Offset = "0x4913F00", VA = "0x4913F00")]
	private void TrackPop(int framesize)
	{
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x4913F10", Offset = "0x4913F10", VA = "0x4913F10")]
	private int TrackPeek()
	{
		return default(int);
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x4913F40", Offset = "0x4913F40", VA = "0x4913F40")]
	private int TrackPeek(int i)
	{
		return default(int);
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x4913F70", Offset = "0x4913F70", VA = "0x4913F70")]
	private void StackPush(int I1)
	{
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x4913FA0", Offset = "0x4913FA0", VA = "0x4913FA0")]
	private void StackPush(int I1, int I2)
	{
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x4913FF0", Offset = "0x4913FF0", VA = "0x4913FF0")]
	private void StackPop()
	{
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x4914000", Offset = "0x4914000", VA = "0x4914000")]
	private void StackPop(int framesize)
	{
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x4914010", Offset = "0x4914010", VA = "0x4914010")]
	private int StackPeek()
	{
		return default(int);
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x4914040", Offset = "0x4914040", VA = "0x4914040")]
	private int StackPeek(int i)
	{
		return default(int);
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x4914070", Offset = "0x4914070", VA = "0x4914070")]
	private int Operator()
	{
		return default(int);
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x4914080", Offset = "0x4914080", VA = "0x4914080")]
	private int Operand(int i)
	{
		return default(int);
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x49140C0", Offset = "0x49140C0", VA = "0x49140C0")]
	private int Leftchars()
	{
		return default(int);
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x49140D0", Offset = "0x49140D0", VA = "0x49140D0")]
	private int Rightchars()
	{
		return default(int);
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x49140E0", Offset = "0x49140E0", VA = "0x49140E0")]
	private int Bump()
	{
		return default(int);
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x4914100", Offset = "0x4914100", VA = "0x4914100")]
	private int Forwardchars()
	{
		return default(int);
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x4914130", Offset = "0x4914130", VA = "0x4914130")]
	private char Forwardcharnext()
	{
		return default(char);
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x49141C0", Offset = "0x49141C0", VA = "0x49141C0")]
	private bool Stringmatch(string str)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x4914340", Offset = "0x4914340", VA = "0x4914340")]
	private bool Refmatch(int index, int len)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x4914520", Offset = "0x4914520", VA = "0x4914520")]
	private void Backwardnext()
	{
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x4914540", Offset = "0x4914540", VA = "0x4914540")]
	private char CharAt(int j)
	{
		return default(char);
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x4914560", Offset = "0x4914560", VA = "0x4914560", Slot = "5")]
	protected override bool FindFirstChar()
	{
		return default(bool);
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x49148F0", Offset = "0x49148F0", VA = "0x49148F0", Slot = "4")]
	protected override void Go()
	{
	}
}
