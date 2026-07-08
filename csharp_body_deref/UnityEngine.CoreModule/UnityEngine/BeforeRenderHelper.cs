using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Events;

namespace UnityEngine;

[Token(Token = "0x20000A2")]
internal static class BeforeRenderHelper
{
	[Token(Token = "0x20000A3")]
	private struct OrderBlock
	{
		[Token(Token = "0x40001B1")]
		[FieldOffset(Offset = "0x0")]
		internal int order;

		[Token(Token = "0x40001B2")]
		[FieldOffset(Offset = "0x8")]
		internal UnityAction callback;
	}

	[Token(Token = "0x40001B0")]
	[FieldOffset(Offset = "0x0")]
	private static List<OrderBlock> s_OrderBlocks;

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x4A88600", Offset = "0x4A88600", VA = "0x4A88600")]
	public static void Invoke()
	{
	}
}
