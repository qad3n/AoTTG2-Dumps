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

[Token(Token = "0x2000296")]
internal class DeflateStreamNative
{
	[Token(Token = "0x2000297")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	private delegate int UnmanagedReadOrWrite(IntPtr buffer, int length, IntPtr data);

	[Token(Token = "0x2000298")]
	private sealed class SafeDeflateStreamHandle : SafeHandle
	{
		[Token(Token = "0x170003B6")]
		public override bool IsInvalid
		{
			[Token(Token = "0x600123D")]
			[Address(RVA = "0x2498690", Offset = "0x2496C90", VA = "0x182498690", Slot = "5")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600123E")]
		[Address(RVA = "0x1967BE0", Offset = "0x19661E0", VA = "0x181967BE0")]
		private SafeDeflateStreamHandle()
		{
		}

		[Token(Token = "0x600123F")]
		[Address(RVA = "0x2905070", Offset = "0x2903670", VA = "0x182905070", Slot = "7")]
		protected override bool ReleaseHandle()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x400092A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private UnmanagedReadOrWrite feeder;

	[Token(Token = "0x400092B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private Stream base_stream;

	[Token(Token = "0x400092C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private SafeDeflateStreamHandle z_stream;

	[Token(Token = "0x400092D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private GCHandle data;

	[Token(Token = "0x400092E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private bool disposed;

	[Token(Token = "0x400092F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private byte[] io_buffer;

	[Token(Token = "0x4000930")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Exception last_error;

	[Token(Token = "0x600122A")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	private DeflateStreamNative()
	{
	}

	[Token(Token = "0x600122B")]
	[Address(RVA = "0x28EE030", Offset = "0x28EC630", VA = "0x1828EE030")]
	public static DeflateStreamNative Create(Stream compressedStream, CompressionMode mode, bool gzip)
	{
		return null;
	}

	[Token(Token = "0x600122C")]
	[Address(RVA = "0x28EE3B0", Offset = "0x28EC9B0", VA = "0x1828EE3B0", Slot = "1")]
	~DeflateStreamNative()
	{
	}

	[Token(Token = "0x600122D")]
	[Address(RVA = "0x28EE2A0", Offset = "0x28EC8A0", VA = "0x1828EE2A0")]
	public void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600122E")]
	[Address(RVA = "0x28EE410", Offset = "0x28ECA10", VA = "0x1828EE410")]
	public void Flush()
	{
	}

	[Token(Token = "0x600122F")]
	[Address(RVA = "0x28EE530", Offset = "0x28ECB30", VA = "0x1828EE530")]
	public int ReadZStream(IntPtr buffer, int length)
	{
		return default(int);
	}

	[Token(Token = "0x6001230")]
	[Address(RVA = "0x28EEB50", Offset = "0x28ED150", VA = "0x1828EEB50")]
	public void WriteZStream(IntPtr buffer, int length)
	{
	}

	[Token(Token = "0x6001231")]
	[Address(RVA = "0x28EE660", Offset = "0x28ECC60", VA = "0x1828EE660")]
	[MonoPInvokeCallback(typeof(UnmanagedReadOrWrite))]
	private static int UnmanagedRead(IntPtr buffer, int length, IntPtr data)
	{
		return default(int);
	}

	[Token(Token = "0x6001232")]
	[Address(RVA = "0x28EE770", Offset = "0x28ECD70", VA = "0x1828EE770")]
	private int UnmanagedRead(IntPtr buffer, int length)
	{
		return default(int);
	}

	[Token(Token = "0x6001233")]
	[Address(RVA = "0x28EEA40", Offset = "0x28ED040", VA = "0x1828EEA40")]
	[MonoPInvokeCallback(typeof(UnmanagedReadOrWrite))]
	private static int UnmanagedWrite(IntPtr buffer, int length, IntPtr data)
	{
		return default(int);
	}

	[Token(Token = "0x6001234")]
	[Address(RVA = "0x28EE8C0", Offset = "0x28ECEC0", VA = "0x1828EE8C0")]
	private int UnmanagedWrite(IntPtr buffer, int length)
	{
		return default(int);
	}

	[Token(Token = "0x6001235")]
	[Address(RVA = "0x28EDE50", Offset = "0x28EC450", VA = "0x1828EDE50")]
	private void CheckResult(int result, string where)
	{
	}

	[PreserveSig]
	[Token(Token = "0x6001236")]
	[Address(RVA = "0x28EDFB0", Offset = "0x28EC5B0", VA = "0x1828EDFB0")]
	private static extern SafeDeflateStreamHandle CreateZStream(CompressionMode compress, bool gzip, UnmanagedReadOrWrite feeder, IntPtr data);

	[PreserveSig]
	[Token(Token = "0x6001237")]
	[Address(RVA = "0x28EDFA0", Offset = "0x28EC5A0", VA = "0x1828EDFA0")]
	private static extern int CloseZStream(IntPtr stream);

	[PreserveSig]
	[Token(Token = "0x6001238")]
	[Address(RVA = "0x28EE4C0", Offset = "0x28ECAC0", VA = "0x1828EE4C0")]
	private static extern int Flush(SafeDeflateStreamHandle stream);

	[PreserveSig]
	[Token(Token = "0x6001239")]
	[Address(RVA = "0x28EE5E0", Offset = "0x28ECBE0", VA = "0x1828EE5E0")]
	private static extern int ReadZStream(SafeDeflateStreamHandle stream, IntPtr buffer, int length);

	[PreserveSig]
	[Token(Token = "0x600123A")]
	[Address(RVA = "0x28EEC00", Offset = "0x28ED200", VA = "0x1828EEC00")]
	private static extern int WriteZStream(SafeDeflateStreamHandle stream, IntPtr buffer, int length);
}
