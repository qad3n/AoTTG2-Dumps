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

[Token(Token = "0x2000156")]
[ComVisible(true)]
public sealed class LocalDataStoreSlot
{
	[Token(Token = "0x40004DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private System.LocalDataStoreMgr m_mgr;

	[Token(Token = "0x40004DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int m_slot;

	[Token(Token = "0x40004E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private long m_cookie;

	[Token(Token = "0x1700012A")]
	internal System.LocalDataStoreMgr Manager
	{
		[Token(Token = "0x6000D8D")]
		[Address(RVA = "0x54EA890", Offset = "0x54E9890", VA = "0x54EA890")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012B")]
	internal int Slot
	{
		[Token(Token = "0x6000D8E")]
		[Address(RVA = "0x54EA8A0", Offset = "0x54E98A0", VA = "0x54EA8A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700012C")]
	internal long Cookie
	{
		[Token(Token = "0x6000D8F")]
		[Address(RVA = "0x54EA8B0", Offset = "0x54E98B0", VA = "0x54EA8B0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6000D8C")]
	[Address(RVA = "0x54EA850", Offset = "0x54E9850", VA = "0x54EA850")]
	internal LocalDataStoreSlot(System.LocalDataStoreMgr mgr, int slot, long cookie)
	{
	}

	[Token(Token = "0x6000D90")]
	[Address(RVA = "0x54EA8C0", Offset = "0x54E98C0", VA = "0x54EA8C0", Slot = "1")]
	~LocalDataStoreSlot()
	{
	}
}
