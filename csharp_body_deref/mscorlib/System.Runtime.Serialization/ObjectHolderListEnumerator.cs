// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.ObjectHolderListEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003E5")]
internal class ObjectHolderListEnumerator
{
	[Token(Token = "0x400100D")]
	[FieldOffset(Offset = "0x10")]
	private bool m_isFixupEnumerator;

	[Token(Token = "0x400100E")]
	[FieldOffset(Offset = "0x18")]
	private System.Runtime.Serialization.ObjectHolderList m_list;

	[Token(Token = "0x400100F")]
	[FieldOffset(Offset = "0x20")]
	private int m_startingVersion;

	[Token(Token = "0x4001010")]
	[FieldOffset(Offset = "0x24")]
	private int m_currPos;

	[Token(Token = "0x17000437")]
	internal System.Runtime.Serialization.ObjectHolder Current
	{
		[Token(Token = "0x6001FE1")]
		[Address(RVA = "0x3B9CC50", Offset = "0x3B9CC50", VA = "0x3B9CC50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001FDF")]
	[Address(RVA = "0x3B9DFE0", Offset = "0x3B9DFE0", VA = "0x3B9DFE0")]
	internal ObjectHolderListEnumerator(System.Runtime.Serialization.ObjectHolderList list, bool isFixupEnumerator)
	{
	}

	[Token(Token = "0x6001FE0")]
	[Address(RVA = "0x3B9CCA0", Offset = "0x3B9CCA0", VA = "0x3B9CCA0")]
	internal bool MoveNext()
	{
		return default(bool);
	}
}
