// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.MonoBtlsX509LookupMono
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Mono.Util;

namespace Mono.Btls;

[Token(Token = "0x2000096")]
internal abstract class MonoBtlsX509LookupMono : MonoBtlsObject
{
	[Token(Token = "0x2000097")]
	internal class BoringX509LookupMonoHandle : MonoBtlsHandle
	{
		[Token(Token = "0x60002B2")]
		[Address(RVA = "0x282D460", Offset = "0x282BA60", VA = "0x18282D460")]
		public BoringX509LookupMonoHandle(IntPtr handle)
		{
		}

		[Token(Token = "0x60002B3")]
		[Address(RVA = "0x282D6A0", Offset = "0x282BCA0", VA = "0x18282D6A0", Slot = "7")]
		protected override bool ReleaseHandle()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000098")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	private delegate int BySubjectFunc(IntPtr instance, IntPtr name, out IntPtr x509_ptr);

	[Token(Token = "0x40001B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private GCHandle gch;

	[Token(Token = "0x40001BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private IntPtr instance;

	[Token(Token = "0x40001BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private BySubjectFunc bySubjectFunc;

	[Token(Token = "0x40001BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private IntPtr bySubjectFuncPtr;

	[Token(Token = "0x40001BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private MonoBtlsX509Lookup lookup;

	[Token(Token = "0x17000070")]
	internal new BoringX509LookupMonoHandle Handle
	{
		[Token(Token = "0x60002A8")]
		[Address(RVA = "0x28383D0", Offset = "0x28369D0", VA = "0x1828383D0")]
		get
		{
			return null;
		}
	}

	[PreserveSig]
	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x2838570", Offset = "0x2836B70", VA = "0x182838570")]
	private static extern IntPtr mono_btls_x509_lookup_mono_new();

	[PreserveSig]
	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x28384D0", Offset = "0x2836AD0", VA = "0x1828384D0")]
	private static extern void mono_btls_x509_lookup_mono_init(IntPtr handle, IntPtr instance, IntPtr by_subject_func);

	[PreserveSig]
	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x2838450", Offset = "0x2836A50", VA = "0x182838450")]
	private static extern int mono_btls_x509_lookup_mono_free(IntPtr handle);

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x2838160", Offset = "0x2836760", VA = "0x182838160")]
	internal MonoBtlsX509LookupMono()
	{
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x2837E60", Offset = "0x2836460", VA = "0x182837E60")]
	internal void Install(MonoBtlsX509Lookup lookup)
	{
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x2837CB0", Offset = "0x28362B0", VA = "0x182837CB0")]
	protected void AddCertificate(MonoBtlsX509 certificate)
	{
	}

	[Token(Token = "0x60002AF")]
	protected abstract MonoBtlsX509 OnGetBySubject(MonoBtlsX509Name name);

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x2837EC0", Offset = "0x28364C0", VA = "0x182837EC0")]
	[MonoPInvokeCallback(typeof(BySubjectFunc))]
	private static int OnGetBySubject(IntPtr instance, IntPtr name_ptr, out IntPtr x509_ptr)
	{
		return default(int);
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x2837DD0", Offset = "0x28363D0", VA = "0x182837DD0", Slot = "5")]
	protected override void Close()
	{
	}
}
