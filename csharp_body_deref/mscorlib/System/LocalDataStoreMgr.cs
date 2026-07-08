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
	[Address(RVA = "0x50008F0", Offset = "0x50008F0", VA = "0x50008F0")]
	public System.LocalDataStoreHolder CreateLocalDataStore()
	{
		return null;
	}

	[Token(Token = "0x6000D6A")]
	[Address(RVA = "0x4FFFE90", Offset = "0x4FFFE90", VA = "0x4FFFE90")]
	public void DeleteLocalDataStore(System.LocalDataStore store)
	{
	}

	[Token(Token = "0x6000D6B")]
	[Address(RVA = "0x5000B10", Offset = "0x5000B10", VA = "0x5000B10")]
	public LocalDataStoreSlot AllocateDataSlot()
	{
		return null;
	}

	[Token(Token = "0x6000D6C")]
	[Address(RVA = "0x5000DA0", Offset = "0x5000DA0", VA = "0x5000DA0")]
	public LocalDataStoreSlot AllocateNamedDataSlot(string name)
	{
		return null;
	}

	[Token(Token = "0x6000D6D")]
	[Address(RVA = "0x5000EC0", Offset = "0x5000EC0", VA = "0x5000EC0")]
	public LocalDataStoreSlot GetNamedDataSlot(string name)
	{
		return null;
	}

	[Token(Token = "0x6000D6E")]
	[Address(RVA = "0x5000FF0", Offset = "0x5000FF0", VA = "0x5000FF0")]
	public void FreeNamedDataSlot(string name)
	{
	}

	[Token(Token = "0x6000D6F")]
	[Address(RVA = "0x5000700", Offset = "0x5000700", VA = "0x5000700")]
	internal void FreeDataSlot(int slot, long cookie)
	{
	}

	[Token(Token = "0x6000D70")]
	[Address(RVA = "0x50000C0", Offset = "0x50000C0", VA = "0x50000C0")]
	public void ValidateSlot(LocalDataStoreSlot slot)
	{
	}

	[Token(Token = "0x6000D71")]
	[Address(RVA = "0x50005D0", Offset = "0x50005D0", VA = "0x50005D0")]
	internal int GetSlotTableLength()
	{
		return default(int);
	}

	[Token(Token = "0x6000D72")]
	[Address(RVA = "0x50010F0", Offset = "0x50010F0", VA = "0x50010F0")]
	public LocalDataStoreMgr()
	{
	}
}
