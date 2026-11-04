// ==================== AoTTG2 cross-reference ====================
// Type: System.Marvin
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200010D")]
internal static class Marvin
{
	[Token(Token = "0x17000094")]
	public static ulong DefaultSeed
	{
		[Token(Token = "0x6000876")]
		[Address(RVA = "0x1B2BB40", Offset = "0x1B2A140", VA = "0x181B2BB40")]
		[CompilerGenerated]
		get
		{
			return default(ulong);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000872")]
	[Address(RVA = "0x1B2B560", Offset = "0x1B29B60", VA = "0x181B2B560")]
	public static int ComputeHash32(ReadOnlySpan<byte> data, ulong seed)
	{
		return default(int);
	}

	[Token(Token = "0x6000873")]
	[Address(RVA = "0x1B2B600", Offset = "0x1B29C00", VA = "0x181B2B600")]
	public static int ComputeHash32(ref byte data, int count, ulong seed)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000874")]
	[Address(RVA = "0x1B2B4D0", Offset = "0x1B29AD0", VA = "0x181B2B4D0")]
	private static void Block(ref uint rp0, ref uint rp1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000875")]
	[Address(RVA = "0x1B27A20", Offset = "0x1B26020", VA = "0x181B27A20")]
	private static uint _rotl(uint value, int shift)
	{
		return default(uint);
	}

	[Token(Token = "0x6000877")]
	[Address(RVA = "0x1B2BAF0", Offset = "0x1B2A0F0", VA = "0x181B2BAF0")]
	private static ulong GenerateSeed()
	{
		return default(ulong);
	}
}
