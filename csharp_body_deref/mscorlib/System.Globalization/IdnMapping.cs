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
	[Address(RVA = "0x4F929E0", Offset = "0x4F929E0", VA = "0x4F929E0")]
	public IdnMapping()
	{
	}

	[Token(Token = "0x6002E2D")]
	[Address(RVA = "0x4F92AB0", Offset = "0x4F92AB0", VA = "0x4F92AB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E2E")]
	[Address(RVA = "0x4F92B30", Offset = "0x4F92B30", VA = "0x4F92B30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002E2F")]
	[Address(RVA = "0x4F92B40", Offset = "0x4F92B40", VA = "0x4F92B40")]
	public string GetAscii(string unicode)
	{
		return null;
	}

	[Token(Token = "0x6002E30")]
	[Address(RVA = "0x4F92BA0", Offset = "0x4F92BA0", VA = "0x4F92BA0")]
	public string GetAscii(string unicode, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x6002E31")]
	[Address(RVA = "0x4F92C60", Offset = "0x4F92C60", VA = "0x4F92C60")]
	private string Convert(string input, int index, int count, bool toAscii)
	{
		return null;
	}

	[Token(Token = "0x6002E32")]
	[Address(RVA = "0x4F92ED0", Offset = "0x4F92ED0", VA = "0x4F92ED0")]
	private string ToAscii(string s, int offset)
	{
		return null;
	}

	[Token(Token = "0x6002E33")]
	[Address(RVA = "0x4F939B0", Offset = "0x4F939B0", VA = "0x4F939B0")]
	private void VerifyLength(string s, int offset)
	{
	}

	[Token(Token = "0x6002E34")]
	[Address(RVA = "0x4F932A0", Offset = "0x4F932A0", VA = "0x4F932A0")]
	private string NamePrep(string s, int offset)
	{
		return null;
	}

	[Token(Token = "0x6002E35")]
	[Address(RVA = "0x4F93A70", Offset = "0x4F93A70", VA = "0x4F93A70")]
	private void VerifyProhibitedCharacters(string s, int offset)
	{
	}

	[Token(Token = "0x6002E36")]
	[Address(RVA = "0x4F933C0", Offset = "0x4F933C0", VA = "0x4F933C0")]
	private void VerifyStd3AsciiRules(string s, int offset)
	{
	}

	[Token(Token = "0x6002E37")]
	[Address(RVA = "0x4F93C40", Offset = "0x4F93C40", VA = "0x4F93C40")]
	public string GetUnicode(string ascii)
	{
		return null;
	}

	[Token(Token = "0x6002E38")]
	[Address(RVA = "0x4F93CA0", Offset = "0x4F93CA0", VA = "0x4F93CA0")]
	public string GetUnicode(string ascii, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x6002E39")]
	[Address(RVA = "0x4F930F0", Offset = "0x4F930F0", VA = "0x4F930F0")]
	private string ToUnicode(string s, int offset)
	{
		return null;
	}
}
