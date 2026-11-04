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
[Token(Token = "0x2000412")]
internal class LongList
{
	[Token(Token = "0x400100D")]
	[FieldOffset(Offset = "0x10")]
	private long[] m_values;

	[Token(Token = "0x400100E")]
	[FieldOffset(Offset = "0x18")]
	private int m_count;

	[Token(Token = "0x400100F")]
	[FieldOffset(Offset = "0x1C")]
	private int m_totalItems;

	[Token(Token = "0x4001010")]
	[FieldOffset(Offset = "0x20")]
	private int m_currentItem;

	[Token(Token = "0x17000435")]
	internal int Count
	{
		[Token(Token = "0x6002041")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000436")]
	internal long Current
	{
		[Token(Token = "0x6002044")]
		[Address(RVA = "0x1A14D20", Offset = "0x1A13320", VA = "0x181A14D20")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x600203E")]
	[Address(RVA = "0x1A14C50", Offset = "0x1A13250", VA = "0x181A14C50")]
	internal LongList()
	{
	}

	[Token(Token = "0x600203F")]
	[Address(RVA = "0x1A14CB0", Offset = "0x1A132B0", VA = "0x181A14CB0")]
	internal LongList(int startingSize)
	{
	}

	[Token(Token = "0x6002040")]
	[Address(RVA = "0x1A14A20", Offset = "0x1A13020", VA = "0x181A14A20")]
	internal void Add(long value)
	{
	}

	[Token(Token = "0x6002042")]
	[Address(RVA = "0x1532BE0", Offset = "0x15311E0", VA = "0x181532BE0")]
	internal void StartEnumeration()
	{
	}

	[Token(Token = "0x6002043")]
	[Address(RVA = "0x1A14B80", Offset = "0x1A13180", VA = "0x181A14B80")]
	internal bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6002045")]
	[Address(RVA = "0x1A14BD0", Offset = "0x1A131D0", VA = "0x181A14BD0")]
	internal bool RemoveElement(long value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002046")]
	[Address(RVA = "0x1A14AF0", Offset = "0x1A130F0", VA = "0x181A14AF0")]
	private void EnlargeArray()
	{
	}
}
