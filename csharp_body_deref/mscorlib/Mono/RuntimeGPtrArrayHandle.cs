// ==================== AoTTG2 cross-reference ====================
// Type: Mono.RuntimeGPtrArrayHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Mono;

[Token(Token = "0x2000018")]
internal struct RuntimeGPtrArrayHandle
{
	[Token(Token = "0x4000090")]
	[FieldOffset(Offset = "0x0")]
	private unsafe Mono.RuntimeStructs.GPtrArray* value;

	[Token(Token = "0x1700000B")]
	internal int Length
	{
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x52D9520", Offset = "0x52D8520", VA = "0x52D9520")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000C")]
	internal IntPtr this[int i]
	{
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x52D9540", Offset = "0x52D8540", VA = "0x52D9540")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x52D9500", Offset = "0x52D8500", VA = "0x52D9500")]
	internal RuntimeGPtrArrayHandle(IntPtr ptr)
	{
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x52D95A0", Offset = "0x52D85A0", VA = "0x52D95A0")]
	internal IntPtr Lookup(int i)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000059")]
	[Address(RVA = "0x52D9600", Offset = "0x52D8600", VA = "0x52D9600")]
	private unsafe static extern void GPtrArrayFree(Mono.RuntimeStructs.GPtrArray* value);

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x52D9610", Offset = "0x52D8610", VA = "0x52D9610")]
	internal static void DestroyAndFree(ref Mono.RuntimeGPtrArrayHandle h)
	{
	}
}
