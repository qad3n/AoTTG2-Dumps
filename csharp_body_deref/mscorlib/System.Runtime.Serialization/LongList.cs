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
[Token(Token = "0x20003EB")]
internal class LongList
{
	[Token(Token = "0x4000F6D")]
	[FieldOffset(Offset = "0x10")]
	private long[] m_values;

	[Token(Token = "0x4000F6E")]
	[FieldOffset(Offset = "0x18")]
	private int m_count;

	[Token(Token = "0x4000F6F")]
	[FieldOffset(Offset = "0x1C")]
	private int m_totalItems;

	[Token(Token = "0x4000F70")]
	[FieldOffset(Offset = "0x20")]
	private int m_currentItem;

	[Token(Token = "0x17000434")]
	internal int Count
	{
		[Token(Token = "0x6002017")]
		[Address(RVA = "0x53A5340", Offset = "0x53A4340", VA = "0x53A5340")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000435")]
	internal long Current
	{
		[Token(Token = "0x600201A")]
		[Address(RVA = "0x53A2CD0", Offset = "0x53A1CD0", VA = "0x53A2CD0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6002014")]
	[Address(RVA = "0x53A4E70", Offset = "0x53A3E70", VA = "0x53A4E70")]
	internal LongList()
	{
	}

	[Token(Token = "0x6002015")]
	[Address(RVA = "0x53A5260", Offset = "0x53A4260", VA = "0x53A5260")]
	internal LongList(int startingSize)
	{
	}

	[Token(Token = "0x6002016")]
	[Address(RVA = "0x53A4ED0", Offset = "0x53A3ED0", VA = "0x53A4ED0")]
	internal void Add(long value)
	{
	}

	[Token(Token = "0x6002018")]
	[Address(RVA = "0x53A2CC0", Offset = "0x53A1CC0", VA = "0x53A2CC0")]
	internal void StartEnumeration()
	{
	}

	[Token(Token = "0x6002019")]
	[Address(RVA = "0x53A2D10", Offset = "0x53A1D10", VA = "0x53A2D10")]
	internal bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x600201B")]
	[Address(RVA = "0x53A4D80", Offset = "0x53A3D80", VA = "0x53A4D80")]
	internal bool RemoveElement(long value)
	{
		return default(bool);
	}

	[Token(Token = "0x600201C")]
	[Address(RVA = "0x53A52C0", Offset = "0x53A42C0", VA = "0x53A52C0")]
	private void EnlargeArray()
	{
	}
}
