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

[Token(Token = "0x2000257")]
internal class DeflateStreamNative
{
	[Token(Token = "0x2000258")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	private delegate int UnmanagedReadOrWrite(IntPtr buffer, int length, IntPtr data);

	[Token(Token = "0x2000259")]
	private sealed class SafeDeflateStreamHandle : SafeHandle
	{
		[Token(Token = "0x17000387")]
		public override bool IsInvalid
		{
			[Token(Token = "0x600107F")]
			[Address(RVA = "0x628E8F0", Offset = "0x628D8F0", VA = "0x628E8F0", Slot = "5")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001080")]
		[Address(RVA = "0x628E8B0", Offset = "0x628D8B0", VA = "0x628E8B0")]
		private SafeDeflateStreamHandle()
		{
		}

		[Token(Token = "0x6001081")]
		[Address(RVA = "0x628E900", Offset = "0x628D900", VA = "0x628E900", Slot = "7")]
		protected override bool ReleaseHandle()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x400085B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private UnmanagedReadOrWrite feeder;

	[Token(Token = "0x400085C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private Stream base_stream;

	[Token(Token = "0x400085D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private SafeDeflateStreamHandle z_stream;

	[Token(Token = "0x400085E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private GCHandle data;

	[Token(Token = "0x400085F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private bool disposed;

	[Token(Token = "0x4000860")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private byte[] io_buffer;

	[Token(Token = "0x4000861")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Exception last_error;

	[Token(Token = "0x600106C")]
	[Address(RVA = "0x628E170", Offset = "0x628D170", VA = "0x628E170")]
	private DeflateStreamNative()
	{
	}

	[Token(Token = "0x600106D")]
	[Address(RVA = "0x628C590", Offset = "0x628B590", VA = "0x628C590")]
	public static DeflateStreamNative Create(Stream compressedStream, CompressionMode mode, bool gzip)
	{
		return null;
	}

	[Token(Token = "0x600106E")]
	[Address(RVA = "0x628E2A0", Offset = "0x628D2A0", VA = "0x628E2A0", Slot = "1")]
	~DeflateStreamNative()
	{
	}

	[Token(Token = "0x600106F")]
	[Address(RVA = "0x628C9C0", Offset = "0x628B9C0", VA = "0x628C9C0")]
	public void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001070")]
	[Address(RVA = "0x628D180", Offset = "0x628C180", VA = "0x628D180")]
	public void Flush()
	{
	}

	[Token(Token = "0x6001071")]
	[Address(RVA = "0x628CB10", Offset = "0x628BB10", VA = "0x628CB10")]
	public int ReadZStream(IntPtr buffer, int length)
	{
		return default(int);
	}

	[Token(Token = "0x6001072")]
	[Address(RVA = "0x628CE00", Offset = "0x628BE00", VA = "0x628CE00")]
	public void WriteZStream(IntPtr buffer, int length)
	{
	}

	[Token(Token = "0x6001073")]
	[Address(RVA = "0x628DF90", Offset = "0x628CF90", VA = "0x628DF90")]
	[MonoPInvokeCallback(typeof(UnmanagedReadOrWrite))]
	private static int UnmanagedRead(IntPtr buffer, int length, IntPtr data)
	{
		return default(int);
	}

	[Token(Token = "0x6001074")]
	[Address(RVA = "0x628E530", Offset = "0x628D530", VA = "0x628E530")]
	private int UnmanagedRead(IntPtr buffer, int length)
	{
		return default(int);
	}

	[Token(Token = "0x6001075")]
	[Address(RVA = "0x628E080", Offset = "0x628D080", VA = "0x628E080")]
	[MonoPInvokeCallback(typeof(UnmanagedReadOrWrite))]
	private static int UnmanagedWrite(IntPtr buffer, int length, IntPtr data)
	{
		return default(int);
	}

	[Token(Token = "0x6001076")]
	[Address(RVA = "0x628E6D0", Offset = "0x628D6D0", VA = "0x628E6D0")]
	private int UnmanagedWrite(IntPtr buffer, int length)
	{
		return default(int);
	}

	[Token(Token = "0x6001077")]
	[Address(RVA = "0x628E390", Offset = "0x628D390", VA = "0x628E390")]
	private void CheckResult(int result, string where)
	{
	}

	[PreserveSig]
	[Token(Token = "0x6001078")]
	[Address(RVA = "0x628E220", Offset = "0x628D220", VA = "0x628E220")]
	private static extern SafeDeflateStreamHandle CreateZStream(CompressionMode compress, bool gzip, UnmanagedReadOrWrite feeder, IntPtr data);

	[PreserveSig]
	[Token(Token = "0x6001079")]
	[Address(RVA = "0x628E8C0", Offset = "0x628D8C0", VA = "0x628E8C0")]
	private static extern int CloseZStream(IntPtr stream);

	[PreserveSig]
	[Token(Token = "0x600107A")]
	[Address(RVA = "0x628E330", Offset = "0x628D330", VA = "0x628E330")]
	private static extern int Flush(SafeDeflateStreamHandle stream);

	[PreserveSig]
	[Token(Token = "0x600107B")]
	[Address(RVA = "0x628E450", Offset = "0x628D450", VA = "0x628E450")]
	private static extern int ReadZStream(SafeDeflateStreamHandle stream, IntPtr buffer, int length);

	[PreserveSig]
	[Token(Token = "0x600107C")]
	[Address(RVA = "0x628E4C0", Offset = "0x628D4C0", VA = "0x628E4C0")]
	private static extern int WriteZStream(SafeDeflateStreamHandle stream, IntPtr buffer, int length);
}
