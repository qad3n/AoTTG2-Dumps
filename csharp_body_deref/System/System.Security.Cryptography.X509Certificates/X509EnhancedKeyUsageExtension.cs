using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000109")]
public sealed class X509EnhancedKeyUsageExtension : X509Extension
{
	[Token(Token = "0x4000506")]
	[FieldOffset(Offset = "0x28")]
	private OidCollection _enhKeyUsage;

	[Token(Token = "0x4000507")]
	[FieldOffset(Offset = "0x30")]
	private AsnDecodeStatus _status;

	[Token(Token = "0x6000642")]
	[Address(RVA = "0x4610560", Offset = "0x4610560", VA = "0x4610560")]
	public X509EnhancedKeyUsageExtension()
	{
	}

	[Token(Token = "0x6000643")]
	[Address(RVA = "0x460B660", Offset = "0x460B660", VA = "0x460B660")]
	public X509EnhancedKeyUsageExtension(AsnEncodedData encodedEnhancedKeyUsages, bool critical)
	{
	}

	[Token(Token = "0x6000644")]
	[Address(RVA = "0x461C480", Offset = "0x461C480", VA = "0x461C480")]
	public X509EnhancedKeyUsageExtension(OidCollection enhancedKeyUsages, bool critical)
	{
	}

	[Token(Token = "0x6000645")]
	[Address(RVA = "0x461C9B0", Offset = "0x461C9B0", VA = "0x461C9B0", Slot = "4")]
	public override void CopyFrom(AsnEncodedData asnEncodedData)
	{
	}

	[Token(Token = "0x6000646")]
	[Address(RVA = "0x461C100", Offset = "0x461C100", VA = "0x461C100")]
	internal AsnDecodeStatus Decode(byte[] extension)
	{
		return default(AsnDecodeStatus);
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x461C770", Offset = "0x461C770", VA = "0x461C770")]
	internal byte[] Encode()
	{
		return null;
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x461CB80", Offset = "0x461CB80", VA = "0x461CB80", Slot = "6")]
	internal override string ToString(bool multiLine)
	{
		return null;
	}
}
