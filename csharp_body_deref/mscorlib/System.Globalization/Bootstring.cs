// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.Bootstring
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x20005D7")]
internal class Bootstring
{
	[Token(Token = "0x40019E6")]
	[FieldOffset(Offset = "0x10")]
	private readonly char delimiter;

	[Token(Token = "0x40019E7")]
	[FieldOffset(Offset = "0x14")]
	private readonly int base_num;

	[Token(Token = "0x40019E8")]
	[FieldOffset(Offset = "0x18")]
	private readonly int tmin;

	[Token(Token = "0x40019E9")]
	[FieldOffset(Offset = "0x1C")]
	private readonly int tmax;

	[Token(Token = "0x40019EA")]
	[FieldOffset(Offset = "0x20")]
	private readonly int skew;

	[Token(Token = "0x40019EB")]
	[FieldOffset(Offset = "0x24")]
	private readonly int damp;

	[Token(Token = "0x40019EC")]
	[FieldOffset(Offset = "0x28")]
	private readonly int initial_bias;

	[Token(Token = "0x40019ED")]
	[FieldOffset(Offset = "0x2C")]
	private readonly int initial_n;

	[Token(Token = "0x6002E3A")]
	[Address(RVA = "0x3C79BD0", Offset = "0x3C79BD0", VA = "0x3C79BD0")]
	public Bootstring(char delimiter, int baseNum, int tmin, int tmax, int skew, int damp, int initialBias, int initialN)
	{
	}

	[Token(Token = "0x6002E3B")]
	[Address(RVA = "0x3C79080", Offset = "0x3C79080", VA = "0x3C79080")]
	public string Encode(string s, int offset)
	{
		return null;
	}

	[Token(Token = "0x6002E3C")]
	[Address(RVA = "0x3C79C30", Offset = "0x3C79C30", VA = "0x3C79C30")]
	private char EncodeDigit(int d)
	{
		return default(char);
	}

	[Token(Token = "0x6002E3D")]
	[Address(RVA = "0x3C79CD0", Offset = "0x3C79CD0", VA = "0x3C79CD0")]
	private int DecodeDigit(char c)
	{
		return default(int);
	}

	[Token(Token = "0x6002E3E")]
	[Address(RVA = "0x3C79C50", Offset = "0x3C79C50", VA = "0x3C79C50")]
	private int Adapt(int delta, int numPoints, bool firstTime)
	{
		return default(int);
	}

	[Token(Token = "0x6002E3F")]
	[Address(RVA = "0x3C79880", Offset = "0x3C79880", VA = "0x3C79880")]
	public string Decode(string s, int offset)
	{
		return null;
	}
}
