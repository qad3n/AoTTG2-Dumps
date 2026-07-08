using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Serializable]
[Token(Token = "0x2000327")]
public class X509Certificate : IDisposable, IDeserializationCallback, ISerializable
{
	[Token(Token = "0x4000E2E")]
	[FieldOffset(Offset = "0x10")]
	private System.Security.Cryptography.X509Certificates.X509CertificateImpl impl;

	[Token(Token = "0x4000E2F")]
	[FieldOffset(Offset = "0x18")]
	private byte[] lazyCertHash;

	[Token(Token = "0x4000E30")]
	[FieldOffset(Offset = "0x20")]
	private byte[] lazySerialNumber;

	[Token(Token = "0x4000E31")]
	[FieldOffset(Offset = "0x28")]
	private string lazyIssuer;

	[Token(Token = "0x4000E32")]
	[FieldOffset(Offset = "0x30")]
	private string lazySubject;

	[Token(Token = "0x4000E33")]
	[FieldOffset(Offset = "0x38")]
	private string lazyKeyAlgorithm;

	[Token(Token = "0x4000E34")]
	[FieldOffset(Offset = "0x40")]
	private byte[] lazyKeyAlgorithmParameters;

	[Token(Token = "0x4000E35")]
	[FieldOffset(Offset = "0x48")]
	private byte[] lazyPublicKey;

	[Token(Token = "0x4000E36")]
	[FieldOffset(Offset = "0x50")]
	private DateTime lazyNotBefore;

	[Token(Token = "0x4000E37")]
	[FieldOffset(Offset = "0x58")]
	private DateTime lazyNotAfter;

	[Token(Token = "0x17000309")]
	public string Issuer
	{
		[Token(Token = "0x6001B8E")]
		[Address(RVA = "0x4E73710", Offset = "0x4E73710", VA = "0x4E73710")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030A")]
	public string Subject
	{
		[Token(Token = "0x6001B8F")]
		[Address(RVA = "0x4E737F0", Offset = "0x4E737F0", VA = "0x4E737F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030B")]
	internal System.Security.Cryptography.X509Certificates.X509CertificateImpl Impl
	{
		[Token(Token = "0x6001BA5")]
		[Address(RVA = "0x4E74840", Offset = "0x4E74840", VA = "0x4E74840")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030C")]
	internal bool IsValid
	{
		[Token(Token = "0x6001BA6")]
		[Address(RVA = "0x4E74850", Offset = "0x4E74850", VA = "0x4E74850")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001B86")]
	[Address(RVA = "0x4E72FA0", Offset = "0x4E72FA0", VA = "0x4E72FA0", Slot = "7")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6001B87")]
	[Address(RVA = "0x4E73190", Offset = "0x4E73190", VA = "0x4E73190")]
	public X509Certificate()
	{
	}

	[Token(Token = "0x6001B88")]
	[Address(RVA = "0x4E73200", Offset = "0x4E73200", VA = "0x4E73200")]
	public X509Certificate(byte[] data)
	{
	}

	[Token(Token = "0x6001B89")]
	[Address(RVA = "0x4E733F0", Offset = "0x4E733F0", VA = "0x4E733F0")]
	internal X509Certificate(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
	{
	}

	[Token(Token = "0x6001B8A")]
	[Address(RVA = "0x4E734B0", Offset = "0x4E734B0", VA = "0x4E734B0")]
	public X509Certificate(X509Certificate cert)
	{
	}

	[Token(Token = "0x6001B8B")]
	[Address(RVA = "0x4E73650", Offset = "0x4E73650", VA = "0x4E73650")]
	public X509Certificate(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001B8C")]
	[Address(RVA = "0x4E73690", Offset = "0x4E73690", VA = "0x4E73690", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001B8D")]
	[Address(RVA = "0x4E736D0", Offset = "0x4E736D0", VA = "0x4E736D0", Slot = "5")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6001B90")]
	[Address(RVA = "0x4E73890", Offset = "0x4E73890", VA = "0x4E73890", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001B91")]
	[Address(RVA = "0x4E738B0", Offset = "0x4E738B0", VA = "0x4E738B0", Slot = "8")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001B92")]
	[Address(RVA = "0x4E738D0", Offset = "0x4E738D0", VA = "0x4E738D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B93")]
	[Address(RVA = "0x4E73950", Offset = "0x4E73950", VA = "0x4E73950", Slot = "9")]
	public virtual bool Equals(X509Certificate other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B94")]
	[Address(RVA = "0x4E73B20", Offset = "0x4E73B20", VA = "0x4E73B20", Slot = "10")]
	public virtual byte[] GetCertHash()
	{
		return null;
	}

	[Token(Token = "0x6001B95")]
	[Address(RVA = "0x4E73C20", Offset = "0x4E73C20", VA = "0x4E73C20", Slot = "11")]
	public virtual string GetCertHashString()
	{
		return null;
	}

	[Token(Token = "0x6001B96")]
	[Address(RVA = "0x4E73BC0", Offset = "0x4E73BC0", VA = "0x4E73BC0")]
	private byte[] GetRawCertHash()
	{
		return null;
	}

	[Token(Token = "0x6001B97")]
	[Address(RVA = "0x4E73CC0", Offset = "0x4E73CC0", VA = "0x4E73CC0", Slot = "12")]
	public virtual byte[] GetRawCertData()
	{
		return null;
	}

	[Token(Token = "0x6001B98")]
	[Address(RVA = "0x4E73D30", Offset = "0x4E73D30", VA = "0x4E73D30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001B99")]
	[Address(RVA = "0x4E73E30", Offset = "0x4E73E30", VA = "0x4E73E30", Slot = "13")]
	public virtual string GetKeyAlgorithm()
	{
		return null;
	}

	[Token(Token = "0x6001B9A")]
	[Address(RVA = "0x4E73ED0", Offset = "0x4E73ED0", VA = "0x4E73ED0", Slot = "14")]
	public virtual byte[] GetKeyAlgorithmParameters()
	{
		return null;
	}

	[Token(Token = "0x6001B9B")]
	[Address(RVA = "0x4E73F70", Offset = "0x4E73F70", VA = "0x4E73F70", Slot = "15")]
	public virtual byte[] GetPublicKey()
	{
		return null;
	}

	[Token(Token = "0x6001B9C")]
	[Address(RVA = "0x4E74010", Offset = "0x4E74010", VA = "0x4E74010", Slot = "16")]
	public virtual byte[] GetSerialNumber()
	{
		return null;
	}

	[Token(Token = "0x6001B9D")]
	[Address(RVA = "0x4E740E0", Offset = "0x4E740E0", VA = "0x4E740E0", Slot = "17")]
	public virtual string GetSerialNumberString()
	{
		return null;
	}

	[Token(Token = "0x6001B9E")]
	[Address(RVA = "0x4E73AC0", Offset = "0x4E73AC0", VA = "0x4E73AC0")]
	private byte[] GetRawSerialNumber()
	{
		return null;
	}

	[Token(Token = "0x6001B9F")]
	[Address(RVA = "0x4E74180", Offset = "0x4E74180", VA = "0x4E74180", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001BA0")]
	[Address(RVA = "0x4E741A0", Offset = "0x4E741A0", VA = "0x4E741A0", Slot = "18")]
	public virtual string ToString(bool fVerbose)
	{
		return null;
	}

	[Token(Token = "0x6001BA1")]
	[Address(RVA = "0x4E74730", Offset = "0x4E74730", VA = "0x4E74730")]
	internal DateTime GetNotAfter()
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001BA2")]
	[Address(RVA = "0x4E744F0", Offset = "0x4E744F0", VA = "0x4E744F0")]
	internal DateTime GetNotBefore()
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001BA3")]
	[Address(RVA = "0x4E745C0", Offset = "0x4E745C0", VA = "0x4E745C0")]
	protected static string FormatDate(DateTime date)
	{
		return null;
	}

	[Token(Token = "0x6001BA4")]
	[Address(RVA = "0x4E74800", Offset = "0x4E74800", VA = "0x4E74800")]
	internal void ImportHandle(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
	{
	}

	[Token(Token = "0x6001BA7")]
	[Address(RVA = "0x4E737B0", Offset = "0x4E737B0", VA = "0x4E737B0")]
	internal void ThrowIfInvalid()
	{
	}
}
