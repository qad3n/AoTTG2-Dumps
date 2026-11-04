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
[Token(Token = "0x2000411")]
internal class FixupHolderList
{
	[Token(Token = "0x400100B")]
	[FieldOffset(Offset = "0x10")]
	internal System.Runtime.Serialization.FixupHolder[] m_values;

	[Token(Token = "0x400100C")]
	[FieldOffset(Offset = "0x18")]
	internal int m_count;

	[Token(Token = "0x600203A")]
	[Address(RVA = "0x1A11E40", Offset = "0x1A10440", VA = "0x181A11E40")]
	internal FixupHolderList()
	{
	}

	[Token(Token = "0x600203B")]
	[Address(RVA = "0x1A11DD0", Offset = "0x1A103D0", VA = "0x181A11DD0")]
	internal FixupHolderList(int startingSize)
	{
	}

	[Token(Token = "0x600203C")]
	[Address(RVA = "0x1A11C40", Offset = "0x1A10240", VA = "0x181A11C40", Slot = "4")]
	internal virtual void Add(System.Runtime.Serialization.FixupHolder fixup)
	{
	}

	[Token(Token = "0x600203D")]
	[Address(RVA = "0x1A11D40", Offset = "0x1A10340", VA = "0x181A11D40")]
	private void EnlargeArray()
	{
	}
}
