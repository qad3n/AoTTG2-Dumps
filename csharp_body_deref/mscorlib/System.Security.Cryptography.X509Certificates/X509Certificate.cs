// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509Certificate
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Serializable]
[Token(Token = "0x2000356")]
public class X509Certificate : IDisposable, IDeserializationCallback, ISerializable
{
	[Token(Token = "0x4000E3B")]
	[FieldOffset(Offset = "0x10")]
	private System.Security.Cryptography.X509Certificates.X509CertificateImpl impl;

	[Token(Token = "0x4000E3C")]
	[FieldOffset(Offset = "0x18")]
	private byte[] lazyCertHash;

	[Token(Token = "0x4000E3D")]
	[FieldOffset(Offset = "0x20")]
	private byte[] lazySerialNumber;

	[Token(Token = "0x4000E3E")]
	[FieldOffset(Offset = "0x28")]
	private string lazyIssuer;

	[Token(Token = "0x4000E3F")]
	[FieldOffset(Offset = "0x30")]
	private string lazySubject;

	[Token(Token = "0x4000E40")]
	[FieldOffset(Offset = "0x38")]
	private string lazyKeyAlgorithm;

	[Token(Token = "0x4000E41")]
	[FieldOffset(Offset = "0x40")]
	private byte[] lazyKeyAlgorithmParameters;

	[Token(Token = "0x4000E42")]
	[FieldOffset(Offset = "0x48")]
	private byte[] lazyPublicKey;

	[Token(Token = "0x4000E43")]
	[FieldOffset(Offset = "0x50")]
	private DateTime lazyNotBefore;

	[Token(Token = "0x4000E44")]
	[FieldOffset(Offset = "0x58")]
	private DateTime lazyNotAfter;

	[Token(Token = "0x1700030B")]
	public string Issuer
	{
		[Token(Token = "0x6001BF8")]
		[Address(RVA = "0x19EBCC0", Offset = "0x19EA2C0", VA = "0x1819EBCC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030C")]
	public string Subject
	{
		[Token(Token = "0x6001BF9")]
		[Address(RVA = "0x19EBD60", Offset = "0x19EA360", VA = "0x1819EBD60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030D")]
	internal System.Security.Cryptography.X509Certificates.X509CertificateImpl Impl
	{
		[Token(Token = "0x6001C12")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030E")]
	internal bool IsValid
	{
		[Token(Token = "0x6001C13")]
		[Address(RVA = "0x19EBCA0", Offset = "0x19EA2A0", VA = "0x1819EBCA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001BEE")]
	[Address(RVA = "0x19EAB50", Offset = "0x19E9150", VA = "0x1819EAB50", Slot = "7")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6001BEF")]
	[Address(RVA = "0x19EB690", Offset = "0x19E9C90", VA = "0x1819EB690")]
	public X509Certificate()
	{
	}

	[Token(Token = "0x6001BF0")]
	[Address(RVA = "0x19EB7C0", Offset = "0x19E9DC0", VA = "0x1819EB7C0")]
	public X509Certificate(byte[] data)
	{
	}

	[Token(Token = "0x6001BF1")]
	[Address(RVA = "0x19EB670", Offset = "0x19E9C70", VA = "0x1819EB670")]
	public X509Certificate(byte[] rawData, string password)
	{
	}

	[Token(Token = "0x6001BF2")]
	[Address(RVA = "0x19EB920", Offset = "0x19E9F20", VA = "0x1819EB920")]
	public X509Certificate(byte[] rawData, string password, X509KeyStorageFlags keyStorageFlags)
	{
	}

	[Token(Token = "0x6001BF3")]
	[Address(RVA = "0x19EB710", Offset = "0x19E9D10", VA = "0x1819EB710")]
	internal X509Certificate(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
	{
	}

	[Token(Token = "0x6001BF4")]
	[Address(RVA = "0x19EB470", Offset = "0x19E9A70", VA = "0x1819EB470")]
	public X509Certificate(X509Certificate cert)
	{
	}

	[Token(Token = "0x6001BF5")]
	[Address(RVA = "0x19EB620", Offset = "0x19E9C20", VA = "0x1819EB620")]
	public X509Certificate(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001BF6")]
	[Address(RVA = "0x19EAD10", Offset = "0x19E9310", VA = "0x1819EAD10", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001BF7")]
	[Address(RVA = "0x19EACD0", Offset = "0x19E92D0", VA = "0x1819EACD0", Slot = "5")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6001BFA")]
	[Address(RVA = "0x19E9D70", Offset = "0x19E8370", VA = "0x1819E9D70", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001BFB")]
	[Address(RVA = "0x19E9D90", Offset = "0x19E8390", VA = "0x1819E9D90", Slot = "8")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001BFC")]
	[Address(RVA = "0x19E9EC0", Offset = "0x19E84C0", VA = "0x1819E9EC0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BFD")]
	[Address(RVA = "0x19E9DB0", Offset = "0x19E83B0", VA = "0x1819E9DB0", Slot = "9")]
	public virtual bool Equals(X509Certificate other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BFE")]
	[Address(RVA = "0x19E9F50", Offset = "0x19E8550", VA = "0x1819E9F50", Slot = "10")]
	public virtual byte[] Export(X509ContentType contentType, string password)
	{
		return null;
	}

	[Token(Token = "0x6001BFF")]
	[Address(RVA = "0x19EA310", Offset = "0x19E8910", VA = "0x1819EA310", Slot = "11")]
	public virtual byte[] GetCertHash()
	{
		return null;
	}

	[Token(Token = "0x6001C00")]
	[Address(RVA = "0x19EA260", Offset = "0x19E8860", VA = "0x1819EA260", Slot = "12")]
	public virtual string GetCertHashString()
	{
		return null;
	}

	[Token(Token = "0x6001C01")]
	[Address(RVA = "0x19EA8C0", Offset = "0x19E8EC0", VA = "0x1819EA8C0")]
	private byte[] GetRawCertHash()
	{
		return null;
	}

	[Token(Token = "0x6001C02")]
	[Address(RVA = "0x19EA840", Offset = "0x19E8E40", VA = "0x1819EA840", Slot = "13")]
	public virtual byte[] GetRawCertData()
	{
		return null;
	}

	[Token(Token = "0x6001C03")]
	[Address(RVA = "0x19EA3C0", Offset = "0x19E89C0", VA = "0x1819EA3C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001C04")]
	[Address(RVA = "0x19EA530", Offset = "0x19E8B30", VA = "0x1819EA530", Slot = "14")]
	public virtual string GetKeyAlgorithm()
	{
		return null;
	}

	[Token(Token = "0x6001C05")]
	[Address(RVA = "0x19EA480", Offset = "0x19E8A80", VA = "0x1819EA480", Slot = "15")]
	public virtual byte[] GetKeyAlgorithmParameters()
	{
		return null;
	}

	[Token(Token = "0x6001C06")]
	[Address(RVA = "0x19EA790", Offset = "0x19E8D90", VA = "0x1819EA790", Slot = "16")]
	public virtual byte[] GetPublicKey()
	{
		return null;
	}

	[Token(Token = "0x6001C07")]
	[Address(RVA = "0x19EAA30", Offset = "0x19E9030", VA = "0x1819EAA30", Slot = "17")]
	public virtual byte[] GetSerialNumber()
	{
		return null;
	}

	[Token(Token = "0x6001C08")]
	[Address(RVA = "0x19EA980", Offset = "0x19E8F80", VA = "0x1819EA980", Slot = "18")]
	public virtual string GetSerialNumberString()
	{
		return null;
	}

	[Token(Token = "0x6001C09")]
	[Address(RVA = "0x19EA920", Offset = "0x19E8F20", VA = "0x1819EA920")]
	private byte[] GetRawSerialNumber()
	{
		return null;
	}

	[Token(Token = "0x6001C0A")]
	[Address(RVA = "0x19EADB0", Offset = "0x19E93B0", VA = "0x1819EADB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001C0B")]
	[Address(RVA = "0x19EADD0", Offset = "0x19E93D0", VA = "0x1819EADD0", Slot = "19")]
	public virtual string ToString(bool fVerbose)
	{
		return null;
	}

	[Token(Token = "0x6001C0C")]
	[Address(RVA = "0x19EA5D0", Offset = "0x19E8BD0", VA = "0x1819EA5D0")]
	internal DateTime GetNotAfter()
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001C0D")]
	[Address(RVA = "0x19EA6B0", Offset = "0x19E8CB0", VA = "0x1819EA6B0")]
	internal DateTime GetNotBefore()
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001C0E")]
	[Address(RVA = "0x19EA100", Offset = "0x19E8700", VA = "0x1819EA100")]
	protected static string FormatDate(DateTime date)
	{
		return null;
	}

	[Token(Token = "0x6001C0F")]
	[Address(RVA = "0x19EB2E0", Offset = "0x19E98E0", VA = "0x1819EB2E0")]
	internal static void ValidateKeyStorageFlags(X509KeyStorageFlags keyStorageFlags)
	{
	}

	[Token(Token = "0x6001C10")]
	[Address(RVA = "0x19EB400", Offset = "0x19E9A00", VA = "0x1819EB400")]
	private void VerifyContentType(X509ContentType contentType)
	{
	}

	[Token(Token = "0x6001C11")]
	[Address(RVA = "0x19EAB10", Offset = "0x19E9110", VA = "0x1819EAB10")]
	internal void ImportHandle(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
	{
	}

	[Token(Token = "0x6001C14")]
	[Address(RVA = "0x19EAD50", Offset = "0x19E9350", VA = "0x1819EAD50")]
	internal void ThrowIfInvalid()
	{
	}
}
