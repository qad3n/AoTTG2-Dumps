// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.MonoBtlsX509
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Mono.Btls;

[Token(Token = "0x200008D")]
internal class MonoBtlsX509 : MonoBtlsObject
{
	[Token(Token = "0x200008E")]
	internal class BoringX509Handle : MonoBtlsHandle
	{
		[Token(Token = "0x6000287")]
		[Address(RVA = "0x282D460", Offset = "0x282BA60", VA = "0x18282D460")]
		public BoringX509Handle(IntPtr handle)
		{
		}

		[Token(Token = "0x6000288")]
		[Address(RVA = "0x282D580", Offset = "0x282BB80", VA = "0x18282D580", Slot = "7")]
		protected override bool ReleaseHandle()
		{
			return default(bool);
		}

		[Token(Token = "0x6000289")]
		[Address(RVA = "0x282D610", Offset = "0x282BC10", VA = "0x18282D610")]
		public IntPtr StealHandle()
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x1700006C")]
	internal new BoringX509Handle Handle
	{
		[Token(Token = "0x6000277")]
		[Address(RVA = "0x283DE80", Offset = "0x283C480", VA = "0x18283DE80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x270D250", Offset = "0x270B850", VA = "0x18270D250")]
	internal MonoBtlsX509(BoringX509Handle handle)
	{
	}

	[PreserveSig]
	[Token(Token = "0x6000279")]
	[Address(RVA = "0x283E260", Offset = "0x283C860", VA = "0x18283E260")]
	private static extern IntPtr mono_btls_x509_up_ref(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x600027A")]
	[Address(RVA = "0x283E0A0", Offset = "0x283C6A0", VA = "0x18283E0A0")]
	private static extern IntPtr mono_btls_x509_from_data(IntPtr data, int len, MonoBtlsX509Format format);

	[PreserveSig]
	[Token(Token = "0x600027B")]
	[Address(RVA = "0x283E1E0", Offset = "0x283C7E0", VA = "0x18283E1E0")]
	private static extern IntPtr mono_btls_x509_get_subject_name(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x600027C")]
	[Address(RVA = "0x283E140", Offset = "0x283C740", VA = "0x18283E140")]
	private static extern int mono_btls_x509_get_raw_data(IntPtr handle, IntPtr bio, MonoBtlsX509Format format);

	[PreserveSig]
	[Token(Token = "0x600027D")]
	[Address(RVA = "0x283DF90", Offset = "0x283C590", VA = "0x18283DF90")]
	private static extern int mono_btls_x509_cmp(IntPtr a, IntPtr b);

	[PreserveSig]
	[Token(Token = "0x600027E")]
	[Address(RVA = "0x283E020", Offset = "0x283C620", VA = "0x18283E020")]
	private static extern void mono_btls_x509_free(IntPtr handle);

	[PreserveSig]
	[Token(Token = "0x600027F")]
	[Address(RVA = "0x283DF00", Offset = "0x283C500", VA = "0x18283DF00")]
	private static extern int mono_btls_x509_add_explicit_trust(IntPtr handle, MonoBtlsX509TrustKind kind);

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x283D570", Offset = "0x283BB70", VA = "0x18283D570")]
	internal MonoBtlsX509 Copy()
	{
		return null;
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x283DBD0", Offset = "0x283C1D0", VA = "0x18283DBD0")]
	public static MonoBtlsX509 LoadFromData(byte[] buffer, MonoBtlsX509Format format)
	{
		return null;
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x283DA90", Offset = "0x283C090", VA = "0x18283DA90")]
	public MonoBtlsX509Name GetSubjectName()
	{
		return null;
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x283D890", Offset = "0x283BE90", VA = "0x18283D890")]
	public long GetSubjectNameHash()
	{
		return default(long);
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x283D6A0", Offset = "0x283BCA0", VA = "0x18283D6A0")]
	public byte[] GetRawData(MonoBtlsX509Format format)
	{
		return null;
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x283D4A0", Offset = "0x283BAA0", VA = "0x18283D4A0")]
	public static int Compare(MonoBtlsX509 a, MonoBtlsX509 b)
	{
		return default(int);
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x283D3B0", Offset = "0x283B9B0", VA = "0x18283D3B0")]
	public void AddExplicitTrust(MonoBtlsX509TrustKind kind)
	{
	}
}
