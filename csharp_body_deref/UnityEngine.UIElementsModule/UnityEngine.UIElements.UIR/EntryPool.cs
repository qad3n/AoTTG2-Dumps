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
	[Address(RVA = "0x4C6DC30", Offset = "0x4C6DC30", VA = "0x4C6DC30")]
	public EntryPool(int maxCapacity = 1000)
	{
	}
}
