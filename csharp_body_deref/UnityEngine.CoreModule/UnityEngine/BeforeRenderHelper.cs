// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.BeforeRenderHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Events;

namespace UnityEngine;

[Token(Token = "0x20000C3")]
internal static class BeforeRenderHelper
{
	[Token(Token = "0x20000C4")]
	private struct OrderBlock
	{
		[Token(Token = "0x4000206")]
		[FieldOffset(Offset = "0x0")]
		internal int order;

		[Token(Token = "0x4000207")]
		[FieldOffset(Offset = "0x8")]
		internal UnityAction callback;
	}

	[Token(Token = "0x4000205")]
	[FieldOffset(Offset = "0x0")]
	private static List<OrderBlock> s_OrderBlocks;

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x68BDD40", Offset = "0x68BCD40", VA = "0x68BDD40")]
	public static void Invoke()
	{
	}
}
