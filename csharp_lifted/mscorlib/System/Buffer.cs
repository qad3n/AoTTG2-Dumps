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

[Token(Token = "0x200015A")]
[ComVisible(true)]
public static class Buffer
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DC1")]
	[Address(RVA = "0x54EE750", Offset = "0x54ED750", VA = "0x54EE750")]
	internal static extern bool InternalBlockCopy(Array src, int srcOffsetBytes, Array dst, int dstOffsetBytes, int byteCount);

	[Token(Token = "0x6000DC2")]
	[Address(RVA = "0x54EE760", Offset = "0x54ED760", VA = "0x54EE760")]
	internal unsafe static int IndexOfByte(byte* src, byte value, int index, int count)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DC3")]
	[Address(RVA = "0x54EE890", Offset = "0x54ED890", VA = "0x54EE890")]
	private static extern int _ByteLength(Array array);

	[Token(Token = "0x6000DC4")]
	[Address(RVA = "0x54EE8A0", Offset = "0x54ED8A0", VA = "0x54EE8A0")]
	internal unsafe static void ZeroMemory(byte* src, long len)
	{
	}

	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x54EE900", Offset = "0x54ED900", VA = "0x54EE900")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal unsafe static void Memcpy(byte* pDest, int destIndex, byte[] src, int srcIndex, int len)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DC6")]
	[Address(RVA = "0x54EEBC0", Offset = "0x54EDBC0", VA = "0x54EEBC0")]
	internal unsafe static extern void InternalMemcpy(byte* dest, byte* src, int count);

	[Token(Token = "0x6000DC7")]
	[Address(RVA = "0x54EEBD0", Offset = "0x54EDBD0", VA = "0x54EEBD0")]
	public static int ByteLength(Array array)
	{
		return default(int);
	}

	[Token(Token = "0x6000DC8")]
	[Address(RVA = "0x54EEC60", Offset = "0x54EDC60", VA = "0x54EEC60")]
	public static void BlockCopy(Array src, int srcOffset, Array dst, int dstOffset, int count)
	{
	}

	[Token(Token = "0x6000DC9")]
	[Address(RVA = "0x54EEE10", Offset = "0x54EDE10", VA = "0x54EEE10")]
	[CLSCompliant(false)]
	public unsafe static void MemoryCopy(void* source, void* destination, long destinationSizeInBytes, long sourceBytesToCopy)
	{
	}

	[Token(Token = "0x6000DCA")]
	[Address(RVA = "0x54EEF30", Offset = "0x54EDF30", VA = "0x54EEF30")]
	internal unsafe static void memcpy4(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x6000DCB")]
	[Address(RVA = "0x54EEFF0", Offset = "0x54EDFF0", VA = "0x54EEFF0")]
	internal unsafe static void memcpy2(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x54EF070", Offset = "0x54EE070", VA = "0x54EF070")]
	private unsafe static void memcpy1(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x54EE930", Offset = "0x54ED930", VA = "0x54EE930")]
	internal unsafe static void Memcpy(byte* dest, byte* src, int len)
	{
	}

	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x54EEF00", Offset = "0x54EDF00", VA = "0x54EEF00")]
	internal unsafe static void Memmove(byte* dest, byte* src, uint len)
	{
	}

	[Token(Token = "0x6000DCF")]
	internal static void Memmove<T>(ref T destination, ref T source, ulong elementCount)
	{
	}
}
