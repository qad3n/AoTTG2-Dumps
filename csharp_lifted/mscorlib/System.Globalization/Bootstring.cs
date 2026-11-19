// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.Bootstring
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x2000584")]
internal class Bootstring
{
	[Token(Token = "0x4001769")]
	[FieldOffset(Offset = "0x10")]
	private readonly char delimiter;

	[Token(Token = "0x400176A")]
	[FieldOffset(Offset = "0x14")]
	private readonly int base_num;

	[Token(Token = "0x400176B")]
	[FieldOffset(Offset = "0x18")]
	private readonly int tmin;

	[Token(Token = "0x400176C")]
	[FieldOffset(Offset = "0x1C")]
	private readonly int tmax;

	[Token(Token = "0x400176D")]
	[FieldOffset(Offset = "0x20")]
	private readonly int skew;

	[Token(Token = "0x400176E")]
	[FieldOffset(Offset = "0x24")]
	private readonly int damp;

	[Token(Token = "0x400176F")]
	[FieldOffset(Offset = "0x28")]
	private readonly int initial_bias;

	[Token(Token = "0x4001770")]
	[FieldOffset(Offset = "0x2C")]
	private readonly int initial_n;

	[Token(Token = "0x6002B26")]
	[Address(RVA = "0x544CC60", Offset = "0x544BC60", VA = "0x544CC60")]
	public Bootstring(char delimiter, int baseNum, int tmin, int tmax, int skew, int damp, int initialBias, int initialN)
	{
	}

	[Token(Token = "0x6002B27")]
	[Address(RVA = "0x544C140", Offset = "0x544B140", VA = "0x544C140")]
	public string Encode(string s, int offset)
	{
		return null;
	}

	[Token(Token = "0x6002B28")]
	[Address(RVA = "0x544CCC0", Offset = "0x544BCC0", VA = "0x544CCC0")]
	private char EncodeDigit(int d)
	{
		return default(char);
	}

	[Token(Token = "0x6002B29")]
	[Address(RVA = "0x544CD50", Offset = "0x544BD50", VA = "0x544CD50")]
	private int DecodeDigit(char c)
	{
		return default(int);
	}

	[Token(Token = "0x6002B2A")]
	[Address(RVA = "0x544CCD0", Offset = "0x544BCD0", VA = "0x544CCD0")]
	private int Adapt(int delta, int numPoints, bool firstTime)
	{
		return default(int);
	}

	[Token(Token = "0x6002B2B")]
	[Address(RVA = "0x544C920", Offset = "0x544B920", VA = "0x544C920")]
	public string Decode(string s, int offset)
	{
		return null;
	}
}
