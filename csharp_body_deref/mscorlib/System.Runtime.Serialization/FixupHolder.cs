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
	[Address(RVA = "0x4EB77A0", Offset = "0x4EB77A0", VA = "0x4EB77A0")]
	internal FixupHolder(long id, object fixupInfo, int fixupType)
	{
	}
}
