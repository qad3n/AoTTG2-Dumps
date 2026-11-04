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
		[Address(RVA = "0x57AEE0", Offset = "0x5794E0", VA = "0x18057AEE0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60006ED")]
		[Address(RVA = "0x57AF20", Offset = "0x579520", VA = "0x18057AF20")]
		set
		{
		}
	}

	[Token(Token = "0x170000DE")]
	public bool IsEmpty
	{
		[Token(Token = "0x60006EE")]
		[Address(RVA = "0x187E270", Offset = "0x187C870", VA = "0x18187E270")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DF")]
	public char[]? InternalBuffer
	{
		[Token(Token = "0x60006F7")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x1C52280", Offset = "0x1C50880", VA = "0x181C52280")]
	public StringBuffer(IArrayPool<char>? bufferPool, int initalSize)
	{
	}

	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x1C522C0", Offset = "0x1C508C0", VA = "0x181C522C0")]
	private StringBuffer(char[] buffer)
	{
	}

	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x1C51FD0", Offset = "0x1C505D0", VA = "0x181C51FD0")]
	public void Append(IArrayPool<char>? bufferPool, char value)
	{
	}

	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x1C52090", Offset = "0x1C50690", VA = "0x181C52090")]
	public void Append(IArrayPool<char>? bufferPool, char[] buffer, int startIndex, int count)
	{
	}

	[Token(Token = "0x60006F3")]
	[Address(RVA = "0x1C52160", Offset = "0x1C50760", VA = "0x181C52160")]
	public void Clear(IArrayPool<char>? bufferPool)
	{
	}

	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x1C521B0", Offset = "0x1C507B0", VA = "0x181C521B0")]
	private void EnsureSize(IArrayPool<char>? bufferPool, int appendLength)
	{
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x1C52220", Offset = "0x1C50820", VA = "0x181C52220", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x1C52250", Offset = "0x1C50850", VA = "0x181C52250")]
	public string ToString(int start, int length)
	{
		return null;
	}
}
