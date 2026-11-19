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
		[Address(RVA = "0x5F5E9C0", Offset = "0x5F5D9C0", VA = "0x5F5E9C0")]
		internal static extern SafeBrotliDecoderHandle BrotliDecoderCreateInstance(IntPtr allocFunc, IntPtr freeFunc, IntPtr opaque);

		[PreserveSig]
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x5F5EA30", Offset = "0x5F5DA30", VA = "0x5F5EA30")]
		internal unsafe static extern int BrotliDecoderDecompressStream(SafeBrotliDecoderHandle state, ref IntPtr availableIn, byte** nextIn, ref IntPtr availableOut, byte** nextOut, out IntPtr totalOut);

		[PreserveSig]
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x5F5EAC0", Offset = "0x5F5DAC0", VA = "0x5F5EAC0")]
		internal static extern void BrotliDecoderDestroyInstance(IntPtr state);

		[PreserveSig]
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x5F5EAD0", Offset = "0x5F5DAD0", VA = "0x5F5EAD0")]
		internal static extern bool BrotliDecoderIsFinished(SafeBrotliDecoderHandle state);

		[PreserveSig]
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x5F5EB30", Offset = "0x5F5DB30", VA = "0x5F5EB30")]
		internal static extern SafeBrotliEncoderHandle BrotliEncoderCreateInstance(IntPtr allocFunc, IntPtr freeFunc, IntPtr opaque);

		[PreserveSig]
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x5F5EBA0", Offset = "0x5F5DBA0", VA = "0x5F5EBA0")]
		internal static extern bool BrotliEncoderSetParameter(SafeBrotliEncoderHandle state, BrotliEncoderParameter parameter, uint value);

		[PreserveSig]
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x5F5EC10", Offset = "0x5F5DC10", VA = "0x5F5EC10")]
		internal unsafe static extern bool BrotliEncoderCompressStream(SafeBrotliEncoderHandle state, BrotliEncoderOperation op, ref IntPtr availableIn, byte** nextIn, ref IntPtr availableOut, byte** nextOut, out IntPtr totalOut);

		[PreserveSig]
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x5F5ECB0", Offset = "0x5F5DCB0", VA = "0x5F5ECB0")]
		internal static extern bool BrotliEncoderHasMoreOutput(SafeBrotliEncoderHandle state);

		[PreserveSig]
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x5F5ED10", Offset = "0x5F5DD10", VA = "0x5F5ED10")]
		internal static extern void BrotliEncoderDestroyInstance(IntPtr state);
	}
}
