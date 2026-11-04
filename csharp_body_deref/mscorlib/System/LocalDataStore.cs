// ==================== AoTTG2 cross-reference ====================
// Type: System.LocalDataStore
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200017D")]
internal sealed class LocalDataStore
{
	[Token(Token = "0x400057E")]
	[FieldOffset(Offset = "0x10")]
	private System.LocalDataStoreElement[] m_DataTable;

	[Token(Token = "0x400057F")]
	[FieldOffset(Offset = "0x18")]
	private System.LocalDataStoreMgr m_Manager;

	[Token(Token = "0x6000DAB")]
	[Address(RVA = "0x1B6C7F0", Offset = "0x1B6ADF0", VA = "0x181B6C7F0")]
	public LocalDataStore(System.LocalDataStoreMgr mgr, int InitialCapacity)
	{
	}

	[Token(Token = "0x6000DAC")]
	[Address(RVA = "0x1B6C250", Offset = "0x1B6A850", VA = "0x181B6C250")]
	internal void Dispose()
	{
	}

	[Token(Token = "0x6000DAD")]
	[Address(RVA = "0x1B6C2E0", Offset = "0x1B6A8E0", VA = "0x181B6C2E0")]
	public object GetData(LocalDataStoreSlot slot)
	{
		return null;
	}

	[Token(Token = "0x6000DAE")]
	[Address(RVA = "0x1B6C6B0", Offset = "0x1B6ACB0", VA = "0x181B6C6B0")]
	public void SetData(LocalDataStoreSlot slot, object data)
	{
	}

	[Token(Token = "0x6000DAF")]
	[Address(RVA = "0x1B6C280", Offset = "0x1B6A880", VA = "0x181B6C280")]
	internal void FreeData(int slot, long cookie)
	{
	}

	[Token(Token = "0x6000DB0")]
	[Address(RVA = "0x1B6C410", Offset = "0x1B6AA10", VA = "0x181B6C410")]
	private System.LocalDataStoreElement PopulateElement(LocalDataStoreSlot slot)
	{
		return null;
	}
}
