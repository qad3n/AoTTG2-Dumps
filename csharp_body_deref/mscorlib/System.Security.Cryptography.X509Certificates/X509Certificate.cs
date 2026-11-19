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
[Token(Token = "0x200032F")]
public class X509Certificate : IDisposable, IDeserializationCallback, ISerializable
{
	[Token(Token = "0x4000D9B")]
	[FieldOffset(Offset = "0x10")]
	private System.Security.Cryptography.X509Certificates.X509CertificateImpl impl;

	[Token(Token = "0x4000D9C")]
	[FieldOffset(Offset = "0x18")]
	private byte[] lazyCertHash;

	[Token(Token = "0x4000D9D")]
	[FieldOffset(Offset = "0x20")]
	private byte[] lazySerialNumber;

	[Token(Token = "0x4000D9E")]
	[FieldOffset(Offset = "0x28")]
	private string lazyIssuer;

	[Token(Token = "0x4000D9F")]
	[FieldOffset(Offset = "0x30")]
	private string lazySubject;

	[Token(Token = "0x4000DA0")]
	[FieldOffset(Offset = "0x38")]
	private string lazyKeyAlgorithm;

	[Token(Token = "0x4000DA1")]
	[FieldOffset(Offset = "0x40")]
	private byte[] lazyKeyAlgorithmParameters;

	[Token(Token = "0x4000DA2")]
	[FieldOffset(Offset = "0x48")]
	private byte[] lazyPublicKey;

	[Token(Token = "0x4000DA3")]
	[FieldOffset(Offset = "0x50")]
	private DateTime lazyNotBefore;

	[Token(Token = "0x4000DA4")]
	[FieldOffset(Offset = "0x58")]
	private DateTime lazyNotAfter;

	[Token(Token = "0x1700030A")]
	public string Issuer
	{
		[Token(Token = "0x6001BD3")]
		[Address(RVA = "0x5362F30", Offset = "0x5361F30", VA = "0x5362F30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030B")]
	public string Subject
	{
		[Token(Token = "0x6001BD4")]
		[Address(RVA = "0x5363010", Offset = "0x5362010", VA = "0x5363010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030C")]
	internal System.Security.Cryptography.X509Certificates.X509CertificateImpl Impl
	{
		[Token(Token = "0x6001BEA")]
		[Address(RVA = "0x5364020", Offset = "0x5363020", VA = "0x5364020")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030D")]
	internal bool IsValid
	{
		[Token(Token = "0x6001BEB")]
		[Address(RVA = "0x5364030", Offset = "0x5363030", VA = "0x5364030")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001BCB")]
	[Address(RVA = "0x53627C0", Offset = "0x53617C0", VA = "0x53627C0", Slot = "7")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6001BCC")]
	[Address(RVA = "0x53629B0", Offset = "0x53619B0", VA = "0x53629B0")]
	public X509Certificate()
	{
	}

	[Token(Token = "0x6001BCD")]
	[Address(RVA = "0x5362A20", Offset = "0x5361A20", VA = "0x5362A20")]
	public X509Certificate(byte[] data)
	{
	}

	[Token(Token = "0x6001BCE")]
	[Address(RVA = "0x5362C10", Offset = "0x5361C10", VA = "0x5362C10")]
	internal X509Certificate(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
	{
	}

	[Token(Token = "0x6001BCF")]
	[Address(RVA = "0x5362CD0", Offset = "0x5361CD0", VA = "0x5362CD0")]
	public X509Certificate(X509Certificate cert)
	{
	}

	[Token(Token = "0x6001BD0")]
	[Address(RVA = "0x5362E70", Offset = "0x5361E70", VA = "0x5362E70")]
	public X509Certificate(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001BD1")]
	[Address(RVA = "0x5362EB0", Offset = "0x5361EB0", VA = "0x5362EB0", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001BD2")]
	[Address(RVA = "0x5362EF0", Offset = "0x5361EF0", VA = "0x5362EF0", Slot = "5")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6001BD5")]
	[Address(RVA = "0x53630B0", Offset = "0x53620B0", VA = "0x53630B0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001BD6")]
	[Address(RVA = "0x53630D0", Offset = "0x53620D0", VA = "0x53630D0", Slot = "8")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001BD7")]
	[Address(RVA = "0x53630F0", Offset = "0x53620F0", VA = "0x53630F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BD8")]
	[Address(RVA = "0x5363170", Offset = "0x5362170", VA = "0x5363170", Slot = "9")]
	public virtual bool Equals(X509Certificate other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001BD9")]
	[Address(RVA = "0x5363340", Offset = "0x5362340", VA = "0x5363340", Slot = "10")]
	public virtual byte[] GetCertHash()
	{
		return null;
	}

	[Token(Token = "0x6001BDA")]
	[Address(RVA = "0x5363440", Offset = "0x5362440", VA = "0x5363440", Slot = "11")]
	public virtual string GetCertHashString()
	{
		return null;
	}

	[Token(Token = "0x6001BDB")]
	[Address(RVA = "0x53633E0", Offset = "0x53623E0", VA = "0x53633E0")]
	private byte[] GetRawCertHash()
	{
		return null;
	}

	[Token(Token = "0x6001BDC")]
	[Address(RVA = "0x53634E0", Offset = "0x53624E0", VA = "0x53634E0", Slot = "12")]
	public virtual byte[] GetRawCertData()
	{
		return null;
	}

	[Token(Token = "0x6001BDD")]
	[Address(RVA = "0x5363550", Offset = "0x5362550", VA = "0x5363550", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001BDE")]
	[Address(RVA = "0x5363610", Offset = "0x5362610", VA = "0x5363610", Slot = "13")]
	public virtual string GetKeyAlgorithm()
	{
		return null;
	}

	[Token(Token = "0x6001BDF")]
	[Address(RVA = "0x53636B0", Offset = "0x53626B0", VA = "0x53636B0", Slot = "14")]
	public virtual byte[] GetKeyAlgorithmParameters()
	{
		return null;
	}

	[Token(Token = "0x6001BE0")]
	[Address(RVA = "0x5363750", Offset = "0x5362750", VA = "0x5363750", Slot = "15")]
	public virtual byte[] GetPublicKey()
	{
		return null;
	}

	[Token(Token = "0x6001BE1")]
	[Address(RVA = "0x53637F0", Offset = "0x53627F0", VA = "0x53637F0", Slot = "16")]
	public virtual byte[] GetSerialNumber()
	{
		return null;
	}

	[Token(Token = "0x6001BE2")]
	[Address(RVA = "0x53638C0", Offset = "0x53628C0", VA = "0x53638C0", Slot = "17")]
	public virtual string GetSerialNumberString()
	{
		return null;
	}

	[Token(Token = "0x6001BE3")]
	[Address(RVA = "0x53632E0", Offset = "0x53622E0", VA = "0x53632E0")]
	private byte[] GetRawSerialNumber()
	{
		return null;
	}

	[Token(Token = "0x6001BE4")]
	[Address(RVA = "0x5363960", Offset = "0x5362960", VA = "0x5363960", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001BE5")]
	[Address(RVA = "0x5363980", Offset = "0x5362980", VA = "0x5363980", Slot = "18")]
	public virtual string ToString(bool fVerbose)
	{
		return null;
	}

	[Token(Token = "0x6001BE6")]
	[Address(RVA = "0x5363F10", Offset = "0x5362F10", VA = "0x5363F10")]
	internal DateTime GetNotAfter()
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001BE7")]
	[Address(RVA = "0x5363CD0", Offset = "0x5362CD0", VA = "0x5363CD0")]
	internal DateTime GetNotBefore()
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001BE8")]
	[Address(RVA = "0x5363DA0", Offset = "0x5362DA0", VA = "0x5363DA0")]
	protected static string FormatDate(DateTime date)
	{
		return null;
	}

	[Token(Token = "0x6001BE9")]
	[Address(RVA = "0x5363FE0", Offset = "0x5362FE0", VA = "0x5363FE0")]
	internal void ImportHandle(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
	{
	}

	[Token(Token = "0x6001BEC")]
	[Address(RVA = "0x5362FD0", Offset = "0x5361FD0", VA = "0x5362FD0")]
	internal void ThrowIfInvalid()
	{
	}
}
