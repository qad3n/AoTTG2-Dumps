// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.LongList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Serializable]
[Token(Token = "0x20003E3")]
internal class LongList
{
	[Token(Token = "0x4001007")]
	[FieldOffset(Offset = "0x10")]
	private long[] m_values;

	[Token(Token = "0x4001008")]
	[FieldOffset(Offset = "0x18")]
	private int m_count;

	[Token(Token = "0x4001009")]
	[FieldOffset(Offset = "0x1C")]
	private int m_totalItems;

	[Token(Token = "0x400100A")]
	[FieldOffset(Offset = "0x20")]
	private int m_currentItem;

	[Token(Token = "0x17000433")]
	internal int Count
	{
		[Token(Token = "0x6001FD2")]
		[Address(RVA = "0x3B9DE10", Offset = "0x3B9DE10", VA = "0x3B9DE10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000434")]
	internal long Current
	{
		[Token(Token = "0x6001FD5")]
		[Address(RVA = "0x3B9B810", Offset = "0x3B9B810", VA = "0x3B9B810")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6001FCF")]
	[Address(RVA = "0x3B9D940", Offset = "0x3B9D940", VA = "0x3B9D940")]
	internal LongList()
	{
	}

	[Token(Token = "0x6001FD0")]
	[Address(RVA = "0x3B9DD30", Offset = "0x3B9DD30", VA = "0x3B9DD30")]
	internal LongList(int startingSize)
	{
	}

	[Token(Token = "0x6001FD1")]
	[Address(RVA = "0x3B9D9A0", Offset = "0x3B9D9A0", VA = "0x3B9D9A0")]
	internal void Add(long value)
	{
	}

	[Token(Token = "0x6001FD3")]
	[Address(RVA = "0x3B9B800", Offset = "0x3B9B800", VA = "0x3B9B800")]
	internal void StartEnumeration()
	{
	}

	[Token(Token = "0x6001FD4")]
	[Address(RVA = "0x3B9B850", Offset = "0x3B9B850", VA = "0x3B9B850")]
	internal bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001FD6")]
	[Address(RVA = "0x3B9D850", Offset = "0x3B9D850", VA = "0x3B9D850")]
	internal bool RemoveElement(long value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FD7")]
	[Address(RVA = "0x3B9DD90", Offset = "0x3B9DD90", VA = "0x3B9DD90")]
	private void EnlargeArray()
	{
	}
}
