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
		[Token(Token = "0x6000843")]
		[Address(RVA = "0x3CB7770", Offset = "0x3CB7770", VA = "0x3CB7770")]
		[CompilerGenerated]
		get
		{
			return default(ulong);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600083F")]
	[Address(RVA = "0x3CB7110", Offset = "0x3CB7110", VA = "0x3CB7110")]
	public static int ComputeHash32(ReadOnlySpan<byte> data, ulong seed)
	{
		return default(int);
	}

	[Token(Token = "0x6000840")]
	[Address(RVA = "0x3CB7190", Offset = "0x3CB7190", VA = "0x3CB7190")]
	public static int ComputeHash32(ref byte data, int count, ulong seed)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000841")]
	[Address(RVA = "0x3CB76F0", Offset = "0x3CB76F0", VA = "0x3CB76F0")]
	private static void Block(ref uint rp0, ref uint rp1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000842")]
	[Address(RVA = "0x3CB7760", Offset = "0x3CB7760", VA = "0x3CB7760")]
	private static uint _rotl(uint value, int shift)
	{
		return default(uint);
	}

	[Token(Token = "0x6000844")]
	[Address(RVA = "0x3CB77E0", Offset = "0x3CB77E0", VA = "0x3CB77E0")]
	private static ulong GenerateSeed()
	{
		return default(ulong);
	}
}
