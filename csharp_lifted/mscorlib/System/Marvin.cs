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

[Token(Token = "0x20000E5")]
internal static class Marvin
{
	[Token(Token = "0x17000094")]
	public static ulong DefaultSeed
	{
		[Token(Token = "0x6000851")]
		[Address(RVA = "0x54BA6C0", Offset = "0x54B96C0", VA = "0x54BA6C0")]
		[CompilerGenerated]
		get
		{
			return default(ulong);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600084D")]
	[Address(RVA = "0x54BA0B0", Offset = "0x54B90B0", VA = "0x54BA0B0")]
	public static int ComputeHash32(ReadOnlySpan<byte> data, ulong seed)
	{
		return default(int);
	}

	[Token(Token = "0x600084E")]
	[Address(RVA = "0x54BA130", Offset = "0x54B9130", VA = "0x54BA130")]
	public static int ComputeHash32(ref byte data, int count, ulong seed)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600084F")]
	[Address(RVA = "0x54BA640", Offset = "0x54B9640", VA = "0x54BA640")]
	private static void Block(ref uint rp0, ref uint rp1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000850")]
	[Address(RVA = "0x54BA6B0", Offset = "0x54B96B0", VA = "0x54BA6B0")]
	private static uint _rotl(uint value, int shift)
	{
		return default(uint);
	}

	[Token(Token = "0x6000852")]
	[Address(RVA = "0x54BA730", Offset = "0x54B9730", VA = "0x54BA730")]
	private static ulong GenerateSeed()
	{
		return default(ulong);
	}
}
