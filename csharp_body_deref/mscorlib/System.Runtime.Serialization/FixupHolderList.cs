// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.FixupHolderList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Serializable]
[Token(Token = "0x20003E2")]
internal class FixupHolderList
{
	[Token(Token = "0x4001005")]
	[FieldOffset(Offset = "0x10")]
	internal System.Runtime.Serialization.FixupHolder[] m_values;

	[Token(Token = "0x4001006")]
	[FieldOffset(Offset = "0x18")]
	internal int m_count;

	[Token(Token = "0x6001FCB")]
	[Address(RVA = "0x3B9D8C0", Offset = "0x3B9D8C0", VA = "0x3B9D8C0")]
	internal FixupHolderList()
	{
	}

	[Token(Token = "0x6001FCC")]
	[Address(RVA = "0x3B9DB30", Offset = "0x3B9DB30", VA = "0x3B9DB30")]
	internal FixupHolderList(int startingSize)
	{
	}

	[Token(Token = "0x6001FCD")]
	[Address(RVA = "0x3B9DB90", Offset = "0x3B9DB90", VA = "0x3B9DB90", Slot = "4")]
	internal virtual void Add(System.Runtime.Serialization.FixupHolder fixup)
	{
	}

	[Token(Token = "0x6001FCE")]
	[Address(RVA = "0x3B9DCB0", Offset = "0x3B9DCB0", VA = "0x3B9DCB0")]
	private void EnlargeArray()
	{
	}
}
