// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.EntryPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x200057A")]
internal class EntryPool
{
	[Token(Token = "0x40012B1")]
	private const int k_StackSize = 128;

	[Token(Token = "0x40012B2")]
	[FieldOffset(Offset = "0x10")]
	private Stack<Entry>[] m_ThreadEntries;

	[Token(Token = "0x40012B3")]
	[FieldOffset(Offset = "0x18")]
	private ImplicitPool<Entry> m_SharedPool;

	[Token(Token = "0x40012B4")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Func<Entry> k_CreateAction;

	[Token(Token = "0x40012B5")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Action<Entry> k_ResetAction;

	[Token(Token = "0x600292A")]
	[Address(RVA = "0x6B818C0", Offset = "0x6B808C0", VA = "0x6B818C0")]
	public EntryPool(int maxCapacity = 1024)
	{
	}

	[Token(Token = "0x600292B")]
	[Address(RVA = "0x6B81AB0", Offset = "0x6B80AB0", VA = "0x6B81AB0")]
	public Entry Get()
	{
		return null;
	}

	[Token(Token = "0x600292C")]
	[Address(RVA = "0x6B81CA0", Offset = "0x6B80CA0", VA = "0x6B81CA0")]
	public void ReturnAll()
	{
	}
}
