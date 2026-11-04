// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.ObjectHolderListEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x2000414")]
internal class ObjectHolderListEnumerator
{
	[Token(Token = "0x4001013")]
	[FieldOffset(Offset = "0x10")]
	private bool m_isFixupEnumerator;

	[Token(Token = "0x4001014")]
	[FieldOffset(Offset = "0x18")]
	private System.Runtime.Serialization.ObjectHolderList m_list;

	[Token(Token = "0x4001015")]
	[FieldOffset(Offset = "0x20")]
	private int m_startingVersion;

	[Token(Token = "0x4001016")]
	[FieldOffset(Offset = "0x24")]
	private int m_currPos;

	[Token(Token = "0x17000439")]
	internal System.Runtime.Serialization.ObjectHolder Current
	{
		[Token(Token = "0x6002050")]
		[Address(RVA = "0x1A15020", Offset = "0x1A13620", VA = "0x181A15020")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600204E")]
	[Address(RVA = "0x1A14FC0", Offset = "0x1A135C0", VA = "0x181A14FC0")]
	internal ObjectHolderListEnumerator(System.Runtime.Serialization.ObjectHolderList list, bool isFixupEnumerator)
	{
	}

	[Token(Token = "0x600204F")]
	[Address(RVA = "0x1A14F10", Offset = "0x1A13510", VA = "0x181A14F10")]
	internal bool MoveNext()
	{
		return default(bool);
	}
}
