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
		[Address(RVA = "0x465F510", Offset = "0x465F510", VA = "0x465F510")]
		internal static extern SafeBrotliDecoderHandle BrotliDecoderCreateInstance(IntPtr allocFunc, IntPtr freeFunc, IntPtr opaque);

		[PreserveSig]
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x465F590", Offset = "0x465F590", VA = "0x465F590")]
		internal unsafe static extern int BrotliDecoderDecompressStream(SafeBrotliDecoderHandle state, ref IntPtr availableIn, byte** nextIn, ref IntPtr availableOut, byte** nextOut, out IntPtr totalOut);

		[PreserveSig]
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x465F620", Offset = "0x465F620", VA = "0x465F620")]
		internal static extern void BrotliDecoderDestroyInstance(IntPtr state);

		[PreserveSig]
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x465F630", Offset = "0x465F630", VA = "0x465F630")]
		internal static extern bool BrotliDecoderIsFinished(SafeBrotliDecoderHandle state);

		[PreserveSig]
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x465F690", Offset = "0x465F690", VA = "0x465F690")]
		internal static extern SafeBrotliEncoderHandle BrotliEncoderCreateInstance(IntPtr allocFunc, IntPtr freeFunc, IntPtr opaque);

		[PreserveSig]
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x465F710", Offset = "0x465F710", VA = "0x465F710")]
		internal static extern bool BrotliEncoderSetParameter(SafeBrotliEncoderHandle state, BrotliEncoderParameter parameter, uint value);

		[PreserveSig]
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x465F780", Offset = "0x465F780", VA = "0x465F780")]
		internal unsafe static extern bool BrotliEncoderCompressStream(SafeBrotliEncoderHandle state, BrotliEncoderOperation op, ref IntPtr availableIn, byte** nextIn, ref IntPtr availableOut, byte** nextOut, out IntPtr totalOut);

		[PreserveSig]
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x465F820", Offset = "0x465F820", VA = "0x465F820")]
		internal static extern bool BrotliEncoderHasMoreOutput(SafeBrotliEncoderHandle state);

		[PreserveSig]
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x465F880", Offset = "0x465F880", VA = "0x465F880")]
		internal static extern void BrotliEncoderDestroyInstance(IntPtr state);
	}
}
