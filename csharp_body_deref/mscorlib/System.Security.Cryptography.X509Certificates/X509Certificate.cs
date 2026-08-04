// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509Certificate
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3B59230", Offset = "0x3B59230", VA = "0x3B59230")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030A")]
	public string Subject
	{
		[Token(Token = "0x6001B8F")]
		[Address(RVA = "0x3B59310", Offset = "0x3B59310", VA = "0x3B59310")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030B")]
	internal System.Security.Cryptography.X509Certificates.X509CertificateImpl Impl
	{
		[Token(Token = "0x6001BA5")]
		[Address(RVA = "0x3B5A360", Offset = "0x3B5A360", VA = "0x3B5A360")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030C")]
	internal bool IsValid
	{
		[Token(Token = "0x6001BA6")]
		[Address(RVA = "0x3B5A370", Offset = "0x3B5A370", VA = "0x3B5A370")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001B86")]
	[Address(RVA = "0x3B58AC0", Offset = "0x3B58AC0", VA = "0x3B58AC0", Slot = "7")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6001B87")]
	[Address(RVA = "0x3B58CB0", Offset = "0x3B58CB0", VA = "0x3B58CB0")]
	public X509Certificate()
	{
	}

	[Token(Token = "0x6001B88")]
	[Address(RVA = "0x3B58D20", Offset = "0x3B58D20", VA = "0x3B58D20")]
	public X509Certificate(byte[] data)
	{
	}

	[Token(Token = "0x6001B89")]
	[Address(RVA = "0x3B58F10", Offset = "0x3B58F10", VA = "0x3B58F10")]
	internal X509Certificate(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
	{
	}

	[Token(Token = "0x6001B8A")]
	[Address(RVA = "0x3B58FD0", Offset = "0x3B58FD0", VA = "0x3B58FD0")]
	public X509Certificate(X509Certificate cert)
	{
	}

	[Token(Token = "0x6001B8B")]
	[Address(RVA = "0x3B59170", Offset = "0x3B59170", VA = "0x3B59170")]
	public X509Certificate(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001B8C")]
	[Address(RVA = "0x3B591B0", Offset = "0x3B591B0", VA = "0x3B591B0", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001B8D")]
	[Address(RVA = "0x3B591F0", Offset = "0x3B591F0", VA = "0x3B591F0", Slot = "5")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6001B90")]
	[Address(RVA = "0x3B593B0", Offset = "0x3B593B0", VA = "0x3B593B0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001B91")]
	[Address(RVA = "0x3B593D0", Offset = "0x3B593D0", VA = "0x3B593D0", Slot = "8")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001B92")]
	[Address(RVA = "0x3B593F0", Offset = "0x3B593F0", VA = "0x3B593F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B93")]
	[Address(RVA = "0x3B59470", Offset = "0x3B59470", VA = "0x3B59470", Slot = "9")]
	public virtual bool Equals(X509Certificate other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B94")]
	[Address(RVA = "0x3B59640", Offset = "0x3B59640", VA = "0x3B59640", Slot = "10")]
	public virtual byte[] GetCertHash()
	{
		return null;
	}

	[Token(Token = "0x6001B95")]
	[Address(RVA = "0x3B59740", Offset = "0x3B59740", VA = "0x3B59740", Slot = "11")]
	public virtual string GetCertHashString()
	{
		return null;
	}

	[Token(Token = "0x6001B96")]
	[Address(RVA = "0x3B596E0", Offset = "0x3B596E0", VA = "0x3B596E0")]
	private byte[] GetRawCertHash()
	{
		return null;
	}

	[Token(Token = "0x6001B97")]
	[Address(RVA = "0x3B597E0", Offset = "0x3B597E0", VA = "0x3B597E0", Slot = "12")]
	public virtual byte[] GetRawCertData()
	{
		return null;
	}

	[Token(Token = "0x6001B98")]
	[Address(RVA = "0x3B59850", Offset = "0x3B59850", VA = "0x3B59850", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001B99")]
	[Address(RVA = "0x3B59950", Offset = "0x3B59950", VA = "0x3B59950", Slot = "13")]
	public virtual string GetKeyAlgorithm()
	{
		return null;
	}

	[Token(Token = "0x6001B9A")]
	[Address(RVA = "0x3B599F0", Offset = "0x3B599F0", VA = "0x3B599F0", Slot = "14")]
	public virtual byte[] GetKeyAlgorithmParameters()
	{
		return null;
	}

	[Token(Token = "0x6001B9B")]
	[Address(RVA = "0x3B59A90", Offset = "0x3B59A90", VA = "0x3B59A90", Slot = "15")]
	public virtual byte[] GetPublicKey()
	{
		return null;
	}

	[Token(Token = "0x6001B9C")]
	[Address(RVA = "0x3B59B30", Offset = "0x3B59B30", VA = "0x3B59B30", Slot = "16")]
	public virtual byte[] GetSerialNumber()
	{
		return null;
	}

	[Token(Token = "0x6001B9D")]
	[Address(RVA = "0x3B59C00", Offset = "0x3B59C00", VA = "0x3B59C00", Slot = "17")]
	public virtual string GetSerialNumberString()
	{
		return null;
	}

	[Token(Token = "0x6001B9E")]
	[Address(RVA = "0x3B595E0", Offset = "0x3B595E0", VA = "0x3B595E0")]
	private byte[] GetRawSerialNumber()
	{
		return null;
	}

	[Token(Token = "0x6001B9F")]
	[Address(RVA = "0x3B59CA0", Offset = "0x3B59CA0", VA = "0x3B59CA0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001BA0")]
	[Address(RVA = "0x3B59CC0", Offset = "0x3B59CC0", VA = "0x3B59CC0", Slot = "18")]
	public virtual string ToString(bool fVerbose)
	{
		return null;
	}

	[Token(Token = "0x6001BA1")]
	[Address(RVA = "0x3B5A250", Offset = "0x3B5A250", VA = "0x3B5A250")]
	internal DateTime GetNotAfter()
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001BA2")]
	[Address(RVA = "0x3B5A010", Offset = "0x3B5A010", VA = "0x3B5A010")]
	internal DateTime GetNotBefore()
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001BA3")]
	[Address(RVA = "0x3B5A0E0", Offset = "0x3B5A0E0", VA = "0x3B5A0E0")]
	protected static string FormatDate(DateTime date)
	{
		return null;
	}

	[Token(Token = "0x6001BA4")]
	[Address(RVA = "0x3B5A320", Offset = "0x3B5A320", VA = "0x3B5A320")]
	internal void ImportHandle(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
	{
	}

	[Token(Token = "0x6001BA7")]
	[Address(RVA = "0x3B592D0", Offset = "0x3B592D0", VA = "0x3B592D0")]
	internal void ThrowIfInvalid()
	{
	}
}
