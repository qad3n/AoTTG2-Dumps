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
		[Address(RVA = "0x5000630", Offset = "0x5000630", VA = "0x5000630")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012A")]
	internal int Slot
	{
		[Token(Token = "0x6000D66")]
		[Address(RVA = "0x5000640", Offset = "0x5000640", VA = "0x5000640")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700012B")]
	internal long Cookie
	{
		[Token(Token = "0x6000D67")]
		[Address(RVA = "0x5000650", Offset = "0x5000650", VA = "0x5000650")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6000D64")]
	[Address(RVA = "0x50005F0", Offset = "0x50005F0", VA = "0x50005F0")]
	internal LocalDataStoreSlot(System.LocalDataStoreMgr mgr, int slot, long cookie)
	{
	}

	[Token(Token = "0x6000D68")]
	[Address(RVA = "0x5000660", Offset = "0x5000660", VA = "0x5000660", Slot = "1")]
	~LocalDataStoreSlot()
	{
	}
}
