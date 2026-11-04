// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.IdnMapping
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x20005A8")]
public sealed class IdnMapping
{
	[Token(Token = "0x40017FF")]
	[FieldOffset(Offset = "0x10")]
	private bool allow_unassigned;

	[Token(Token = "0x4001800")]
	[FieldOffset(Offset = "0x11")]
	private bool use_std3;

	[Token(Token = "0x4001801")]
	[FieldOffset(Offset = "0x18")]
	private System.Globalization.Punycode puny;

	[Token(Token = "0x6002B39")]
	[Address(RVA = "0x1AC1730", Offset = "0x1ABFD30", VA = "0x181AC1730")]
	public IdnMapping()
	{
	}

	[Token(Token = "0x6002B3A")]
	[Address(RVA = "0x1AC06E0", Offset = "0x1ABECE0", VA = "0x181AC06E0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B3B")]
	[Address(RVA = "0x1AC0950", Offset = "0x1ABEF50", VA = "0x181AC0950", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002B3C")]
	[Address(RVA = "0x1AC0760", Offset = "0x1ABED60", VA = "0x181AC0760")]
	public string GetAscii(string unicode)
	{
		return null;
	}

	[Token(Token = "0x6002B3D")]
	[Address(RVA = "0x1AC0830", Offset = "0x1ABEE30", VA = "0x181AC0830")]
	public string GetAscii(string unicode, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x6002B3E")]
	[Address(RVA = "0x1AC04F0", Offset = "0x1ABEAF0", VA = "0x181AC04F0")]
	private string Convert(string input, int index, int count, bool toAscii)
	{
		return null;
	}

	[Token(Token = "0x6002B3F")]
	[Address(RVA = "0x1AC0C80", Offset = "0x1ABF280", VA = "0x181AC0C80")]
	private string ToAscii(string s, int offset)
	{
		return null;
	}

	[Token(Token = "0x6002B40")]
	[Address(RVA = "0x1AC11A0", Offset = "0x1ABF7A0", VA = "0x181AC11A0")]
	private void VerifyLength(string s, int offset)
	{
	}

	[Token(Token = "0x6002B41")]
	[Address(RVA = "0x1AC0B60", Offset = "0x1ABF160", VA = "0x181AC0B60")]
	private string NamePrep(string s, int offset)
	{
		return null;
	}

	[Token(Token = "0x6002B42")]
	[Address(RVA = "0x1AC12D0", Offset = "0x1ABF8D0", VA = "0x181AC12D0")]
	private void VerifyProhibitedCharacters(string s, int offset)
	{
	}

	[Token(Token = "0x6002B43")]
	[Address(RVA = "0x1AC14E0", Offset = "0x1ABFAE0", VA = "0x181AC14E0")]
	private void VerifyStd3AsciiRules(string s, int offset)
	{
	}

	[Token(Token = "0x6002B44")]
	[Address(RVA = "0x1AC0A90", Offset = "0x1ABF090", VA = "0x181AC0A90")]
	public string GetUnicode(string ascii)
	{
		return null;
	}

	[Token(Token = "0x6002B45")]
	[Address(RVA = "0x1AC0970", Offset = "0x1ABEF70", VA = "0x181AC0970")]
	public string GetUnicode(string ascii, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x6002B46")]
	[Address(RVA = "0x1AC0FD0", Offset = "0x1ABF5D0", VA = "0x181AC0FD0")]
	private string ToUnicode(string s, int offset)
	{
		return null;
	}
}
