// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Utilities.StringBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000ED")]
internal struct StringBuffer
{
	[Token(Token = "0x40004C5")]
	[FieldOffset(Offset = "0x0")]
	private char[]? _buffer;

	[Token(Token = "0x40004C6")]
	[FieldOffset(Offset = "0x8")]
	private int _position;

	[Token(Token = "0x170000DD")]
	public int Position
	{
		[Token(Token = "0x60006EC")]
		[Address(RVA = "0x3DC6720", Offset = "0x3DC6720", VA = "0x3DC6720")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60006ED")]
		[Address(RVA = "0x3DC6730", Offset = "0x3DC6730", VA = "0x3DC6730")]
		set
		{
		}
	}

	[Token(Token = "0x170000DE")]
	public bool IsEmpty
	{
		[Token(Token = "0x60006EE")]
		[Address(RVA = "0x3DC6740", Offset = "0x3DC6740", VA = "0x3DC6740")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DF")]
	public char[]? InternalBuffer
	{
		[Token(Token = "0x60006F7")]
		[Address(RVA = "0x3DC69C0", Offset = "0x3DC69C0", VA = "0x3DC69C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x3DC6750", Offset = "0x3DC6750", VA = "0x3DC6750")]
	public StringBuffer(IArrayPool<char>? bufferPool, int initalSize)
	{
	}

	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x3DC6780", Offset = "0x3DC6780", VA = "0x3DC6780")]
	private StringBuffer(char[] buffer)
	{
	}

	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x3DC67A0", Offset = "0x3DC67A0", VA = "0x3DC67A0")]
	public void Append(IArrayPool<char>? bufferPool, char value)
	{
	}

	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x3DC68A0", Offset = "0x3DC68A0", VA = "0x3DC68A0")]
	public void Append(IArrayPool<char>? bufferPool, char[] buffer, int startIndex, int count)
	{
	}

	[Token(Token = "0x60006F3")]
	[Address(RVA = "0x3DC6940", Offset = "0x3DC6940", VA = "0x3DC6940")]
	public void Clear(IArrayPool<char>? bufferPool)
	{
	}

	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x3DC6840", Offset = "0x3DC6840", VA = "0x3DC6840")]
	private void EnsureSize(IArrayPool<char>? bufferPool, int appendLength)
	{
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x3DC6980", Offset = "0x3DC6980", VA = "0x3DC6980", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x3DC69A0", Offset = "0x3DC69A0", VA = "0x3DC69A0")]
	public string ToString(int start, int length)
	{
		return null;
	}
}
