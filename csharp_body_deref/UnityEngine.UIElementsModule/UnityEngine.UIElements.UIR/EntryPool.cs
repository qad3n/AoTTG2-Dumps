// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.EntryPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004B7")]
internal class EntryPool : ImplicitPool<Entry>
{
	[Token(Token = "0x4000EDE")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Func<Entry> k_CreateAction;

	[Token(Token = "0x4000EDF")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Action<Entry> k_ResetAction;

	[Token(Token = "0x6001D35")]
	[Address(RVA = "0x4F95560", Offset = "0x4F95560", VA = "0x4F95560")]
	public EntryPool(int maxCapacity = 1000)
	{
	}
}
