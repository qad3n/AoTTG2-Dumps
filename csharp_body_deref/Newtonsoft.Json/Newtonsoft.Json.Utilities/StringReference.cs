using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000EE")]
internal readonly struct StringReference
{
	[Token(Token = "0x40004C7")]
	[FieldOffset(Offset = "0x0")]
	private readonly char[] _chars;

	[Token(Token = "0x40004C8")]
	[FieldOffset(Offset = "0x8")]
	private readonly int _startIndex;

	[Token(Token = "0x40004C9")]
	[FieldOffset(Offset = "0xC")]
	private readonly int _length;

	[Token(Token = "0x170000E0")]
	public char this[int i]
	{
		[Token(Token = "0x60006F8")]
		[Address(RVA = "0x3AD1080", Offset = "0x3AD1080", VA = "0x3AD1080")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x170000E1")]
	public char[] Chars
	{
		[Token(Token = "0x60006F9")]
		[Address(RVA = "0x3AD10B0", Offset = "0x3AD10B0", VA = "0x3AD10B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E2")]
	public int StartIndex
	{
		[Token(Token = "0x60006FA")]
		[Address(RVA = "0x3AD10C0", Offset = "0x3AD10C0", VA = "0x3AD10C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000E3")]
	public int Length
	{
		[Token(Token = "0x60006FB")]
		[Address(RVA = "0x3AD10D0", Offset = "0x3AD10D0", VA = "0x3AD10D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60006FC")]
	[Address(RVA = "0x3AD10E0", Offset = "0x3AD10E0", VA = "0x3AD10E0")]
	public StringReference(char[] chars, int startIndex, int length)
	{
	}

	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x3AD1100", Offset = "0x3AD1100", VA = "0x3AD1100", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
