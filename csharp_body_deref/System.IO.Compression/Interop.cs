using System;
using System.IO.Compression;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;

[Token(Token = "0x2000002")]
internal static class Interop
{
	[Token(Token = "0x2000003")]
	internal static class Brotli
	{
		[PreserveSig]
		[Token(Token = "0x6000001")]
		[Address(RVA = "0x4321DB0", Offset = "0x4321DB0", VA = "0x4321DB0")]
		internal static extern SafeBrotliDecoderHandle BrotliDecoderCreateInstance(IntPtr allocFunc, IntPtr freeFunc, IntPtr opaque);

		[PreserveSig]
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x4321E30", Offset = "0x4321E30", VA = "0x4321E30")]
		internal unsafe static extern int BrotliDecoderDecompressStream(SafeBrotliDecoderHandle state, ref IntPtr availableIn, byte** nextIn, ref IntPtr availableOut, byte** nextOut, out IntPtr totalOut);

		[PreserveSig]
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x4321EC0", Offset = "0x4321EC0", VA = "0x4321EC0")]
		internal static extern void BrotliDecoderDestroyInstance(IntPtr state);

		[PreserveSig]
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x4321ED0", Offset = "0x4321ED0", VA = "0x4321ED0")]
		internal static extern bool BrotliDecoderIsFinished(SafeBrotliDecoderHandle state);

		[PreserveSig]
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x4321F30", Offset = "0x4321F30", VA = "0x4321F30")]
		internal static extern SafeBrotliEncoderHandle BrotliEncoderCreateInstance(IntPtr allocFunc, IntPtr freeFunc, IntPtr opaque);

		[PreserveSig]
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x4321FB0", Offset = "0x4321FB0", VA = "0x4321FB0")]
		internal static extern bool BrotliEncoderSetParameter(SafeBrotliEncoderHandle state, BrotliEncoderParameter parameter, uint value);

		[PreserveSig]
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x4322020", Offset = "0x4322020", VA = "0x4322020")]
		internal unsafe static extern bool BrotliEncoderCompressStream(SafeBrotliEncoderHandle state, BrotliEncoderOperation op, ref IntPtr availableIn, byte** nextIn, ref IntPtr availableOut, byte** nextOut, out IntPtr totalOut);

		[PreserveSig]
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x43220C0", Offset = "0x43220C0", VA = "0x43220C0")]
		internal static extern bool BrotliEncoderHasMoreOutput(SafeBrotliEncoderHandle state);

		[PreserveSig]
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x4322120", Offset = "0x4322120", VA = "0x4322120")]
		internal static extern void BrotliEncoderDestroyInstance(IntPtr state);
	}
}
