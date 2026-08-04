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

[Token(Token = "0x2000154")]
[ComVisible(true)]
public sealed class LocalDataStoreSlot
{
	[Token(Token = "0x400051C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private System.LocalDataStoreMgr m_mgr;

	[Token(Token = "0x400051D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int m_slot;

	[Token(Token = "0x400051E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private long m_cookie;

	[Token(Token = "0x17000129")]
	internal System.LocalDataStoreMgr Manager
	{
		[Token(Token = "0x6000D65")]
		[Address(RVA = "0x3CE6150", Offset = "0x3CE6150", VA = "0x3CE6150")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012A")]
	internal int Slot
	{
		[Token(Token = "0x6000D66")]
		[Address(RVA = "0x3CE6160", Offset = "0x3CE6160", VA = "0x3CE6160")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700012B")]
	internal long Cookie
	{
		[Token(Token = "0x6000D67")]
		[Address(RVA = "0x3CE6170", Offset = "0x3CE6170", VA = "0x3CE6170")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6000D64")]
	[Address(RVA = "0x3CE6110", Offset = "0x3CE6110", VA = "0x3CE6110")]
	internal LocalDataStoreSlot(System.LocalDataStoreMgr mgr, int slot, long cookie)
	{
	}

	[Token(Token = "0x6000D68")]
	[Address(RVA = "0x3CE6180", Offset = "0x3CE6180", VA = "0x3CE6180", Slot = "1")]
	~LocalDataStoreSlot()
	{
	}
}
