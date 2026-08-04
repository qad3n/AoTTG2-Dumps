// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.IdnMapping
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x20005D6")]
public sealed class IdnMapping
{
	[Token(Token = "0x40019E3")]
	[FieldOffset(Offset = "0x10")]
	private bool allow_unassigned;

	[Token(Token = "0x40019E4")]
	[FieldOffset(Offset = "0x11")]
	private bool use_std3;

	[Token(Token = "0x40019E5")]
	[FieldOffset(Offset = "0x18")]
	private System.Globalization.Punycode puny;

	[Token(Token = "0x6002E2C")]
	[Address(RVA = "0x3C78500", Offset = "0x3C78500", VA = "0x3C78500")]
	public IdnMapping()
	{
	}

	[Token(Token = "0x6002E2D")]
	[Address(RVA = "0x3C785D0", Offset = "0x3C785D0", VA = "0x3C785D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E2E")]
	[Address(RVA = "0x3C78650", Offset = "0x3C78650", VA = "0x3C78650", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002E2F")]
	[Address(RVA = "0x3C78660", Offset = "0x3C78660", VA = "0x3C78660")]
	public string GetAscii(string unicode)
	{
		return null;
	}

	[Token(Token = "0x6002E30")]
	[Address(RVA = "0x3C786C0", Offset = "0x3C786C0", VA = "0x3C786C0")]
	public string GetAscii(string unicode, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x6002E31")]
	[Address(RVA = "0x3C78780", Offset = "0x3C78780", VA = "0x3C78780")]
	private string Convert(string input, int index, int count, bool toAscii)
	{
		return null;
	}

	[Token(Token = "0x6002E32")]
	[Address(RVA = "0x3C789F0", Offset = "0x3C789F0", VA = "0x3C789F0")]
	private string ToAscii(string s, int offset)
	{
		return null;
	}

	[Token(Token = "0x6002E33")]
	[Address(RVA = "0x3C794D0", Offset = "0x3C794D0", VA = "0x3C794D0")]
	private void VerifyLength(string s, int offset)
	{
	}

	[Token(Token = "0x6002E34")]
	[Address(RVA = "0x3C78DC0", Offset = "0x3C78DC0", VA = "0x3C78DC0")]
	private string NamePrep(string s, int offset)
	{
		return null;
	}

	[Token(Token = "0x6002E35")]
	[Address(RVA = "0x3C79590", Offset = "0x3C79590", VA = "0x3C79590")]
	private void VerifyProhibitedCharacters(string s, int offset)
	{
	}

	[Token(Token = "0x6002E36")]
	[Address(RVA = "0x3C78EE0", Offset = "0x3C78EE0", VA = "0x3C78EE0")]
	private void VerifyStd3AsciiRules(string s, int offset)
	{
	}

	[Token(Token = "0x6002E37")]
	[Address(RVA = "0x3C79760", Offset = "0x3C79760", VA = "0x3C79760")]
	public string GetUnicode(string ascii)
	{
		return null;
	}

	[Token(Token = "0x6002E38")]
	[Address(RVA = "0x3C797C0", Offset = "0x3C797C0", VA = "0x3C797C0")]
	public string GetUnicode(string ascii, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x6002E39")]
	[Address(RVA = "0x3C78C10", Offset = "0x3C78C10", VA = "0x3C78C10")]
	private string ToUnicode(string s, int offset)
	{
		return null;
	}
}
