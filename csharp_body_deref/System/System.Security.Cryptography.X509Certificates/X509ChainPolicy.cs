// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509ChainPolicy
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000107")]
public sealed class X509ChainPolicy
{
	[Token(Token = "0x40004FB")]
	[FieldOffset(Offset = "0x10")]
	private OidCollection apps;

	[Token(Token = "0x40004FC")]
	[FieldOffset(Offset = "0x18")]
	private OidCollection cert;

	[Token(Token = "0x40004FD")]
	[FieldOffset(Offset = "0x20")]
	private X509CertificateCollection store;

	[Token(Token = "0x40004FE")]
	[FieldOffset(Offset = "0x28")]
	private X509Certificate2Collection store2;

	[Token(Token = "0x40004FF")]
	[FieldOffset(Offset = "0x30")]
	private X509RevocationFlag rflag;

	[Token(Token = "0x4000500")]
	[FieldOffset(Offset = "0x34")]
	private X509RevocationMode mode;

	[Token(Token = "0x4000501")]
	[FieldOffset(Offset = "0x38")]
	private TimeSpan timeout;

	[Token(Token = "0x4000502")]
	[FieldOffset(Offset = "0x40")]
	private X509VerificationFlags vflags;

	[Token(Token = "0x4000503")]
	[FieldOffset(Offset = "0x48")]
	private DateTime vtime;

	[Token(Token = "0x1700014F")]
	public X509Certificate2Collection ExtraStore
	{
		[Token(Token = "0x6000635")]
		[Address(RVA = "0x493E320", Offset = "0x493E320", VA = "0x493E320")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000150")]
	public X509RevocationFlag RevocationFlag
	{
		[Token(Token = "0x6000636")]
		[Address(RVA = "0x49410D0", Offset = "0x49410D0", VA = "0x49410D0")]
		get
		{
			return default(X509RevocationFlag);
		}
	}

	[Token(Token = "0x17000151")]
	public X509RevocationMode RevocationMode
	{
		[Token(Token = "0x6000637")]
		[Address(RVA = "0x49410E0", Offset = "0x49410E0", VA = "0x49410E0")]
		get
		{
			return default(X509RevocationMode);
		}
		[Token(Token = "0x6000638")]
		[Address(RVA = "0x49410F0", Offset = "0x49410F0", VA = "0x49410F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000152")]
	public X509VerificationFlags VerificationFlags
	{
		[Token(Token = "0x6000639")]
		[Address(RVA = "0x4941150", Offset = "0x4941150", VA = "0x4941150")]
		get
		{
			return default(X509VerificationFlags);
		}
		[Token(Token = "0x600063A")]
		[Address(RVA = "0x4941160", Offset = "0x4941160", VA = "0x4941160")]
		set
		{
		}
	}

	[Token(Token = "0x17000153")]
	public DateTime VerificationTime
	{
		[Token(Token = "0x600063B")]
		[Address(RVA = "0x49411C0", Offset = "0x49411C0", VA = "0x49411C0")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x6000634")]
	[Address(RVA = "0x493CEC0", Offset = "0x493CEC0", VA = "0x493CEC0")]
	public X509ChainPolicy()
	{
	}

	[Token(Token = "0x600063C")]
	[Address(RVA = "0x4940F00", Offset = "0x4940F00", VA = "0x4940F00")]
	public void Reset()
	{
	}
}
