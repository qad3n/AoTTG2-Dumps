// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.Bootstring
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x20005A9")]
internal class Bootstring
{
	[Token(Token = "0x4001802")]
	[FieldOffset(Offset = "0x10")]
	private readonly char delimiter;

	[Token(Token = "0x4001803")]
	[FieldOffset(Offset = "0x14")]
	private readonly int base_num;

	[Token(Token = "0x4001804")]
	[FieldOffset(Offset = "0x18")]
	private readonly int tmin;

	[Token(Token = "0x4001805")]
	[FieldOffset(Offset = "0x1C")]
	private readonly int tmax;

	[Token(Token = "0x4001806")]
	[FieldOffset(Offset = "0x20")]
	private readonly int skew;

	[Token(Token = "0x4001807")]
	[FieldOffset(Offset = "0x24")]
	private readonly int damp;

	[Token(Token = "0x4001808")]
	[FieldOffset(Offset = "0x28")]
	private readonly int initial_bias;

	[Token(Token = "0x4001809")]
	[FieldOffset(Offset = "0x2C")]
	private readonly int initial_n;

	[Token(Token = "0x6002B47")]
	[Address(RVA = "0x1AB7B00", Offset = "0x1AB6100", VA = "0x181AB7B00")]
	public Bootstring(char delimiter, int baseNum, int tmin, int tmax, int skew, int damp, int initialBias, int initialN)
	{
	}

	[Token(Token = "0x6002B48")]
	[Address(RVA = "0x1AB76D0", Offset = "0x1AB5CD0", VA = "0x181AB76D0")]
	public string Encode(string s, int offset)
	{
		return null;
	}

	[Token(Token = "0x6002B49")]
	[Address(RVA = "0x1AB76B0", Offset = "0x1AB5CB0", VA = "0x181AB76B0")]
	private char EncodeDigit(int d)
	{
		return default(char);
	}

	[Token(Token = "0x6002B4A")]
	[Address(RVA = "0x1AB73D0", Offset = "0x1AB59D0", VA = "0x181AB73D0")]
	private int DecodeDigit(char c)
	{
		return default(int);
	}

	[Token(Token = "0x6002B4B")]
	[Address(RVA = "0x1AB7350", Offset = "0x1AB5950", VA = "0x181AB7350")]
	private int Adapt(int delta, int numPoints, bool firstTime)
	{
		return default(int);
	}

	[Token(Token = "0x6002B4C")]
	[Address(RVA = "0x1AB7400", Offset = "0x1AB5A00", VA = "0x181AB7400")]
	public string Decode(string s, int offset)
	{
		return null;
	}
}
