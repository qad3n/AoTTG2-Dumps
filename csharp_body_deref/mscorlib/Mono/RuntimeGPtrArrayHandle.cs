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

[Token(Token = "0x2000036")]
internal struct RuntimeGPtrArrayHandle
{
	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0x0")]
	private unsafe Mono.RuntimeStructs.GPtrArray* value;

	[Token(Token = "0x1700000B")]
	internal int Length
	{
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x194C6E0", Offset = "0x194ACE0", VA = "0x18194C6E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000C")]
	internal IntPtr this[int i]
	{
		[Token(Token = "0x600006D")]
		[Address(RVA = "0x194C6D0", Offset = "0x194ACD0", VA = "0x18194C6D0")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x194C500", Offset = "0x194AB00", VA = "0x18194C500")]
	internal RuntimeGPtrArrayHandle(IntPtr ptr)
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x194C650", Offset = "0x194AC50", VA = "0x18194C650")]
	internal IntPtr Lookup(int i)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006F")]
	[Address(RVA = "0x194C640", Offset = "0x194AC40", VA = "0x18194C640")]
	private unsafe static extern void GPtrArrayFree(Mono.RuntimeStructs.GPtrArray* value);

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x194C620", Offset = "0x194AC20", VA = "0x18194C620")]
	internal static void DestroyAndFree(ref Mono.RuntimeGPtrArrayHandle h)
	{
	}
}
