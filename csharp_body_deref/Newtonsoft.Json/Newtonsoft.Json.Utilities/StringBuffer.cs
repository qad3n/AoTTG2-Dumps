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
		[Address(RVA = "0x3AD0DD0", Offset = "0x3AD0DD0", VA = "0x3AD0DD0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60006ED")]
		[Address(RVA = "0x3AD0DE0", Offset = "0x3AD0DE0", VA = "0x3AD0DE0")]
		set
		{
		}
	}

	[Token(Token = "0x170000DE")]
	public bool IsEmpty
	{
		[Token(Token = "0x60006EE")]
		[Address(RVA = "0x3AD0DF0", Offset = "0x3AD0DF0", VA = "0x3AD0DF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DF")]
	public char[]? InternalBuffer
	{
		[Token(Token = "0x60006F7")]
		[Address(RVA = "0x3AD1070", Offset = "0x3AD1070", VA = "0x3AD1070")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x3AD0E00", Offset = "0x3AD0E00", VA = "0x3AD0E00")]
	public StringBuffer(IArrayPool<char>? bufferPool, int initalSize)
	{
	}

	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x3AD0E30", Offset = "0x3AD0E30", VA = "0x3AD0E30")]
	private StringBuffer(char[] buffer)
	{
	}

	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x3AD0E50", Offset = "0x3AD0E50", VA = "0x3AD0E50")]
	public void Append(IArrayPool<char>? bufferPool, char value)
	{
	}

	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x3AD0F50", Offset = "0x3AD0F50", VA = "0x3AD0F50")]
	public void Append(IArrayPool<char>? bufferPool, char[] buffer, int startIndex, int count)
	{
	}

	[Token(Token = "0x60006F3")]
	[Address(RVA = "0x3AD0FF0", Offset = "0x3AD0FF0", VA = "0x3AD0FF0")]
	public void Clear(IArrayPool<char>? bufferPool)
	{
	}

	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x3AD0EF0", Offset = "0x3AD0EF0", VA = "0x3AD0EF0")]
	private void EnsureSize(IArrayPool<char>? bufferPool, int appendLength)
	{
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x3AD1030", Offset = "0x3AD1030", VA = "0x3AD1030", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x3AD1050", Offset = "0x3AD1050", VA = "0x3AD1050")]
	public string ToString(int start, int length)
	{
		return null;
	}
}
