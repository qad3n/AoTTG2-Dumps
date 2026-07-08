using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000153")]
internal sealed class LocalDataStore
{
	[Token(Token = "0x400051A")]
	[FieldOffset(Offset = "0x10")]
	private System.LocalDataStoreElement[] m_DataTable;

	[Token(Token = "0x400051B")]
	[FieldOffset(Offset = "0x18")]
	private System.LocalDataStoreMgr m_Manager;

	[Token(Token = "0x6000D5E")]
	[Address(RVA = "0x4FFFE20", Offset = "0x4FFFE20", VA = "0x4FFFE20")]
	public LocalDataStore(System.LocalDataStoreMgr mgr, int InitialCapacity)
	{
	}

	[Token(Token = "0x6000D5F")]
	[Address(RVA = "0x4FFFDA0", Offset = "0x4FFFDA0", VA = "0x4FFFDA0")]
	internal void Dispose()
	{
	}

	[Token(Token = "0x6000D60")]
	[Address(RVA = "0x4FFFF90", Offset = "0x4FFFF90", VA = "0x4FFFF90")]
	public object GetData(LocalDataStoreSlot slot)
	{
		return null;
	}

	[Token(Token = "0x6000D61")]
	[Address(RVA = "0x5000130", Offset = "0x5000130", VA = "0x5000130")]
	public void SetData(LocalDataStoreSlot slot, object data)
	{
	}

	[Token(Token = "0x6000D62")]
	[Address(RVA = "0x5000580", Offset = "0x5000580", VA = "0x5000580")]
	internal void FreeData(int slot, long cookie)
	{
	}

	[Token(Token = "0x6000D63")]
	[Address(RVA = "0x5000260", Offset = "0x5000260", VA = "0x5000260")]
	private System.LocalDataStoreElement PopulateElement(LocalDataStoreSlot slot)
	{
		return null;
	}
}
