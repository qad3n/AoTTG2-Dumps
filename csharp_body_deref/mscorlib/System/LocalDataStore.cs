// ==================== AoTTG2 cross-reference ====================
// Type: System.LocalDataStore
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3CE5940", Offset = "0x3CE5940", VA = "0x3CE5940")]
	public LocalDataStore(System.LocalDataStoreMgr mgr, int InitialCapacity)
	{
	}

	[Token(Token = "0x6000D5F")]
	[Address(RVA = "0x3CE58C0", Offset = "0x3CE58C0", VA = "0x3CE58C0")]
	internal void Dispose()
	{
	}

	[Token(Token = "0x6000D60")]
	[Address(RVA = "0x3CE5AB0", Offset = "0x3CE5AB0", VA = "0x3CE5AB0")]
	public object GetData(LocalDataStoreSlot slot)
	{
		return null;
	}

	[Token(Token = "0x6000D61")]
	[Address(RVA = "0x3CE5C50", Offset = "0x3CE5C50", VA = "0x3CE5C50")]
	public void SetData(LocalDataStoreSlot slot, object data)
	{
	}

	[Token(Token = "0x6000D62")]
	[Address(RVA = "0x3CE60A0", Offset = "0x3CE60A0", VA = "0x3CE60A0")]
	internal void FreeData(int slot, long cookie)
	{
	}

	[Token(Token = "0x6000D63")]
	[Address(RVA = "0x3CE5D80", Offset = "0x3CE5D80", VA = "0x3CE5D80")]
	private System.LocalDataStoreElement PopulateElement(LocalDataStoreSlot slot)
	{
		return null;
	}
}
