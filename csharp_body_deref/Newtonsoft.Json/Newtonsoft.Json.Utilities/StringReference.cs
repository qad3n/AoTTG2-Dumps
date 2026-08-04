// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Utilities.StringReference
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3DC69D0", Offset = "0x3DC69D0", VA = "0x3DC69D0")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x170000E1")]
	public char[] Chars
	{
		[Token(Token = "0x60006F9")]
		[Address(RVA = "0x3DC6A00", Offset = "0x3DC6A00", VA = "0x3DC6A00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E2")]
	public int StartIndex
	{
		[Token(Token = "0x60006FA")]
		[Address(RVA = "0x3DC6A10", Offset = "0x3DC6A10", VA = "0x3DC6A10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000E3")]
	public int Length
	{
		[Token(Token = "0x60006FB")]
		[Address(RVA = "0x3DC6A20", Offset = "0x3DC6A20", VA = "0x3DC6A20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60006FC")]
	[Address(RVA = "0x3DC6A30", Offset = "0x3DC6A30", VA = "0x3DC6A30")]
	public StringReference(char[] chars, int startIndex, int length)
	{
	}

	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x3DC6A50", Offset = "0x3DC6A50", VA = "0x3DC6A50", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
