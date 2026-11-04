// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.EntryPool
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x200058F")]
internal class EntryPool
{
	[Token(Token = "0x400136F")]
	private const int k_StackSize = 128;

	[Token(Token = "0x4001370")]
	[FieldOffset(Offset = "0x10")]
	private Stack<Entry>[] m_ThreadEntries;

	[Token(Token = "0x4001371")]
	[FieldOffset(Offset = "0x18")]
	private ImplicitPool<Entry> m_SharedPool;

	[Token(Token = "0x4001372")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Func<Entry> k_CreateAction;

	[Token(Token = "0x4001373")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Action<Entry> k_ResetAction;

	[Token(Token = "0x600298B")]
	[Address(RVA = "0x317F2D0", Offset = "0x317D8D0", VA = "0x18317F2D0")]
	public EntryPool(int maxCapacity = 1024)
	{
	}

	[Token(Token = "0x600298C")]
	[Address(RVA = "0x317EE20", Offset = "0x317D420", VA = "0x18317EE20")]
	public Entry Get()
	{
		return null;
	}

	[Token(Token = "0x600298D")]
	[Address(RVA = "0x317F0D0", Offset = "0x317D6D0", VA = "0x18317F0D0")]
	public void ReturnAll()
	{
	}
}
