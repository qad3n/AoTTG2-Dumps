// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.DeflateStreamNative
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Mono.Util;

namespace System.IO.Compression;

[Token(Token = "0x2000375")]
internal class DeflateStreamNative
{
	[Token(Token = "0x2000376")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	private delegate int UnmanagedReadOrWrite(IntPtr buffer, int length, IntPtr data);

	[Token(Token = "0x2000377")]
	private sealed class SafeDeflateStreamHandle : SafeHandle
	{
		[Token(Token = "0x17000516")]
		public override bool IsInvalid
		{
			[Token(Token = "0x6001739")]
			[Address(RVA = "0x48F24E0", Offset = "0x48F24E0", VA = "0x48F24E0", Slot = "5")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600173A")]
		[Address(RVA = "0x48F24A0", Offset = "0x48F24A0", VA = "0x48F24A0")]
		private SafeDeflateStreamHandle()
		{
		}

		[Token(Token = "0x600173B")]
		[Address(RVA = "0x48F24F0", Offset = "0x48F24F0", VA = "0x48F24F0", Slot = "7")]
		protected override bool ReleaseHandle()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x4000FB2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private UnmanagedReadOrWrite feeder;

	[Token(Token = "0x4000FB3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private Stream base_stream;

	[Token(Token = "0x4000FB4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private SafeDeflateStreamHandle z_stream;

	[Token(Token = "0x4000FB5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private GCHandle data;

	[Token(Token = "0x4000FB6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private bool disposed;

	[Token(Token = "0x4000FB7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private byte[] io_buffer;

	[Token(Token = "0x4000FB8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Exception last_error;

	[Token(Token = "0x6001726")]
	[Address(RVA = "0x48F1D10", Offset = "0x48F1D10", VA = "0x48F1D10")]
	private DeflateStreamNative()
	{
	}

	[Token(Token = "0x6001727")]
	[Address(RVA = "0x48F01B0", Offset = "0x48F01B0", VA = "0x48F01B0")]
	public static DeflateStreamNative Create(Stream compressedStream, CompressionMode mode, bool gzip)
	{
		return null;
	}

	[Token(Token = "0x6001728")]
	[Address(RVA = "0x48F1E40", Offset = "0x48F1E40", VA = "0x48F1E40", Slot = "1")]
	~DeflateStreamNative()
	{
	}

	[Token(Token = "0x6001729")]
	[Address(RVA = "0x48F0560", Offset = "0x48F0560", VA = "0x48F0560")]
	public void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600172A")]
	[Address(RVA = "0x48F0D10", Offset = "0x48F0D10", VA = "0x48F0D10")]
	public void Flush()
	{
	}

	[Token(Token = "0x600172B")]
	[Address(RVA = "0x48F06B0", Offset = "0x48F06B0", VA = "0x48F06B0")]
	public int ReadZStream(IntPtr buffer, int length)
	{
		return default(int);
	}

	[Token(Token = "0x600172C")]
	[Address(RVA = "0x48F09A0", Offset = "0x48F09A0", VA = "0x48F09A0")]
	public void WriteZStream(IntPtr buffer, int length)
	{
	}

	[Token(Token = "0x600172D")]
	[Address(RVA = "0x48F1B10", Offset = "0x48F1B10", VA = "0x48F1B10")]
	[MonoPInvokeCallback(typeof(UnmanagedReadOrWrite))]
	private static int UnmanagedRead(IntPtr buffer, int length, IntPtr data)
	{
		return default(int);
	}

	[Token(Token = "0x600172E")]
	[Address(RVA = "0x48F2110", Offset = "0x48F2110", VA = "0x48F2110")]
	private int UnmanagedRead(IntPtr buffer, int length)
	{
		return default(int);
	}

	[Token(Token = "0x600172F")]
	[Address(RVA = "0x48F1C10", Offset = "0x48F1C10", VA = "0x48F1C10")]
	[MonoPInvokeCallback(typeof(UnmanagedReadOrWrite))]
	private static int UnmanagedWrite(IntPtr buffer, int length, IntPtr data)
	{
		return default(int);
	}

	[Token(Token = "0x6001730")]
	[Address(RVA = "0x48F22C0", Offset = "0x48F22C0", VA = "0x48F22C0")]
	private int UnmanagedWrite(IntPtr buffer, int length)
	{
		return default(int);
	}

	[Token(Token = "0x6001731")]
	[Address(RVA = "0x48F1F30", Offset = "0x48F1F30", VA = "0x48F1F30")]
	private void CheckResult(int result, string where)
	{
	}

	[PreserveSig]
	[Token(Token = "0x6001732")]
	[Address(RVA = "0x48F1DC0", Offset = "0x48F1DC0", VA = "0x48F1DC0")]
	private static extern SafeDeflateStreamHandle CreateZStream(CompressionMode compress, bool gzip, UnmanagedReadOrWrite feeder, IntPtr data);

	[PreserveSig]
	[Token(Token = "0x6001733")]
	[Address(RVA = "0x48F24B0", Offset = "0x48F24B0", VA = "0x48F24B0")]
	private static extern int CloseZStream(IntPtr stream);

	[PreserveSig]
	[Token(Token = "0x6001734")]
	[Address(RVA = "0x48F1ED0", Offset = "0x48F1ED0", VA = "0x48F1ED0")]
	private static extern int Flush(SafeDeflateStreamHandle stream);

	[PreserveSig]
	[Token(Token = "0x6001735")]
	[Address(RVA = "0x48F2030", Offset = "0x48F2030", VA = "0x48F2030")]
	private static extern int ReadZStream(SafeDeflateStreamHandle stream, IntPtr buffer, int length);

	[PreserveSig]
	[Token(Token = "0x6001736")]
	[Address(RVA = "0x48F20A0", Offset = "0x48F20A0", VA = "0x48F20A0")]
	private static extern int WriteZStream(SafeDeflateStreamHandle stream, IntPtr buffer, int length);
}
