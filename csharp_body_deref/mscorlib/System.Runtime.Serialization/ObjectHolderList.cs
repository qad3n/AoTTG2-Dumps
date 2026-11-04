// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.ObjectHolderList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x2000413")]
internal class ObjectHolderList
{
	[Token(Token = "0x4001011")]
	[FieldOffset(Offset = "0x10")]
	internal System.Runtime.Serialization.ObjectHolder[] m_values;

	[Token(Token = "0x4001012")]
	[FieldOffset(Offset = "0x18")]
	internal int m_count;

	[Token(Token = "0x17000437")]
	internal int Version
	{
		[Token(Token = "0x600204C")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000438")]
	internal int Count
	{
		[Token(Token = "0x600204D")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6002047")]
	[Address(RVA = "0x1A15250", Offset = "0x1A13850", VA = "0x181A15250")]
	internal ObjectHolderList()
	{
	}

	[Token(Token = "0x6002048")]
	[Address(RVA = "0x1A152B0", Offset = "0x1A138B0", VA = "0x181A152B0")]
	internal ObjectHolderList(int startingSize)
	{
	}

	[Token(Token = "0x6002049")]
	[Address(RVA = "0x1A15060", Offset = "0x1A13660", VA = "0x181A15060", Slot = "4")]
	internal virtual void Add(System.Runtime.Serialization.ObjectHolder value)
	{
	}

	[Token(Token = "0x600204A")]
	[Address(RVA = "0x1A151D0", Offset = "0x1A137D0", VA = "0x181A151D0")]
	internal System.Runtime.Serialization.ObjectHolderListEnumerator GetFixupEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600204B")]
	[Address(RVA = "0x1A15140", Offset = "0x1A13740", VA = "0x181A15140")]
	private void EnlargeArray()
	{
	}
}
