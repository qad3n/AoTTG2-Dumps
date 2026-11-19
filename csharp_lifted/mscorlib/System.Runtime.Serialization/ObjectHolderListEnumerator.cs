// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.ObjectHolderListEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003ED")]
internal class ObjectHolderListEnumerator
{
	[Token(Token = "0x4000F73")]
	[FieldOffset(Offset = "0x10")]
	private bool m_isFixupEnumerator;

	[Token(Token = "0x4000F74")]
	[FieldOffset(Offset = "0x18")]
	private System.Runtime.Serialization.ObjectHolderList m_list;

	[Token(Token = "0x4000F75")]
	[FieldOffset(Offset = "0x20")]
	private int m_startingVersion;

	[Token(Token = "0x4000F76")]
	[FieldOffset(Offset = "0x24")]
	private int m_currPos;

	[Token(Token = "0x17000438")]
	internal System.Runtime.Serialization.ObjectHolder Current
	{
		[Token(Token = "0x6002026")]
		[Address(RVA = "0x53A41A0", Offset = "0x53A31A0", VA = "0x53A41A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002024")]
	[Address(RVA = "0x53A5510", Offset = "0x53A4510", VA = "0x53A5510")]
	internal ObjectHolderListEnumerator(System.Runtime.Serialization.ObjectHolderList list, bool isFixupEnumerator)
	{
	}

	[Token(Token = "0x6002025")]
	[Address(RVA = "0x53A41F0", Offset = "0x53A31F0", VA = "0x53A41F0")]
	internal bool MoveNext()
	{
		return default(bool);
	}
}
