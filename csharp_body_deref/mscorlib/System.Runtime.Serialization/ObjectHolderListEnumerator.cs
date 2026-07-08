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
		[Address(RVA = "0x4EB7130", Offset = "0x4EB7130", VA = "0x4EB7130")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001FDF")]
	[Address(RVA = "0x4EB84C0", Offset = "0x4EB84C0", VA = "0x4EB84C0")]
	internal ObjectHolderListEnumerator(System.Runtime.Serialization.ObjectHolderList list, bool isFixupEnumerator)
	{
	}

	[Token(Token = "0x6001FE0")]
	[Address(RVA = "0x4EB7180", Offset = "0x4EB7180", VA = "0x4EB7180")]
	internal bool MoveNext()
	{
		return default(bool);
	}
}
