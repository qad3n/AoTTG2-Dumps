using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000158")]
[ComVisible(true)]
public static class Buffer
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D99")]
	[Address(RVA = "0x5004770", Offset = "0x5004770", VA = "0x5004770")]
	internal static extern bool InternalBlockCopy(Array src, int srcOffsetBytes, Array dst, int dstOffsetBytes, int byteCount);

	[Token(Token = "0x6000D9A")]
	[Address(RVA = "0x5004780", Offset = "0x5004780", VA = "0x5004780")]
	internal unsafe static int IndexOfByte(byte* src, byte value, int index, int count)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D9B")]
	[Address(RVA = "0x50048C0", Offset = "0x50048C0", VA = "0x50048C0")]
	private static extern int _ByteLength(Array array);

	[Token(Token = "0x6000D9C")]
	[Address(RVA = "0x50048D0", Offset = "0x50048D0", VA = "0x50048D0")]
	internal unsafe static void ZeroMemory(byte* src, long len)
	{
	}

	[Token(Token = "0x6000D9D")]
	[Address(RVA = "0x50048F0", Offset = "0x50048F0", VA = "0x50048F0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal unsafe static void Memcpy(byte* pDest, int destIndex, byte[] src, int srcIndex, int len)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D9E")]
	[Address(RVA = "0x5004C80", Offset = "0x5004C80", VA = "0x5004C80")]
	internal unsafe static extern void InternalMemcpy(byte* dest, byte* src, int count);

	[Token(Token = "0x6000D9F")]
	[Address(RVA = "0x5004C90", Offset = "0x5004C90", VA = "0x5004C90")]
	public static int ByteLength(Array array)
	{
		return default(int);
	}

	[Token(Token = "0x6000DA0")]
	[Address(RVA = "0x5004D20", Offset = "0x5004D20", VA = "0x5004D20")]
	public static void BlockCopy(Array src, int srcOffset, Array dst, int dstOffset, int count)
	{
	}

	[Token(Token = "0x6000DA1")]
	[Address(RVA = "0x5004ED0", Offset = "0x5004ED0", VA = "0x5004ED0")]
	[CLSCompliant(false)]
	public unsafe static void MemoryCopy(void* source, void* destination, long destinationSizeInBytes, long sourceBytesToCopy)
	{
	}

	[Token(Token = "0x6000DA2")]
	[Address(RVA = "0x5004FF0", Offset = "0x5004FF0", VA = "0x5004FF0")]
	internal unsafe static void memcpy4(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x6000DA3")]
	[Address(RVA = "0x50050D0", Offset = "0x50050D0", VA = "0x50050D0")]
	internal unsafe static void memcpy2(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x6000DA4")]
	[Address(RVA = "0x50051A0", Offset = "0x50051A0", VA = "0x50051A0")]
	private unsafe static void memcpy1(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x6000DA5")]
	[Address(RVA = "0x5004920", Offset = "0x5004920", VA = "0x5004920")]
	internal unsafe static void Memcpy(byte* dest, byte* src, int len)
	{
	}

	[Token(Token = "0x6000DA6")]
	[Address(RVA = "0x5004FC0", Offset = "0x5004FC0", VA = "0x5004FC0")]
	internal unsafe static void Memmove(byte* dest, byte* src, uint len)
	{
	}

	[Token(Token = "0x6000DA7")]
	internal static void Memmove<T>(ref T destination, ref T source, ulong elementCount)
	{
	}
}
