// ==================== AoTTG2 cross-reference ====================
// Type: System.LocalDataStoreMgr
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200017F")]
internal sealed class LocalDataStoreMgr
{
	[Token(Token = "0x4000583")]
	[FieldOffset(Offset = "0x10")]
	private bool[] m_SlotInfoTable;

	[Token(Token = "0x4000584")]
	[FieldOffset(Offset = "0x18")]
	private int m_FirstAvailableSlot;

	[Token(Token = "0x4000585")]
	[FieldOffset(Offset = "0x20")]
	private List<System.LocalDataStore> m_ManagedLocalDataStores;

	[Token(Token = "0x4000586")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<string, LocalDataStoreSlot> m_KeyToSlotMap;

	[Token(Token = "0x4000587")]
	[FieldOffset(Offset = "0x30")]
	private long m_CookieGenerator;

	[Token(Token = "0x6000DB6")]
	[Address(RVA = "0x1B6B9B0", Offset = "0x1B69FB0", VA = "0x181B6B9B0")]
	public System.LocalDataStoreHolder CreateLocalDataStore()
	{
		return null;
	}

	[Token(Token = "0x6000DB7")]
	[Address(RVA = "0x1B6BBB0", Offset = "0x1B6A1B0", VA = "0x181B6BBB0")]
	public void DeleteLocalDataStore(System.LocalDataStore store)
	{
	}

	[Token(Token = "0x6000DB8")]
	[Address(RVA = "0x1B6B660", Offset = "0x1B69C60", VA = "0x181B6B660")]
	public LocalDataStoreSlot AllocateDataSlot()
	{
		return null;
	}

	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x1B6B8C0", Offset = "0x1B69EC0", VA = "0x181B6B8C0")]
	public LocalDataStoreSlot AllocateNamedDataSlot(string name)
	{
		return null;
	}

	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x1B6BF00", Offset = "0x1B6A500", VA = "0x181B6BF00")]
	public LocalDataStoreSlot GetNamedDataSlot(string name)
	{
		return null;
	}

	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x1B6BE30", Offset = "0x1B6A430", VA = "0x181B6BE30")]
	public void FreeNamedDataSlot(string name)
	{
	}

	[Token(Token = "0x6000DBC")]
	[Address(RVA = "0x1B6BC80", Offset = "0x1B6A280", VA = "0x181B6BC80")]
	internal void FreeDataSlot(int slot, long cookie)
	{
	}

	[Token(Token = "0x6000DBD")]
	[Address(RVA = "0x1B6C010", Offset = "0x1B6A610", VA = "0x181B6C010")]
	public void ValidateSlot(LocalDataStoreSlot slot)
	{
	}

	[Token(Token = "0x6000DBE")]
	[Address(RVA = "0x92B6E0", Offset = "0x929CE0", VA = "0x18092B6E0")]
	internal int GetSlotTableLength()
	{
		return default(int);
	}

	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x1B6C090", Offset = "0x1B6A690", VA = "0x181B6C090")]
	public LocalDataStoreMgr()
	{
	}
}
