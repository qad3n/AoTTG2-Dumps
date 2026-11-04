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
		[Address(RVA = "0x25B8770", Offset = "0x25B6D70", VA = "0x1825B8770")]
		internal static extern SafeBrotliDecoderHandle BrotliDecoderCreateInstance(IntPtr allocFunc, IntPtr freeFunc, IntPtr opaque);

		[PreserveSig]
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x25B87F0", Offset = "0x25B6DF0", VA = "0x1825B87F0")]
		internal unsafe static extern int BrotliDecoderDecompressStream(SafeBrotliDecoderHandle state, ref IntPtr availableIn, byte** nextIn, ref IntPtr availableOut, byte** nextOut, out IntPtr totalOut);

		[PreserveSig]
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x25B8880", Offset = "0x25B6E80", VA = "0x1825B8880")]
		internal static extern void BrotliDecoderDestroyInstance(IntPtr state);

		[PreserveSig]
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x25B8890", Offset = "0x25B6E90", VA = "0x1825B8890")]
		internal static extern bool BrotliDecoderIsFinished(SafeBrotliDecoderHandle state);

		[PreserveSig]
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x25B89A0", Offset = "0x25B6FA0", VA = "0x1825B89A0")]
		internal static extern SafeBrotliEncoderHandle BrotliEncoderCreateInstance(IntPtr allocFunc, IntPtr freeFunc, IntPtr opaque);

		[PreserveSig]
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x25B8AA0", Offset = "0x25B70A0", VA = "0x1825B8AA0")]
		internal static extern bool BrotliEncoderSetParameter(SafeBrotliEncoderHandle state, BrotliEncoderParameter parameter, uint value);

		[PreserveSig]
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x25B8900", Offset = "0x25B6F00", VA = "0x1825B8900")]
		internal unsafe static extern bool BrotliEncoderCompressStream(SafeBrotliEncoderHandle state, BrotliEncoderOperation op, ref IntPtr availableIn, byte** nextIn, ref IntPtr availableOut, byte** nextOut, out IntPtr totalOut);

		[PreserveSig]
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x25B8A30", Offset = "0x25B7030", VA = "0x1825B8A30")]
		internal static extern bool BrotliEncoderHasMoreOutput(SafeBrotliEncoderHandle state);

		[PreserveSig]
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x25B8A20", Offset = "0x25B7020", VA = "0x1825B8A20")]
		internal static extern void BrotliEncoderDestroyInstance(IntPtr state);
	}
}
