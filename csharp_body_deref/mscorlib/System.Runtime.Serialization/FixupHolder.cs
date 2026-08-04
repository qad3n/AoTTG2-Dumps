// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.FixupHolder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Serializable]
[Token(Token = "0x20003E1")]
internal class FixupHolder
{
	[Token(Token = "0x4001002")]
	[FieldOffset(Offset = "0x10")]
	internal long m_id;

	[Token(Token = "0x4001003")]
	[FieldOffset(Offset = "0x18")]
	internal object m_fixupInfo;

	[Token(Token = "0x4001004")]
	[FieldOffset(Offset = "0x20")]
	internal int m_fixupType;

	[Token(Token = "0x6001FCA")]
	[Address(RVA = "0x3B9D2C0", Offset = "0x3B9D2C0", VA = "0x3B9D2C0")]
	internal FixupHolder(long id, object fixupInfo, int fixupType)
	{
	}
}
