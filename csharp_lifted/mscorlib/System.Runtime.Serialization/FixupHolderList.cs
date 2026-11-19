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
[Token(Token = "0x20003EA")]
internal class FixupHolderList
{
	[Token(Token = "0x4000F6B")]
	[FieldOffset(Offset = "0x10")]
	internal System.Runtime.Serialization.FixupHolder[] m_values;

	[Token(Token = "0x4000F6C")]
	[FieldOffset(Offset = "0x18")]
	internal int m_count;

	[Token(Token = "0x6002010")]
	[Address(RVA = "0x53A4DF0", Offset = "0x53A3DF0", VA = "0x53A4DF0")]
	internal FixupHolderList()
	{
	}

	[Token(Token = "0x6002011")]
	[Address(RVA = "0x53A5060", Offset = "0x53A4060", VA = "0x53A5060")]
	internal FixupHolderList(int startingSize)
	{
	}

	[Token(Token = "0x6002012")]
	[Address(RVA = "0x53A50C0", Offset = "0x53A40C0", VA = "0x53A50C0", Slot = "4")]
	internal virtual void Add(System.Runtime.Serialization.FixupHolder fixup)
	{
	}

	[Token(Token = "0x6002013")]
	[Address(RVA = "0x53A51E0", Offset = "0x53A41E0", VA = "0x53A51E0")]
	private void EnlargeArray()
	{
	}
}
