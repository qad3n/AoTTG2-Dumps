// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.ObjectHolderList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003EC")]
internal class ObjectHolderList
{
	[Token(Token = "0x4000F71")]
	[FieldOffset(Offset = "0x10")]
	internal System.Runtime.Serialization.ObjectHolder[] m_values;

	[Token(Token = "0x4000F72")]
	[FieldOffset(Offset = "0x18")]
	internal int m_count;

	[Token(Token = "0x17000436")]
	internal int Version
	{
		[Token(Token = "0x6002022")]
		[Address(RVA = "0x53A5560", Offset = "0x53A4560", VA = "0x53A5560")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000437")]
	internal int Count
	{
		[Token(Token = "0x6002023")]
		[Address(RVA = "0x53A5570", Offset = "0x53A4570", VA = "0x53A5570")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600201D")]
	[Address(RVA = "0x53A0570", Offset = "0x539F570", VA = "0x53A0570")]
	internal ObjectHolderList()
	{
	}

	[Token(Token = "0x600201E")]
	[Address(RVA = "0x53A5350", Offset = "0x53A4350", VA = "0x53A5350")]
	internal ObjectHolderList(int startingSize)
	{
	}

	[Token(Token = "0x600201F")]
	[Address(RVA = "0x53A53B0", Offset = "0x53A43B0", VA = "0x53A53B0", Slot = "4")]
	internal virtual void Add(System.Runtime.Serialization.ObjectHolder value)
	{
	}

	[Token(Token = "0x6002020")]
	[Address(RVA = "0x53A4120", Offset = "0x53A3120", VA = "0x53A4120")]
	internal System.Runtime.Serialization.ObjectHolderListEnumerator GetFixupEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002021")]
	[Address(RVA = "0x53A5490", Offset = "0x53A4490", VA = "0x53A5490")]
	private void EnlargeArray()
	{
	}
}
