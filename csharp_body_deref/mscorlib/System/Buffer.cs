// ==================== AoTTG2 cross-reference ====================
// Type: System.Buffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3CEA290", Offset = "0x3CEA290", VA = "0x3CEA290")]
	internal static extern bool InternalBlockCopy(Array src, int srcOffsetBytes, Array dst, int dstOffsetBytes, int byteCount);

	[Token(Token = "0x6000D9A")]
	[Address(RVA = "0x3CEA2A0", Offset = "0x3CEA2A0", VA = "0x3CEA2A0")]
	internal unsafe static int IndexOfByte(byte* src, byte value, int index, int count)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D9B")]
	[Address(RVA = "0x3CEA3E0", Offset = "0x3CEA3E0", VA = "0x3CEA3E0")]
	private static extern int _ByteLength(Array array);

	[Token(Token = "0x6000D9C")]
	[Address(RVA = "0x3CEA3F0", Offset = "0x3CEA3F0", VA = "0x3CEA3F0")]
	internal unsafe static void ZeroMemory(byte* src, long len)
	{
	}

	[Token(Token = "0x6000D9D")]
	[Address(RVA = "0x3CEA410", Offset = "0x3CEA410", VA = "0x3CEA410")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal unsafe static void Memcpy(byte* pDest, int destIndex, byte[] src, int srcIndex, int len)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D9E")]
	[Address(RVA = "0x3CEA7A0", Offset = "0x3CEA7A0", VA = "0x3CEA7A0")]
	internal unsafe static extern void InternalMemcpy(byte* dest, byte* src, int count);

	[Token(Token = "0x6000D9F")]
	[Address(RVA = "0x3CEA7B0", Offset = "0x3CEA7B0", VA = "0x3CEA7B0")]
	public static int ByteLength(Array array)
	{
		return default(int);
	}

	[Token(Token = "0x6000DA0")]
	[Address(RVA = "0x3CEA840", Offset = "0x3CEA840", VA = "0x3CEA840")]
	public static void BlockCopy(Array src, int srcOffset, Array dst, int dstOffset, int count)
	{
	}

	[Token(Token = "0x6000DA1")]
	[Address(RVA = "0x3CEA9F0", Offset = "0x3CEA9F0", VA = "0x3CEA9F0")]
	[CLSCompliant(false)]
	public unsafe static void MemoryCopy(void* source, void* destination, long destinationSizeInBytes, long sourceBytesToCopy)
	{
	}

	[Token(Token = "0x6000DA2")]
	[Address(RVA = "0x3CEAB10", Offset = "0x3CEAB10", VA = "0x3CEAB10")]
	internal unsafe static void memcpy4(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x6000DA3")]
	[Address(RVA = "0x3CEABF0", Offset = "0x3CEABF0", VA = "0x3CEABF0")]
	internal unsafe static void memcpy2(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x6000DA4")]
	[Address(RVA = "0x3CEACC0", Offset = "0x3CEACC0", VA = "0x3CEACC0")]
	private unsafe static void memcpy1(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x6000DA5")]
	[Address(RVA = "0x3CEA440", Offset = "0x3CEA440", VA = "0x3CEA440")]
	internal unsafe static void Memcpy(byte* dest, byte* src, int len)
	{
	}

	[Token(Token = "0x6000DA6")]
	[Address(RVA = "0x3CEAAE0", Offset = "0x3CEAAE0", VA = "0x3CEAAE0")]
	internal unsafe static void Memmove(byte* dest, byte* src, uint len)
	{
	}

	[Token(Token = "0x6000DA7")]
	internal static void Memmove<T>(ref T destination, ref T source, ulong elementCount)
	{
	}
}
