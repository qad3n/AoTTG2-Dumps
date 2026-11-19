// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.IdnMapping
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x2000583")]
public sealed class IdnMapping
{
	[Token(Token = "0x4001766")]
	[FieldOffset(Offset = "0x10")]
	private bool allow_unassigned;

	[Token(Token = "0x4001767")]
	[FieldOffset(Offset = "0x11")]
	private bool use_std3;

	[Token(Token = "0x4001768")]
	[FieldOffset(Offset = "0x18")]
	private System.Globalization.Punycode puny;

	[Token(Token = "0x6002B18")]
	[Address(RVA = "0x544B500", Offset = "0x544A500", VA = "0x544B500")]
	public IdnMapping()
	{
	}

	[Token(Token = "0x6002B19")]
	[Address(RVA = "0x544B5D0", Offset = "0x544A5D0", VA = "0x544B5D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B1A")]
	[Address(RVA = "0x544B640", Offset = "0x544A640", VA = "0x544B640", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002B1B")]
	[Address(RVA = "0x544B650", Offset = "0x544A650", VA = "0x544B650")]
	public string GetAscii(string unicode)
	{
		return null;
	}

	[Token(Token = "0x6002B1C")]
	[Address(RVA = "0x544B6B0", Offset = "0x544A6B0", VA = "0x544B6B0")]
	public string GetAscii(string unicode, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x6002B1D")]
	[Address(RVA = "0x544B770", Offset = "0x544A770", VA = "0x544B770")]
	private string Convert(string input, int index, int count, bool toAscii)
	{
		return null;
	}

	[Token(Token = "0x6002B1E")]
	[Address(RVA = "0x544BA60", Offset = "0x544AA60", VA = "0x544BA60")]
	private string ToAscii(string s, int offset)
	{
		return null;
	}

	[Token(Token = "0x6002B1F")]
	[Address(RVA = "0x544C580", Offset = "0x544B580", VA = "0x544C580")]
	private void VerifyLength(string s, int offset)
	{
	}

	[Token(Token = "0x6002B20")]
	[Address(RVA = "0x544BE90", Offset = "0x544AE90", VA = "0x544BE90")]
	private string NamePrep(string s, int offset)
	{
		return null;
	}

	[Token(Token = "0x6002B21")]
	[Address(RVA = "0x544C640", Offset = "0x544B640", VA = "0x544C640")]
	private void VerifyProhibitedCharacters(string s, int offset)
	{
	}

	[Token(Token = "0x6002B22")]
	[Address(RVA = "0x544BFA0", Offset = "0x544AFA0", VA = "0x544BFA0")]
	private void VerifyStd3AsciiRules(string s, int offset)
	{
	}

	[Token(Token = "0x6002B23")]
	[Address(RVA = "0x544C800", Offset = "0x544B800", VA = "0x544C800")]
	public string GetUnicode(string ascii)
	{
		return null;
	}

	[Token(Token = "0x6002B24")]
	[Address(RVA = "0x544C860", Offset = "0x544B860", VA = "0x544C860")]
	public string GetUnicode(string ascii, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x6002B25")]
	[Address(RVA = "0x544BC70", Offset = "0x544AC70", VA = "0x544BC70")]
	private string ToUnicode(string s, int offset)
	{
		return null;
	}
}
