// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.ObjectHolderList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003E4")]
internal class ObjectHolderList
{
	[Token(Token = "0x400100B")]
	[FieldOffset(Offset = "0x10")]
	internal System.Runtime.Serialization.ObjectHolder[] m_values;

	[Token(Token = "0x400100C")]
	[FieldOffset(Offset = "0x18")]
	internal int m_count;

	[Token(Token = "0x17000435")]
	internal int Version
	{
		[Token(Token = "0x6001FDD")]
		[Address(RVA = "0x3B9E030", Offset = "0x3B9E030", VA = "0x3B9E030")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000436")]
	internal int Count
	{
		[Token(Token = "0x6001FDE")]
		[Address(RVA = "0x3B9E040", Offset = "0x3B9E040", VA = "0x3B9E040")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001FD8")]
	[Address(RVA = "0x3B98FD0", Offset = "0x3B98FD0", VA = "0x3B98FD0")]
	internal ObjectHolderList()
	{
	}

	[Token(Token = "0x6001FD9")]
	[Address(RVA = "0x3B9DE20", Offset = "0x3B9DE20", VA = "0x3B9DE20")]
	internal ObjectHolderList(int startingSize)
	{
	}

	[Token(Token = "0x6001FDA")]
	[Address(RVA = "0x3B9DE80", Offset = "0x3B9DE80", VA = "0x3B9DE80", Slot = "4")]
	internal virtual void Add(System.Runtime.Serialization.ObjectHolder value)
	{
	}

	[Token(Token = "0x6001FDB")]
	[Address(RVA = "0x3B9CBD0", Offset = "0x3B9CBD0", VA = "0x3B9CBD0")]
	internal System.Runtime.Serialization.ObjectHolderListEnumerator GetFixupEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001FDC")]
	[Address(RVA = "0x3B9DF60", Offset = "0x3B9DF60", VA = "0x3B9DF60")]
	private void EnlargeArray()
	{
	}
}
