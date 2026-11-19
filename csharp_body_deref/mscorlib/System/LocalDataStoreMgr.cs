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

[Token(Token = "0x2000157")]
internal sealed class LocalDataStoreMgr
{
	[Token(Token = "0x40004E1")]
	[FieldOffset(Offset = "0x10")]
	private bool[] m_SlotInfoTable;

	[Token(Token = "0x40004E2")]
	[FieldOffset(Offset = "0x18")]
	private int m_FirstAvailableSlot;

	[Token(Token = "0x40004E3")]
	[FieldOffset(Offset = "0x20")]
	private List<System.LocalDataStore> m_ManagedLocalDataStores;

	[Token(Token = "0x40004E4")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<string, LocalDataStoreSlot> m_KeyToSlotMap;

	[Token(Token = "0x40004E5")]
	[FieldOffset(Offset = "0x30")]
	private long m_CookieGenerator;

	[Token(Token = "0x6000D91")]
	[Address(RVA = "0x54EAB40", Offset = "0x54E9B40", VA = "0x54EAB40")]
	public System.LocalDataStoreHolder CreateLocalDataStore()
	{
		return null;
	}

	[Token(Token = "0x6000D92")]
	[Address(RVA = "0x54EA1A0", Offset = "0x54E91A0", VA = "0x54EA1A0")]
	public void DeleteLocalDataStore(System.LocalDataStore store)
	{
	}

	[Token(Token = "0x6000D93")]
	[Address(RVA = "0x54EAD40", Offset = "0x54E9D40", VA = "0x54EAD40")]
	public LocalDataStoreSlot AllocateDataSlot()
	{
		return null;
	}

	[Token(Token = "0x6000D94")]
	[Address(RVA = "0x54EAF90", Offset = "0x54E9F90", VA = "0x54EAF90")]
	public LocalDataStoreSlot AllocateNamedDataSlot(string name)
	{
		return null;
	}

	[Token(Token = "0x6000D95")]
	[Address(RVA = "0x54EB0A0", Offset = "0x54EA0A0", VA = "0x54EB0A0")]
	public LocalDataStoreSlot GetNamedDataSlot(string name)
	{
		return null;
	}

	[Token(Token = "0x6000D96")]
	[Address(RVA = "0x54EB1C0", Offset = "0x54EA1C0", VA = "0x54EB1C0")]
	public void FreeNamedDataSlot(string name)
	{
	}

	[Token(Token = "0x6000D97")]
	[Address(RVA = "0x54EA970", Offset = "0x54E9970", VA = "0x54EA970")]
	internal void FreeDataSlot(int slot, long cookie)
	{
	}

	[Token(Token = "0x6000D98")]
	[Address(RVA = "0x54EA3A0", Offset = "0x54E93A0", VA = "0x54EA3A0")]
	public void ValidateSlot(LocalDataStoreSlot slot)
	{
	}

	[Token(Token = "0x6000D99")]
	[Address(RVA = "0x54EA830", Offset = "0x54E9830", VA = "0x54EA830")]
	internal int GetSlotTableLength()
	{
		return default(int);
	}

	[Token(Token = "0x6000D9A")]
	[Address(RVA = "0x54EB2B0", Offset = "0x54EA2B0", VA = "0x54EB2B0")]
	public LocalDataStoreMgr()
	{
	}
}
