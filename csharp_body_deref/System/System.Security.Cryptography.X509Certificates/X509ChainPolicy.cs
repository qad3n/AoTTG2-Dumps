// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509ChainPolicy
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000147")]
public sealed class X509ChainPolicy
{
	[Token(Token = "0x40005CD")]
	[FieldOffset(Offset = "0x10")]
	private OidCollection apps;

	[Token(Token = "0x40005CE")]
	[FieldOffset(Offset = "0x18")]
	private OidCollection cert;

	[Token(Token = "0x40005CF")]
	[FieldOffset(Offset = "0x20")]
	private X509CertificateCollection store;

	[Token(Token = "0x40005D0")]
	[FieldOffset(Offset = "0x28")]
	private X509Certificate2Collection store2;

	[Token(Token = "0x40005D1")]
	[FieldOffset(Offset = "0x30")]
	private X509RevocationFlag rflag;

	[Token(Token = "0x40005D2")]
	[FieldOffset(Offset = "0x34")]
	private X509RevocationMode mode;

	[Token(Token = "0x40005D3")]
	[FieldOffset(Offset = "0x38")]
	private TimeSpan timeout;

	[Token(Token = "0x40005D4")]
	[FieldOffset(Offset = "0x40")]
	private X509VerificationFlags vflags;

	[Token(Token = "0x40005D5")]
	[FieldOffset(Offset = "0x48")]
	private DateTime vtime;

	[Token(Token = "0x17000188")]
	public X509Certificate2Collection ExtraStore
	{
		[Token(Token = "0x600081E")]
		[Address(RVA = "0x288D570", Offset = "0x288BB70", VA = "0x18288D570")]
		get
		{
			return null;
		}
		[Token(Token = "0x600081F")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000189")]
	public X509RevocationFlag RevocationFlag
	{
		[Token(Token = "0x6000820")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		get
		{
			return default(X509RevocationFlag);
		}
	}

	[Token(Token = "0x1700018A")]
	public X509RevocationMode RevocationMode
	{
		[Token(Token = "0x6000821")]
		[Address(RVA = "0x16EF8A0", Offset = "0x16EDEA0", VA = "0x1816EF8A0")]
		get
		{
			return default(X509RevocationMode);
		}
		[Token(Token = "0x6000822")]
		[Address(RVA = "0x288D8D0", Offset = "0x288BED0", VA = "0x18288D8D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700018B")]
	public X509VerificationFlags VerificationFlags
	{
		[Token(Token = "0x6000823")]
		[Address(RVA = "0x58A8B0", Offset = "0x588EB0", VA = "0x18058A8B0")]
		get
		{
			return default(X509VerificationFlags);
		}
		[Token(Token = "0x6000824")]
		[Address(RVA = "0x288D940", Offset = "0x288BF40", VA = "0x18288D940")]
		set
		{
		}
	}

	[Token(Token = "0x1700018C")]
	public DateTime VerificationTime
	{
		[Token(Token = "0x6000825")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x600081D")]
	[Address(RVA = "0x288D450", Offset = "0x288BA50", VA = "0x18288D450")]
	public X509ChainPolicy()
	{
	}

	[Token(Token = "0x6000826")]
	[Address(RVA = "0x288D340", Offset = "0x288B940", VA = "0x18288D340")]
	public void Reset()
	{
	}
}
