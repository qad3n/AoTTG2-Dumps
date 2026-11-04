// ==================== AoTTG2 cross-reference ====================
// Type: System.LocalDataStoreSlot
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200017E")]
[ComVisible(true)]
public sealed class LocalDataStoreSlot
{
	[Token(Token = "0x4000580")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private System.LocalDataStoreMgr m_mgr;

	[Token(Token = "0x4000581")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int m_slot;

	[Token(Token = "0x4000582")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private long m_cookie;

	[Token(Token = "0x1700012A")]
	internal System.LocalDataStoreMgr Manager
	{
		[Token(Token = "0x6000DB2")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012B")]
	internal int Slot
	{
		[Token(Token = "0x6000DB3")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700012C")]
	internal long Cookie
	{
		[Token(Token = "0x6000DB4")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6000DB1")]
	[Address(RVA = "0x1B6C210", Offset = "0x1B6A810", VA = "0x181B6C210")]
	internal LocalDataStoreSlot(System.LocalDataStoreMgr mgr, int slot, long cookie)
	{
	}

	[Token(Token = "0x6000DB5")]
	[Address(RVA = "0x1B6C180", Offset = "0x1B6A780", VA = "0x181B6C180", Slot = "1")]
	~LocalDataStoreSlot()
	{
	}
}
