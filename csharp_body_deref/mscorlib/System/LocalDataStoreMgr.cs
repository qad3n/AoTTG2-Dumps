// ==================== AoTTG2 cross-reference ====================
// Type: System.LocalDataStoreMgr
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000155")]
internal sealed class LocalDataStoreMgr
{
	[Token(Token = "0x400051F")]
	private const int InitialSlotTableSize = 64;

	[Token(Token = "0x4000520")]
	private const int SlotTableDoubleThreshold = 512;

	[Token(Token = "0x4000521")]
	private const int LargeSlotTableSizeIncrease = 128;

	[Token(Token = "0x4000522")]
	[FieldOffset(Offset = "0x10")]
	private bool[] m_SlotInfoTable;

	[Token(Token = "0x4000523")]
	[FieldOffset(Offset = "0x18")]
	private int m_FirstAvailableSlot;

	[Token(Token = "0x4000524")]
	[FieldOffset(Offset = "0x20")]
	private List<System.LocalDataStore> m_ManagedLocalDataStores;

	[Token(Token = "0x4000525")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<string, LocalDataStoreSlot> m_KeyToSlotMap;

	[Token(Token = "0x4000526")]
	[FieldOffset(Offset = "0x30")]
	private long m_CookieGenerator;

	[Token(Token = "0x6000D69")]
	[Address(RVA = "0x3CE6410", Offset = "0x3CE6410", VA = "0x3CE6410")]
	public System.LocalDataStoreHolder CreateLocalDataStore()
	{
		return null;
	}

	[Token(Token = "0x6000D6A")]
	[Address(RVA = "0x3CE59B0", Offset = "0x3CE59B0", VA = "0x3CE59B0")]
	public void DeleteLocalDataStore(System.LocalDataStore store)
	{
	}

	[Token(Token = "0x6000D6B")]
	[Address(RVA = "0x3CE6630", Offset = "0x3CE6630", VA = "0x3CE6630")]
	public LocalDataStoreSlot AllocateDataSlot()
	{
		return null;
	}

	[Token(Token = "0x6000D6C")]
	[Address(RVA = "0x3CE68C0", Offset = "0x3CE68C0", VA = "0x3CE68C0")]
	public LocalDataStoreSlot AllocateNamedDataSlot(string name)
	{
		return null;
	}

	[Token(Token = "0x6000D6D")]
	[Address(RVA = "0x3CE69E0", Offset = "0x3CE69E0", VA = "0x3CE69E0")]
	public LocalDataStoreSlot GetNamedDataSlot(string name)
	{
		return null;
	}

	[Token(Token = "0x6000D6E")]
	[Address(RVA = "0x3CE6B10", Offset = "0x3CE6B10", VA = "0x3CE6B10")]
	public void FreeNamedDataSlot(string name)
	{
	}

	[Token(Token = "0x6000D6F")]
	[Address(RVA = "0x3CE6220", Offset = "0x3CE6220", VA = "0x3CE6220")]
	internal void FreeDataSlot(int slot, long cookie)
	{
	}

	[Token(Token = "0x6000D70")]
	[Address(RVA = "0x3CE5BE0", Offset = "0x3CE5BE0", VA = "0x3CE5BE0")]
	public void ValidateSlot(LocalDataStoreSlot slot)
	{
	}

	[Token(Token = "0x6000D71")]
	[Address(RVA = "0x3CE60F0", Offset = "0x3CE60F0", VA = "0x3CE60F0")]
	internal int GetSlotTableLength()
	{
		return default(int);
	}

	[Token(Token = "0x6000D72")]
	[Address(RVA = "0x3CE6C10", Offset = "0x3CE6C10", VA = "0x3CE6C10")]
	public LocalDataStoreMgr()
	{
	}
}
