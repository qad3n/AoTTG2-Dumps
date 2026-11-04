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

[Token(Token = "0x20000F4")]
internal sealed class RegexInterpreter : RegexRunner
{
	[Token(Token = "0x40003EE")]
	[FieldOffset(Offset = "0x80")]
	private readonly RegexCode _code;

	[Token(Token = "0x40003EF")]
	[FieldOffset(Offset = "0x88")]
	private readonly CultureInfo _culture;

	[Token(Token = "0x40003F0")]
	[FieldOffset(Offset = "0x90")]
	private int _operator;

	[Token(Token = "0x40003F1")]
	[FieldOffset(Offset = "0x94")]
	private int _codepos;

	[Token(Token = "0x40003F2")]
	[FieldOffset(Offset = "0x98")]
	private bool _rightToLeft;

	[Token(Token = "0x40003F3")]
	[FieldOffset(Offset = "0x99")]
	private bool _caseInsensitive;

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x285B910", Offset = "0x2859F10", VA = "0x18285B910")]
	public RegexInterpreter(RegexCode code, CultureInfo culture)
	{
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x285B060", Offset = "0x2859660", VA = "0x18285B060", Slot = "6")]
	protected override void InitTrackCount()
	{
	}

	[Token(Token = "0x600057F")]
	[Address(RVA = "0x2858620", Offset = "0x2856C20", VA = "0x182858620")]
	private void Advance(int i)
	{
	}

	[Token(Token = "0x6000580")]
	[Address(RVA = "0x285AFD0", Offset = "0x28595D0", VA = "0x18285AFD0")]
	private void Goto(int newpos)
	{
	}

	[Token(Token = "0x6000581")]
	[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
	private void Textto(int newpos)
	{
	}

	[Token(Token = "0x6000582")]
	[Address(RVA = "0x285B8F0", Offset = "0x2859EF0", VA = "0x18285B8F0")]
	private void Trackto(int newpos)
	{
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
	private int Textstart()
	{
		return default(int);
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
	private int Textpos()
	{
		return default(int);
	}

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x285B8D0", Offset = "0x2859ED0", VA = "0x18285B8D0")]
	private int Trackpos()
	{
		return default(int);
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x285B890", Offset = "0x2859E90", VA = "0x18285B890")]
	private void TrackPush()
	{
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x285B830", Offset = "0x2859E30", VA = "0x18285B830")]
	private void TrackPush(int I1)
	{
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x285B7A0", Offset = "0x2859DA0", VA = "0x18285B7A0")]
	private void TrackPush(int I1, int I2)
	{
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x285B6F0", Offset = "0x2859CF0", VA = "0x18285B6F0")]
	private void TrackPush(int I1, int I2, int I3)
	{
	}

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x285B680", Offset = "0x2859C80", VA = "0x18285B680")]
	private void TrackPush2(int I1)
	{
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x285B5F0", Offset = "0x2859BF0", VA = "0x18285B5F0")]
	private void TrackPush2(int I1, int I2)
	{
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x28586A0", Offset = "0x2856CA0", VA = "0x1828586A0")]
	private void Backtrack()
	{
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x285B2B0", Offset = "0x28598B0", VA = "0x18285B2B0")]
	private void SetOperator(int op)
	{
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x285B5D0", Offset = "0x2859BD0", VA = "0x18285B5D0")]
	private void TrackPop()
	{
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x285B5E0", Offset = "0x2859BE0", VA = "0x18285B5E0")]
	private void TrackPop(int framesize)
	{
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x285B5A0", Offset = "0x2859BA0", VA = "0x18285B5A0")]
	private int TrackPeek()
	{
		return default(int);
	}

	[Token(Token = "0x6000591")]
	[Address(RVA = "0x285B560", Offset = "0x2859B60", VA = "0x18285B560")]
	private int TrackPeek(int i)
	{
		return default(int);
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x285B3C0", Offset = "0x28599C0", VA = "0x18285B3C0")]
	private void StackPush(int I1)
	{
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x285B360", Offset = "0x2859960", VA = "0x18285B360")]
	private void StackPush(int I1, int I2)
	{
	}

	[Token(Token = "0x6000594")]
	[Address(RVA = "0x1ECF9C0", Offset = "0x1ECDFC0", VA = "0x181ECF9C0")]
	private void StackPop()
	{
	}

	[Token(Token = "0x6000595")]
	[Address(RVA = "0x285B350", Offset = "0x2859950", VA = "0x18285B350")]
	private void StackPop(int framesize)
	{
	}

	[Token(Token = "0x6000596")]
	[Address(RVA = "0x285B2E0", Offset = "0x28598E0", VA = "0x18285B2E0")]
	private int StackPeek()
	{
		return default(int);
	}

	[Token(Token = "0x6000597")]
	[Address(RVA = "0x285B310", Offset = "0x2859910", VA = "0x18285B310")]
	private int StackPeek(int i)
	{
		return default(int);
	}

	[Token(Token = "0x6000598")]
	[Address(RVA = "0xE925C0", Offset = "0xE90BC0", VA = "0x180E925C0")]
	private int Operator()
	{
		return default(int);
	}

	[Token(Token = "0x6000599")]
	[Address(RVA = "0x285B0A0", Offset = "0x28596A0", VA = "0x18285B0A0")]
	private int Operand(int i)
	{
		return default(int);
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x285B090", Offset = "0x2859690", VA = "0x18285B090")]
	private int Leftchars()
	{
		return default(int);
	}

	[Token(Token = "0x600059B")]
	[Address(RVA = "0x285B2A0", Offset = "0x28598A0", VA = "0x18285B2A0")]
	private int Rightchars()
	{
		return default(int);
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x28587B0", Offset = "0x2856DB0", VA = "0x1828587B0")]
	private int Bump()
	{
		return default(int);
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x2858E20", Offset = "0x2857420", VA = "0x182858E20")]
	private int Forwardchars()
	{
		return default(int);
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x2858D90", Offset = "0x2857390", VA = "0x182858D90")]
	private char Forwardcharnext()
	{
		return default(char);
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x285B400", Offset = "0x2859A00", VA = "0x18285B400")]
	private bool Stringmatch(string str)
	{
		return default(bool);
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x285B0F0", Offset = "0x28596F0", VA = "0x18285B0F0")]
	private bool Refmatch(int index, int len)
	{
		return default(bool);
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x2858790", Offset = "0x2856D90", VA = "0x182858790")]
	private void Backwardnext()
	{
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x28587D0", Offset = "0x2856DD0", VA = "0x1828587D0")]
	private char CharAt(int j)
	{
		return default(char);
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x28587F0", Offset = "0x2856DF0", VA = "0x1828587F0", Slot = "5")]
	protected override bool FindFirstChar()
	{
		return default(bool);
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x2858E40", Offset = "0x2857440", VA = "0x182858E40", Slot = "4")]
	protected override void Go()
	{
	}
}
