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
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x4DE8390", Offset = "0x4DE8390", VA = "0x4DE8390")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000C")]
	internal IntPtr this[int i]
	{
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x4DE83B0", Offset = "0x4DE83B0", VA = "0x4DE83B0")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x4DE8370", Offset = "0x4DE8370", VA = "0x4DE8370")]
	internal RuntimeGPtrArrayHandle(IntPtr ptr)
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x4DE8410", Offset = "0x4DE8410", VA = "0x4DE8410")]
	internal IntPtr Lookup(int i)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000057")]
	[Address(RVA = "0x4DE8470", Offset = "0x4DE8470", VA = "0x4DE8470")]
	private unsafe static extern void GPtrArrayFree(Mono.RuntimeStructs.GPtrArray* value);

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x4DE8480", Offset = "0x4DE8480", VA = "0x4DE8480")]
	internal static void DestroyAndFree(ref Mono.RuntimeGPtrArrayHandle h)
	{
	}
}
