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

[Token(Token = "0x2000182")]
[ComVisible(true)]
public static class Buffer
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x1B5DBB0", Offset = "0x1B5C1B0", VA = "0x181B5DBB0")]
	internal static extern bool InternalBlockCopy(Array src, int srcOffsetBytes, Array dst, int dstOffsetBytes, int byteCount);

	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x1B5DB00", Offset = "0x1B5C100", VA = "0x181B5DB00")]
	internal unsafe static int IndexOfByte(byte* src, byte value, int index, int count)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x1B5DF70", Offset = "0x1B5C570", VA = "0x181B5DF70")]
	private static extern int _ByteLength(Array array);

	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x1B5DF50", Offset = "0x1B5C550", VA = "0x181B5DF50")]
	internal unsafe static void ZeroMemory(byte* src, long len)
	{
	}

	[Token(Token = "0x6000DEA")]
	[Address(RVA = "0x1B5DE00", Offset = "0x1B5C400", VA = "0x181B5DE00")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal unsafe static void Memcpy(byte* pDest, int destIndex, byte[] src, int srcIndex, int len)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x1B5DBC0", Offset = "0x1B5C1C0", VA = "0x181B5DBC0")]
	internal unsafe static extern void InternalMemcpy(byte* dest, byte* src, int count);

	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x1B5DA50", Offset = "0x1B5C050", VA = "0x181B5DA50")]
	public static int ByteLength(Array array)
	{
		return default(int);
	}

	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x1B5D7E0", Offset = "0x1B5BDE0", VA = "0x181B5D7E0")]
	public static void BlockCopy(Array src, int srcOffset, Array dst, int dstOffset, int count)
	{
	}

	[Token(Token = "0x6000DEE")]
	[Address(RVA = "0x1B5DE80", Offset = "0x1B5C480", VA = "0x181B5DE80")]
	[CLSCompliant(false)]
	public unsafe static void MemoryCopy(void* source, void* destination, long destinationSizeInBytes, long sourceBytesToCopy)
	{
	}

	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x1B5E090", Offset = "0x1B5C690", VA = "0x181B5E090")]
	internal unsafe static void memcpy4(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x6000DF0")]
	[Address(RVA = "0x1B5E010", Offset = "0x1B5C610", VA = "0x181B5E010")]
	internal unsafe static void memcpy2(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x6000DF1")]
	[Address(RVA = "0x1B5DF80", Offset = "0x1B5C580", VA = "0x181B5DF80")]
	private unsafe static void memcpy1(byte* dest, byte* src, int size)
	{
	}

	[Token(Token = "0x6000DF2")]
	[Address(RVA = "0x1B5DBD0", Offset = "0x1B5C1D0", VA = "0x181B5DBD0")]
	internal unsafe static void Memcpy(byte* dest, byte* src, int len)
	{
	}

	[Token(Token = "0x6000DF3")]
	[Address(RVA = "0x1B5DE50", Offset = "0x1B5C450", VA = "0x181B5DE50")]
	internal unsafe static void Memmove(byte* dest, byte* src, uint len)
	{
	}

	[Token(Token = "0x6000DF4")]
	internal static void Memmove<T>(ref T destination, ref T source, ulong elementCount)
	{
	}
}
