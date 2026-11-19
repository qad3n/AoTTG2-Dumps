// ==================== AoTTG2 cross-reference ====================
// Type: System.LocalDataStore
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000155")]
internal sealed class LocalDataStore
{
	[Token(Token = "0x40004DC")]
	[FieldOffset(Offset = "0x10")]
	private System.LocalDataStoreElement[] m_DataTable;

	[Token(Token = "0x40004DD")]
	[FieldOffset(Offset = "0x18")]
	private System.LocalDataStoreMgr m_Manager;

	[Token(Token = "0x6000D86")]
	[Address(RVA = "0x54EA130", Offset = "0x54E9130", VA = "0x54EA130")]
	public LocalDataStore(System.LocalDataStoreMgr mgr, int InitialCapacity)
	{
	}

	[Token(Token = "0x6000D87")]
	[Address(RVA = "0x54EA0B0", Offset = "0x54E90B0", VA = "0x54EA0B0")]
	internal void Dispose()
	{
	}

	[Token(Token = "0x6000D88")]
	[Address(RVA = "0x54EA290", Offset = "0x54E9290", VA = "0x54EA290")]
	public object GetData(LocalDataStoreSlot slot)
	{
		return null;
	}

	[Token(Token = "0x6000D89")]
	[Address(RVA = "0x54EA410", Offset = "0x54E9410", VA = "0x54EA410")]
	public void SetData(LocalDataStoreSlot slot, object data)
	{
	}

	[Token(Token = "0x6000D8A")]
	[Address(RVA = "0x54EA7E0", Offset = "0x54E97E0", VA = "0x54EA7E0")]
	internal void FreeData(int slot, long cookie)
	{
	}

	[Token(Token = "0x6000D8B")]
	[Address(RVA = "0x54EA530", Offset = "0x54E9530", VA = "0x54EA530")]
	private System.LocalDataStoreElement PopulateElement(LocalDataStoreSlot slot)
	{
		return null;
	}
}
