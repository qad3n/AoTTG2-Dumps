using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000151")]
internal sealed class LocalDataStoreHolder
{
	[Token(Token = "0x4000517")]
	[FieldOffset(Offset = "0x10")]
	private System.LocalDataStore m_Store;

	[Token(Token = "0x17000126")]
	public System.LocalDataStore Store
	{
		[Token(Token = "0x6000D59")]
		[Address(RVA = "0x4FFFDC0", Offset = "0x4FFFDC0", VA = "0x4FFFDC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D57")]
	[Address(RVA = "0x4FFFCD0", Offset = "0x4FFFCD0", VA = "0x4FFFCD0")]
	public LocalDataStoreHolder(System.LocalDataStore store)
	{
	}

	[Token(Token = "0x6000D58")]
	[Address(RVA = "0x4FFFD00", Offset = "0x4FFFD00", VA = "0x4FFFD00", Slot = "1")]
	~LocalDataStoreHolder()
	{
	}
}
