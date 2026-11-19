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
		[Address(RVA = "0x55BF410", Offset = "0x55BE410", VA = "0x55BF410")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60006ED")]
		[Address(RVA = "0x55BF420", Offset = "0x55BE420", VA = "0x55BF420")]
		set
		{
		}
	}

	[Token(Token = "0x170000DE")]
	public bool IsEmpty
	{
		[Token(Token = "0x60006EE")]
		[Address(RVA = "0x55BF430", Offset = "0x55BE430", VA = "0x55BF430")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DF")]
	public char[]? InternalBuffer
	{
		[Token(Token = "0x60006F7")]
		[Address(RVA = "0x55BF6B0", Offset = "0x55BE6B0", VA = "0x55BF6B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x55BF440", Offset = "0x55BE440", VA = "0x55BF440")]
	public StringBuffer(IArrayPool<char>? bufferPool, int initalSize)
	{
	}

	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x55BF470", Offset = "0x55BE470", VA = "0x55BF470")]
	private StringBuffer(char[] buffer)
	{
	}

	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x55BF490", Offset = "0x55BE490", VA = "0x55BF490")]
	public void Append(IArrayPool<char>? bufferPool, char value)
	{
	}

	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x55BF590", Offset = "0x55BE590", VA = "0x55BF590")]
	public void Append(IArrayPool<char>? bufferPool, char[] buffer, int startIndex, int count)
	{
	}

	[Token(Token = "0x60006F3")]
	[Address(RVA = "0x55BF630", Offset = "0x55BE630", VA = "0x55BF630")]
	public void Clear(IArrayPool<char>? bufferPool)
	{
	}

	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x55BF530", Offset = "0x55BE530", VA = "0x55BF530")]
	private void EnsureSize(IArrayPool<char>? bufferPool, int appendLength)
	{
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x55BF670", Offset = "0x55BE670", VA = "0x55BF670", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x55BF690", Offset = "0x55BE690", VA = "0x55BF690")]
	public string ToString(int start, int length)
	{
		return null;
	}
}
